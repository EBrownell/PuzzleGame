// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TargetPoint.h"
#include "Runtime/Engine/Classes/Engine/World.h"

#include <EngineGlobals.h>							// for onscreen debug temporary
#include <Runtime/Engine/Classes/Engine/Engine.h>	// for onscreen debug temporary

#include "SpawnManager.generated.h"

UCLASS()
class PUZZLEGAME_API ASpawnManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	void Spawn();

	// Variables
	UPROPERTY(EditAnywhere, Category = "Spawn")
		TArray<ATargetPoint*> TargetPoints;

	UPROPERTY(EditAnywhere, Category = "Spawn")
		TSubclassOf<class AActor> SpawnActor;



};
