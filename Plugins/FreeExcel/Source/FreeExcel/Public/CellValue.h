// Fill out your copyright notice in the Description page of Project Settings.

#pragma once 
#include "CoreMinimal.h"
#include <cstdint>
#include <cmath>
#include <string>
#include "CellValue.generated.h"

UENUM(BlueprintType)
enum class EValueType :uint8 {
    Empty UMETA(DisplayName = "Empty"),
    Boolean UMETA(DisplayName = "Boolean"),
    Integer UMETA(DisplayName = "Integer"),
    Float UMETA(DisplayName = "Float"),
    Error,
    String UMETA(DisplayName = "String")
};



class UCell;
/**
 * 
 */
USTRUCT(BlueprintType, Meta = (HasNativeMake, HasNativeBreak))
struct FREEEXCEL_API FCellValue
{
    GENERATED_BODY()
public:
    FCellValue():RawText(TEXT("")),ival(0),_Type(EValueType::Empty) {}
    FCellValue(std::string sval) : RawText(sval.c_str())  ,_Type(EValueType::String)
    {
        try
        {

        }
        catch (...)
        {

        }
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
            _Type = EValueType::Boolean;
            ival = int(_Val);
            RawText = _Val? TEXT("true"):TEXT("false");
        }
        else if constexpr (std::is_integral_v<_Ty> && !std::is_same_v<_Ty, bool>) {
            _Type = EValueType::Integer;
            ival = int(_Val);
            RawText = FString::FromInt(_Val);
        }
        else if constexpr (std::is_same_v<std::decay_t<_Ty>, std::string> ||
            std::is_same_v<std::decay_t<_Ty>, std::wstring> ||
#if __cplusplus >=201703L
             std::is_same_v<std::decay_t<T>, std::string_view> ||
             std::is_same_v<std::decay_t<T>, std::wstring_view>||
#endif
            std::is_same_v<std::decay_t<_Ty>, const char*> ||
            std::is_same_v<std::decay_t<_Ty>, const wchar_t*> ||
            std::is_same_v<std::decay_t<_Ty>, FString> ||
            (std::is_same_v<std::decay_t<_Ty>, char*> && !std::is_same_v<_Ty, bool>)||
            (std::is_same_v<std::decay_t<_Ty>, wchar_t*> && !std::is_same_v<_Ty, bool>))
        {
            _Type = EValueType::String;
            ival = 0;
            RawText = _Val;
        }  
        else if constexpr (std::is_same_v<_Ty, FDateTime>) {
            _Type = EValueType::Float;
            fval = datetime_to_serial(_Val);
            RawText = _Val.ToString();
        } 
        else if constexpr (std::is_same_v<_Ty, FCellValue>)
        {
            _Type = _Val._Type;
            ival = _Val.ival;
            RawText = _Val.RawText;
        }
        else {
            static_assert(std::is_floating_point_v<_Ty>, "Invalid argument for constructing FCellValue object");
            _Type = EValueType::Float;
            fval = _Val;
            RawText = FString::SanitizeFloat(_Val);
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
            return (bool)(ival);
        else  if constexpr (std::is_integral_v<_Ty> && !std::is_same_v<_Ty, bool>)
            return ival;
        else if constexpr (std::is_floating_point_v<_Ty>)
            return fval;
        else if constexpr (std::is_same_v<std::decay_t<_Ty>, std::string> ||
#if __cplusplus >=201703L
            std::is_same_v<std::decay_t<T>, std::string_view> ||
#endif
            std::is_same_v<std::decay_t<_Ty>, const char*> ||
            (std::is_same_v<std::decay_t<_Ty>, char*> && !std::is_same_v<_Ty, bool>))
            return std::string(*RawText);
        else if constexpr (std::is_same_v<std::decay_t<_Ty>, std::wstring> ||
#if __cplusplus >=201703L
            std::is_same_v<std::decay_t<T>, std::wstring_view> ||
#endif
            std::is_same_v<std::decay_t<_Ty>, FString> ||
            std::is_same_v<std::decay_t<_Ty>, const wchar_t*> ||
            (std::is_same_v<std::decay_t<_Ty>, wchar_t*> && !std::is_same_v<_Ty, bool>))
            return *RawText;
        else if constexpr (std::is_same_v<std::decay_t<_Ty>, FString>)
        {
            return RawText;
        }
        else if constexpr (std::is_same_v<_Ty, FDateTime>)
        { 
            return serial_to_datetime(fval);
        }
        else if constexpr (std::is_same_v<_Ty, FCellValue>)
        {
            return *this;
        }

    }
  
