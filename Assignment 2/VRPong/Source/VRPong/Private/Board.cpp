// Fill out your copyright notice in the Description page of Project Settings.


#include "Board.h"
#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ABoard::ABoard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    ActorSpriteComponent = CreateDefaultSubobject <UPaperSpriteComponent>("Actor Visual");
    RootComponent = ActorSpriteComponent;

    Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
    Camera->SetupAttachment(RootComponent);

    //Top Collision Box
    TopBoxComponent = CreateDefaultSubobject <UBoxComponent>("Top Collision Box");
    TopBoxComponent->SetupAttachment(ActorSpriteComponent);
    TopBoxComponent->SetCollisionProfileName("BlockAll");

    //Bottom Collision Box
    BottomBoxComponent = CreateDefaultSubobject<UBoxComponent>("Bottom Collision Box");
    BottomBoxComponent->SetupAttachment(ActorSpriteComponent);
    BottomBoxComponent->SetCollisionProfileName("BlockAll");

    //Left Collision box
    LeftBoxComponent = CreateDefaultSubobject<UBoxComponent>("Left Collision Box");
    LeftBoxComponent->SetupAttachment(ActorSpriteComponent);
    LeftBoxComponent->SetCollisionProfileName("BlockAll");

    //Right Collision Box
    RightBoxComponent = CreateDefaultSubobject<UBoxComponent>("Right Collision Box");
    RightBoxComponent->SetupAttachment(ActorSpriteComponent);
    RightBoxComponent->SetCollisionProfileName("BlockAll");

}

// Called when the game starts or when spawned
void ABoard::BeginPlay()
{
	Super::BeginPlay();

    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (PC != nullptr)
    {
        PC->SetViewTarget(this);
    }
	
}

// Called every frame
void ABoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

