// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RemoteCallableDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FRemoteCallableData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite)
	APlayerState* PS;

	/** 额外数据 */
	UPROPERTY(BlueprintReadWrite)
	FString Data;
};

UCLASS()
class URomoteCallableBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "JSON", DisplayName = "创建JSON字符串")
	static FString CreateJsonString(const FString& Key, const FString& Value);
	UFUNCTION(BlueprintPure, Category="JSON", DisplayName = "解析JSON字符串")
    static bool ParseJsonString(const FString& JsonString, const FString& Key, FString& OutValue);

    /**
     * 字符串格式："X=123.45 Y=678.90"
     */
    UFUNCTION(BlueprintPure, Category = "Convert", DisplayName = "数据值转换Vector2D")
	static FVector2D DataConvertVector2D(const FString& String);
};