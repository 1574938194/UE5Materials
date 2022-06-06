// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "OpenXLSX/include/headers/XLCellValue.hpp"
#include "XLValueType.h"
#include "CoreMinimal.h"
#include "CellValue.generated.h"

class UCell;
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UCellValue :public UObject
{
	GENERATED_BODY()
public:
	 

	UFUNCTION(BlueprintCallable)
		void SetBool(bool val);

	UFUNCTION(BlueprintCallable)
		void SetInt(int32 val);

	UFUNCTION(BlueprintCallable)
		void SetString(FString val);

	UFUNCTION(BlueprintCallable)
		void SetDateTime(FDateTime val);

	UFUNCTION(BlueprintCallable)
		void SetFloat(float val);

	UFUNCTION(BlueprintPure)
		bool ToBool()const;

	UFUNCTION(BlueprintPure)
		int32 ToInt()const;

	UFUNCTION(BlueprintPure)
		float ToFloat()const;

	UFUNCTION(BlueprintPure)
		FString ToString()const;

	UFUNCTION(BlueprintPure)
		FDateTime ToDateTime()const;

	UFUNCTION(BlueprintCallable)
		void Clear();

	UFUNCTION(BlueprintPure)
		EXLValueType Type()const;

protected:
	OpenXLSX::XLCellValue _Inner;

	friend class UCell;
};
