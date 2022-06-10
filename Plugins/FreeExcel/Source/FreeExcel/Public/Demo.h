// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Demo.generated.h"

UCLASS(Blueprintable)
class FREEEXCEL_API ADemo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADemo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	 
	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
	 void RunDemo();

	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void RunDemo2();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	 

};
