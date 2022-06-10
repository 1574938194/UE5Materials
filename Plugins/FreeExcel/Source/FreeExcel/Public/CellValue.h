// Fill out your copyright notice in the Description page of Project Settings.

#pragma once 
#include "XLValueType.h"
#include "CoreMinimal.h"
#include <cstdint>
#include <string>
#if __cplusplus >= 201703L
#include <variant>
using namespace std;
#else
#include "OpenXLSX/include/headers/variant.hpp"
using namespace mapbox::util;
#endif
#include "CellValue.generated.h"

class UCell;
/**
 * 
 */
USTRUCT(BlueprintType, Meta = (HasNativeMake, HasNativeBreak))
struct FREEEXCEL_API FCellValue
{
    GENERATED_BODY()
public:
    FCellValue() {}
    FCellValue(const variant<std::string, int32, float, bool>& val , EXLValueType t)
        :_Value(val),_Type(t)
    {

    }

    template<
        typename _Ty,
        typename std::enable_if<
        std::is_same_v<_Ty, FCellValue>||
        std::is_integral_v<_Ty> ||
        std::is_floating_point_v<_Ty> || 
        std::is_same_v<std::decay_t<_Ty>, std::string> ||
        std::is_same_v<std::decay_t<_Ty>, std::wstring> ||
#if __cplusplus >=201703L
        std::is_same_v<std::decay_t<T>, std::string_view> ||
        std::is_same_v<std::decay_t<T>, std::wstring_view> ||
#endif
        std::is_same_v<std::decay_t<_Ty>, FString> ||
        std::is_same_v<std::decay_t<_Ty>, const wchar_t*> ||
        std::is_same_v<std::decay_t<_Ty>, wchar_t*> ||
        std::is_same_v<std::decay_t<_Ty>, const char*> ||
        std::is_same_v<std::decay_t<_Ty>, char*> ||
        std::is_same_v<_Ty, FDateTime>>::type* = nullptr>
        FCellValue(_Ty _Val)
    {
        if constexpr (std::is_integral_v<_Ty> && std::is_same_v<_Ty, bool>) {
            _Type = EXLValueType::Boolean;
            _Value = _Val;
        }
        else if constexpr (std::is_integral_v<_Ty> && !std::is_same_v<_Ty, bool>) {
            _Type = EXLValueType::Integer;
            _Value = int32(_Val);
        }
        else if constexpr (std::is_same_v<std::decay_t<_Ty>, std::string> ||
            std::is_same_v<std::decay_t<_Ty>, std::wstring>
#if __cplusplus >=201703L
            || std::is_same_v<std::decay_t<T>, std::string_view>
            || std::is_same_v<std::decay_t<T>, std::wstring_view>
#endif
            )
        {
            _Type = EXLValueType::String;
            _Value = std::string(_Val.c_str());
        }
        else if constexpr(
            std::is_same_v<std::decay_t<_Ty>, const char*> ||
            std::is_same_v<std::decay_t<_Ty>, const wchar_t*> ||
            (std::is_same_v<std::decay_t<_Ty>, char*> && !std::is_same_v<_Ty, bool>)||
            (std::is_same_v<std::decay_t<_Ty>, wchar_t*> && !std::is_same_v<_Ty, bool>))
        {
            _Type = EXLValueType::String;
            _Value = std::string(_Val);
        } 
        else if constexpr (std::is_same_v<std::decay_t<_Ty>, FString>)
        {
            _Type = EXLValueType::String;
            _Value = std::string(TCHAR_TO_UTF8(*_Val));
        }
        else if constexpr (std::is_same_v<_Ty, FDateTime>) {
            _Type = EXLValueType::Float;
            std::tm t;
            t.tm_year = _Val.GetYear() - 1900;
            t.tm_mon = _Val.GetMonth() - 1;
            t.tm_mday = _Val.GetDay();
            t.tm_hour = _Val.GetHour();
            t.tm_min = _Val.GetMinute();
            t.tm_sec = _Val.GetSecond();
            _Value = (float)OpenXLSX::XLDateTime(t).serial();
        } 
        else if constexpr (std::is_same_v<_Ty, FCellValue>)
        {
            _Type = _Val._Type;
            _Value = _Val._Value;
        }
        else {
            static_assert(std::is_floating_point_v<_Ty>, "Invalid argument for constructing FCellValue object");
            _Type = EXLValueType::Float;
            _Value = float(_Val);
        }
    }
    template<
        typename _Ty,
        typename std::enable_if<
        std::is_same_v<_Ty, FCellValue> ||
        std::is_integral_v<_Ty> ||
        std::is_floating_point_v<_Ty> ||
        std::is_same_v<std::decay_t<_Ty>, std::string> ||
        std::is_same_v<std::decay_t<_Ty>, std::wstring> ||
#if __cplusplus >=201703L
        std::is_same_v<std::decay_t<T>, std::string_view> ||
        std::is_same_v<std::decay_t<T>, std::wstring_view> ||
#endif
        std::is_same_v<std::decay_t<_Ty>, FString> ||
        std::is_same_v<std::decay_t<_Ty>, const wchar_t*> ||
        std::is_same_v<std::decay_t<_Ty>, wchar_t*> ||
        std::is_same_v<std::decay_t<_Ty>, const char*> ||
        std::is_same_v<std::decay_t<_Ty>, char*> ||
        std::is_same_v<_Ty, FDateTime>>::type* = nullptr>
        FCellValue& operator=(const _Ty& _Val)
    { 
        FCellValue temp(_Val);
        std::swap(*this, temp);
        return *this;
    }
      
    
    template<
        typename _Ty,
        typename std::enable_if<
        std::is_same_v<_Ty, FCellValue> ||
        std::is_integral_v<_Ty> ||
        std::is_floating_point_v<_Ty> ||
        std::is_same_v<std::decay_t<_Ty>, std::string> ||
        std::is_same_v<std::decay_t<_Ty>, std::wstring> ||
#if __cplusplus >=201703L
        std::is_same_v<std::decay_t<T>, std::string_view> ||
        std::is_same_v<std::decay_t<T>, std::wstring_view> ||
#endif
        std::is_same_v<std::decay_t<_Ty>, FString> ||
        std::is_same_v<std::decay_t<_Ty>, const wchar_t*> ||
        std::is_same_v<std::decay_t<_Ty>, wchar_t*> ||
        std::is_same_v<std::decay_t<_Ty>, const char*> ||
        std::is_same_v<std::decay_t<_Ty>, char*> ||
        std::is_same_v<_Ty, FDateTime>>::type* = nullptr>
        operator _Ty () const
    {

        if constexpr (std::is_integral_v<_Ty> && std::is_same_v<_Ty, bool>)
            return get<bool>(_Value);
        else  if constexpr (std::is_integral_v<_Ty> && !std::is_same_v<_Ty, bool>)
            return static_cast<_Ty>(get<int32>(_Value));
        else if constexpr (std::is_floating_point_v<_Ty>)
            return static_cast<_Ty>(get<float>(_Value));
        else if constexpr (std::is_same_v<std::decay_t<_Ty>, std::string> ||
#if __cplusplus >=201703L
            std::is_same_v<std::decay_t<T>, std::string_view> ||
#endif
            std::is_same_v<std::decay_t<_Ty>, const char*> ||
            (std::is_same_v<std::decay_t<_Ty>, char*> && !std::is_same_v<_Ty, bool>))
            return get<std::string>().c_str();
        else if constexpr (std::is_same_v<std::decay_t<_Ty>, std::wstring> ||
#if __cplusplus >=201703L
            std::is_same_v<std::decay_t<T>, std::wstring_view> ||
#endif
            std::is_same_v<std::decay_t<_Ty>, const wchar_t*> ||
            (std::is_same_v<std::decay_t<_Ty>, wchar_t*> && !std::is_same_v<_Ty, bool>))
            return std::wstring(*get<std::string>()).c_str();
        else if constexpr (std::is_same_v<std::decay_t<_Ty>, FString>)
        {
            return FString(get<std::string>(_Value).c_str());
        }
        else if constexpr (std::is_same_v<_Ty, FDateTime>)
        {
            auto tm = OpenXLSX::XLDateTime(get<float>(_Value)).tm();
            return FDateTime(tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec, 0);
        }
        else if constexpr (std::is_same_v<_Ty, FCellValue>)
        {
            return *this;
        }

    }
  
    FString ToString() const;

    void clear()
    {
        _Type = EXLValueType::Empty;
        _Value = std::string("");
    }
      
    EXLValueType type()const
    {
        return _Type;
    }

protected:
    variant<std::string, int32, float, bool> _Value{std::string( "") };                /**< The value contained in the cell. */
    EXLValueType                                      _Type{ EXLValueType::Empty }; /**< The value type of the cell. */
	friend class UCell;
    friend class UFreeExcelLibrary;
};

 