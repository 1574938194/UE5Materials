// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLCellRange.hpp"
#include "CellReference.h"
#include "Cell.h"
#include "CellIterator.generated.h"
 
struct FCellRange;

USTRUCT(BlueprintType, Meta = (HasNativeMake, HasNativeBreak))
struct FREEEXCEL_API FCellIterator
{
    GENERATED_BODY()
public:
    using iterator_category = std::forward_iterator_tag;
    using value_type = UCell;
    using difference_type = int64_t;
    using pointer = UCell*;
    using reference = UCell&;
  
    FCellIterator() = default;
    FCellIterator(const FCellIterator& right)
        : Current(right.Current) ,min(right.min), max(right.max), reached(right.reached)
    {
        if (right.dataNode)
        {
            dataNode = std::make_unique<OpenXLSX::XMLNode>(*right.dataNode);
            shared_string = right.shared_string;
            cell = right.cell;
        } 
    }
    FCellIterator& operator =(const FCellIterator& right)
    {
        if (&right != this) {
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
                shared_string = right.shared_string;
                cell = right.cell;
            }
            min = right.min;
            max = right.max;
            Current = right.Current;
            reached = right.reached;
        }
        return *this;
    }

    FCellIterator& operator++();
     
    FCellIterator operator++(int);    // NOLINT
     
    reference operator*() const;
     
    pointer operator->()const;

    bool operator==(const FCellIterator& right)const;

    bool operator!=(const FCellIterator& right) const
    { 
        return !(*this == right);
    }
     
    FCellReference          Current;
protected:
    std::unique_ptr<OpenXLSX::XMLNode> dataNode;             /**< */
    FCellReference          min;              /**< The cell reference of the first cell in the range */
    FCellReference          max;          /**< The cell reference of the last cell in the range */
    OpenXLSX::XLCell         cell;          /**< */
    OpenXLSX::XLSharedStrings  shared_string;        /**< */
    bool       reached{ false }; /**< */

    friend struct FCellRange;
};

  