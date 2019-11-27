// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRDigiWrangler/Public/AI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI() {}
// Cross Module References
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_AAI_NoRegister();
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_AAI();
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_AMainPlayer();
	UPackage* Z_Construct_UPackage__Script_VRDigiWrangler();
// End Cross Module References
	void AAI::StaticRegisterNativesAAI()
	{
	}
	UClass* Z_Construct_UClass_AAI_NoRegister()
	{
		return AAI::StaticClass();
	}
	struct Z_Construct_UClass_AAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMainPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_VRDigiWrangler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI.h" },
		{ "ModuleRelativePath", "Public/AI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_Statics::ClassParams = {
		&AAI::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI, 2945624797);
	template<> VRDIGIWRANGLER_API UClass* StaticClass<AAI>()
	{
		return AAI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI(Z_Construct_UClass_AAI, &AAI::StaticClass, TEXT("/Script/VRDigiWrangler"), TEXT("AAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
