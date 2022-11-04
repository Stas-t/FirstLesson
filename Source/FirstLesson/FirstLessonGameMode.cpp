// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstLessonGameMode.h"
#include "FirstLessonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstLessonGameMode::AFirstLessonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
