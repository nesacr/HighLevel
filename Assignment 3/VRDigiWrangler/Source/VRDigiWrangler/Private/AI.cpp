// Fill out your copyright notice in the Description page of Project Settings.


#include "AI.h"
#include "Perception/PawnSensingComponent.h"
#include "Components/CapsuleComponent.h"


AAI::AAI()
{
    PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));

    PawnSensingComponent->OnHearNoise.AddDynamic(this, &AAI::OnNoiseHeard);

    CapsuleComponent->BodyInstance.bLockZRotation = false;
}

void AAI::BeginPlay()
{
    Super::BeginPlay();
}



void AAI::OnNoiseHeard(APawn* NoiseInstigator, const FVector& Location, float Volume)
{
    FVector Direction = Location - GetActorLocation();

    Direction.Normalize();

    FRotator NewLookAt = FRotationMatrix::MakeFromX(Direction).Rotator();

    NewLookAt.Pitch = 0.0f;

    NewLookAt.Roll = 0.0f;

    SetActorRotation(NewLookAt);
}

void AAI::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
