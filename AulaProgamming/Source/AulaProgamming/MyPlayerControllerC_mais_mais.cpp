// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerControllerC_mais_mais.h"

void AMyPlayerControllerC_mais_mais::Forward(float AxisVal)
{

	AddMovementInput(GetActorForwardVector(), AxisVal);


}

void AMyPlayerControllerC_mais_mais::sideways(float AxisVal)
{

	AddMovementInput(GetActorRightVector(), AxisVal);


}
