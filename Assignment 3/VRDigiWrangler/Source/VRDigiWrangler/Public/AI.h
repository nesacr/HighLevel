// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainPlayer.h"
#include "AI.generated.h"

/**
 * 
 */

class UPawnSensingComponent;

UCLASS()
class VRDIGIWRANGLER_API AAI : public AMainPlayer
{
	GENERATED_BODY()

public:
    AAI();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, Category = "Components")
        UPawnSensingComponent* PawnSensingComponent;

   /* UFUNCTION()
        void OnPawnSeen(APawn* SeenPawn);*/

    UFUNCTION()
        void OnNoiseHeard(APawn* NoiseInstigator, const FVector& Location, float Volume);

public:
    virtual void Tick(float DeltaTime) override;

private:
    AActor* TargetActor;
    FVector HeardLocation;



};
