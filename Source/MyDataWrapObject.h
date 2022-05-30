// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "MyDataWrapObject.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct UETEST_API FMyDataWrapObject : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
		int32 Int;
	UPROPERTY(EditAnywhere)
		FString String;
	UPROPERTY(EditAnywhere)
		FVector4 Vec4;
};
