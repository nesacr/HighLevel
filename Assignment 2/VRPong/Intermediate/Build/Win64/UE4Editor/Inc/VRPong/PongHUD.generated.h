// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRPONG_PongHUD_generated_h
#error "PongHUD.generated.h already included, missing '#pragma once' in PongHUD.h"
#endif
#define VRPONG_PongHUD_generated_h

#define VRPong_Source_VRPong_Public_PongHUD_h_15_RPC_WRAPPERS
#define VRPong_Source_VRPong_Public_PongHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define VRPong_Source_VRPong_Public_PongHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongHUD(); \
	friend struct Z_Construct_UClass_APongHUD_Statics; \
public: \
	DECLARE_CLASS(APongHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRPong"), NO_API) \
	DECLARE_SERIALIZER(APongHUD)


#define VRPong_Source_VRPong_Public_PongHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPongHUD(); \
	friend struct Z_Construct_UClass_APongHUD_Statics; \
public: \
	DECLARE_CLASS(APongHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRPong"), NO_API) \
	DECLARE_SERIALIZER(APongHUD)


#define VRPong_Source_VRPong_Public_PongHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APongHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APongHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongHUD(APongHUD&&); \
	NO_API APongHUD(const APongHUD&); \
public:


#define VRPong_Source_VRPong_Public_PongHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongHUD(APongHUD&&); \
	NO_API APongHUD(const APongHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APongHUD)


#define VRPong_Source_VRPong_Public_PongHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define VRPong_Source_VRPong_Public_PongHUD_h_12_PROLOG
#define VRPong_Source_VRPong_Public_PongHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRPong_Source_VRPong_Public_PongHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	VRPong_Source_VRPong_Public_PongHUD_h_15_RPC_WRAPPERS \
	VRPong_Source_VRPong_Public_PongHUD_h_15_INCLASS \
	VRPong_Source_VRPong_Public_PongHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRPong_Source_VRPong_Public_PongHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRPong_Source_VRPong_Public_PongHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	VRPong_Source_VRPong_Public_PongHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VRPong_Source_VRPong_Public_PongHUD_h_15_INCLASS_NO_PURE_DECLS \
	VRPong_Source_VRPong_Public_PongHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRPONG_API UClass* StaticClass<class APongHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRPong_Source_VRPong_Public_PongHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
