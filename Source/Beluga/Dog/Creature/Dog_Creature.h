// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Dog_Creature.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, Abstract)
class BELUGA_API UDog_Creature : public UObject
{
	GENERATED_BODY()

public:
	UDog_Creature();

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Info")
		FName Name;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Info")
		int32 MaxHP;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Info", Transient)
		int32 CurrentHP;

	UFUNCTION(BlueprintCallable)
	virtual void Init();

};

