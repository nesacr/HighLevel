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
    LeftBoxComponent->SetNotifyRigidBodyCollision(true);
    LeftBoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    LeftBoxComponent->ComponentTags.Add("Left Bound");
    LeftBoxComponent->SetCollisionProfileName("BlockAll");

    LeftBoxComponent->OnComponentHit.AddDynamic(this, &ABoard::OnHit);

    //Right Collision Box
    RightBoxComponent = CreateDefaultSubobject<UBoxComponent>("Right Collision Box");
    RightBoxComponent->SetupAttachment(ActorSpriteComponent);
    RightBoxComponent->SetNotifyRigidBodyCollision(true);
    RightBoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    RightBoxComponent->ComponentTags.Add("Right Bound");
    RightBoxComponent->SetCollisionProfileName("BlockAll");

    RightBoxComponent->OnComponentHit.AddDynamic(this, &ABoard::OnHit);

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

void ABoard::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

}

