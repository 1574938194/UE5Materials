// Fill out your copyright notice in the Description page of Project Settings.


#include "XLRowDataProxy.h"
#include <algorithm>
 
void UXLRowDataProxy::Fill(TArray<UXLCellValue*> ls)
{
	std::vector<OpenXLSX::XLCellValue> _New;
	_New.reserve(ls.Num());
 
	std::for_each(ls.begin(), ls.end(),
		[&_New](auto&it)
		{
			_New.push_back(it->_Inner);
		}
	);

	_Inner =  _New;
}
 
void UXLRowDataProxy::FillInteger(TArray<int64> ls)
{
	std::vector<int64> _New;
	_New.reserve(ls.Num());
	std::for_each(ls.begin(), ls.end(),
		[&_New](auto& it)
		{
			_New.push_back(it);
		}
	);
	_Inner = _New;

}
 
void UXLRowDataProxy::FillString(TArray<FString> ls)
{
	std::vector<std::string> _New;
	_New.reserve(ls.Num());
	std::for_each(ls.begin(), ls.end(),
		[&_New](auto& it)
		{
			_New.push_back(std::string(TCHAR_TO_UTF8(*it)));
		}
	);
	_Inner = _New;
}
 
void UXLRowDataProxy::FillFloat(TArray<float> ls)
{
	std::vector<double> _New;
	_New.reserve(ls.Num());
	std::for_each(ls.begin(), ls.end(),
		[&_New](auto& it)
		{
			_New.push_back((double)it);
		}
	);
	_Inner = _New;
}
 
void UXLRowDataProxy::FillDateTime(TArray<FDateTime> ls)
{
	std::vector<double> _New;
	_New.reserve(ls.Num());  
	std::for_each(ls.begin(), ls.end(),
		[&_New](auto& it)
		{
			_New.push_back(OpenXLSX::XLDateTime(it.GetTicks()));
		}
	);
	_Inner = _New;
}
 
TArray<UXLCellValue*> UXLRowDataProxy::Get()
{
	auto ls = (std::vector<OpenXLSX::XLCellValue>)_Inner;
	TArray<UXLCellValue*> ret;
	ret.Reserve(ls.size());
	std::for_each(ls.begin(), ls.end(),
		[&ret](auto& it)
		{
			auto obj = NewObject<UXLCellValue>();
			obj->_Inner = std::move( it);
			ret.Add(obj);
		});

	return ret;
}
 
TArray<int64> UXLRowDataProxy::AsInteger()
{
	auto ls = (std::vector<int64>)_Inner;
	TArray<int64> ret;
	ret.Reserve(ls.size());
	std::for_each(ls.begin(), ls.end(),
		[&ret](auto& it)
		{ 
			ret.Add(it);
		});

	return ret;
}
 
TArray<float> UXLRowDataProxy::AsFloat()
{
	auto ls = (std::vector<double>)_Inner;
	TArray<float> ret;
	ret.Reserve(ls.size());
	std::for_each(ls.begin(), ls.end(), 
		[&ret](auto& it)
		{
			ret.Add((float)it);
		});

	return ret;
}
 
TArray<FString> UXLRowDataProxy::AsString()
{
	
		auto ls = (std::vector<std::string>)_Inner;
		TArray<FString> ret;
		ret.Reserve(ls.size());
		std::for_each(ls.begin(), ls.end(), 
			[&ret](auto& it)
			{
				ret.Add( FString(it.c_str()));
			});

		return ret;
	
}
 
TArray<FDateTime> UXLRowDataProxy::AsDateTime()
{
	
		auto ls = (std::vector<double>)_Inner;
		TArray<FDateTime> ret;
		ret.Reserve(ls.size());
		std::for_each(ls.begin(), ls.end(),
			[&ret](auto& it)
			{
				ret.Add(FDateTime((int64)it));
			});

		return ret;
	
}
 
void UXLRowDataProxy::Clear()
{
	_Inner.clear();
}