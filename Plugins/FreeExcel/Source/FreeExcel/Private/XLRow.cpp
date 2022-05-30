// Fill out your copyright notice in the Description page of Project Settings.


#include "XLRow.h"
 
float UXLRow::Height()
{
	return _Inner.height();
}
 
void UXLRow::SetHeight(float height)
{
	 _Inner.setHeight(height);
}
 
float UXLRow::Descent()
{
	return _Inner.descent();
}
 
void UXLRow::SetDescent(float descent)
{
	_Inner.setDescent(descent);
}
 
bool UXLRow::IsHidden()
{
	return _Inner.isHidden();
}
 
void UXLRow::SetHidden(bool state)
{
	_Inner.setHidden(state);
}
 
int32 UXLRow::RowNumber()
{
	return _Inner.rowNumber();
}
 
int32 UXLRow::CellCount()
{
	return _Inner.cellCount();
}
 
UXLRowDataProxy* UXLRow::Values()
{ 
	auto ret = NewObject<UXLRowDataProxy>();
	ret->_Inner = _Inner.values();

	return ret;
}
 
UXLRowDataRange* UXLRow::Cells()
{
	auto ret = NewObject<UXLRowDataRange>();
	ret->_Inner = std::move(_Inner.cells());

	return ret;
}
 
UXLRowDataRange* UXLRow::CellsAt(int32 cellCount)
{
	auto ret = NewObject<UXLRowDataRange>();
	ret->_Inner = std::move(_Inner.cells(cellCount));

	return ret;
}
 
UXLRowDataRange* UXLRow::CellsRange(int32 firstCell, int32 lastCell)
{
	auto ret = NewObject<UXLRowDataRange>();
	ret->_Inner = std::move(_Inner.cells(firstCell, lastCell));

	return ret;
}