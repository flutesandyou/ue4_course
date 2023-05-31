// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UnrealCourseHUD.generated.h"

UCLASS()
class AUnrealCourseHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUnrealCourseHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

