// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRDigiWrangler/VRDigiWranglerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRDigiWranglerGameModeBase() {}
// Cross Module References
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_AVRDigiWranglerGameModeBase_NoRegister();
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_AVRDigiWranglerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VRDigiWrangler();
// End Cross Module References
	void AVRDigiWranglerGameModeBase::StaticRegisterNativesAVRDigiWranglerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AVRDigiWranglerGameModeBase_NoRegister()
	{
		return AVRDigiWranglerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVRDigiWranglerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRDigiWranglerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRDigiWrangler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRDigiWranglerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VRDigiWranglerGameModeBase.h" },
		{ "ModuleRelativePath", "VRDigiWranglerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRDigiWranglerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRDigiWranglerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRDigiWranglerGameModeBase_Statics::ClassParams = {
		&AVRDigiWranglerGameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AVRDigiWranglerGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVRDigiWranglerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRDigiWranglerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRDigiWranglerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRDigiWranglerGameModeBase, 4074138313);
	template<> VRDIGIWRANGLER_API UClass* StaticClass<AVRDigiWranglerGameModeBase>()
	{
		return AVRDigiWranglerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRDigiWranglerGameModeBase(Z_Construct_UClass_AVRDigiWranglerGameModeBase, &AVRDigiWranglerGameModeBase::StaticClass, TEXT("/Script/VRDigiWrangler"), TEXT("AVRDigiWranglerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRDigiWranglerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif