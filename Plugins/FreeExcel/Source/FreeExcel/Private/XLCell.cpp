// Fill out your copyright notice in the Description page of Project Settings.


#include "XLCell.h"

  
UXLCellValueProxy* UXLCell::Value()
{ 
	auto ret = NewObject<UXLCellValueProxy>();
	ret->_Inner = std::move( _Inner.value());

	return ret;
}
 
UXLCellReference* UXLCell::CellReference()
{
	auto ret = NewObject<UXLCellReference>();
	ret->_Inner = std::move(_Inner.cellReference());

	return ret;
}
 
UXLCell* UXLCell::Offset(int32 rowOffset, int32 colOffset)
{
	auto ret = NewObject<UXLCell>();
	ret->_Inner = std::move(_Inner.offset(rowOffset,colOffset));

	return ret;
}
// 
//bool UXLCell::HasFormula()
//{
//	return _Inner.hasFormula();
//}
// 
//UXLFormulaProxy* UXLCell::Formula()
//{
//	auto ret = NewObject<UXLFormulaProxy>();
//	ret->_Inner =_Inner.formula();
//
//	return ret;
//}