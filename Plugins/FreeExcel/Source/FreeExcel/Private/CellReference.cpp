// Fill out your copyright notice in the Description page of Project Settings.


#include "CellReference.h"

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
		Col = FCString::Atoi(*ref.Mid(0, letterCount));
	}
	if (!address_is_valid(Row,Col)) {
		Row = 1;
		Col = 1;
	}
}

FString FCellReference::ToString() const
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

