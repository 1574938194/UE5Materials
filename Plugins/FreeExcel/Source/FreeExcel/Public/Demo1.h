// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Demo1.generated.h"

UCLASS(Blueprintable)
class FREEEXCEL_API ADemo1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADemo1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		static void  RunDemo1OLD();
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		static void  RunDemo2OLD();
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		static void  RunDemo3OLD();
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		static void  RunDemo4OLD();
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		static void  RunDemo5OLD();
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		static void  RunDemo6OLD();
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		static void  RunDemo7OLD();
	UFUNCTION(BlueprintCallable, Category = "XLXS")
		static void  RunDemo8OLD();

	UFUNCTION(BlueprintCallable, Category = "XLXS")
		void RunDemoBasicUsage();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
