// Fill out your copyright notice in the Description page of Project Settings.


#include "Sheet.h"
#include "OpenXLSX/include/headers/XLCellValue.hpp"


FString USheet::Name() const
{
	return FString(_Inner.name().c_str());
}
 
void USheet::SetName(FString sheetName)
{
	std::string _Name1(TCHAR_TO_UTF8(*sheetName));
	if (_Name1 != _Inner.name())
	{
		_Inner.updateSheetName(_Inner.name(), _Name1);
		_Inner.setName(_Name1);
	}
}
    
UCell* USheet::Cell(FCellReference ref)const
{ 
	auto ret =  NewObject<UCell>();  
	ret->_Inner = _Inner.cell(ref.Row, ref.Col);
	return ret;
}
  
FCellReference USheet::LastCell()const
{
	auto last = _Inner.lastCell();

	return { (decltype(FCellReference::Row))last.row(),(decltype(FCellReference::Col))last.column()} ;
}

bool USheet::HasCell(FCellReference ref)const
{
	return _Inner.cell(ref.Row, ref.Col).value().type() == OpenXLSX::XLValueType::Empty;
}


void USheet::SheetSize(int32& RowSize,int32& ColSize) const
{
	RowSize = _Inner.rowCount();
	ColSize=	_Inner.columnCount();
}
  
int32 USheet::GetRowCellCount(int32 row)const
{
	return _Inner.row(row).cellCount();
}
  
TArray<FCellValue> USheet::GetRowData(int32 row)const
{
	TArray<FCellValue> ret;
	std::vector<OpenXLSX::XLCellValue> ls = _Inner.row(row).values();
	ret.Reserve(ls.size());
	for (auto& it : ls)
	{ 
		ret.Emplace(FCellValue(it.m_value, (EXLValueType)it.m_type));
	}
	return ret;
}

TArray<float> USheet::GetRowFloatData(int32 row ,bool skip0)const
{
	TArray<float> ret;
	std::vector<OpenXLSX::XLCellValue> ls = _Inner.row(row).values();
	ret.Reserve(ls.size());
	auto it = ls.begin();
	if (skip0)
	{
		if (ls.size() == 0) return ret;
		++it;
	}
	for (; it!= ls.end(); ++it)
	{
		ret.Emplace((float)*it);
	}
	return ret;
}
 
