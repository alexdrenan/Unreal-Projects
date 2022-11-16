// Copyright Epic Games, Inc. All Rights Reserved.

#include "LookAtSensorTestGameMode.h"
#include "LookAtSensorTestHUD.h"
#include "LookAtSensorTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALookAtSensorTestGameMode::ALookAtSensorTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALookAtSensorTestHUD::StaticClass();
}
