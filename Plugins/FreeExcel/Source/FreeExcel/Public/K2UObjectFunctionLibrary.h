// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "K2UObjectFunctionLibrary.generated.h"


//General Log
DECLARE_LOG_CATEGORY_EXTERN(LogUK2UObjectFunctionLibrary, Log, All);

/**
 *
 */
UCLASS()
class FREEEXCEL_API UK2UObjectFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Set UObject single property value by name */
	UFUNCTION(BlueprintCallable, CustomThunk, meta = (BlueprintInternalUseOnly = "true", CustomStructureParam = "Value", AutoCreateRefTerm = "Value"))
		static void SetSingelPropertyByName(UObject* Object, FName PropertyName, const int32& Value);
	static void Generic_SetSingelPropertyByName(UObject* OwnerObject, FName PropertyName, FProperty* ValueProperty, void* ValueAddr);

	DECLARE_FUNCTION(execSetSingelPropertyByName)
	{
		P_GET_OBJECT(UObject, OwnerObject);
		P_GET_PROPERTY(FNameProperty, PropertyName);

		Stack.StepCompiledIn<FStructProperty>(NULL);
		FProperty* ValueProp = CastField<FProperty>(Stack.MostRecentProperty);
		void* ValueAddr = Stack.MostRecentPropertyAddress;

		P_FINISH;

		P_NATIVE_BEGIN;
		UK2UObjectFunctionLibrary::Generic_SetSingelPropertyByName(OwnerObject, PropertyName, ValueProp, ValueAddr);
		P_NATIVE_END;
	}

};