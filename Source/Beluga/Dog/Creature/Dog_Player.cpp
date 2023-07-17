// Fill out your copyright notice in the Description page of Project Settings.


#include "Dog/Creature/Dog_Player.h"
#include "Dog/Creature/Dog_Monster.h"

UDog_Player::UDog_Player()
{
	Name = FName(TEXT("플레이어"));
	MaxHP = 100;
	CurrentHP = MaxHP;
	AttackPower = 20;
}

bool UDog_Player::Attack(UDog_Monster* Target)
{
	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, FString::Printf(TEXT("%s 를 %d만큼 공격합니다!"),*(Target->Name.ToString()), AttackPower));
	return Target->TakeDamage(AttackPower);
}


