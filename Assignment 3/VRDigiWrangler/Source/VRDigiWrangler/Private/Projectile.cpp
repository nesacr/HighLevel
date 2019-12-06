// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "Components/SphereComponent.h"
#include "PaperSpriteComponent.h"
#include "ConstructorHelpers.h"
#include "PaperFlipbook.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "MainPlayer.h"
#include "AI.h"


// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    SphereComponent->SetupAttachment(RootComponent);
    SphereComponent->SetSphereRadius(4.f);
    SphereComponent->BodyInstance.SetCollisionProfileName("BlockAll");
    SphereComponent->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);

    SphereComponent->BodyInstance.bLockXRotation = true;
    SphereComponent->BodyInstance.bLockYRotation = true;
    SphereComponent->BodyInstance.bLockZRotation = true;
    SphereComponent->BodyInstance.bLockYTranslation = true;
    RootComponent = SphereComponent;

    ProjectileSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("PaperFlipbookComponent"));
    ProjectileSprite->SetupAttachment(RootComponent);
    ProjectileSprite->SetRelativeLocation(FVector(-3.f, 0.f, 0.f));

    ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    ProjectileMovementComponent->UpdatedComponent = SphereComponent;
    ProjectileMovementComponent->InitialSpeed = 1000.f;
    ProjectileMovementComponent->MaxSpeed = 1000.f;

    ProjectileMovementComponent->bRotationFollowsVelocity = false;
    ProjectileMovementComponent->bShouldBounce = true;

    InitialLifeSpan = 5.f;

}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && !IsPendingKill())
    {
        if (OtherActor != this->GetOwner())
        {
            if (OtherActor->ActorHasTag("AIGuard") || OtherActor->ActorHasTag("Player"))              
                OtherActor->Destroy();
        }
    }
}

