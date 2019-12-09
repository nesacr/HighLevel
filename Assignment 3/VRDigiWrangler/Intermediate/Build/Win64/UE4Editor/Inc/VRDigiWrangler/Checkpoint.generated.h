// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef VRDIGIWRANGLER_Checkpoint_generated_h
#error "Checkpoint.generated.h already included, missing '#pragma once' in Checkpoint.h"
#endif
#define VRDIGIWRANGLER_Checkpoint_generated_h

#define VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACheckpoint(); \
	friend struct Z_Construct_UClass_ACheckpoint_Statics; \
public: \
	DECLARE_CLASS(ACheckpoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRDigiWrangler"), NO_API) \
	DECLARE_SERIALIZER(ACheckpoint)


#define VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACheckpoint(); \
	friend struct Z_Construct_UClass_ACheckpoint_Statics; \
public: \
	DECLARE_CLASS(ACheckpoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRDigiWrangler"), NO_API) \
	DECLARE_SERIALIZER(ACheckpoint)


#define VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACheckpoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACheckpoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckpoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckpoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckpoint(ACheckpoint&&); \
	NO_API ACheckpoint(const ACheckpoint&); \
public:


#define VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckpoint(ACheckpoint&&); \
	NO_API ACheckpoint(const ACheckpoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckpoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckpoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACheckpoint)


#define VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ACheckpoint, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__SpriteComponent() { return STRUCT_OFFSET(ACheckpoint, SpriteComponent); }


#define VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_9_PROLOG
#define VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_PRIVATE_PROPERTY_OFFSET \
	VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_RPC_WRAPPERS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_INCLASS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_PRIVATE_PROPERTY_OFFSET \
	VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_INCLASS_NO_PURE_DECLS \
	VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRDIGIWRANGLER_API UClass* StaticClass<class ACheckpoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRDigiWrangler_Source_VRDigiWrangler_Public_Checkpoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
