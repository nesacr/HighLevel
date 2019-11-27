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
// End Cross Module References
	void AVRGameStateBase::StaticRegisterNativesAVRGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_AVRGameStateBase_NoRegister()
	{
		return AVRGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AVRGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(AVRGameStateBase, 3420982187);
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
