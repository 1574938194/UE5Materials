// Fill out your copyright notice in the Description page of Project Settings.
#pragma optimize("",off)

#include "Sheet.h"
#include "CellValue.h"
#include "ExcelDocument.h"


FString USheet::Name() const
{ 
	return FString(doc_->sheetName(id_).c_str());
}
 
void USheet::SetName(FString sheetName)
{ 
    doc_->SetSheetName(id_, sheetName);
}
  
TArray<FCellValue> USheet::GetRowData(int32 row)const
{
	TArray<FCellValue> ret;  
    auto rowNode = UExcelDocument::getRowNode(data_->xmlDocument().first_child().child("sheetData"), row);
    for (auto& it : rowNode)
    {   
        ret.Emplace(UCell::to_value(this,it));
    } 
	return ret;
}
TArray<float> USheet::GetRowFloatData(int32 row ,bool skip0)const
{
	TArray<float> ret;

    auto rowNode = UExcelDocument::getRowNode(data_->xmlDocument().first_child().child("sheetData"), row);
    
    for (auto& it : rowNode)
    {
        if (skip0)
        {
            skip0 = false;
            continue;
        }
        ret.Emplace (it.child("v").text().as_float());
    }
    return ret; 
}
 
UCell* USheet::Cell(FCellReference cellRef) const
{
    auto cellNode = XMLNode();
    auto rowNode = UExcelDocument::getRowNode(data_->xmlDocument().first_child().child("sheetData"), cellRef.Row);

    // ===== If there are no cells in the current row, or the requested cell is beyond the last cell in the row...
    if (rowNode.last_child().empty() || FCellReference(rowNode.last_child().attribute("r").value()).Col < cellRef.Col) {
        // if (rowNode.last_child().empty() ||
        // XLCellReference::CoordinatesFromAddress(rowNode.last_child().attribute("r").getValue()).second < columnNumber) {
        rowNode.append_child("c").append_attribute("r").set_value(cellRef.to_string().c_str());
        cellNode = rowNode.last_child();
    }
    // ===== If the requested node is closest to the end, start from the end and search backwards...
    else if (FCellReference(rowNode.last_child().attribute("r").value()).Col - cellRef.Col < cellRef.Col) {
        cellNode = rowNode.last_child();
        while (FCellReference(cellNode.attribute("r").value()).Col > cellRef.Col) cellNode = cellNode.previous_sibling();
        if (FCellReference(cellNode.attribute("r").value()).Col < cellRef.Col) {
            cellNode = rowNode.insert_child_after("c", cellNode);
            cellNode.append_attribute("r").set_value(cellRef.to_string().c_str());
        }
    }
    // ===== Otherwise, start from the beginning
    else {
        cellNode = rowNode.first_child();
        while (FCellReference(cellNode.attribute("r").value()).Col < cellRef.Col) cellNode = cellNode.next_sibling();
        if (FCellReference(cellNode.attribute("r").value()).Col > cellRef.Col) {
            cellNode = rowNode.insert_child_before("c", cellNode);
            cellNode.append_attribute("r").set_value(cellRef.to_string().c_str());
        }
    }
    UCell* ret = NewObject<UCell>();
    ret->sheet = const_cast<USheet*>(this);
    ret->cellNode = cellNode;
    return ret;
}

int32 USheet::GetRowCellCount(int32 row)const
{
    auto sheetDataNode = data_->xmlDocument().first_child().child("sheetData");
    FCellReference ref = { UExcelDocument::getRowNode(sheetDataNode, row).last_child().attribute("r").value() };
    return ref.Col;
}

FCellReference  USheet::LastCell() const noexcept
{
    auto sheetDataNode = data_->xmlDocument().first_child().child("sheetData");
    FCellRange range("A1", sheetDataNode.last_child() ? sheetDataNode.last_child().attribute("r").value() : "A1");
    int32 colNum = 0;
    auto it = range.begin();
    for (int i = range.Min.Row; i < range.Max.Row; ++i)
    {
        colNum = std::max(colNum, it.rowCellCount());
        it.next_row();
    }


    return { range.Max.Row, colNum };
}
