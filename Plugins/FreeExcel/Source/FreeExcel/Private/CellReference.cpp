// Fill out your copyright notice in the Description page of Project Settings.


#include "CellReference.h"
#include <cmath>
#pragma optimize("",off)
FCellReference::FCellReference(FString ref)
{  
	if (!ref.IsEmpty())
	{
		uint64_t letterCount = 0;
		for (auto letter : ref) {
			if (letter >= 65)  // NOLINT
				++letterCount;
			else if (letter <= 57)  // NOLINT
				break;
		}

		auto numberCount = ref.Len() - letterCount;

		Row = FCString::Atoi(*ref.Mid(letterCount, numberCount));

        auto colStr = ref.Mid(0, letterCount);
        int32 result = 0;

        for (int32 i = static_cast<int32>(colStr.Len() - 1), j = 0; i >= 0; --i, ++j)
        {
            result += static_cast<int32>((colStr[static_cast<uint64_t>(i)] - asciiOffset) * std::pow(alphabetSize, j));
        }
         
        Col = result;
	}
	if (!address_is_valid(Row,Col)) {
		Row = 1;
		Col = 1;
	}
}

FString FCellReference::to_string() const
{
    FString _Col; 
    if (Col <= alphabetSize)
    {
        // ===== If there is one letter in the Column Name:
        _Col.AppendChar(TCHAR(Col + asciiOffset));
    } 
    else if (Col > alphabetSize && Col <= alphabetSize * (alphabetSize + 1)) {
        // ===== If there are two letters in the Column Name:
        _Col.AppendChar (TCHAR((Col - (alphabetSize + 1)) / alphabetSize + asciiOffset + 1));
        _Col.AppendChar (TCHAR((Col - (alphabetSize + 1)) % alphabetSize + asciiOffset + 1));
    } 
    else {
        // ===== If there is three letters in the Column Name:
        _Col.AppendChar( TCHAR((Col - 703) / (alphabetSize * alphabetSize) + asciiOffset + 1));  // NOLINT
        _Col.AppendChar (TCHAR(((Col - 703) / alphabetSize) % alphabetSize + asciiOffset + 1));  // NOLINT
        _Col.AppendChar( TCHAR((Col - 703) % alphabetSize + asciiOffset + 1));  // NOLINT
    }
 
    return _Col +  FString::FromInt(Row);
}

