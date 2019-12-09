// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRDigiWrangler/Public/VRGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGameStateBase() {}
// Cross Module References
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_AVRGameStateBase_NoRegister();
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_AVRGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_VRDigiWrangler();
	VRDIGIWRANGLER_API UFunction* Z_Construct_UFunction_AVRGameStateBase_GetPlayerHPforHUD();
// End Cross Module References
	void AVRGameStateBase::StaticRegisterNativesAVRGameStateBase()
	{
		UClass* Class = AVRGameStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerHPforHUD", &AVRGameStateBase::execGetPlayerHPforHUD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVRGameStateBase_GetPlayerHPforHUD_Statics
	{
		struct VRGameStateBase_eventGetPlayerHPforHUD_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AVRGameStateBase_GetPlayerHPforHUD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRGameStateBase_eventGetPlayerHPforHUD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRGameStateBase_GetPlayerHPforHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRGameStateBase_GetPlayerHPforHUD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRGameStateBase_GetPlayerHPforHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRGameStateBase_GetPlayerHPforHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRGameStateBase, nullptr, "GetPlayerHPforHUD", sizeof(VRGameStateBase_eventGetPlayerHPforHUD_Parms), Z_Construct_UFunction_AVRGameStateBase_GetPlayerHPforHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVRGameStateBase_GetPlayerHPforHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRGameStateBase_GetPlayerHPforHUD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVRGameStateBase_GetPlayerHPforHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRGameStateBase_GetPlayerHPforHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRGameStateBase_GetPlayerHPforHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRGameStateBase_NoRegister()
	{
		return AVRGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AVRGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRDigiWrangler,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRGameStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRGameStateBase_GetPlayerHPforHUD, "GetPlayerHPforHUD" }, // 3741116126
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VRGameStateBase.h" },
		{ "ModuleRelativePath", "Public/VRGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRGameStateBase_Statics::ClassParams = {
		&AVRGameStateBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVRGameStateBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVRGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRGameStateBase, 2719900510);
	template<> VRDIGIWRANGLER_API UClass* StaticClass<AVRGameStateBase>()
	{
		return AVRGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRGameStateBase(Z_Construct_UClass_AVRGameStateBase, &AVRGameStateBase::StaticClass, TEXT("/Script/VRDigiWrangler"), TEXT("AVRGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
