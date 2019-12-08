// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatformActor.h"
#include "GameFramework/MovementComponent.h"

AMovingPlatformActor::AMovingPlatformActor()
{
    PrimaryActorTick.bCanEverTick = true;

   
}

void AMovingPlatformActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime); 

    FVector NewLocation = GetActorLocation();
    FRotator NewRotation = GetActorRotation();
    float RunningTime = GetGameTimeSinceCreation();
    float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
    NewLocation.Z += DeltaHeight * 400.0f;       
 
    SetActorLocationAndRotation(NewLocation, NewRotation);
}