// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Blueprint/UserWidget.h"
#include "Engine/Texture2D.h"
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
UENUM(BlueprintType)
enum class EDirections : uint8
{
	TOP,
	DOWN,
	LEFT,
	RIGHT,
	NoneAction
};

USTRUCT(BlueprintType)
struct FSequence
{

	GENERATED_BODY()

public :
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString _name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* _image = nullptr; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EDirections _input1 = EDirections::NoneAction;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EDirections _input2 = EDirections::NoneAction;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EDirections _input3 = EDirections::NoneAction;
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
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Enumerator")
	EDirections _currentDirections = EDirections::NoneAction;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Difficulty")
	int _difficultyLevel = 0;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Object")
	TArray<UUserWidget*> _questRequest;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Object")
	TArray<UUserWidget*> _currentQuestRequest;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	TArray<FSequence> _tools;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	TArray<FSequence> _elements;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	FSequence _currentUsedTool;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	FSequence _currentUsedElement;

	/*UFUNCTION(BlueprintCallable, Category = "Methode")
	void SetDifficulty(int difficulty);
	UFUNCTION(BlueprintCallable, Category = "Methode")
	void CompareCurrentObject(UUserWidget* Card);*/

};




