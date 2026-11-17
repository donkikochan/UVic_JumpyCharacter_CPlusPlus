// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementPlatform.h"

// Sets default values
AMovementPlatform::AMovementPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	Root->SetupAttachment(GetRootComponent());
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPlatform"));
	Mesh->SetupAttachment(Root);
	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	Spline->SetupAttachment(Root);

	InterpMovement = CreateDefaultSubobject<UInterpToMovementComponent>(TEXT("InterpMovement"));
	
}



// Called when the game starts or when spawned
void AMovementPlatform::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < Spline->GetSplineLength(); i++)
	{
		FVector point = Spline->GetLocationAtSplinePoint(i,ESplineCoordinateSpace::World);
		InterpMovement->AddControlPointPosition(point,false);
	}

	InterpMovement->FinaliseControlPoints();
	
}

// Called every frame
void AMovementPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

