// Copyright Epic Games, Inc. All Rights Reserved.

#include "ueTestGameMode.h"
#include "ueTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AueTestGameMode::AueTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
