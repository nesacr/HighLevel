// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Board.generated.h"

UCLASS()
class VRPONG_API ABoard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, Category = "Visual")
    class UPaperSpriteComponent* ActorSpriteComponent;

    UPROPERTY(EditAnywhere, Category = "Camera")
        class UCameraComponent* Camera;

    UPROPERTY(EditAnywhere, Category = "Top Collision Box")
        class UBoxComponent* TopBoxComponent;

    UPROPERTY(EditAnywhere, Category = "Bottom Collision Box")
        class UBoxComponent* BottomBoxComponent;

    UPROPERTY(EditAnywhere, Category = "Left Collision Box")
        class UBoxComponent* LeftBoxComponent;

    UPROPERTY(EditAnywhere, Category = "Right Collision Box")
        class UBoxComponent* RightBoxComponent;

};
