// Fill out your copyright notice in the Description page of Project Settings.


#include "VRPongGameModeBase.h"
#include "Paddle.h"
#include "Board.h"
#include "Ball.h"

AVRPongGameModeBase::AVRPongGameModeBase()
{
    DefaultPawnClass = APaddle::StaticClass();
}

void AVRPongGameModeBase::BeginPlay()
{
    Super::BeginPlay();
    //Super::BeginMatch();
}