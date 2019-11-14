// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRPong/Public/PongHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongHUD() {}
// Cross Module References
	VRPONG_API UClass* Z_Construct_UClass_APongHUD_NoRegister();
	VRPONG_API UClass* Z_Construct_UClass_APongHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_VRPong();
// End Cross Module References
	void APongHUD::StaticRegisterNativesAPongHUD()
	{
	}
	UClass* Z_Construct_UClass_APongHUD_NoRegister()
	{
		return APongHUD::StaticClass();
	}
	struct Z_Construct_UClass_APongHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_VRPong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PongHUD.h" },
		{ "ModuleRelativePath", "Public/PongHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APongHUD_Statics::ClassParams = {
		&APongHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APongHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APongHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APongHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APongHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APongHUD, 343017782);
	template<> VRPONG_API UClass* StaticClass<APongHUD>()
	{
		return APongHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APongHUD(Z_Construct_UClass_APongHUD, &APongHUD::StaticClass, TEXT("/Script/VRPong"), TEXT("APongHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
