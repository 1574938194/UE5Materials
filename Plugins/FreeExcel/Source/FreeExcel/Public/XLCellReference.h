// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLCellReference.hpp"
#include "XLCellReference.generated.h"

 
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLCellReference : public UObject
{
	GENERATED_BODY()
public:
		 
	 UFUNCTION(BlueprintCallable)
		static	UXLCellReference* MakeCellReference(FString ref);

		UFUNCTION(BlueprintCallable)
			void Forward();

		UFUNCTION(BlueprintCallable)
			void Backward();

		UFUNCTION(BlueprintCallable)
			int32 Row();

		UFUNCTION(BlueprintCallable)
		void SetRow(int32 row);

		UFUNCTION(BlueprintCallable)
			int32 Col();

		UFUNCTION(BlueprintCallable)
			void SetCol(int32 col);

		UFUNCTION(BlueprintCallable)
			void Set(int32 row, int32 col);

		UFUNCTION(BlueprintCallable)
			FString Address();

		UFUNCTION(BlueprintCallable)
			void  SetAddress(FString addr);

		UFUNCTION(BlueprintCallable)
			bool  Equal(UXLCellReference* right);

		UFUNCTION(BlueprintCallable)
			bool  NotEqual(UXLCellReference* right);

		UFUNCTION(BlueprintCallable)
			bool  Less(UXLCellReference* right);

		UFUNCTION(BlueprintCallable)
			bool  Greater(UXLCellReference* right);

		UFUNCTION(BlueprintCallable)
			bool  GreaterEqual(UXLCellReference* right);

		UFUNCTION(BlueprintCallable)
			bool  LessEqual(UXLCellReference* right);
protected:
	OpenXLSX::XLCellReference _Inner;

	friend class UXLWorksheet;
	friend class UXLCell;
};
