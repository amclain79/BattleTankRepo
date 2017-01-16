// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;	// const means reference connot alter controlled tank

	virtual void BeginPlay() override;	// virtual means children can override (append) function
										// BeginPlay() is an AActor method	
	
};