// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLRowData.hpp"
#include "XLRowDataRange.generated.h"

class UXLRowDataIterator;

/**
 * 
 */
UCLASS(BlueprintType)
class FREEEXCEL_API UXLRowDataRange : public UObject
{
	GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
        int32 Size() ;

    UFUNCTION(BlueprintCallable)
    UXLRowDataIterator* Begin();

    UFUNCTION(BlueprintCallable)
    UXLRowDataIterator* End();
protected:
    OpenXLSX::XLRowDataRange _Inner;

    friend class UXLRow;
};
