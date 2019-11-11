// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Paddle.h"
#include "AIPaddle.generated.h"

/**
 * 
 */
UCLASS()
class VRPONG_API AAIPaddle : public APaddle
{
	GENERATED_BODY()
	

public:

    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditInstanceOnly, Category = "AI", meta = (EditCondition = "Target"))
        AActor* Target;
};
