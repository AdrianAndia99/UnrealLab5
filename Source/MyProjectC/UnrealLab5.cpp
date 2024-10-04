// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealLab5.h"

// Sets default values
AUnrealLab5::AUnrealLab5()
{
    // Set default value for MyAttribute
    MyAttribute = 0.0f;

    // Enable ticking
    PrimaryActorTick.bCanEverTick = true;
}

void AUnrealLab5::BeginPlay()
{
    Super::BeginPlay();
}

void AUnrealLab5::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}