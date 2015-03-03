// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "BestFirstPerson.h"
#include "BestFirstPersonGameMode.h"
#include "BestFirstPersonHUD.h"
#include "BestFirstPersonCharacter.h"

ABestFirstPersonGameMode::ABestFirstPersonGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABestFirstPersonHUD::StaticClass();
}
