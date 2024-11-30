// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomCube.generated.h"

UCLASS(Blueprintable)
class AIX_GD3_FILROUGE_API ACustomCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACustomCube();
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FLinearColor FinalColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstance* Material;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* CubeMesh;
	// Called every frame
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
	void ChangeColor();
};
