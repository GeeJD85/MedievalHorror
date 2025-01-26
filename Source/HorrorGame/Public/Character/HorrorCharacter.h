// Copyright Mintcake Games 2025

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HorrorCharacter.generated.h"

UCLASS()
class HORRORGAME_API AHorrorCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AHorrorCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
