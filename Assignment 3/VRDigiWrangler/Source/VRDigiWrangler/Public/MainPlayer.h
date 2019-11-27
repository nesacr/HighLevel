// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MainPlayer.generated.h"


UCLASS()
class VRDIGIWRANGLER_API AMainPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMainPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UPROPERTY(Category = Character, VisibleAnywhere, meta = (AllowPrivateAccess))
        class UCapsuleComponent* CapsuleComponent;

    UPROPERTY(EditAnywhere, Category = "Visual")
        class UPaperSpriteComponent* PawnSpriteComponent;

    UPROPERTY(VisibleAnywhere, Category = "Pawn Camera")
        class UCameraComponent* FollowCamera;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera Spring", meta = (AllowPrivateAccess = "true"))
        class USpringArmComponent* SpringArmComponent;

    void MoveRight(float value);
    void MoveUp();

    /*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
        EDirectionEnum DirectionEnum;*/
    
private:
    float MovementRight;
    bool Grounded;
};
