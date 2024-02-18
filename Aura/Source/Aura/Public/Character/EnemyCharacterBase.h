// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Intercation/EnemyInterface.h"
#include "EnemyCharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AEnemyCharacterBase : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	virtual void HighlightActor() override;
	virtual void UnhighlightActor() override;

	UPROPERTY(BlueprintReadOnly)
	bool bIsHighlighted = false;
};
