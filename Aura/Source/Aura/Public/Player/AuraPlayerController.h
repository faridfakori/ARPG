// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Intercation/EnemyInterface.h"
#include "AuraPlayerController.generated.h"


class UInputMappingContext;
class UInputAction;
struct  FInputActionValue;

UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	AAuraPlayerController();
	
protected:

	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	virtual void PlayerTick(float DeltaSeconds) override;

private:

	UPROPERTY(EditAnywhere,Category="Input Mapping Context")
	 TObjectPtr<UInputMappingContext> AuraContext;
	UPROPERTY(EditAnywhere,Category="Input ")
	TObjectPtr<UInputAction> MoveAction;

	void Move(const FInputActionValue& Value);

	void CursorTrace();
	IEnemyInterface* LastActor;
	IEnemyInterface* CurrentActor;
};
