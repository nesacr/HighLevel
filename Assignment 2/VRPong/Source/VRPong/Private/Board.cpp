// Fill out your copyright notice in the Description page of Project Settings.


#include "Board.h"
#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ABoard::ABoard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    ActorSpriteComponent = CreateDefaultSubobject <UPaperSpriteComponent>("Actor Visual");
    RootComponent = ActorSpriteComponent;

    BoxComponent = CreateDefaultSubobject <UBoxComponent>("Collision Box");

}

// Called when the game starts or when spawned
void ABoard::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

