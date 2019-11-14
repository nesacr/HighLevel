// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PongHUD.generated.h"

/**
 * 
 */
UCLASS()
class VRPONG_API APongHUD : public AHUD
{
	GENERATED_BODY()

public:
    APongHUD();

    /*  UPROPERTY(EditAnywhere, Category = "Game Hud")
          TSubclassOf<class UUserWidget> PlayerGuiClass;

      UPROPERTY()
      class UUserWidget* PlayerGui;*/

    virtual void DrawHUD() override;

    
    void DisplayScore();

protected:
    virtual void BeginPlay() override;
	
};
