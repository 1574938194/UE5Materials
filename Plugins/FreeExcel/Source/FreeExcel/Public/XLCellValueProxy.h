// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLCell.hpp"
#include "XLCellValue.h"
#include "XLValueType.h"
#include "XLCellValueProxy.generated.h"

 
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLCellValueProxy : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void SetBool(bool val);

	UFUNCTION(BlueprintCallable)
	void SetInteger(int64 val);

	UFUNCTION(BlueprintCallable)
		void SetString(FString val);

	UFUNCTION(BlueprintCallable)
		void SetFloat(float val);

	UFUNCTION(BlueprintCallable)
		void SetDateTime(FDateTime val);

	UFUNCTION(BlueprintCallable)
		bool Bool();

	UFUNCTION(BlueprintCallable)
		int64 Integer();

	UFUNCTION(BlueprintCallable)
		FString String();

	UFUNCTION(BlueprintCallable)
		float Float();

	UFUNCTION(BlueprintCallable)
		FDateTime DateTime();

	UFUNCTION(BlueprintCallable)
		UXLCellValueProxy* Clear();

	UFUNCTION(BlueprintCallable)
		UXLCellValueProxy* SetError();

	UFUNCTION(BlueprintCallable)
		EXLValueType Type();

	UFUNCTION(BlueprintCallable)
		FString TypeAsString();

	UFUNCTION(BlueprintCallable)
		UXLCellValue* ToCellValue();

	UFUNCTION(BlueprintCallable)
		void Set(UXLCellValue* val);
	UFUNCTION(BlueprintCallable)
		void SetProxy(UXLCellValueProxy* val);
protected:
	OpenXLSX::XLCellValueProxy _Inner;

	friend class UXLCell;
	friend class UXLCellValue;
};
