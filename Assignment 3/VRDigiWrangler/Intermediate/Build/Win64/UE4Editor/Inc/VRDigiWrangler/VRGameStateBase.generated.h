// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRDIGIWRANGLER_VRGameStateBase_generated_h
#error "VRGameStateBase.generated.h already included, missing '#pragma once' in VRGameStateBase.h"
#endif
#define VRDIGIWRANGLER_VRGameStateBase_generated_h

#define VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerHPforHUD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPlayerHPforHUD(); \
		P_NATIVE_END; \
	}


#define VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerHPforHUD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPlayerHPforHUD(); \
		P_NATIVE_END; \
	}


#define VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRGameStateBase(); \
	friend struct Z_Construct_UClass_AVRGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AVRGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRDigiWrangler"), NO_API) \
	DECLARE_SERIALIZER(AVRGameStateBase)


#define VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVRGameStateBase(); \
	friend struct Z_Construct_UClass_AVRGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AVRGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRDigiWrangler"), NO_API) \
	DECLARE_SERIALIZER(AVRGameStateBase)


#define VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRGameStateBase(AVRGameStateBase&&); \
	NO_API AVRGameStateBase(const AVRGameStateBase&); \
public:


#define VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRGameStateBase(AVRGameStateBase&&); \
	NO_API AVRGameStateBase(const AVRGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRGameStateBase)


#define VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET
#define VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_12_PROLOG
#define VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET \
	VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_RPC_WRAPPERS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_INCLASS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_PRIVATE_PROPERTY_OFFSET \
	VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRDIGIWRANGLER_API UClass* StaticClass<class AVRGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRDigiWrangler_Source_VRDigiWrangler_Public_VRGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
