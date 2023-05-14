// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTest.h"
#include "MySubjectt.h"

// Sets default values
AMyTest::AMyTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyTest::BeginPlay()
{
	Super::BeginPlay();

	//AMySubjectt* a = new AMySubjectt();
	
}

// Called every frame
void AMyTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

