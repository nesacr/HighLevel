// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "PongGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class VRPONG_API APongGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
public:

    APongGameStateBase();

    virtual void Tick(float DeltaTime) override;
    virtual void BeginPlay() override;
    void UpdateScore(int player, int AI);

private:
    bool goalPlayer;
    bool goalAI;

    int scorePlayer;
    int scoreAI;

    class ABall* Ball;
    class APlayerController* Controller;
    class APongHUD* HUD;

};
