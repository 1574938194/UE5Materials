// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenXLSX/include/headers/XLCellReference.hpp"
#include "CellReference.generated.h"

 
class UFreeExcelLibrary;
/**
 * 
 */
USTRUCT(BlueprintType,Meta = (HasNativeMake, HasNativeBreak))
struct FREEEXCEL_API FCellReference 
{
	GENERATED_BODY()
public:
	FCellReference() {}
	FCellReference(const FCellReference&) = default;
	FCellReference(int32 r, int32 c) :Row(r),Col(c){ }
	FCellReference(FString ref);
	FCellReference(const std::string& ref) :FCellReference(FString(ref.c_str())){}
	FCellReference(const char* ref) :FCellReference(FString(ref)) {}
	FCellReference(const std::wstring& ref) :FCellReference(FString(ref.c_str())) {}
	FCellReference(const wchar_t* ref) :FCellReference(FString(ref)) {}

	UPROPERTY(EditAnywhere)
		int32 Row = { 1 };

	UPROPERTY(EditAnywhere)
		int32 Col {1};
	 
	FString to_string() const;
	 
	inline static bool address_is_valid(uint32_t row, uint16_t column)  {
		return !(row < 1 || row >  max_rows || column < 1 || column >  max_cols);
	}

	inline bool operator==(const FCellReference& right) const
	{
		return Row == right.Row && Col == right.Col;
	}
	inline bool operator!=(const FCellReference& right)const
	{
		return Row != right.Row || Col != right.Col;
	}
protected: 
	static constexpr uint8_t alphabetSize = 26;
	static constexpr uint8_t asciiOffset = 64;
	static constexpr uint16_t max_cols = 16384;
	static constexpr uint32_t max_rows = 1048576;


	friend class USheet;
	friend class UFreeExcelLibrary;
};
