// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_Collectible.h"

// Sets default values
ABP_Collectible::ABP_Collectible()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABP_Collectible::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void ABP_Collectible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABP_Collectible::PickUp(int32& Score)
{
	if (IsBonus)
	{
		Score = ScoreBonus;
	}
	else
	{
		Score = ScoreMalus;
	}

	Destroy();
}


