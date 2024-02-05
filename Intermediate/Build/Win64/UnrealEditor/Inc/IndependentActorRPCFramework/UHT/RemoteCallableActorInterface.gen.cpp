// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IndependentActorRPCFramework/Public/RemoteCallableActorInterface.h"
#include "IndependentActorRPCFramework/Public/RemoteCallableDataStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteCallableActorInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INDEPENDENTACTORRPCFRAMEWORK_API UClass* Z_Construct_UClass_URemoteCallableActorInterface();
	INDEPENDENTACTORRPCFRAMEWORK_API UClass* Z_Construct_UClass_URemoteCallableActorInterface_NoRegister();
	INDEPENDENTACTORRPCFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteCallableData();
	UPackage* Z_Construct_UPackage__Script_IndependentActorRPCFramework();
// End Cross Module References
	DEFINE_FUNCTION(IRemoteCallableActorInterface::execRemoteCall)
	{
		P_GET_STRUCT(FRemoteCallableData,Z_Param_RCData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoteCall_Implementation(Z_Param_RCData);
		P_NATIVE_END;
	}
	struct RemoteCallableActorInterface_eventRemoteCall_Parms
	{
		FRemoteCallableData RCData;
	};
	void IRemoteCallableActorInterface::RemoteCall(FRemoteCallableData RCData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoteCall instead.");
	}
	void URemoteCallableActorInterface::StaticRegisterNativesURemoteCallableActorInterface()
	{
		UClass* Class = URemoteCallableActorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoteCall", &IRemoteCallableActorInterface::execRemoteCall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemoteCallableActorInterface_RemoteCall_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_RCData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteCallableActorInterface_RemoteCall_Statics::NewProp_RCData = { "RCData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteCallableActorInterface_eventRemoteCall_Parms, RCData), Z_Construct_UScriptStruct_FRemoteCallableData, METADATA_PARAMS(nullptr, 0) }; // 1087487676
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCallableActorInterface_RemoteCall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCallableActorInterface_RemoteCall_Statics::NewProp_RCData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCallableActorInterface_RemoteCall_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe8\xb0\x83\xe7\x94\xa8" },
		{ "ModuleRelativePath", "Public/RemoteCallableActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCallableActorInterface_RemoteCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCallableActorInterface, nullptr, "RemoteCall", nullptr, nullptr, sizeof(RemoteCallableActorInterface_eventRemoteCall_Parms), Z_Construct_UFunction_URemoteCallableActorInterface_RemoteCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCallableActorInterface_RemoteCall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCallableActorInterface_RemoteCall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCallableActorInterface_RemoteCall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCallableActorInterface_RemoteCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteCallableActorInterface_RemoteCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteCallableActorInterface);
	UClass* Z_Construct_UClass_URemoteCallableActorInterface_NoRegister()
	{
		return URemoteCallableActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_URemoteCallableActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteCallableActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_IndependentActorRPCFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemoteCallableActorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemoteCallableActorInterface_RemoteCall, "RemoteCall" }, // 425376107
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCallableActorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteCallableActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteCallableActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRemoteCallableActorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteCallableActorInterface_Statics::ClassParams = {
		&URemoteCallableActorInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteCallableActorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCallableActorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteCallableActorInterface()
	{
		if (!Z_Registration_Info_UClass_URemoteCallableActorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteCallableActorInterface.OuterSingleton, Z_Construct_UClass_URemoteCallableActorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteCallableActorInterface.OuterSingleton;
	}
	template<> INDEPENDENTACTORRPCFRAMEWORK_API UClass* StaticClass<URemoteCallableActorInterface>()
	{
		return URemoteCallableActorInterface::StaticClass();
	}
	URemoteCallableActorInterface::URemoteCallableActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteCallableActorInterface);
	URemoteCallableActorInterface::~URemoteCallableActorInterface() {}
	static FName NAME_URemoteCallableActorInterface_RemoteCall = FName(TEXT("RemoteCall"));
	void IRemoteCallableActorInterface::Execute_RemoteCall(UObject* O, FRemoteCallableData RCData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URemoteCallableActorInterface::StaticClass()));
		RemoteCallableActorInterface_eventRemoteCall_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_URemoteCallableActorInterface_RemoteCall);
		if (Func)
		{
			Parms.RCData=RCData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IRemoteCallableActorInterface*)(O->GetNativeInterfaceAddress(URemoteCallableActorInterface::StaticClass())))
		{
			I->RemoteCall_Implementation(RCData);
		}
	}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableActorInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableActorInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteCallableActorInterface, URemoteCallableActorInterface::StaticClass, TEXT("URemoteCallableActorInterface"), &Z_Registration_Info_UClass_URemoteCallableActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteCallableActorInterface), 878640199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableActorInterface_h_2336476018(TEXT("/Script/IndependentActorRPCFramework"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableActorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableActorInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
