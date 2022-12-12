// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRAJECTORYPROJECT_TrajectoryProjectCharacter_generated_h
#error "TrajectoryProjectCharacter.generated.h already included, missing '#pragma once' in TrajectoryProjectCharacter.h"
#endif
#define TRAJECTORYPROJECT_TrajectoryProjectCharacter_generated_h

#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_SPARSE_DATA
#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_RPC_WRAPPERS
#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrajectoryProjectCharacter(); \
	friend struct Z_Construct_UClass_ATrajectoryProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ATrajectoryProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TrajectoryProject"), NO_API) \
	DECLARE_SERIALIZER(ATrajectoryProjectCharacter)


#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesATrajectoryProjectCharacter(); \
	friend struct Z_Construct_UClass_ATrajectoryProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ATrajectoryProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TrajectoryProject"), NO_API) \
	DECLARE_SERIALIZER(ATrajectoryProjectCharacter)


#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrajectoryProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrajectoryProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrajectoryProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrajectoryProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrajectoryProjectCharacter(ATrajectoryProjectCharacter&&); \
	NO_API ATrajectoryProjectCharacter(const ATrajectoryProjectCharacter&); \
public:


#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrajectoryProjectCharacter(ATrajectoryProjectCharacter&&); \
	NO_API ATrajectoryProjectCharacter(const ATrajectoryProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrajectoryProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrajectoryProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrajectoryProjectCharacter)


#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ATrajectoryProjectCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ATrajectoryProjectCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ATrajectoryProjectCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ATrajectoryProjectCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ATrajectoryProjectCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ATrajectoryProjectCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ATrajectoryProjectCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ATrajectoryProjectCharacter, L_MotionController); }


#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_17_PROLOG
#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_SPARSE_DATA \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_RPC_WRAPPERS \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_INCLASS \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_SPARSE_DATA \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_INCLASS_NO_PURE_DECLS \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRAJECTORYPROJECT_API UClass* StaticClass<class ATrajectoryProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
