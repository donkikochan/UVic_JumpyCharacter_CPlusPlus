// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorTest2.h"

// Sets default values
AMyActorTest2::AMyActorTest2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActorTest2::BeginPlay()
{

	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("JumpyCharacter::BeginPlay Warning"));
	UE_LOG(LogTemp, Display, TEXT("JumpyCharacter::BeginPlay Display"));
	UE_LOG(LogTemp, Error, TEXT("JumpyCharacter::BeginPlay Error"));
	
}

// Called every frame
void AMyActorTest2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

