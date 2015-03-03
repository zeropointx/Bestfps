// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "MapGenerator.generated.h"

UCLASS()
class BESTFIRSTPERSON_API AMapGenerator : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UCustomMeshComponent* customMeshComponent;
public:	
	// Sets default values for this actor's properties
	AMapGenerator();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
