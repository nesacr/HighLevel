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

    UPROPERTY(EditInstanceOnly, Category = "AI")
        bool bPatrol;

    UPROPERTY(EditInstanceOnly, Category = "AI", meta = (EditCondition = "bPatrol"))
        AActor* FirstPatrolPoint;

    UPROPERTY(EditInstanceOnly, Category = "AI", meta = (EditCondition = "bPatrol"))
        AActor* SecondPatrolPoint;

    AActor* CurrentPatrolPoint;

    UFUNCTION()
        void MoveToNextPatrolPoint();

public:
    virtual void Tick(float DeltaTime) override;

private:
    AActor* TargetActor; 

    FTimerHandle SpawnProjectileTimer;

};
