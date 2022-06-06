// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyStruct.generated.h"
/**
 * 
 */
USTRUCT(BlueprintType)
struct FMyStruct
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 IntValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString StrValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString StrValue2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector VecValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObject* SafeObjectPointer;
};
