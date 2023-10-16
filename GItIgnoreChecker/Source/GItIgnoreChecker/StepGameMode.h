// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StepGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GITIGNORECHECKER_API AStepGameMode : public AGameModeBase
{
	GENERATED_BODY()
	

protected:
	virtual void BeginPlay()override;

public:
	AStepGameMode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> UISpawer;

	UPROPERTY()
	FTimerHandle TimerHandle;

	
};
