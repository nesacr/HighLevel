// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRPong/Public/PongGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongGameStateBase() {}
// Cross Module References
	VRPONG_API UClass* Z_Construct_UClass_APongGameStateBase_NoRegister();
	VRPONG_API UClass* Z_Construct_UClass_APongGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_VRPong();
// End Cross Module References
	void APongGameStateBase::StaticRegisterNativesAPongGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_APongGameStateBase_NoRegister()
	{
		return APongGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_APongGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRPong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PongGameStateBase.h" },
		{ "ModuleRelativePath", "Public/PongGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APongGameStateBase_Statics::ClassParams = {
		&APongGameStateBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_APongGameStateBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APongGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APongGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APongGameStateBase, 4203129205);
	template<> VRPONG_API UClass* StaticClass<APongGameStateBase>()
	{
		return APongGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APongGameStateBase(Z_Construct_UClass_APongGameStateBase, &APongGameStateBase::StaticClass, TEXT("/Script/VRPong"), TEXT("APongGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
