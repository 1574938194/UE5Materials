// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h" 
#include "CellReference.h"
#include "Cell.h"
#include "CellIterator.generated.h"
 
struct FCellRange;
class UFreeExcelLibrary;

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
        : dataNode(right.dataNode),
        Current(right.Current) ,
        min(right.min),
        max(right.max),
        reached(right.reached)
    {  }
    FCellIterator& operator =(const FCellIterator& right)
    {
        if (&right != this) {
            dataNode = right.dataNode; 
            min = right.min;
            max = right.max;
            Current = right.Current;
            reached = right.reached;
        }
        return *this;
    }

    FCellIterator& operator++();
     
    FCellIterator operator++(int);    // NOLINT

    pointer get()const;

    pointer operator->()const
    {
        return get();
    }

    void next_row();

    int32 rowCellCount() const
    {
        return FCellReference(dataNode.parent().last_child().attribute("r").value()).Col;
    }

    bool operator==(const FCellIterator& right)const;

    bool operator!=(const FCellIterator& right) const
    { 
        return !(*this == right);
    }
     
    
protected:
    XMLNode dataNode;
    FCellReference Current;
    FCellReference min;   
    FCellReference max;    
    bool reached{ false };

    friend struct FCellRange;
    friend class UFreeExcelLibrary;
};

  