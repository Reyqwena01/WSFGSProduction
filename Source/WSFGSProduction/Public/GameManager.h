// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Blueprint/UserWidget.h"
#include "GameManager.generated.h"

UENUM(BlueprintType)
enum class EActions : uint8
{
	Ponceuese,
	Marteau,
	Ciseau,
	NoneAction
};

UENUM(BlueprintType)
enum class EMaterial : uint8
{
	Staue,
	Bois,
	Metal,
	NoneAction
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
	EActions _actions = EActions::NoneAction;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enumerator")
	EMaterial _material = EMaterial::NoneAction;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Difficulty")
	int _difficultyLevel = 0;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Object")
	TArray<UUserWidget*> _questRequest;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Object")
	TArray<UUserWidget*> _currentQuestRequest;

	UFUNCTION(BlueprintCallable, Category = "Methode")
	void SetDifficulty(int difficulty);
	UFUNCTION(BlueprintCallable, Category = "Methode")
	void CompareCurrentObject(UUserWidget* Card);

};




