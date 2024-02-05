// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RemoteCallableDataStruct.h"
#include "RemoteCallableControllerInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class URemoteCallableControllerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INDEPENDENTACTORRPCFRAMEWORK_API IRemoteCallableControllerInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "远端事件")
    void RemoteEvent(AActor* TA, FRemoteCallableData RCData);
};
