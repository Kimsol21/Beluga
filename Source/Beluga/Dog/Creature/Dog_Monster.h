// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dog/Creature/Dog_Creature.h"
#include "Dog_Monster.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, Abstract)
class BELUGA_API UDog_Monster : public UDog_Creature
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
		bool TakeDamage(int32 Damage);

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Info")
		bool IsDead;
};

