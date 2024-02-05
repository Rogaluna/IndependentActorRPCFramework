// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RemoteCallableDataStruct.h"
#include "RemoteCallableActorInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class URemoteCallableActorInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INDEPENDENTACTORRPCFRAMEWORK_API IRemoteCallableActorInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, DisplayName="服务器调用")
	void RemoteCall(FRemoteCallableData RCData);
};
