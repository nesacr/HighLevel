// Fill out your copyright notice in the Description page of Project Settings.


#include "Digimon.h"

ADigimon::ADigimon()
{
    Tags.Add("Digimon");

    isCaptured = false;

}

void ADigimon::Tick(float DeltaTime)
{
    if (isCaptured == true)
    {
        if (Target != nullptr)
        {
            FVector targetLocation = FMath::VInterpConstantTo(GetActorLocation(), Target->GetActorLocation(), DeltaTime, 600.0f);

            SetActorLocation(targetLocation);
        }
    }
       
}

void ADigimon::OnOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    Target = OtherActor;
    isCaptured = true;
    
}
