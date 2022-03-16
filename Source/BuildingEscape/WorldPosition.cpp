// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	FString LogMessage = "Holly logs batman!!!";
	UE_LOG(LogTemp, Display, TEXT("%s"), *LogMessage);

	FString* PtrToLog = &LogMessage;
	UE_LOG(LogTemp, Display, TEXT("%s"), **PtrToLog);

	FString Name = GetOwner()->GetName();
	UE_LOG(LogTemp, Display, TEXT("%s"), *Name);

	FString Position = GetOwner()->GetActorLocation().ToCompactString();
	UE_LOG(LogTemp, Display, TEXT("%s"), *Position);
}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

