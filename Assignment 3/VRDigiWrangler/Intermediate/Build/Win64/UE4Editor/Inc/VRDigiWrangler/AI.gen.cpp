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
	VRDIGIWRANGLER_API UFunction* Z_Construct_UFunction_AAI_OnNoiseHeard();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	void AAI::StaticRegisterNativesAAI()
	{
		UClass* Class = AAI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNoiseHeard", &AAI::execOnNoiseHeard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAI_OnNoiseHeard_Statics
	{
		struct AI_eventOnNoiseHeard_Parms
		{
			APawn* NoiseInstigator;
			FVector Location;
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_eventOnNoiseHeard_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_eventOnNoiseHeard_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::NewProp_NoiseInstigator = { "NoiseInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_eventOnNoiseHeard_Parms, NoiseInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::NewProp_NoiseInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI.h" },
		{ "ToolTip", "UFUNCTION()\n       void OnPawnSeen(APawn* SeenPawn);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI, nullptr, "OnNoiseHeard", sizeof(AI_eventOnNoiseHeard_Parms), Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_OnNoiseHeard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_OnNoiseHeard_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMainPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_VRDigiWrangler,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAI_OnNoiseHeard, "OnNoiseHeard" }, // 3761564867
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI.h" },
		{ "ModuleRelativePath", "Public/AI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Statics::NewProp_PawnSensingComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_Statics::NewProp_PawnSensingComponent = { "PawnSensingComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI, PawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_Statics::NewProp_PawnSensingComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_Statics::NewProp_PawnSensingComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Statics::NewProp_PawnSensingComponent,
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
	IMPLEMENT_CLASS(AAI, 2895428537);
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
