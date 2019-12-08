// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatformActor.h"
#include "GameFramework/MovementComponent.h"

AMovingPlatformActor::AMovingPlatformActor()
{
    PrimaryActorTick.bCanEverTick = true;

    /*MovementComponent = CreateDefaultSubobject<UMovementComponent>("Movement Component");
    MovementComponent->bConstrainToPlane;
    MovementComponent->bSnapToPlaneAtStart;
    MovementComponent->Velocity = FVector(.5f);*/
}

void AMovingPlatformActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime); 

        //DECLARE a variable called targetLocation of type FVector and assign it to the return value of FMath::VInterpConstantTo(..) passing in --> GetActorLocation(), Target->GetActorLocation(), DeltaTime, 600.0f
        //float targetLocation = FMath::FInterpConstantTo(400.0f, 600.0f, DeltaTime, 600.0f);
        //float targetLocation = FMath::FInterpConstantTo(GetActorLocation().Z, Target->GetActorLocation().Z, DeltaTime, 600.0f);
        //CALL
        //SetActorLocation(FVector(0.0f, 1000.0f, targetLocation + 1.1f));


}