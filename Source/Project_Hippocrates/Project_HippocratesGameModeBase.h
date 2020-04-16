// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "GameFramework/GameModeBase.h"


#include "Project_HippocratesGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_HIPPOCRATES_API AProject_HippocratesGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
		virtual void StartPlay() override;
};
