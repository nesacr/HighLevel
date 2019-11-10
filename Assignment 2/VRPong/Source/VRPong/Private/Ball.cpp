// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"
#include "PaperSpriteComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    ActorSpriteComponent = CreateDefaultSubobject <UPaperSpriteComponent>("Actor Visual");
    RootComponent = ActorSpriteComponent;

    SphereComponent = CreateDefaultSubobject<USphereComponent>("Ball Collision");
    SphereComponent->SetupAttachment(ActorSpriteComponent);

    
}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();

   /* ActorSpriteComponent->SetRelativeLocation(FVector(0.0f, 10.0f, 0.0f));
    ActorSpriteComponent->SetRelativeScale3D(FVector(0.7f, 1.0f, 0.7f));
    ActorSpriteComponent->SetAbsolute(true, true, true);*/
	
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

