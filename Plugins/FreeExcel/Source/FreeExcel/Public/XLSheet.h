// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLSheet.hpp"
#include "XLWorksheet.h"
#include "XLChartsheet.h"
#include "XLSheet.generated.h"

 


/**
 * 
 */
class UXLWorkbook;

UCLASS(BlueprintType)
class FREEEXCEL_API UXLSheet : public UObject
{
	GENERATED_BODY()
public:
  
  
    // Method for getting the current visibility state of the sheet.
    UFUNCTION(BlueprintCallable)
        EXLSheetState Visibility() ;

     // Method for setting the state of the sheet
    UFUNCTION(BlueprintCallable)
    void SetVisibility(EXLSheetState state);

    UFUNCTION(BlueprintCallable)
    FColor Color() ;

    UFUNCTION(BlueprintCallable)
    void SetColor(FColor color);

    // Method for getting the index of the sheet.
    UFUNCTION(BlueprintCallable)
    int32 Index() ;

    // Method for setting the index of the sheet. This effectively moves the sheet to a different position.
    UFUNCTION(BlueprintCallable)
        void SetIndex(int32 index);

    //Method to retrieve the name of the sheet.
    UFUNCTION(BlueprintCallable)
    FString Name() ;

    // Method for renaming the sheet.
    UFUNCTION(BlueprintCallable)
    void SetName(FString name);

    UFUNCTION(BlueprintCallable)
    void SetSelected(bool selected);

    UFUNCTION(BlueprintCallable)
        bool IsWorksheet();

    UFUNCTION(BlueprintCallable)
        bool IsChartsheet();
 
    // Method for cloning the sheet.
    UFUNCTION(BlueprintCallable)
    void Clone(FString newName);
  
    UFUNCTION(BlueprintCallable)
    UXLWorksheet* ToWorksheet();    // NOLINT

    UFUNCTION(BlueprintCallable)
        UXLChartsheet* ToChartsheet() ;    // NOLINT
protected:
    OpenXLSX::XLSheet _Inner;

    friend class UXLWorkbook;

};
