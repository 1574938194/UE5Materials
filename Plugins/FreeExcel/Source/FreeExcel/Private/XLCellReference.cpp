// Fill out your copyright notice in the Description page of Project Settings.


#include "XLCellReference.h"


void UXLCellReference::Forward()
{
	++_Inner;
}


void UXLCellReference::Backward()
{
	--_Inner;
}


int32 UXLCellReference::Row()
{
	return _Inner.row();
}


void UXLCellReference::SetRow(int32 row)
{
	_Inner.setRow(row);
}


int32 UXLCellReference::Col()
{
	return _Inner.column();
}


void UXLCellReference::SetCol(int32 col)
{
	_Inner.setColumn(col);
}


void UXLCellReference::Set(int32 row, int32 col)
{
	_Inner.setRowAndColumn(row, col);
}


FString UXLCellReference::Address()
{
	return FString(_Inner.address().c_str());
}


void  UXLCellReference::SetAddress(FString addr)
{
	_Inner.setAddress(std::string(TCHAR_TO_UTF8(*addr)));
}


bool  UXLCellReference::Equal(UXLCellReference* right)
{
	return _Inner == right->_Inner;
}


bool  UXLCellReference::NotEqual(UXLCellReference* right)
{
	return _Inner != right->_Inner;
}


bool  UXLCellReference::Less(UXLCellReference* right)
{
	return _Inner < right->_Inner;
}


bool  UXLCellReference::Greater(UXLCellReference* right)
{
	return _Inner > right->_Inner;
}


bool  UXLCellReference::GreaterEqual(UXLCellReference* right)
{
	return _Inner >= right->_Inner;
}


bool  UXLCellReference::LessEqual(UXLCellReference* right)
{
	return _Inner <= right->_Inner;
}

UXLCellReference* UXLCellReference::MakeCellReference(FString ref)
{
	auto ret = NewObject<UXLCellReference>(); 
	ret->_Inner = std::move(OpenXLSX::XLCellReference(std::string(TCHAR_TO_UTF8(*ref))));

	return ret;
}