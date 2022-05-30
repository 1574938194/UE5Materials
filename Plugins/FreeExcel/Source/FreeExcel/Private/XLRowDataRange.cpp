// Fill out your copyright notice in the Description page of Project Settings.


#include "XLRowDataRange.h"
#include "XLRowDataIterator.h"

int32 UXLRowDataRange::Size()
{
	return _Inner.size();
}

 
UXLRowDataIterator* UXLRowDataRange::Begin()
{
	auto ret = NewObject<UXLRowDataIterator>();
	ret->_Inner = std::move(_Inner.begin());

	return ret;
}

 
UXLRowDataIterator* UXLRowDataRange::End()
{
	auto ret = NewObject<UXLRowDataIterator>();
	ret->_Inner = std::move(_Inner.end());

	return ret;
}