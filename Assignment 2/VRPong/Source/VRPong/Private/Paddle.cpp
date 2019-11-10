// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle.h"
#include "PaperSpriteComponent.h"

// Sets default values
APaddle::APaddle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    PawnSpriteComponent = CreateDefaultSubobject <UPaperSpriteComponent>("Pawn Visual");
    PawnSpriteComponent->SetSimulatePhysics(true);
    PawnSpriteComponent->SetEnableGravity(false);
    RootComponent = PawnSpriteComponent;


}

// Called when the game starts or when spawned
void APaddle::BeginPlay()
{
	Super::BeginPlay();

    /*PawnSpriteComponent->SetRelativeLocation(FVector(-200.0f, 10.f, 0.0f));
    PawnSpriteComponent->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));
    PawnSpriteComponent->SetRelativeScale3D(FVector(0.1f, 1.0f, 0.1f));
    PawnSpriteComponent->SetAbsolute(true, true, true);*/
	
}

// Called every frame
void APaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (MovementUp != 0)
    {
        FVector NewLocation = GetActorLocation() + (GetActorForwardVector() * MovementUp);

        SetActorLocation(NewLocation);
    }
   
    
}

// Called to bind functionality to input
void APaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveUp", this, &APaddle::MoveUp);
    

}

void APaddle::MoveUp(float value)
{
    MovementUp = value;
}



