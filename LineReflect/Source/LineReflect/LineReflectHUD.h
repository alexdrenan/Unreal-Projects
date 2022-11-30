// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LineReflectHUD.generated.h"

UCLASS()
class ALineReflectHUD : public AHUD
{
	GENERATED_BODY()

public:
	ALineReflectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

