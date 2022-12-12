// Copyright Epic Games, Inc. All Rights Reserved.

#include "TrajectoryProjectGameMode.h"
#include "TrajectoryProjectHUD.h"
#include "TrajectoryProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATrajectoryProjectGameMode::ATrajectoryProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATrajectoryProjectHUD::StaticClass();
}
