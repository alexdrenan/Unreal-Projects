// Copyright Epic Games, Inc. All Rights Reserved.

#include "RedoGameMode.h"
#include "RedoHUD.h"
#include "RedoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARedoGameMode::ARedoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARedoHUD::StaticClass();
}
