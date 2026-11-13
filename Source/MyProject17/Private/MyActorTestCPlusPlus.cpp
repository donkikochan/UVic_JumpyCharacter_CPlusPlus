// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorTestCPlusPlus.h"

// Sets default values
AMyActorTestCPlusPlus::AMyActorTestCPlusPlus()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(StaticMesh);
}

// Called when the game starts or when spawned
void AMyActorTestCPlusPlus::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorTestCPlusPlus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

