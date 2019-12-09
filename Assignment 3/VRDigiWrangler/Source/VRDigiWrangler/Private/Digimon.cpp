// Fill out your copyright notice in the Description page of Project Settings.


#include "Digimon.h"
#include "MainPlayer.h"
#include "Components/CapsuleComponent.h"
ADigimon::ADigimon()
{

    //CapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &ADigimon::OnOverlapBegin);

    CapsuleComponent->SetCollisionProfileName("BlockAll");
    isCaptured = false;
    Tags.Empty();
    Tags.Add("Digimon");
}

void ADigimon::Tick(float DeltaTime)
{
    if (isCaptured == true)
    {
        if (Target != nullptr)
        {
            FVector Delta = GetActorLocation() - Target->GetActorLocation();
            float DistanceToG = Delta.Size();
            if (DistanceToG < 200)
            {
                FVector targetLocation = FMath::VInterpConstantTo(GetActorLocation(), Target->GetActorLocation(), DeltaTime, 0.0f);
                SetActorLocation(targetLocation);
            }
            else
            {
                if (GetActorLocation().Z < Target->GetActorLocation().Z - 190)
                {
                    CapsuleComponent->BodyInstance.AddForce(FVector(0.0f, 0.0f, 1.0f) * 150000.0f * 40);
                }
            FVector targetLocation = FMath::VInterpConstantTo(GetActorLocation(), Target->GetActorLocation(), DeltaTime, 300.0f);
            SetActorLocation(targetLocation);
            }
        }
    }
       
}


void ADigimon::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor->ActorHasTag("Player"))
    {
    Target = OtherActor;
    isCaptured = true;   
    }
}
