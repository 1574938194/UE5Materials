// Fill out your copyright notice in the Description page of Project Settings.


#include "CellRange.h"
#include "CellIterator.h"
#include "ExcelDocument.h"
 
 
FCellIterator FCellRange::begin() const
{
    FCellIterator ret;
     
    ret.dataNode = dataNode; 
    
    ret.min = Min;
    ret.max = Max; 
    ret.Current = ret.min;
    return ret;
}

 
FCellIterator FCellRange::end() const
{
    FCellIterator ret;

    ret.dataNode = XMLNode();
    ret.min = Min;
    ret.max = Max; 
    ret.Current = ret.max;
    return ret;
}
