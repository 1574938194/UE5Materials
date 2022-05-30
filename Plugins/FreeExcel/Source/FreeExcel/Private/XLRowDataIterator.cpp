// Fill out your copyright notice in the Description page of Project Settings.


#include "XLRowDataIterator.h"
 
 
UXLRowDataIterator* UXLRowDataIterator::Forward()
{
	++_Inner;
	return this;
}

 
UXLCell* UXLRowDataIterator::Get()
{ 
	auto ret = NewObject<UXLCell>();
	ret->_Inner = std::move(*_Inner);

	return ret;
}

 
bool UXLRowDataIterator::Equal(UXLRowDataIterator* other)
{
	return _Inner == other->_Inner;
}
 
bool UXLRowDataIterator::NotEqual(UXLRowDataIterator* other)
{
	return _Inner != other->_Inner;
}