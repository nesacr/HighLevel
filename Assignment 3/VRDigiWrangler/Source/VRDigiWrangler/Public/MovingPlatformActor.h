// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlatformActor.h"
#include "MovingPlatformActor.generated.h"

/**
 * 
 */
UCLASS()
class VRDIGIWRANGLER_API AMovingPlatformActor : public APlatformActor
{
    GENERATED_BODY()

public:
    AMovingPlatformActor();

    //UPROPERTY(EditAnywhere, Category = "Movement")
    //    class UMovementComponent* MovementComponent;

        virtual void Tick(float DeltaTime) override;
};
