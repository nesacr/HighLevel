// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRDigiWrangler/Public/MovingPlatformActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatformActor() {}
// Cross Module References
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_AMovingPlatformActor_NoRegister();
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_AMovingPlatformActor();
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_APlatformActor();
	UPackage* Z_Construct_UPackage__Script_VRDigiWrangler();
// End Cross Module References
	void AMovingPlatformActor::StaticRegisterNativesAMovingPlatformActor()
	{
	}
	UClass* Z_Construct_UClass_AMovingPlatformActor_NoRegister()
	{
		return AMovingPlatformActor::StaticClass();
	}
	struct Z_Construct_UClass_AMovingPlatformActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingPlatformActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlatformActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRDigiWrangler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatformActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatformActor.h" },
		{ "ModuleRelativePath", "Public/MovingPlatformActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingPlatformActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatformActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatformActor_Statics::ClassParams = {
		&AMovingPlatformActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMovingPlatformActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMovingPlatformActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingPlatformActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovingPlatformActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingPlatformActor, 1299578816);
	template<> VRDIGIWRANGLER_API UClass* StaticClass<AMovingPlatformActor>()
	{
		return AMovingPlatformActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingPlatformActor(Z_Construct_UClass_AMovingPlatformActor, &AMovingPlatformActor::StaticClass, TEXT("/Script/VRDigiWrangler"), TEXT("AMovingPlatformActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatformActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
