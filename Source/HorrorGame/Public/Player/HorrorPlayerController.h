// Copyright Mintcake Games 2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HorrorPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class HORRORGAME_API AHorrorPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void SetupInputComponent() override;
};
