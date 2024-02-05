// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IndependentActorRPCFramework/Public/RemoteCallableControllerInterface.h"
#include "IndependentActorRPCFramework/Public/RemoteCallableDataStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteCallableControllerInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INDEPENDENTACTORRPCFRAMEWORK_API UClass* Z_Construct_UClass_URemoteCallableControllerInterface();
	INDEPENDENTACTORRPCFRAMEWORK_API UClass* Z_Construct_UClass_URemoteCallableControllerInterface_NoRegister();
	INDEPENDENTACTORRPCFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteCallableData();
	UPackage* Z_Construct_UPackage__Script_IndependentActorRPCFramework();
// End Cross Module References
	DEFINE_FUNCTION(IRemoteCallableControllerInterface::execRemoteEvent)
	{
		P_GET_OBJECT(AActor,Z_Param_TA);
		P_GET_STRUCT(FRemoteCallableData,Z_Param_RCData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoteEvent_Implementation(Z_Param_TA,Z_Param_RCData);
		P_NATIVE_END;
	}
	struct RemoteCallableControllerInterface_eventRemoteEvent_Parms
	{
		AActor* TA;
		FRemoteCallableData RCData;
	};
	void IRemoteCallableControllerInterface::RemoteEvent(AActor* TA, FRemoteCallableData RCData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoteEvent instead.");
	}
	void URemoteCallableControllerInterface::StaticRegisterNativesURemoteCallableControllerInterface()
	{
		UClass* Class = URemoteCallableControllerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoteEvent", &IRemoteCallableControllerInterface::execRemoteEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RCData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent_Statics::NewProp_TA = { "TA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteCallableControllerInterface_eventRemoteEvent_Parms, TA), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent_Statics::NewProp_RCData = { "RCData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteCallableControllerInterface_eventRemoteEvent_Parms, RCData), Z_Construct_UScriptStruct_FRemoteCallableData, METADATA_PARAMS(nullptr, 0) }; // 1087487676
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent_Statics::NewProp_TA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent_Statics::NewProp_RCData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe8\xbf\x9c\xe7\xab\xaf\xe4\xba\x8b\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/RemoteCallableControllerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteCallableControllerInterface, nullptr, "RemoteEvent", nullptr, nullptr, sizeof(RemoteCallableControllerInterface_eventRemoteEvent_Parms), Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteCallableControllerInterface);
	UClass* Z_Construct_UClass_URemoteCallableControllerInterface_NoRegister()
	{
		return URemoteCallableControllerInterface::StaticClass();
	}
	struct Z_Construct_UClass_URemoteCallableControllerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteCallableControllerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_IndependentActorRPCFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemoteCallableControllerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemoteCallableControllerInterface_RemoteEvent, "RemoteEvent" }, // 3170801585
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteCallableControllerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteCallableControllerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteCallableControllerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRemoteCallableControllerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteCallableControllerInterface_Statics::ClassParams = {
		&URemoteCallableControllerInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URemoteCallableControllerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteCallableControllerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteCallableControllerInterface()
	{
		if (!Z_Registration_Info_UClass_URemoteCallableControllerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteCallableControllerInterface.OuterSingleton, Z_Construct_UClass_URemoteCallableControllerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteCallableControllerInterface.OuterSingleton;
	}
	template<> INDEPENDENTACTORRPCFRAMEWORK_API UClass* StaticClass<URemoteCallableControllerInterface>()
	{
		return URemoteCallableControllerInterface::StaticClass();
	}
	URemoteCallableControllerInterface::URemoteCallableControllerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteCallableControllerInterface);
	URemoteCallableControllerInterface::~URemoteCallableControllerInterface() {}
	static FName NAME_URemoteCallableControllerInterface_RemoteEvent = FName(TEXT("RemoteEvent"));
	void IRemoteCallableControllerInterface::Execute_RemoteEvent(UObject* O, AActor* TA, FRemoteCallableData RCData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URemoteCallableControllerInterface::StaticClass()));
		RemoteCallableControllerInterface_eventRemoteEvent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_URemoteCallableControllerInterface_RemoteEvent);
		if (Func)
		{
			Parms.TA=TA;
			Parms.RCData=RCData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IRemoteCallableControllerInterface*)(O->GetNativeInterfaceAddress(URemoteCallableControllerInterface::StaticClass())))
		{
			I->RemoteEvent_Implementation(TA,RCData);
		}
	}
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableControllerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableControllerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteCallableControllerInterface, URemoteCallableControllerInterface::StaticClass, TEXT("URemoteCallableControllerInterface"), &Z_Registration_Info_UClass_URemoteCallableControllerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteCallableControllerInterface), 2850900459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableControllerInterface_h_390601805(TEXT("/Script/IndependentActorRPCFramework"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableControllerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_IndependentActorRPCFramework_Source_IndependentActorRPCFramework_Public_RemoteCallableControllerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
