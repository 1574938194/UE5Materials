// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLSheet.hpp"
#include "XLSheetState.h"
#include "XLChartsheet.generated.h"
 
class UXLWorkbook;
/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLChartsheet : public UObject
{
	GENERATED_BODY()
public:

    UFUNCTION(BlueprintCallable)
        EXLSheetState Visible();

    UFUNCTION(BlueprintCallable)
        void SetVisible(EXLSheetState state);

    UFUNCTION(BlueprintCallable)
        FColor Color();

    UFUNCTION(BlueprintCallable)
        void SetColor(FColor color);

    UFUNCTION(BlueprintCallable)
        int32 Index();

    UFUNCTION(BlueprintCallable)
        void SetIndex(int32 index);

    UFUNCTION(BlueprintCallable)
        FString Name();

    UFUNCTION(BlueprintCallable)
        void SetName(FString sheetName);

    UFUNCTION(BlueprintCallable)
        bool IsSelected();

    UFUNCTION(BlueprintCallable)
        void SetSelected(bool selected);

    UFUNCTION(BlueprintCallable)
        void Clone(FString newName);
protected:
    OpenXLSX::XLChartsheet _Inner;

    friend class UXLWorkbook;
    friend class UXLSheet;
};
