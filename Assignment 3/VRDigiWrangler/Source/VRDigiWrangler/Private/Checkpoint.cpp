// Fill out your copyright notice in the Description page of Project Settings.


#include "Checkpoint.h"
#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ACheckpoint::ACheckpoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACheckpoint::BeginPlay()
{
	Super::BeginPlay();

   
    SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>("Actor Visual");
    RootComponent = SpriteComponent;

    BoxComponent = CreateDefaultSubobject<UBoxComponent>("Box Component");
    BoxComponent->SetupAttachment(SpriteComponent);

    Tags.Add("Checkpoint");
    Tags.Add("Checkpoint2");
	
}

void ACheckpoint::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    isActive = true;
}

// Called every frame
void ACheckpoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

