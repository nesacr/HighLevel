// Fill out your copyright notice in the Description page of Project Settings.


#include "PongHUD.h"
#include "Blueprint/UserWidget.h"
#include "ConstructorHelpers.h"

APongHUD::APongHUD()
{
   /* static ConstructorHelpers::FClassFinder<UUserWidget> playerHud(TEXT("/Game/Blueprints/UI/PlayerUI"));
    if (playerHud.Succeeded())
        PlayerGuiClass = playerHud.Class;*/
}

void APongHUD::BeginPlay()
{
   /* PlayerGui = CreateWidget<UUserWidget>(GetGameInstance(),
        PlayerGuiClass);

    PlayerGui->AddToViewport();*/
}

void APongHUD::DrawHUD()
{

}

void APongHUD::DisplayScore()
{

}
