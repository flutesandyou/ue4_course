// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealCourseGameMode.h"
#include "UnrealCourseHUD.h"
#include "UnrealCourseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealCourseGameMode::AUnrealCourseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealCourseHUD::StaticClass();
}
