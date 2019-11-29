// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHUD.h"
#include "Blueprint/UserWidget.h"
#include "ConstructorHelpers.h"

AMyHUD::AMyHUD()
{
    static ConstructorHelpers::FClassFinder<UUserWidget> playerHUD(TEXT("/Game/Blueprints/HealthUI"));
    if (playerHUD.Succeeded())
        PlayerGuiClass = playerHUD.Class;

}

void AMyHUD::DrawHUD()
{
}

void AMyHUD::DisplayScore()
{
}

void AMyHUD::BeginPlay()
{
    PlayerGui = CreateWidget<UUserWidget>(GetGameInstance(), PlayerGuiClass);

    PlayerGui->AddToViewport();
}
