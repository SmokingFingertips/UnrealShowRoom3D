// Copyright Epic Games, Inc. All Rights Reserved.

#include "Poc_TestGameMode.h"
#include "Poc_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

APoc_TestGameMode::APoc_TestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
