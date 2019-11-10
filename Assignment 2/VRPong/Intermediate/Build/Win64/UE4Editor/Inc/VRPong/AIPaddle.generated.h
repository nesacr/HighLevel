// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRPONG_AIPaddle_generated_h
#error "AIPaddle.generated.h already included, missing '#pragma once' in AIPaddle.h"
#endif
#define VRPONG_AIPaddle_generated_h

#define VRPong_Source_VRPong_Public_AIPaddle_h_15_RPC_WRAPPERS
#define VRPong_Source_VRPong_Public_AIPaddle_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define VRPong_Source_VRPong_Public_AIPaddle_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIPaddle(); \
	friend struct Z_Construct_UClass_AAIPaddle_Statics; \
public: \
	DECLARE_CLASS(AAIPaddle, APaddle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRPong"), NO_API) \
	DECLARE_SERIALIZER(AAIPaddle)


#define VRPong_Source_VRPong_Public_AIPaddle_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAIPaddle(); \
	friend struct Z_Construct_UClass_AAIPaddle_Statics; \
public: \
	DECLARE_CLASS(AAIPaddle, APaddle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRPong"), NO_API) \
	DECLARE_SERIALIZER(AAIPaddle)


#define VRPong_Source_VRPong_Public_AIPaddle_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIPaddle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIPaddle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIPaddle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIPaddle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIPaddle(AAIPaddle&&); \
	NO_API AAIPaddle(const AAIPaddle&); \
public:


#define VRPong_Source_VRPong_Public_AIPaddle_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIPaddle() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIPaddle(AAIPaddle&&); \
	NO_API AAIPaddle(const AAIPaddle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIPaddle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIPaddle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIPaddle)


#define VRPong_Source_VRPong_Public_AIPaddle_h_15_PRIVATE_PROPERTY_OFFSET
#define VRPong_Source_VRPong_Public_AIPaddle_h_12_PROLOG
#define VRPong_Source_VRPong_Public_AIPaddle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRPong_Source_VRPong_Public_AIPaddle_h_15_PRIVATE_PROPERTY_OFFSET \
	VRPong_Source_VRPong_Public_AIPaddle_h_15_RPC_WRAPPERS \
	VRPong_Source_VRPong_Public_AIPaddle_h_15_INCLASS \
	VRPong_Source_VRPong_Public_AIPaddle_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRPong_Source_VRPong_Public_AIPaddle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRPong_Source_VRPong_Public_AIPaddle_h_15_PRIVATE_PROPERTY_OFFSET \
	VRPong_Source_VRPong_Public_AIPaddle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VRPong_Source_VRPong_Public_AIPaddle_h_15_INCLASS_NO_PURE_DECLS \
	VRPong_Source_VRPong_Public_AIPaddle_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRPONG_API UClass* StaticClass<class AAIPaddle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRPong_Source_VRPong_Public_AIPaddle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
