// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "GameFramework/GameModeBase.h"


#include "W8_FirstPersonGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class W8_FIRSTPERSON_API AW8_FirstPersonGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
		virtual void StartPlay() override;
	
};
