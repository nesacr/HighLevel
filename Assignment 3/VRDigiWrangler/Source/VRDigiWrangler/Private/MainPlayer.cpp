// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayer.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Components/ArrowComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Classes/PaperSprite.h"
#include "PaperSpriteComponent.h"
#include "Camera/CameraComponent.h"
#include "Projectile.h"
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

    //Projectile
    SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));
    SphereComponent->SetupAttachment(RootComponent);
    SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    SphereComponent->SetCollisionProfileName("OverlapAll");

    ProjectileSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Projectile Spawn Point"));
    ProjectileSpawnPoint->SetupAttachment(PawnSpriteComponent);//RootComponent
    ProjectileSpawnPoint->SetRelativeLocation(FVector(40.f, 0.f, 30.f));

    Tags.Add("Player");

   
}

// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();
	
    bCanShoot = true;

    APlayerController* controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (controller)
    {
        FString command = "show collision";
        controller->ConsoleCommand(command, true);
        controller->bShowMouseCursor = true;
        controller->bEnableClickEvents = true;
        controller->bEnableMouseOverEvents = true;
    }
}

// Called every frame
void AMainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    

    if (MovementRight > 0)
    {

        FVector NewLocation = GetActorLocation() + (GetActorForwardVector() * MovementRight);

      SetActorLocation(NewLocation);
     

      PawnSpriteComponent->SetRelativeRotation(FRotator(FRotator::ZeroRotator));
    }
    else if (MovementRight < 0)
    {
       PawnSpriteComponent->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));

       FVector NewLocation = GetActorLocation() + (GetActorForwardVector() * MovementRight);

       SetActorLocation(NewLocation);
       
    }

   

}

// Called to bind functionality to input
void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

  PlayerInputComponent->BindAxis("MoveRight", this, &AMainPlayer::MoveRight);

  PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMainPlayer::MoveUp);

  PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AMainPlayer::SpawnProjectile);

}

void AMainPlayer::SetCanShoot()
{
    bCanShoot = true;
}

int AMainPlayer::GetNumPickups()
{
    return NumPickups;
}

void AMainPlayer::IncrementPickupCount(int val)
{
    NumPickups += val;
}

void AMainPlayer::MoveRight(float value)
{
    MovementRight = value*5.0f;
}

void AMainPlayer::MoveUp()
{

    CapsuleComponent->BodyInstance.AddForce(FVector(0.0f, 0.0f, 1.0f) * 150000.0f*40);
  
}

void AMainPlayer::HandleBoxHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
}

void AMainPlayer::SpawnProjectile()
{
    if (ProjectileTemplate)
    {
        UWorld* const World = GetWorld();
        if (World)
        {
            if (bCanShoot)
            {
                bCanShoot = false;
                FActorSpawnParameters SpawnParams;
                SpawnParams.Owner = this;
                SpawnParams.Instigator = Instigator;
                SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
                FVector SpawnLocation = GetProjectileSpawnPoint()->GetComponentLocation();
                FRotator SpawnRotation = GetProjectileSpawnPoint()->GetComponentRotation();

                AProjectile* SpawnedProjectile = World->SpawnActor<AProjectile>(ProjectileTemplate, SpawnLocation, SpawnRotation, SpawnParams);
                if (SpawnedProjectile)
                {
                    //GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, "Spawn Projectile");
                    SpawnedProjectile->SetLifeSpan(ProjectileLifeSpan);
                }
            }
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("ProjectileTemplate == NULL"));
    }
}

