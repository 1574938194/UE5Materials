// Fill out your copyright notice in the Description page of Project Settings.
 
#include "CellIterator.h"
#include "ExcelDocument.h"
 
bool FCellIterator::operator==(const FCellIterator& right)const
{
    if (dataNode)
    {  
        if (dataNode && right.dataNode)
        {
            return *dataNode == *right.dataNode;
        }
        else if(dataNode || right.dataNode)
        {
            return false;
        }
        else
        {
            return true;
        } 
    }
    return Current == right.Current;
}

FCellIterator& FCellIterator::operator++()
{ 
    FCellReference ref = Current;

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
            dataNode = XMLNode();
        }
        else if ((max.Row < ref.Row || (max.Row <= ref.Row && max.Col < ref.Col))
            || ref.Row == Current.Row)
        {
            auto node = dataNode.next_sibling();
            FCellReference xRef(node.attribute("r").value());
            // if cell dosen't exist then create it
            if (!node || (xRef.Row != ref.Row || xRef.Col != ref.Col))
            {
                node = dataNode.parent().insert_child_after("c", dataNode);
                node.append_attribute("r").set_value(ref.to_string().c_str());
            }
            dataNode =  node;
        }
        else if (ref.Row > Current.Row)
        {
            auto rowNode = dataNode.parent().next_sibling();
            if (!rowNode || rowNode.attribute("r").as_ullong() != ref.Row) {
                rowNode = dataNode.parent().parent().insert_child_after("row", dataNode.parent());
                rowNode.append_attribute("r").set_value(ref.Row);
                // getRowNode(*m_dataNode, ref.row());
            }

            dataNode = UExcelDocument::getCellNode(rowNode, ref.Col);
        }
        else
        {
            // error
        }
    }
     
    return *this;
}

FCellIterator FCellIterator::operator++(int)    // NOLINT
{
    auto oldIter(*this);
    ++(*this);
    return oldIter;
}
  
FCellIterator::pointer FCellIterator::get() const
{
    auto ret = NewObject<UCell>();
    ret->cellNode = dataNode;
    return ret;
}
 
void FCellIterator::next_row()
{
    if (Current.Row < max.Row)
    {
        ++Current.Row;
        auto rowNode = dataNode.parent().next_sibling();
        if (!rowNode || rowNode.attribute("r").as_ullong() != Current.Row) {
            rowNode = dataNode.parent().parent().insert_child_after("row", dataNode.parent());
            rowNode.append_attribute("r").set_value(Current.Row);
            // getRowNode(*m_dataNode, ref.row());
        }

        dataNode = UExcelDocument::getCellNode(rowNode, Current.Col);
    }
}