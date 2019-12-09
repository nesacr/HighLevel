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
	VRDIGIWRANGLER_API UFunction* Z_Construct_UFunction_AAI_MoveToNextPatrolPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AAI::StaticRegisterNativesAAI()
	{
		UClass* Class = AAI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveToNextPatrolPoint", &AAI::execMoveToNextPatrolPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAI_MoveToNextPatrolPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_MoveToNextPatrolPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_MoveToNextPatrolPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI, nullptr, "MoveToNextPatrolPoint", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_MoveToNextPatrolPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAI_MoveToNextPatrolPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_MoveToNextPatrolPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_MoveToNextPatrolPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAI_NoRegister()
	{
		return AAI::StaticClass();
	}
	struct Z_Construct_UClass_AAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPatrolPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondPatrolPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPatrolPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPatrolPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPatrol_MetaData[];
#endif
		static void NewProp_bPatrol_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPatrol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMainPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_VRDigiWrangler,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAI_MoveToNextPatrolPoint, "MoveToNextPatrolPoint" }, // 2479882341
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI.h" },
		{ "ModuleRelativePath", "Public/AI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Statics::NewProp_SecondPatrolPoint_MetaData[] = {
		{ "Category", "AI" },
		{ "EditCondition", "bPatrol" },
		{ "ModuleRelativePath", "Public/AI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_Statics::NewProp_SecondPatrolPoint = { "SecondPatrolPoint", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI, SecondPatrolPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_Statics::NewProp_SecondPatrolPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_Statics::NewProp_SecondPatrolPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Statics::NewProp_FirstPatrolPoint_MetaData[] = {
		{ "Category", "AI" },
		{ "EditCondition", "bPatrol" },
		{ "ModuleRelativePath", "Public/AI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_Statics::NewProp_FirstPatrolPoint = { "FirstPatrolPoint", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI, FirstPatrolPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_Statics::NewProp_FirstPatrolPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_Statics::NewProp_FirstPatrolPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Statics::NewProp_bPatrol_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI.h" },
	};
#endif
	void Z_Construct_UClass_AAI_Statics::NewProp_bPatrol_SetBit(void* Obj)
	{
		((AAI*)Obj)->bPatrol = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAI_Statics::NewProp_bPatrol = { "bPatrol", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAI), &Z_Construct_UClass_AAI_Statics::NewProp_bPatrol_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAI_Statics::NewProp_bPatrol_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_Statics::NewProp_bPatrol_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Statics::NewProp_SecondPatrolPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Statics::NewProp_FirstPatrolPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Statics::NewProp_bPatrol,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_Statics::ClassParams = {
		&AAI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAI_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAI_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AAI, 3745932922);
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
