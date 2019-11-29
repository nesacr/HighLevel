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

    UPROPERTY(Category = Character, VisibleAnywhere, meta = (AllowPrivateAccess))
        class USphereComponent* SphereComponent;

    UPROPERTY(VisibleAnywhere, Category = "Pawn Camera")
        class UCameraComponent* FollowCamera;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera Spring", meta = (AllowPrivateAccess = "true"))
        class USpringArmComponent* SpringArmComponent;

    //Projectile Stuff
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AAA")
        float FireTimerDelay = 3;

    FTimerHandle SetCanShootTimer;

    bool bCanShoot = false;

    UFUNCTION()
        void SetCanShoot();

    //pick up stuff
    UFUNCTION(BlueprintCallable, Category = "Pickups")
        int GetNumPickups();

    void IncrementPickupCount(int val);

    //movement stuff
    void MoveRight(float value);
    void MoveUp();


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AAA")
        TSubclassOf<class AProjectile> ProjectileTemplate;

    UFUNCTION()
        virtual void HandleBoxHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

    UFUNCTION(BlueprintCallable, Category = "AAA")
        void SpawnProjectile();
    
private:

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AAA", meta = (AllowPrivateAccess = "true"))
        class UArrowComponent* ProjectileSpawnPoint;


    /** returns projectile spawn point **/
    FORCEINLINE class UArrowComponent* GetProjectileSpawnPoint() const { return ProjectileSpawnPoint; }

    /** how much (in sec) player will be inactive after hit  */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Config", meta = (AllowPrivateAccess = "true"))
        float ProjectileLifeSpan = 5.f;

    float MovementRight;

    int NumPickups;

    bool Grounded;
};
