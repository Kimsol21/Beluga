// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dog/Creature/Dog_Creature.h"
#include "Dog_Player.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class BELUGA_API UDog_Player : public UDog_Creature
{
	GENERATED_BODY()

public:
	UDog_Player();

	UFUNCTION(BlueprintCallable)
		bool Attack(class UDog_Monster* Target);
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Info")
		int32 AttackPower;


	
};

