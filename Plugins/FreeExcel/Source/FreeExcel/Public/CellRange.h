// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLCellRange.hpp"
#include "CellReference.h"
#include "Cell.h"
#include "CellRange.generated.h"
 
struct FCellRange;

class FREEEXCEL_API CellIterator
{
public:
    using iterator_category = std::forward_iterator_tag;
    using value_type = UCell;
    using difference_type = int64_t;
    using pointer = UCell*;
    using reference = UCell&;
  
    CellIterator() = default;
    CellIterator(const CellIterator& right)
    {
        if (&right != this) {
            *dataNode = *right.dataNode;
            min = right.min;
            max = right.max;
            cell = right.cell;
            Current = right.Current;
            shared_string = right.shared_string;
        }
         
    }

    CellIterator& operator++();
     
    CellIterator operator++(int);    // NOLINT
     
    reference operator*();
     
    pointer operator->(); 

    bool operator==(const CellIterator& right)const
    {
        if (dataNode) return cell == right.cell;
        return Current == right.Current;
    }

    bool operator!=(const CellIterator& right) const
    {
        if (dataNode) return cell != right.cell;
        return Current != right.Current;
    }

    UPROPERTY(EditAnywhere)
    FCellReference          Current;
private:
    std::unique_ptr<OpenXLSX::XMLNode> dataNode;             /**< */
    FCellReference          min;              /**< The cell reference of the first cell in the range */
    FCellReference          max;          /**< The cell reference of the last cell in the range */
    OpenXLSX::XLCell         cell;          /**< */
    OpenXLSX::XLSharedStrings  shared_string;        /**< */
    bool       reached{ false }; /**< */

    friend struct FCellRange;
};

 

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
    { 
            *dataNode = *right.dataNode;
            sharedStrings = right.sharedStrings;
        
    }
    FCellRange& operator=(const FCellRange& right)
    {
        if (&right != this)
        {
            *dataNode = *right.dataNode; 
            sharedStrings = right.sharedStrings;
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

    CellIterator begin() const;

    CellIterator end() const;

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
    friend class UCellIterator;
    friend class UFreeExcelFunctionLibrary;
};