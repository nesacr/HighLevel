// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayer.h"
#include "Components/CapsuleComponent.h"
#include "PaperSpriteComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AMainPlayer::AMainPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



    CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>("Capsule Component");
    CapsuleComponent->SetupAttachment(RootComponent);
    CapsuleComponent->SetCollisionProfileName("BlockAll");
    CapsuleComponent->SetNotifyRigidBodyCollision(true);
    CapsuleComponent->SetSimulatePhysics(true);
    CapsuleComponent->SetEnableGravity(true);
    CapsuleComponent->GetBodyInstance()->bLockRotation = true;   
    CapsuleComponent->GetBodyInstance()->bLockXRotation = true;
    CapsuleComponent->GetBodyInstance()->bLockYRotation = true;
    CapsuleComponent->GetBodyInstance()->bLockZRotation = true;
    CapsuleComponent->GetBodyInstance()->bLockYTranslation = true;

    RootComponent = CapsuleComponent;

    PawnSpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>("Pawn Sprite");
    PawnSpriteComponent->SetCollisionProfileName("NoCollision");
    PawnSpriteComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    PawnSpriteComponent->SetGenerateOverlapEvents(false);
    PawnSpriteComponent->SetupAttachment(RootComponent);
   

    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
    SpringArmComponent->SetupAttachment(RootComponent);
    SpringArmComponent->bInheritPitch = false;
    SpringArmComponent->bInheritYaw = false;
    SpringArmComponent->bInheritRoll = false;
    SpringArmComponent->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));

    FollowCamera = CreateDefaultSubobject<UCameraComponent>("Pawn's Camera");
    FollowCamera->SetProjectionMode(ECameraProjectionMode::Orthographic);
    FollowCamera->SetOrthoWidth(5000.0f);
    FollowCamera->SetupAttachment(SpringArmComponent);


}

// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (MovementRight != 0)
    {
        FVector NewLocation = GetActorLocation() + (GetActorForwardVector() * MovementRight);

      SetActorLocation(NewLocation);
    }

}

// Called to bind functionality to input
void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

  PlayerInputComponent->BindAxis("MoveRight", this, &AMainPlayer::MoveRight);

}

void AMainPlayer::MoveRight(float value)
{
    MovementRight = value;
}

