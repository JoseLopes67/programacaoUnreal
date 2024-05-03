// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerControllerC_mais_mais.generated.h"

/**
 * 
 */
UCLASS()
class AULAPROGAMMING_API AMyPlayerControllerC_mais_mais : public APlayerController
{
	GENERATED_BODY()


		void AMyPlayerControllerC_mais_mais::AMyPlayerControllerC_mais_mais()
	{
		
		PlayerInputComponent->BindAxis("Forward", this, &AMyPlayerControllerC_mais_mais::Forward);
		PlayerInputComponent->BindAxis("sideways", this, &AMyPlayerControllerC_mais_mais::sideways);

	}

protected:

	void Forward(float AxisVal);
	void sideways(float AxisVal);

	
};






