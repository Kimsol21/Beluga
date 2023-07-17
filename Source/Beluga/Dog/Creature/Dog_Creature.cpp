// Fill out your copyright notice in the Description page of Project Settings.


#include "Dog/Creature/Dog_Creature.h"
#include "Internationalization/Text.h"


UDog_Creature::UDog_Creature()
{
	Name = FName(TEXT("생명체"));
	MaxHP = 100;
	CurrentHP = MaxHP;
}

void UDog_Creature::Init()
{
	CurrentHP = MaxHP;
	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::White, FString::Printf(TEXT("%s 가 생성되었습니다."), *Name.ToString()));
}
