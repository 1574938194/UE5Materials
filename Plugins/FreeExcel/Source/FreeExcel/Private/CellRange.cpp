// Fill out your copyright notice in the Description page of Project Settings.


#include "CellRange.h"
#include "CellIterator.h"

namespace OpenXLSX
{
    XMLNode getRowNode(XMLNode sheetDataNode, uint32_t rowNumber);
    XMLNode getCellNode(XMLNode rowNode, uint16_t columnNumber);
} 
FCellIterator FCellRange::begin() const
{
    FCellIterator ret;

    if (dataNode)
    {
        ret.dataNode = std::make_unique<OpenXLSX::XMLNode>(*dataNode);
        ret.shared_string = sharedStrings;
        ret.cell = OpenXLSX::XLCell(
            OpenXLSX::getCellNode(
                OpenXLSX::getRowNode(*dataNode, Min.Row)
                , Min.Col),
            sharedStrings);
    };
    ret.min = Min;
    ret.max = Max; 
    ret.Current = ret.min;
    return ret;
}

 
FCellIterator FCellRange::end() const
{
    FCellIterator ret;

    if (dataNode)
    {
        ret.dataNode = std::make_unique<OpenXLSX::XMLNode>(*dataNode);
        ret.shared_string = sharedStrings;
        ret.cell = OpenXLSX::XLCell();
    }
    ret.min = Min;
    ret.max = Max; 
    ret.Current = ret.max;
    return ret;
}
