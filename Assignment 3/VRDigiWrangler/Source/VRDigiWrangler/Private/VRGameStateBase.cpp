// Fill out your copyright notice in the Description page of Project Settings.


#include "VRGameStateBase.h"
#include "MainPlayer.h"
#include "Engine/World.h"
void AVRGameStateBase::BeginPlay()
{
    Super::BeginPlay();
    m_player = Cast<AMainPlayer>(GetWorld()->GetFirstPlayerController()->GetPawn());
}
int AVRGameStateBase::GetPlayerHPforHUD()
{
    return m_player->GetPlayerHP();
}
