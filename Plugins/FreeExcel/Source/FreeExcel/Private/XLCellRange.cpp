// Fill out your copyright notice in the Description page of Project Settings.


#include "XLCellRange.h"

 
int32 UXLCellRange::NumRows()
{
	return _Inner.numRows();
}
 
int32 UXLCellRange::NumCols()
{
	return _Inner.numColumns();
}
 
UXLCellIterator* UXLCellRange::Begin()
{ 
	auto ret = NewObject<UXLCellIterator>();
	ret->_Inner = std::move(_Inner.begin());

	return ret;
}
 
UXLCellIterator* UXLCellRange::End()
{
	auto ret = NewObject<UXLCellIterator>();
	ret->_Inner = std::move(_Inner.end());

	return ret;
}
 
void UXLCellRange::Clear()
{
	_Inner.clear();
}