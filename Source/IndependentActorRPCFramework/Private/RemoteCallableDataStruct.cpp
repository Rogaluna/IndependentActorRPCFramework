// Fill out your copyright notice in the Description page of Project Settings.


#include "RemoteCallableDataStruct.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"

FString URomoteCallableBlueprintFunctionLibrary::CreateJsonString(const FString& Key, const FString& Value)
{
    // 创建一个JSON对象
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);

    // 添加键值对
    JsonObject->SetStringField(Key, Value);

    // 将JSON对象转换为字符串
    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    return OutputString;
}

bool URomoteCallableBlueprintFunctionLibrary::ParseJsonString(const FString& JsonString, const FString& Key, FString& OutValue)
{
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);

    if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
    {
        if (JsonObject->HasField(Key))
        {
            OutValue = JsonObject->GetStringField(Key);
            return true;
        }
    }

    return false;
}

FVector2D URomoteCallableBlueprintFunctionLibrary::DataConvertVector2D(const FString& String)
{
    FVector2D Vector2DResult;
    if (Vector2DResult.InitFromString(String))
    {
        return Vector2DResult;
    }

    return FVector2D(0.f, 0.f);
}
