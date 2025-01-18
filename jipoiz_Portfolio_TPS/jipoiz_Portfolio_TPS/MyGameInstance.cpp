// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

UMyGameInstance::UMyGameInstance()
{
	SchoolName = TEXT("shcool0");
}

void UMyGameInstance::Init()
{
	Super::Init();
	
		UE_LOG(LogTemp, Log, TEXT("%s"), TEXT("Hello Unreal!"));

		UE_LOG(LogTemp, Log, TEXT("-------------------------------"));
		UClass* ClassRunTime = GetClass();
		UClass* ClassCompile = UMyGameInstance::StaticClass();

		//검증
		//check(ClassRunTime == ClassCompile);
		//ensure(ClassRunTime == ClassCompile);
		//ensureMsgf(ClassRunTime == ClassCompile, TEXT("error is here"));

		UE_LOG(LogTemp, Log, TEXT("class name = %s"), *ClassRunTime->GetName());

		SchoolName = TEXT("new school name 0");

		UE_LOG(LogTemp, Log, TEXT("%s"), *SchoolName);


}
