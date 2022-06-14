// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h" 
#include "CellReference.h"
#include "Cell.h"
#include "CellIterator.h"
#include "CellRange.generated.h"
  
class UFreeExcelLibrary;
/**
 * 
 */
USTRUCT(BlueprintType, Meta = (HasNativeMake, HasNativeBreak))
struct FREEEXCEL_API FCellRange
{ 
    GENERATED_BODY()
public: 
    FCellRange() = default;
    FCellRange(FCellReference min, FCellReference max)
        :Min(min),Max(max)
    {

    } 
    FCellRange(const FCellRange& right)
        :dataNode(right.dataNode),Min(right.Min),Max(right.Max){  }
    FCellRange& operator=(const FCellRange& right)
    {
        if (&right != this)
        {
            dataNode = right.dataNode;
            Min = right.Min;
            Max = right.Max;
        }
        return *this;
    }

    inline int32 rows() const
    {
        return Max.Row + 1 - Min.Row;
    }

    inline int16 cols()
    {
        return Max.Col + 1 - Min.Col;
    }

    FCellIterator begin() const;

    FCellIterator end() const;


   
protected:
    XMLNode dataNode;   
    /**< The cell reference of the first cell in the range */
    UPROPERTY(EditAnywhere)
        FCellReference Min;
    /**< The cell reference of the last cell in the range */
    UPROPERTY(EditAnywhere)
        FCellReference Max;

    friend class USheet; 
    friend struct FCellIterator;
    friend class UFreeExcelLibrary;
};
 