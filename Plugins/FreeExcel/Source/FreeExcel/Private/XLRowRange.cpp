// Fill out your copyright notice in the Description page of Project Settings.


#include "XLRowRange.h"


int32 UXLRowRange::RowCount()
{
	return _Inner.rowCount();
}

UXLRowIterator* UXLRowRange::Begin()
{
	auto ret = NewObject<UXLRowIterator>();
	ret->_Inner = std::move(_Inner.begin());

	return ret;
}


UXLRowIterator* UXLRowRange::End()
{
	auto ret = NewObject<UXLRowIterator>();
	ret->_Inner = std::move(_Inner.end());

	return ret;
}