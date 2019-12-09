// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupActor.generated.h"

UCLASS()
class VRDIGIWRANGLER_API APickupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	APickupActor();   

protected:
	virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, Category = "Collision", meta = (AllowPrivateAccess))
        class UBoxComponent* BoxComponent;

    UPROPERTY(EditAnywhere, Category = "Visual", meta = (AllowPrivateAccess))
        class UPaperSpriteComponent* SpriteComponent;
   
    UFUNCTION()
        void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
            AActor* OtherActor, UPrimitiveComponent* OtherComp,
            int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	
	virtual void Tick(float DeltaTime) override;
};
