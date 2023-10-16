// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseStep.generated.h"


UENUM(BlueprintType)
enum class EStepMode : uint8
{
	E_Guided UMETA(DisplayName = "Guided"),
	E_NotGuided UMETA(DisplayName = "NotGuided"),
	E_NONE UMETA(DisplayName = "None")
};

UENUM(BlueprintType)
enum class EStepReward : uint8
{
	E_Default UMETA(DisplayName = "DEFAULT"),
	E_Badge UMETA(DisplaName = "Badge"),
	E_NONE UMETA(DisplayName = "None")
};


UENUM(BlueprintType)
enum class EStepClearCondition 
{
	E_NONE UMETA(DisplayName = "None"),
	E_Default UMETA(DisplayName = "Default"),
	E_Correct UMETA(DisplayName = "Correct"),
	E_Incorrect UMETA(DisplayName = "Incorrect")
};

USTRUCT(BlueprintType)
struct FReward 
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStepReward StepRewardType;
};

USTRUCT(BlueprintType)
struct FStepTask 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStepClearCondition ClearCondition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StepTaskDescription;
};

UCLASS(BlueprintType)
class GITIGNORECHECKER_API UBaseStep : public UObject
{
	GENERATED_BODY()

	UBaseStep();

public:
	UFUNCTION(BlueprintCallable)
	void SetStepDetails(FString _Name, FString _Description);

	UFUNCTION(BlueprintCallable)
	void SetupStepTask(int TaskNum,FString _Description);

	UFUNCTION(BlueprintCallable)
	void SetupNumOfTasks(int _NumOfTasks);

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString StepName;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StepTaskDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StepDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStepMode ModeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FReward StepReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FStepTask> StepTasks;

	

	
};
