// Fill out your copyright notice in the Description page of Project Settings.


#include "XLWorksheet.h"

 
EXLSheetState UXLWorksheet::Visible()
{
	return (EXLSheetState)_Inner.visibility();
}
 
void UXLWorksheet::SetVisible(EXLSheetState state)
{
	_Inner.setVisibility((OpenXLSX::XLSheetState)state);
}
 
FColor UXLWorksheet::Color()
{
	auto c=  _Inner.color();
	return FColor(c.red(),c.green(),c.blue(),c.alpha());
}
 
void UXLWorksheet::SetColor(FColor color)
{
	_Inner.setColor(OpenXLSX::XLColor(color.R, color.G, color.B, color.A));
}
 
int32 UXLWorksheet::Index()
{
	return _Inner.index();
}
 
void UXLWorksheet::SetIndex(int32 index)
{
	_Inner.setIndex(index);
}

 
FString UXLWorksheet::Name()
{
	return FString(_Inner.name().c_str());
}

 
void UXLWorksheet::SetName(FString sheetName)
{
	std::string _Name1(TCHAR_TO_UTF8(*sheetName));
	_Inner.setName(_Name1);
}
 
bool UXLWorksheet::IsSelected()
{
	return _Inner.isSelected();
}
 
void UXLWorksheet::SetSelected(bool selected)
{
	_Inner.setSelected(selected);
}

bool UXLWorksheet::IsActive()
{
	return _Inner.isActive();
}

 
void UXLWorksheet::SetActive()
{
	_Inner.setActive();
}

 
void UXLWorksheet::Clone(FString newName)
{
	std::string _Name1(TCHAR_TO_UTF8(*newName));
	_Inner.clone(_Name1);
}
 
 
UXLCell* UXLWorksheet::Cell(FString ref)
{
	std::string _Name1(TCHAR_TO_UTF8(*ref));
	auto ret =  NewObject<UXLCell>();
	ret->_Inner = std::move(_Inner.cell(_Name1));

	return ret;
}
 
UXLCell* UXLWorksheet::CellWithRef(UXLCellReference* ref)
{ 
	auto ret = NewObject<UXLCell>();
	ret->_Inner = std::move(_Inner.cell(ref->_Inner));

	return ret;
}
 
UXLCell* UXLWorksheet::CellAt(int32 rowNumber, int32 columnNumber)
{
	auto ret = NewObject<UXLCell>();
	ret->_Inner = std::move(_Inner.cell(rowNumber, columnNumber));

	return ret;
}

 
UXLCellRange* UXLWorksheet::RangeInUse()
{
	auto ret = NewObject<UXLCellRange>();
	ret->_Inner = std::move(_Inner.range());

	return ret;
}

 
UXLCellRange* UXLWorksheet::Range(UXLCellReference* topLeft, UXLCellReference* bottomRight)
{
	auto ret = NewObject<UXLCellRange>();
	ret->_Inner = std::move(_Inner.range(topLeft->_Inner, bottomRight->_Inner));

	return ret;
}
 
UXLRowRange* UXLWorksheet::Rows()
{
	auto ret = NewObject<UXLRowRange>();
	ret->_Inner = std::move(_Inner.rows());

	return ret;
}
 
UXLRowRange* UXLWorksheet::RowsAt(int32 rowCount)
{
	auto ret = NewObject<UXLRowRange>();
	ret->_Inner = std::move(_Inner.rows(rowCount));

	return ret;
}
 
UXLRowRange* UXLWorksheet::RowsRange(int32 firstRow, int32 lastRow)
{
	auto ret = NewObject<UXLRowRange>();
	ret->_Inner = std::move(_Inner.rows(firstRow, lastRow));

	return ret;
}

 
UXLRow* UXLWorksheet::Row(int32 rowNumber)
{
	auto ret = NewObject<UXLRow>();
	ret->_Inner = std::move(_Inner.row(rowNumber));

	return ret;
}
 
UXLCellReference* UXLWorksheet::LastCell()
{
	auto ret = NewObject<UXLCellReference>();
	ret->_Inner = std::move(_Inner.lastCell());

	return ret;
}
 
int32 UXLWorksheet::ColCount()
{
	return _Inner.columnCount();
}
 
int32 UXLWorksheet::RowCount()
{
	return _Inner.rowCount();
}

 
void UXLWorksheet::UpdateSheetName(FString oldName, FString newName)
{
	std::string _Name1(TCHAR_TO_UTF8(*oldName));
	std::string _Name2(TCHAR_TO_UTF8(*newName));
	_Inner.updateSheetName(_Name1, _Name2);
}
