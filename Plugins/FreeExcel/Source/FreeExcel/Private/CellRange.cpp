// Fill out your copyright notice in the Description page of Project Settings.


#include "CellRange.h"

namespace OpenXLSX
{
    XMLNode getRowNode(XMLNode sheetDataNode, uint32_t rowNumber);
    XMLNode getCellNode(XMLNode rowNode, uint16_t columnNumber);
}    // namespace OpenXLSX

CellIterator& CellIterator::operator++()
{ 
    FCellReference& ref = Current;

    // ===== Determine the cell reference for the next cell.
    if (ref.Col < max.Col)
    {
        ref.Col++;
    }
    else if (ref == max)
    {
        reached = true;
    }
    else
    {
        ref = { ref.Row + 1, min.Col };
    }

    if (dataNode)
    {
        if (reached)
        {
            cell = OpenXLSX::XLCell();
        }
        else if ((max.Row < ref.Row || (max.Row <= ref.Row && max.Col < ref.Col))
            || ref.Row == cell.cellReference().row())
        {
            auto node = cell.m_cellNode->next_sibling();
            OpenXLSX::XLCellReference xRef(node.attribute("r").value());
            if (!node || (xRef.row() != ref.Row || xRef.column() != ref.Col))
            {
                node = cell.m_cellNode->parent().insert_child_after("c", *cell.m_cellNode);
                node.append_attribute("r").set_value(std::string(TCHAR_TO_UTF8(*ref.to_string())).c_str());
            }
            cell = OpenXLSX::XLCell(node, shared_string);
        }
        else if (ref.Row > (decltype(FCellReference::Row))cell.cellReference().row())
        {
            auto rowNode = cell.m_cellNode->parent().next_sibling();
            if (!rowNode || rowNode.attribute("r").as_ullong() != ref.Row) {
                rowNode = cell.m_cellNode->parent().parent().insert_child_after("row", cell.m_cellNode->parent());
                rowNode.append_attribute("r").set_value(ref.Row);
                // getRowNode(*m_dataNode, ref.row());
            }

            cell = OpenXLSX::XLCell(OpenXLSX::getCellNode(rowNode, ref.Col), shared_string);
        }
        else
        {
            // error
        }
    }
     
    return *this;
}

CellIterator CellIterator::operator++(int)    // NOLINT
{
    auto oldIter(*this);
    ++(*this);
    return oldIter;
}


UCell& CellIterator::operator*()
{
    auto ret = NewObject<UCell>();
    ret->_Inner = cell;
    return *ret;
}


CellIterator::pointer CellIterator::operator->()
{
    auto ret = NewObject<UCell>();
    ret->_Inner = cell;
    return ret;
}

CellIterator FCellRange::begin() const
{
    CellIterator ret;

    ret.dataNode = std::make_unique<OpenXLSX::XMLNode>(*dataNode);
    ret.min = Min;
    ret.max = Max;
    ret.shared_string = sharedStrings;
    ret.cell = OpenXLSX::XLCell();
    ret.Current = ret.min;
    return ret;
}

 
CellIterator FCellRange::end() const
{
    CellIterator ret;

    ret.dataNode = std::make_unique<OpenXLSX::XMLNode>(*dataNode);
    ret.min = Min;
    ret.max = Max;
    ret.shared_string = sharedStrings;
    ret.cell = OpenXLSX::XLCell(
        OpenXLSX::getCellNode(
        OpenXLSX::getRowNode(*dataNode, Min.Row)
        ,Min.Col),
        sharedStrings);
    ret.Current = ret.max;
    return ret;
}
