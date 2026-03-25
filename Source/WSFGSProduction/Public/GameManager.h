// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameManager.generated.h"

UENUM(BlueprintType)
enum class EActions : uint8
{
	Statue,
	Marteau,
	Ciseau,
	None
};

UENUM(BlueprintType)
enum class EMaterial : uint8
{
	Staue,
	Bois,
	Metal,
	Marteau,
	None
};

/**
 * 
 */
UCLASS()
class WSFGSPRODUCTION_API UGameManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enumerator")
	EActions _actions = EActions::None;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enumerator")
	EMaterial _material = EMaterial::None;
};




