// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LINEREFLECT_LineReflectCharacter_generated_h
#error "LineReflectCharacter.generated.h already included, missing '#pragma once' in LineReflectCharacter.h"
#endif
#define LINEREFLECT_LineReflectCharacter_generated_h

#define LineReflect_Source_LineReflect_LineReflectCharacter_h_21_SPARSE_DATA
#define LineReflect_Source_LineReflect_LineReflectCharacter_h_21_RPC_WRAPPERS
#define LineReflect_Source_LineReflect_LineReflectCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define LineReflect_Source_LineReflect_LineReflectCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALineReflectCharacter(); \
	friend struct Z_Construct_UClass_ALineReflectCharacter_Statics; \
public: \
	DECLARE_CLASS(ALineReflectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LineReflect"), NO_API) \
	DECLARE_SERIALIZER(ALineReflectCharacter)


#define LineReflect_Source_LineReflect_LineReflectCharacter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesALineReflectCharacter(); \
	friend struct Z_Construct_UClass_ALineReflectCharacter_Statics; \
public: \
	DECLARE_CLASS(ALineReflectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LineReflect"), NO_API) \
	DECLARE_SERIALIZER(ALineReflectCharacter)


#define LineReflect_Source_LineReflect_LineReflectCharacter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALineReflectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALineReflectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALineReflectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALineReflectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALineReflectCharacter(ALineReflectCharacter&&); \
	NO_API ALineReflectCharacter(const ALineReflectCharacter&); \
public:


#define LineReflect_Source_LineReflect_LineReflectCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALineReflectCharacter(ALineReflectCharacter&&); \
	NO_API ALineReflectCharacter(const ALineReflectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALineReflectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALineReflectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALineReflectCharacter)


#define LineReflect_Source_LineReflect_LineReflectCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ALineReflectCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ALineReflectCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ALineReflectCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ALineReflectCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ALineReflectCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ALineReflectCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ALineReflectCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ALineReflectCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__wall() { return STRUCT_OFFSET(ALineReflectCharacter, wall); }


#define LineReflect_Source_LineReflect_LineReflectCharacter_h_18_PROLOG
#define LineReflect_Source_LineReflect_LineReflectCharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LineReflect_Source_LineReflect_LineReflectCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	LineReflect_Source_LineReflect_LineReflectCharacter_h_21_SPARSE_DATA \
	LineReflect_Source_LineReflect_LineReflectCharacter_h_21_RPC_WRAPPERS \
	LineReflect_Source_LineReflect_LineReflectCharacter_h_21_INCLASS \
	LineReflect_Source_LineReflect_LineReflectCharacter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LineReflect_Source_LineReflect_LineReflectCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LineReflect_Source_LineReflect_LineReflectCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	LineReflect_Source_LineReflect_LineReflectCharacter_h_21_SPARSE_DATA \
	LineReflect_Source_LineReflect_LineReflectCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	LineReflect_Source_LineReflect_LineReflectCharacter_h_21_INCLASS_NO_PURE_DECLS \
	LineReflect_Source_LineReflect_LineReflectCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LINEREFLECT_API UClass* StaticClass<class ALineReflectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LineReflect_Source_LineReflect_LineReflectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
