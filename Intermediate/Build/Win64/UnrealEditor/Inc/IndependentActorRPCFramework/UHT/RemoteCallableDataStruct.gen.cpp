// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IndependentActorRPCFramework/Public/RemoteCallableDataStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteCallableDataStruct() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	INDEPENDENTACTORRPCFRAMEWORK_API UClass* Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary();
	INDEPENDENTACTORRPCFRAMEWORK_API UClass* Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary_NoRegister();
	INDEPENDENTACTORRPCFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteCallableData();
	UPackage* Z_Construct_UPackage__Script_IndependentActorRPCFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteCallableData;
class UScriptStruct* FRemoteCallableData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteCallableData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteCallableData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteCallableData, (UObject*)Z_Construct_UPackage__Script_IndependentActorRPCFramework(), TEXT("RemoteCallableData"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteCallableData.OuterSingleton;
}
template<> INDEPENDENTACTORRPCFRAMEWORK_API UScriptStruct* StaticStruct<FRemoteCallableData>()
{
	return FRemoteCallableData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteCallableData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCallableData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteCallableDataStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteCallableData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteCallableData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCallableData_Statics::NewProp_PS_MetaData[] = {
		{ "Category", "RemoteCallableData" },
		{ "ModuleRelativePath", "Public/RemoteCallableDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRemoteCallableData_Statics::NewProp_PS = { "PS", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteCallableData, PS), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCallableData_Statics::NewProp_PS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCallableData_Statics::NewProp_PS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteCallableData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "RemoteCallableData" },
		{ "Comment", "/** \xe9\xa2\x9d\xe5\xa4\x96\xe6\x95\xb0\xe6\x8d\xae */" },
		{ "ModuleRelativePath", "Public/RemoteCallableDataStruct.h" },
		{ "ToolTip", "\xe9\xa2\x9d\xe5\xa4\x96\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteCallableData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteCallableData, Data), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCallableData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCallableData_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteCallableData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCallableData_Statics::NewProp_PS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteCallableData_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteCallableData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IndependentActorRPCFramework,
		nullptr,
		&NewStructOps,
		"RemoteCallableData",
		sizeof(FRemoteCallableData),
		alignof(FRemoteCallableData),
		Z_Construct_UScriptStruct_FRemoteCallableData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCallableData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteCallableData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteCallableData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteCallableData()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteCallableData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteCallableData.InnerSingleton, Z_Construct_UScriptStruct_FRemoteCallableData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteCallableData.InnerSingleton;
	}
	DEFINE_FUNCTION(URomoteCallableBlueprintFunctionLibrary::execDataConvertVector2D)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=URomoteCallableBlueprintFunctionLibrary::DataConvertVector2D(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URomoteCallableBlueprintFunctionLibrary::execParseJsonString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URomoteCallableBlueprintFunctionLibrary::ParseJsonString(Z_Param_JsonString,Z_Param_Key,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URomoteCallableBlueprintFunctionLibrary::execCreateJsonString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URomoteCallableBlueprintFunctionLibrary::CreateJsonString(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	void URomoteCallableBlueprintFunctionLibrary::StaticRegisterNativesURomoteCallableBlueprintFunctionLibrary()
	{
		UClass* Class = URomoteCallableBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateJsonString", &URomoteCallableBlueprintFunctionLibrary::execCreateJsonString },
			{ "DataConvertVector2D", &URomoteCallableBlueprintFunctionLibrary::execDataConvertVector2D },
			{ "ParseJsonString", &URomoteCallableBlueprintFunctionLibrary::execParseJsonString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics
	{
		struct RomoteCallableBlueprintFunctionLibrary_eventCreateJsonString_Parms
		{
			FString Key;
			FString Value;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RomoteCallableBlueprintFunctionLibrary_eventCreateJsonString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RomoteCallableBlueprintFunctionLibrary_eventCreateJsonString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RomoteCallableBlueprintFunctionLibrary_eventCreateJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "\xe5\x88\x9b\xe5\xbb\xbaJSON\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2" },
		{ "ModuleRelativePath", "Public/RemoteCallableDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary, nullptr, "CreateJsonString", nullptr, nullptr, sizeof(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::RomoteCallableBlueprintFunctionLibrary_eventCreateJsonString_Parms), Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics
	{
		struct RomoteCallableBlueprintFunctionLibrary_eventDataConvertVector2D_Parms
		{
			FString String;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RomoteCallableBlueprintFunctionLibrary_eventDataConvertVector2D_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::NewProp_String_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RomoteCallableBlueprintFunctionLibrary_eventDataConvertVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Convert" },
		{ "Comment", "/**\n     * \xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\xa0\xbc\xe5\xbc\x8f\xef\xbc\x9a\"X=123.45 Y=678.90\"\n     */" },
		{ "DisplayName", "\xe6\x95\xb0\xe6\x8d\xae\xe5\x80\xbc\xe8\xbd\xac\xe6\x8d\xa2Vector2D" },
		{ "ModuleRelativePath", "Public/RemoteCallableDataStruct.h" },
		{ "ToolTip", "\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\xa0\xbc\xe5\xbc\x8f\xef\xbc\x9a\"X=123.45 Y=678.90\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary, nullptr, "DataConvertVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::RomoteCallableBlueprintFunctionLibrary_eventDataConvertVector2D_Parms), Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics
	{
		struct RomoteCallableBlueprintFunctionLibrary_eventParseJsonString_Parms
		{
			FString JsonString;
			FString Key;
			FString OutValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RomoteCallableBlueprintFunctionLibrary_eventParseJsonString_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_JsonString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RomoteCallableBlueprintFunctionLibrary_eventParseJsonString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RomoteCallableBlueprintFunctionLibrary_eventParseJsonString_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RomoteCallableBlueprintFunctionLibrary_eventParseJsonString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RomoteCallableBlueprintFunctionLibrary_eventParseJsonString_Parms), &Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "DisplayName", "\xe8\xa7\xa3\xe6\x9e\x90JSON\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2" },
		{ "ModuleRelativePath", "Public/RemoteCallableDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary, nullptr, "ParseJsonString", nullptr, nullptr, sizeof(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::RomoteCallableBlueprintFunctionLibrary_eventParseJsonString_Parms), Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URomoteCallableBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary_NoRegister()
	{
		return URomoteCallableBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_IndependentActorRPCFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_CreateJsonString, "CreateJsonString" }, // 957867504
		{ &Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_DataConvertVector2D, "DataConvertVector2D" }, // 2844019915
		{ &Z_Construct_UFunction_URomoteCallableBlueprintFunctionLibrary_ParseJsonString, "ParseJsonString" }, // 1057108325
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RemoteCallableDataStruct.h" },
		{ "ModuleRelativePath", "Public/RemoteCallableDataStruct.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URomoteCallableBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary_Statics::ClassParams = {
		&URomoteCallableBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_URomoteCallableBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URomoteCallableBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URomoteCallableBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> INDEPENDENTACTORRPCFRAMEWORK_API UClass* StaticClass<URomoteCallableBlueprintFunctionLibrary>()
	{
		return URomoteCallableBlueprintFunctionLibrary::StaticClass();
	}
	URomoteCallableBlueprintFunctionLibrary::URomoteCallableBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URomoteCallableBlueprintFunctionLibrary);
	URomoteCallableBlueprintFunctionLibrary::~URomoteCallableBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableDataStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableDataStruct_h_Statics::ScriptStructInfo[] = {
		{ FRemoteCallableData::StaticStruct, Z_Construct_UScriptStruct_FRemoteCallableData_Statics::NewStructOps, TEXT("RemoteCallableData"), &Z_Registration_Info_UScriptStruct_RemoteCallableData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteCallableData), 1087487676U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableDataStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URomoteCallableBlueprintFunctionLibrary, URomoteCallableBlueprintFunctionLibrary::StaticClass, TEXT("URomoteCallableBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_URomoteCallableBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URomoteCallableBlueprintFunctionLibrary), 2547929323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableDataStruct_h_2370536497(TEXT("/Script/IndependentActorRPCFramework"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableDataStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableDataStruct_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableDataStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableDataStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
