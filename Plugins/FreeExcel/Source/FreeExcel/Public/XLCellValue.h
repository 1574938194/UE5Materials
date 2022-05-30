// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLCell.hpp"
#include "XLValueType.h"
#include "XLCellValue.generated.h"

 

class UXLCellValueProxy;
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLCellValue : public UObject
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
		void SetDateTime(FDateTime val);

	UFUNCTION(BlueprintCallable)
		void SetFloat(float val);
 
	UFUNCTION(BlueprintCallable)
		bool Bool();

	UFUNCTION(BlueprintCallable)
		int64 Integer();

	UFUNCTION(BlueprintCallable)
		float Float();

	UFUNCTION(BlueprintCallable)
		FString String();

	UFUNCTION(BlueprintCallable)
		FDateTime DateTime();

	UFUNCTION(BlueprintCallable)
	UXLCellValue* Clear();

	UFUNCTION(BlueprintCallable)
	UXLCellValue* SetError();

	UFUNCTION(BlueprintCallable)
	EXLValueType Type();

	UFUNCTION(BlueprintCallable)
	FString TypeAsString();

	UFUNCTION(BlueprintCallable)
		void Set(UXLCellValue* val);
	UFUNCTION(BlueprintCallable)
		void SetProxy(UXLCellValueProxy* val);
protected:
	OpenXLSX::XLCellValue _Inner;

	friend class UXLCellValueProxy;

	friend class UXLRowDataProxy;
};
