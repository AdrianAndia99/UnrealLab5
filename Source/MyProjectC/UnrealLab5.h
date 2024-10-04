// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnrealLab5.generated.h"

UCLASS()
class MYPROJECTC_API AUnrealLab5 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUnrealLab5();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Expose this variable to Blueprints
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Example5.1")
	float MyAttribute;

	UFUNCTION(BlueprintCallable, Category = "Example5.1")

	float SumTwoNumbers(float A, float B);
};