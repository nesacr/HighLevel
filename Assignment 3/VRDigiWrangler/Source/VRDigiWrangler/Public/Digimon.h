// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainPlayer.h"
#include "Digimon.generated.h"

/**
 * 
 */
UCLASS()
class VRDIGIWRANGLER_API ADigimon : public AMainPlayer
{
    GENERATED_BODY()
        ADigimon();

public:


    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditInstanceOnly, Category = "Capture", meta = (EditCondition = "Target"))
        AActor* Target;   
   
    virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

    bool isCaptured;
	
};
