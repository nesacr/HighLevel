// Fill out your copyright notice in the Description page of Project Settings.


#include "Checkpoint.h"
#include "Components/BoxComponent.h"
#include "PaperSpriteComponent.h"
#include "MainPlayer.h"

// Sets default values
ACheckpoint::ACheckpoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



    BoxComponent = CreateDefaultSubobject<UBoxComponent>("Collision");
    BoxComponent->SetCollisionProfileName("OverlapAllDynamic");
    //BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ACheckpoint::OnOverlapBegin);

    RootComponent = BoxComponent;

    SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>("Sprite");
    SpriteComponent->SetCollisionProfileName("NoCollision");
    SpriteComponent->SetupAttachment(RootComponent);

    Tags.Add("Checkpoint");
    
}

// Called when the game starts or when spawned
void ACheckpoint::BeginPlay()
{
	Super::BeginPlay();   
    isActive = false;
}

void ACheckpoint::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor)
    {
        AMainPlayer* pawn = Cast<AMainPlayer>(OtherActor);
        if (pawn)
        {
            isActive = true;
        }
    }
}

// Called every frame
void ACheckpoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

