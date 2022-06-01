// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLCell.hpp"
#include "XLCellReference.h" 
#include "XLValueType.h"
#include "XLCell.generated.h"

 
 
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLCell : public UObject
{
	GENERATED_BODY()
	
public:
  
    UFUNCTION(BlueprintCallable)
    FString GetCellReference() ;

    // get the XLCell object from the current cell offset
    UFUNCTION(BlueprintCallable)
    UXLCell* CellOffset(int32 rowOffset, int32 colOffset) ;

    UFUNCTION(BlueprintCallable)
    bool IsFormula() ;

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
		bool GetBool();

	UFUNCTION(BlueprintCallable)
		int64 GetInteger();

	UFUNCTION(BlueprintCallable)
		float GetFloat();

	UFUNCTION(BlueprintCallable)
		FString GetString();

	UFUNCTION(BlueprintCallable)
		FDateTime GetDateTime();

	UFUNCTION(BlueprintCallable)
	void ClearCell();
	 
	UFUNCTION(BlueprintCallable)
		EXLValueType Type();
	 
	UFUNCTION(BlueprintCallable)
		void SetFormula(FString v);

	UFUNCTION(BlueprintCallable)
		FString GetFormula();

	UFUNCTION(BlueprintCallable)
		void SetCellValue(UXLCell* other);
	 
protected:
    OpenXLSX::XLCell _Inner;

    friend class UXLWorksheet;
    friend class UXLSheet;
    friend class UXLRowDataIterator;
    friend class UXLCellIterator;
};
