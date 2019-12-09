// Fill out your copyright notice in the Description page of Project Settings.


#include "Checkpoint.h"
#include "Components/BoxComponent.h"
#include "PaperSpriteComponent.h"
#include "MainPlayer.h"


ACheckpoint::ACheckpoint()
{ 
	PrimaryActorTick.bCanEverTick = true;



    BoxComponent = CreateDefaultSubobject<UBoxComponent>("Collision");
    BoxComponent->SetCollisionProfileName("OverlapAllDynamic");
    RootComponent = BoxComponent;

    SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>("Sprite");
    SpriteComponent->SetCollisionProfileName("NoCollision");
    SpriteComponent->SetupAttachment(RootComponent);

    Tags.Add("Checkpoint");
    
}

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

void ACheckpoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

