// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLRow.hpp"
#include "XLRowIterator.h"
#include "XLRowRange.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLRowRange : public UObject
{
	GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    int32 RowCount();

    UFUNCTION(BlueprintCallable)
    UXLRowIterator* Begin();

    UFUNCTION(BlueprintCallable)
    UXLRowIterator* End();
protected:
	OpenXLSX::XLRowRange _Inner;

    friend class UXLWorksheet;
};
