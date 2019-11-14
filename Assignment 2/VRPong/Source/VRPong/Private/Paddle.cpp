// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle.h"
#include "PaperSpriteComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
APaddle::APaddle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    PawnSpriteComponent = CreateDefaultSubobject <UPaperSpriteComponent>("Pawn Visual");

    CollisionBox = CreateDefaultSubobject <UBoxComponent>("Collision Box");
    CollisionBox->SetupAttachment(PawnSpriteComponent);
    CollisionBox->SetCollisionProfileName("BlockAll");
    CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

    
    /*CollisionBox->GetBodyInstance()->SetObjectType(ECollisionChannel::ECC_Pawn);
    CollisionBox->GetBodyInstance()->SetResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Overlap);*/

    //PawnSpriteComponent->SetSimulatePhysics(true);
    PawnSpriteComponent->SetEnableGravity(false);
    RootComponent = PawnSpriteComponent;


    //Restricting paddle movement on Z axis only
    PawnSpriteComponent->BodyInstance.bLockXRotation = true;
    PawnSpriteComponent->BodyInstance.bLockYRotation = true;
    PawnSpriteComponent->BodyInstance.bLockZRotation = true;
    PawnSpriteComponent->BodyInstance.bLockYTranslation = true;
    PawnSpriteComponent->BodyInstance.bLockXTranslation = true;

    PawnSpriteComponent->GetBodyInstance()->LinearDamping = 10.0f;


}

// Called when the game starts or when spawned
void APaddle::BeginPlay()
{
	Super::BeginPlay();

    //PawnSpriteComponent->SetRelativeLocation(FVector(-200.0f, 10.f, 0.0f));
    //PawnSpriteComponent->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));
    ////PawnSpriteComponent->SetRelativeScale3D(FVector(0.1f, 1.0f, 0.1f));
    //PawnSpriteComponent->SetAbsolute(true, true, true);
	
}

// Called every frame
void APaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (MovementUp != 0)
    {
        FVector NewLocation = GetActorLocation() + (GetActorUpVector() * MovementUp * 7);
        SetActorLocation(NewLocation);

        if (GetActorLocation().Z > 550.0f)
        {
            FVector NewLocation = GetActorLocation() + (GetActorUpVector() * MovementDown * 7);
            SetActorLocation(NewLocation);
        }

        if (GetActorLocation().Z < -380.0f)
        {
            FVector NewLocation = GetActorLocation() + (GetActorUpVector() * MovementUp * -7);
            SetActorLocation(NewLocation);
        }

        

        /*GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue,
            "Key Input Pressed");*/
            
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
    MovementDown = value * (-1);
}





