// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"

UTriggerComponent::UTriggerComponent() {

	PrimaryComponentTick.bCanEverTick = true;
	UE_LOG(LogTemp, Warning, TEXT("Trigger Script Constructor added"));
}

void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();
	if (MoverActor) {
		Mover = MoverActor->FindComponentByClass<UMover>();
		if (!Mover) { UE_LOG(LogTemp, Warning, TEXT("Mover Component not found in Trigger Component")); }
	}
	else {		UE_LOG(LogTemp, Warning, TEXT("Mover Actor is null in Trigger Component"));	}

	if (IsPressurePlate) {

		OnComponentBeginOverlap.AddDynamic(this, &UTriggerComponent::OnOverlapBegin);
		OnComponentEndOverlap.AddDynamic(this, &UTriggerComponent::OnOverlapEnd);
	}

}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UTriggerComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Mover) {
		Mover->ShouldMove = true;
	}
}

void UTriggerComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (Mover) {
		Mover->ShouldMove = false;
	}
}
