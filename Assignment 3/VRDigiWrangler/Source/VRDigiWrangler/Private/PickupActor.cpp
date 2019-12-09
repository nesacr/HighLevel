// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupActor.h"
#include "Components/BoxComponent.h"
#include "PaperSpriteComponent.h"
#include "MainPlayer.h"


APickupActor::APickupActor()
{
	PrimaryActorTick.bCanEverTick = true;

    BoxComponent = CreateDefaultSubobject<UBoxComponent>("Collision");
    BoxComponent->SetCollisionProfileName("OverlapAllDynamic");
    BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &APickupActor::OnOverlapBegin);

    RootComponent = BoxComponent;

    SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>("Sprite");
    SpriteComponent->SetCollisionProfileName("NoCollision");
    SpriteComponent->SetupAttachment(RootComponent);
}

void APickupActor::BeginPlay()
{
	Super::BeginPlay();	
}

void APickupActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor)
    {
        AMainPlayer* pawn = Cast<AMainPlayer>(OtherActor);

        if (pawn)
        {
            pawn->IncrementPickupCount(1);
            if (pawn->GetPlayerHP() < 100)
            {
                (pawn->SetPlayerHP(-50));
                Destroy();
            }           
        }
    }
}

void APickupActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    FVector NewLocation = GetActorLocation();
    FRotator NewRotation = GetActorRotation();
    float RunningTime = GetGameTimeSinceCreation();
    float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
    NewLocation.Z += DeltaHeight * 15.0f;      
    float DeltaRotation = DeltaTime * 20.0f;   
    NewRotation.Yaw += DeltaRotation;
    SetActorLocationAndRotation(NewLocation, NewRotation);
}