    FString ToString() const
    {
        return RawText;
    }

    void clear()
    {
        _Type = EValueType::Empty;
        ival = 0;
        RawText.Empty();
    }
      
    EValueType type()const
    {
        return _Type;
    }


protected:
    static bool isLeapYear(int year) {

        if (year == 1900) return true;
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            return true;
        return false;
    }

    static int daysInMonth(int month, int year)
    {
        if (month > 12 || month < 1) return 0;
        if (month % 2)
        {
            return 31;
        }
        else if (month != 2)
        {
            return 30;
        }
        else
        {
            return (isLeapYear(year) ? 29 : 28);
        }
#pragma region daysInMonth
        /*  switch (month) {
          case 1:
              return 31;
          case 2:
              return (isLeapYear(year) ? 29 : 28);
          case 3:
              return 31;
          case 4:
              return 30;
          case 5:
              return 31;
          case 6:
              return 30;
          case 7:
              return 31;
          case 8:
              return 31;
          case 9:
              return 30;
          case 10:
              return 31;
          case 11:
              return 30;
          case 12:
              return 31;
          default:
              return 0;
          }*/
#pragma endregion
    }

    static double datetime_to_serial(FDateTime& dt)
    {
        double serial = 1.0;
        int year = dt.GetYear() - 1900,
            mon = dt.GetMonth() - 1,
            day = dt.GetDay(),
            hour = dt.GetHour(),
            min = dt.GetMinute(),
            sec = dt.GetSecond(),
            millisec = dt.GetMillisecond();

        for (int i = 0; i < year; ++i) {
            serial += (isLeapYear(1900 + i) ? 366 : 365);
        }

        for (int i = 0; i < mon; ++i) {
            serial += daysInMonth(i + 1, year);
        }

        serial += day - 1;

        int32_t seconds = hour * 3600 + min * 60 + sec;
        serial += (seconds + millisec / 1000.0) / 86400.0;
        return serial;
    }

    static double unix_to_serial(time_t unixtime)
    {
        // There are 86400 seconds in a day
        // There are 25569 days between 1/1/1970 and 30/12/1899 (the epoch used by Excel)
        return static_cast<double>(unixtime) / 86400 + 25569;
    }
     
    static FDateTime serial_to_datetime(double serial)
    {
        int year = 0, mon = 0, day = 0, hour = 0, min = 0, sec = 0, millisec = 0;

        while (true) {
            auto days = (isLeapYear(year + 1900) ? 366 : 365);
            if (days > serial) break;
            serial -= days;
            ++year;
        }

        // ===== Count the number of whole months in the year.
        while (true) {
            auto days = daysInMonth(mon + 1, year);
            if (days > serial) break;
            serial -= days;
            ++mon;
        }

        day = static_cast<int>(serial);
        serial -= day;

        hour = static_cast<int>(serial * 24);
        serial -= (hour / 24.0);

        min = static_cast<int>(serial * 24 * 60);
        serial -= (min / (24.0 * 60.0));

        auto tsec = std::round(serial * 24 * 60 * 60);
        sec = static_cast<int>(std::floor(tsec));
        millisec = static_cast<int>((tsec - std::floor(tsec)) * 1000);

        return FDateTime(year + 1900, mon + 1, day, hour, min, sec, millisec);
    }

protected:
    FString RawText;
    union
    {
        float fval;
        int ival;
    };
    EValueType _Type ;                            
	friend class UCell;
    friend class UFreeExcelLibrary;
};

 