// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRDigiWrangler/Public/Digimon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDigimon() {}
// Cross Module References
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_ADigimon_NoRegister();
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_ADigimon();
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_AMainPlayer();
	UPackage* Z_Construct_UPackage__Script_VRDigiWrangler();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ADigimon::StaticRegisterNativesADigimon()
	{
	}
	UClass* Z_Construct_UClass_ADigimon_NoRegister()
	{
		return ADigimon::StaticClass();
	}
	struct Z_Construct_UClass_ADigimon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADigimon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMainPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_VRDigiWrangler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADigimon_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Digimon.h" },
		{ "ModuleRelativePath", "Public/Digimon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADigimon_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Capture" },
		{ "EditCondition", "Target" },
		{ "ModuleRelativePath", "Public/Digimon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADigimon_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADigimon, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADigimon_Statics::NewProp_Target_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADigimon_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADigimon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADigimon_Statics::NewProp_Target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADigimon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADigimon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADigimon_Statics::ClassParams = {
		&ADigimon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADigimon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADigimon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADigimon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADigimon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADigimon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADigimon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADigimon, 4049010888);
	template<> VRDIGIWRANGLER_API UClass* StaticClass<ADigimon>()
	{
		return ADigimon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADigimon(Z_Construct_UClass_ADigimon, &ADigimon::StaticClass, TEXT("/Script/VRDigiWrangler"), TEXT("ADigimon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADigimon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
