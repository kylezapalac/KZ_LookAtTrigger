// Copyright Epic Games, Inc. All Rights Reserved.

#include "KZ_LookAtSensorCPPGameMode.h"
#include "KZ_LookAtSensorCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKZ_LookAtSensorCPPGameMode::AKZ_LookAtSensorCPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

}
