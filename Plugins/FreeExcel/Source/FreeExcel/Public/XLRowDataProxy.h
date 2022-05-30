// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLRowData.hpp"
#include "XLCellValue.h"
#include "XLRowDataProxy.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLRowDataProxy : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
		void Fill(TArray<UXLCellValue*> ls);

	UFUNCTION(BlueprintCallable)
		void FillInteger(TArray<int64> ls);

	UFUNCTION(BlueprintCallable)
		void FillString(TArray<FString> ls);

	UFUNCTION(BlueprintCallable)
		void FillFloat(TArray<float> ls);

	UFUNCTION(BlueprintCallable)
		void FillDateTime(TArray<FDateTime> ls);

	UFUNCTION(BlueprintCallable)
		TArray<UXLCellValue*> Get();

	UFUNCTION(BlueprintCallable)
		TArray<int64> AsInteger();

	UFUNCTION(BlueprintCallable)
		TArray<float> AsFloat();

	UFUNCTION(BlueprintCallable)
		TArray<FString> AsString();

	UFUNCTION(BlueprintCallable)
		TArray<FDateTime> AsDateTime();

	UFUNCTION(BlueprintCallable)
	void Clear();
protected:
	OpenXLSX::XLRowDataProxy _Inner;

	friend class UXLRow;
};
