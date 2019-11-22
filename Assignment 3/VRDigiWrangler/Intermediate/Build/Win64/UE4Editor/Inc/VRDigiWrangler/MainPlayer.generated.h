// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRDIGIWRANGLER_MainPlayer_generated_h
#error "MainPlayer.generated.h already included, missing '#pragma once' in MainPlayer.h"
#endif
#define VRDIGIWRANGLER_MainPlayer_generated_h

#define VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_RPC_WRAPPERS
#define VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayer(); \
	friend struct Z_Construct_UClass_AMainPlayer_Statics; \
public: \
	DECLARE_CLASS(AMainPlayer, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRDigiWrangler"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayer)


#define VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMainPlayer(); \
	friend struct Z_Construct_UClass_AMainPlayer_Statics; \
public: \
	DECLARE_CLASS(AMainPlayer, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRDigiWrangler"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayer)


#define VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayer(AMainPlayer&&); \
	NO_API AMainPlayer(const AMainPlayer&); \
public:


#define VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayer(AMainPlayer&&); \
	NO_API AMainPlayer(const AMainPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainPlayer)


#define VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_PRIVATE_PROPERTY_OFFSET
#define VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_9_PROLOG
#define VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_RPC_WRAPPERS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_INCLASS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_INCLASS_NO_PURE_DECLS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRDIGIWRANGLER_API UClass* StaticClass<class AMainPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRDigiWrangler_Source_VRDigiWrangler_Public_MainPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
