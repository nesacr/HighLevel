// Fill out your copyright notice in the Description page of Project Settings.


#include "PongGameStateBase.h"
#include "Ball.h"
#include "Paddle.h"
#include "PongHUD.h"
#include "Engine/World.h"

APongGameStateBase::APongGameStateBase()
{
    scorePlayer = 0;
    scoreAI = 0;
}

void APongGameStateBase::BeginPlay()
{
    Super::BeginPlay();

    Controller = GetWorld()->GetFirstPlayerController();
    HUD = (APongHUD*)Controller->GetHUD();
    
}

void APongGameStateBase::Tick(float DeltaTime)
{
    
}

void APongGameStateBase::UpdateScore(int player, int AI)
{
    if (player > 0)
    {
        scorePlayer+= player;
    }
    else if (AI > 0)
    {
        scoreAI += AI;
    }
}
