// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EcGameMode.generated.h"

class AEcCharacter;
UCLASS(minimalapi)
class AEcGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AEcGameMode();

	void DeliverRelic(AEcCharacter* deliveryPlayer);
};



