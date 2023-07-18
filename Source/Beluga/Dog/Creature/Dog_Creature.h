// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Dog_Creature.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
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


public:

	//==========[ Test ]==========================================================================

	UFUNCTION(BlueprintCallable)
		FString CPP_Hello();

	UFUNCTION(BlueprintPure)
		FName CPP_GetName();

	//둘다 BP에 구현부를 두겠다 라는 뜻 인데 NatibeEvent같은 경우는 둘다 둘수있음. bP에서 부모함수에 대한호출 추가하면 Super::랑 똑같음. 
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)//BlueprintCallable랑 같이 쓰는 경우가 많다. 
		void BP_SetHelloMessage();

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
		void BOTH_Update();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString HelloMsg;

};

