// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameManager.generated.h"

/**
 * 
 */
UCLASS()
class WSFGSPRODUCTION_API UGameManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Holalala_la_categorie")
	float tutudugamemanager = 1.0f;
	
};
