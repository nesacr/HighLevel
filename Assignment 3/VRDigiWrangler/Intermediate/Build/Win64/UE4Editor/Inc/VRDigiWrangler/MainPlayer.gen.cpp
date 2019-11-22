// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRDigiWrangler/Public/MainPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayer() {}
// Cross Module References
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_AMainPlayer_NoRegister();
	VRDIGIWRANGLER_API UClass* Z_Construct_UClass_AMainPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_VRDigiWrangler();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void AMainPlayer::StaticRegisterNativesAMainPlayer()
	{
	}
	UClass* Z_Construct_UClass_AMainPlayer_NoRegister()
	{
		return AMainPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AMainPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSpriteComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VRDigiWrangler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainPlayer.h" },
		{ "ModuleRelativePath", "Public/MainPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera Spring" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::NewProp_SpringArmComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Pawn Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::NewProp_FollowCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::NewProp_PawnSpriteComponent_MetaData[] = {
		{ "Category", "Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_PawnSpriteComponent = { "PawnSpriteComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer, PawnSpriteComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::NewProp_PawnSpriteComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::NewProp_PawnSpriteComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::NewProp_CapsuleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::NewProp_CapsuleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_PawnSpriteComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_CapsuleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayer_Statics::ClassParams = {
		&AMainPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainPlayer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainPlayer, 1413305630);
	template<> VRDIGIWRANGLER_API UClass* StaticClass<AMainPlayer>()
	{
		return AMainPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainPlayer(Z_Construct_UClass_AMainPlayer, &AMainPlayer::StaticClass, TEXT("/Script/VRDigiWrangler"), TEXT("AMainPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
