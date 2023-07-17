// Fill out your copyright notice in the Description page of Project Settings.


#include "Dog/Creature/Dog_Monster.h"

bool UDog_Monster::TakeDamage(int32 Damage)
{
	CurrentHP = FMath::Clamp(CurrentHP - Damage, 0, MaxHP);
	if (0 == CurrentHP)
	{
		IsDead = true;
		GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Red, FString::Printf(TEXT("%s 가 사망했습니다."), *Name.ToString()));
	}
	return IsDead;
}
