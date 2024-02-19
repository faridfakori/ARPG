// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/EnemyCharacterBase.h"

#include "Aura/Aura.h"

AEnemyCharacterBase::AEnemyCharacterBase()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility,ECR_Block);
}

void AEnemyCharacterBase::HighlightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CustomDepthRed);
	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(CustomDepthRed);
	bIsHighlighted = true;
}

void AEnemyCharacterBase::UnhighlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
	bIsHighlighted = false;
	
}



