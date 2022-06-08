// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLCellRange.hpp"
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
    FCellRange(const FCellRange& right)
        :Min(right.Min),Max(right.Max)
    { 
        if (right.dataNode)
        { 
            dataNode = std::make_unique<OpenXLSX::XMLNode>( *right.dataNode);
            sharedStrings = right.sharedStrings;
        }
    }
    FCellRange& operator=(const FCellRange& right)
    {
        if (&right != this)
        {
            if (right.dataNode)
            {
                if (dataNode)
                {
                    *dataNode = *right.dataNode;
                }
                else
                {
                    dataNode = std::make_unique<OpenXLSX::XMLNode>(*right.dataNode);
                }
                sharedStrings = right.sharedStrings;
            }
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

    /**< The cell reference of the first cell in the range */
    UPROPERTY(EditAnywhere)
        FCellReference          Min;
    /**< The cell reference of the last cell in the range */
    UPROPERTY(EditAnywhere)
        FCellReference          Max;

   
protected:
    std::unique_ptr<OpenXLSX::XMLNode> dataNode;    /**< */
    OpenXLSX::XLSharedStrings          sharedStrings;
    
    friend class USheet; 
    friend struct FCellIterator;
    friend class UFreeExcelLibrary;
};