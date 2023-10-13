
// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseStep.h"

UBaseStep::UBaseStep()
{
	StepName = "Default Step";
	StepDescription = "Default Description";

	StepReward.StepRewardType = EStepReward::E_Default;
}

void UBaseStep::SetStepDetails(FString _Name, FString _Description)
{
	StepName = _Name;
	StepDescription = _Description;
}

void UBaseStep::SetupStepTask(int TaskNum,FString _Description)
{
	if (TaskNum < StepTasks.Num()) 
	{
		StepTasks[TaskNum].StepTaskDescription = _Description;
		
	}
}

void UBaseStep::SetupNumOfTasks(int _NumOfTasks)
{
	StepTasks.SetNum(_NumOfTasks);
}
