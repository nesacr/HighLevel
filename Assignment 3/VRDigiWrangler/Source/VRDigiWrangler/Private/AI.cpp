// Fill out your copyright notice in the Description page of Project Settings.


#include "AI.h"
#include "Perception/PawnSensingComponent.h"
#include "Components/CapsuleComponent.h"
#include "Projectile.h"
#include "MainPlayer.h"


AAI::AAI()
{
    CapsuleComponent->GetBodyInstance()->bLockXRotation = true;
    CapsuleComponent->GetBodyInstance()->bLockYRotation = true;
    CapsuleComponent->GetBodyInstance()->bLockZRotation = false;
    Tags.Empty();
    Tags.Add("AIGuard");
}

void AAI::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (CurrentPatrolPoint)
    {
        FVector Delta = GetActorLocation() - CurrentPatrolPoint->GetActorLocation();
        float DistanceToGoal = Delta.Size();

        
        if (DistanceToGoal < 100)
        {
            
            MoveToNextPatrolPoint();
          
        }
        SetActorLocation(FMath::VInterpConstantTo(GetActorLocation(), CurrentPatrolPoint->GetActorLocation(), DeltaTime, 600.0f));      
    }
}

void AAI::BeginPlay()
{
    Super::BeginPlay();
    if (bPatrol)
    {
        MoveToNextPatrolPoint();
    }
    GetWorldTimerManager().SetTimer(SpawnProjectileTimer, this, &AMainPlayer::SpawnProjectile, FireTimerDelay, true);
}



void AAI::MoveToNextPatrolPoint()
{

    if (CurrentPatrolPoint == nullptr || CurrentPatrolPoint == SecondPatrolPoint)
    {
        CurrentPatrolPoint = FirstPatrolPoint;
    }
    
    else 
    {
        CurrentPatrolPoint = SecondPatrolPoint;      
    }

    FVector Direction = GetActorLocation() - CurrentPatrolPoint->GetActorLocation();
        Direction.Normalize();   
    
    FRotator NewLookAt = FRotationMatrix::MakeFromX(Direction).Rotator();
    NewLookAt.Pitch = 0.0f;
    NewLookAt.Roll = 0.0f;
    NewLookAt.Yaw += 180.0f;
    SetActorRotation(NewLookAt);     
}





