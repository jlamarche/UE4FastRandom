// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FastRandomLibraryGameMode.h"
#include "FastRandomLibraryHUD.h"
#include "FastRandomLibraryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFastRandomLibraryGameMode::AFastRandomLibraryGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFastRandomLibraryHUD::StaticClass();
}
