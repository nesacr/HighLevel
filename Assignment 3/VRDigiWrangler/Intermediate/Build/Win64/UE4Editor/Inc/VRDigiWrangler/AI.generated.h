// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRDIGIWRANGLER_AI_generated_h
#error "AI.generated.h already included, missing '#pragma once' in AI.h"
#endif
#define VRDIGIWRANGLER_AI_generated_h

#define VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_RPC_WRAPPERS
#define VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAI(); \
	friend struct Z_Construct_UClass_AAI_Statics; \
public: \
	DECLARE_CLASS(AAI, AMainPlayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRDigiWrangler"), NO_API) \
	DECLARE_SERIALIZER(AAI)


#define VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAI(); \
	friend struct Z_Construct_UClass_AAI_Statics; \
public: \
	DECLARE_CLASS(AAI, AMainPlayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRDigiWrangler"), NO_API) \
	DECLARE_SERIALIZER(AAI)


#define VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI(AAI&&); \
	NO_API AAI(const AAI&); \
public:


#define VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAI() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI(AAI&&); \
	NO_API AAI(const AAI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAI)


#define VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_PRIVATE_PROPERTY_OFFSET
#define VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_12_PROLOG
#define VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_PRIVATE_PROPERTY_OFFSET \
	VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_RPC_WRAPPERS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_INCLASS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_PRIVATE_PROPERTY_OFFSET \
	VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_INCLASS_NO_PURE_DECLS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRDIGIWRANGLER_API UClass* StaticClass<class AAI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRDigiWrangler_Source_VRDigiWrangler_Public_AI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
