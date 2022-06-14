// Fill out your copyright notice in the Description page of Project Settings.


#include "CellReference.h"
#include <cmath>
 
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
	if (Row<1 || Row> max_rows)
    {
		Row = 1;
	}
    if (Col<1 || Col> max_cols)
    {
        Col = 1;
    }
}

std::string FCellReference::to_string() const
{
    std::string _Col;
    if (Col <= alphabetSize)
    {
        // ===== If there is one letter in the Column Name:
        _Col.append(1, char(Col + asciiOffset));
    } 
    else if (Col > alphabetSize && Col <= alphabetSize * (alphabetSize + 1)) {
        // ===== If there are two letters in the Column Name:
        _Col.append(1, char((Col - (alphabetSize + 1)) / alphabetSize + asciiOffset + 1));
        _Col.append(1, char((Col - (alphabetSize + 1)) % alphabetSize + asciiOffset + 1));
    } 
    else {
        // ===== If there is three letters in the Column Name:
        _Col.append(1, char((Col - 703) / (alphabetSize * alphabetSize) + asciiOffset + 1));  
        _Col.append(1, char(((Col - 703) / alphabetSize) % alphabetSize + asciiOffset + 1));
        _Col.append(1, char((Col - 703) % alphabetSize + asciiOffset + 1)); 
    }
 
    return _Col +  std::to_string(Row);
}

