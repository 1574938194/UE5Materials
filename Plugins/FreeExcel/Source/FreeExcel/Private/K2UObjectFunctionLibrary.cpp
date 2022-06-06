// Fill out your copyright notice in the Description page of Project Settings.


#include "K2UObjectFunctionLibrary.h"

//General Log
DEFINE_LOG_CATEGORY(LogUK2UObjectFunctionLibrary);


void UK2UObjectFunctionLibrary::SetSingelPropertyByName(UObject* Object, FName PropertyName, const int32& Value)
{
	// We should never hit these!  They're stubs to avoid NoExport on the class.
	check(0);
}

void UK2UObjectFunctionLibrary::Generic_SetSingelPropertyByName(UObject* OwnerObject, FName PropertyName, FProperty* ValueProperty, void* ValueAddr)
{
	if (OwnerObject != NULL)
	{
		FProperty* FoundProp = FindFProperty<FProperty>(OwnerObject->GetClass(), PropertyName);

		if (FoundProp && (FoundProp->SameType(ValueProperty)))
		{
			void* DestValueAddr = FoundProp->ContainerPtrToValuePtr<void>(OwnerObject);
			FoundProp->CopySingleValue(DestValueAddr, ValueAddr);
			return;
		}
	}
	UE_LOG(LogUK2UObjectFunctionLibrary, Warning, TEXT("Time:%s, Function:%s, Falid to set %s property value of %s object.")
		, *FString(__TIME__)
		, *FString(__FUNCTION__)
		, *PropertyName.ToString()
		, OwnerObject ? *OwnerObject->GetName() : TEXT("NULL")
	);

}
