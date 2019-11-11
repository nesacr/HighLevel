// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPaddle.h"

void AAIPaddle::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (Target != nullptr)
    {
        //DECLARE a variable called targetLocation of type FVector and assign it to the return value of FMath::VInterpConstantTo(..) passing in --> GetActorLocation(), Target->GetActorLocation(), DeltaTime, 600.0f
        float targetLocation = FMath::FInterpConstantTo(GetActorLocation().Z, Target->GetActorLocation().Z, DeltaTime, 600.0f);
        //CALL
        SetActorLocation(FVector(GetActorLocation().X,GetActorLocation().Y,targetLocation));

        
       
    }

}

