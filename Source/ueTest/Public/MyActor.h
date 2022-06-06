// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyStruct.h"
#include "MyActor.generated.h"

 
UCLASS(Blueprintable)
class UETEST_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void Test();

	UFUNCTION(BlueprintCallable)
		int32 Test2(int32 Par1);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
