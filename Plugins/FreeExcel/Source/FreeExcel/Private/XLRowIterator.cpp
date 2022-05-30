// Fill out your copyright notice in the Description page of Project Settings.


#include "XLRowIterator.h"

 
UXLRowIterator* UXLRowIterator::Forward()
{
	_Inner++;
	return this;
}
  
UXLRow* UXLRowIterator::Get()
{ 
	auto ret = NewObject<UXLRow>();
	ret->_Inner = std::move(*_Inner);

	return ret;
}
 
bool UXLRowIterator::Equal(UXLRowIterator* right)
{
	return _Inner == right->_Inner;
}
 
bool UXLRowIterator::NotEqual(UXLRowIterator* right)
{
	return _Inner != right->_Inner;
}
