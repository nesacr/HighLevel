// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"
#include "PaperSpriteComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "VRPongGameModeBase.h"
#include "PongGameStateBase.h"
#include "Engine/World.h"

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    ActorSpriteComponent = CreateDefaultSubobject <UPaperSpriteComponent>("Actor Visual");
    RootComponent = ActorSpriteComponent;

    SphereComponent = CreateDefaultSubobject<USphereComponent>("Ball Collision");
    SphereComponent->SetupAttachment(ActorSpriteComponent);
    SphereComponent->SetCollisionProfileName("BlockAll");
    SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
   
    SphereComponent->BodyInstance.bLockRotation = true;
    SphereComponent->BodyInstance.bLockTranslation = true;

    SphereComponent->OnComponentHit.AddDynamic(this, &ABall::OnHit);
    
   

    //Projectile Movement
    ProjectileComponent = CreateDefaultSubobject<UProjectileMovementComponent>("Projectile Movement");
    
    ProjectileComponent->bShouldBounce = true;
    ProjectileComponent->Bounciness = 1.0f;
    ProjectileComponent->InitialSpeed = 900.0f;
    ProjectileComponent->MaxSpeed = 1500.0f;
    ProjectileComponent->Friction = 0.0f;
    ProjectileComponent->bSimulationEnabled = true;
    ProjectileComponent->Velocity = FVector(1.0f, 0.0f, 1.0f);
    FMath::Clamp(ProjectileComponent->Velocity.Y, 0.0f, 0.0f);
    ProjectileComponent->ProjectileGravityScale = 0.0f;


    
}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();

    ActorSpriteComponent->SetRelativeLocation(FVector(0.0f, 10.0f, 0.0f));
    //ActorSpriteComponent->SetRelativeScale3D(FVector(0.7f, 1.0f, 0.7f));
    ActorSpriteComponent->SetAbsolute(true, true, true);
	
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ABall::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    if (OtherComp->ComponentHasTag("Left Bound"))
    {
        APongGameStateBase* state = Cast<APongGameStateBase>(GetWorld()->GetGameState());
        if (state)
            state->UpdateScore(0, 1);
    }

    if (OtherComp->ComponentHasTag("Right Bound"))
    {
        APongGameStateBase* state = Cast<APongGameStateBase>(GetWorld()->GetGameState());
            if (state)
                state->UpdateScore(1, 0);
    }


    //If the Other Actor is not Null. The Other Actor is the one that has Hit with this one
    GEngine->AddOnScreenDebugMessage(-1, 15.0f,
        FColor::Blue,
        "AMyFirstPawn2::OnHit - " + OtherActor->GetName());
}

