// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REDO_RedoCharacter_generated_h
#error "RedoCharacter.generated.h already included, missing '#pragma once' in RedoCharacter.h"
#endif
#define REDO_RedoCharacter_generated_h

#define Redo_Source_Redo_RedoCharacter_h_22_SPARSE_DATA
#define Redo_Source_Redo_RedoCharacter_h_22_RPC_WRAPPERS
#define Redo_Source_Redo_RedoCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Redo_Source_Redo_RedoCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARedoCharacter(); \
	friend struct Z_Construct_UClass_ARedoCharacter_Statics; \
public: \
	DECLARE_CLASS(ARedoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Redo"), NO_API) \
	DECLARE_SERIALIZER(ARedoCharacter)


#define Redo_Source_Redo_RedoCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesARedoCharacter(); \
	friend struct Z_Construct_UClass_ARedoCharacter_Statics; \
public: \
	DECLARE_CLASS(ARedoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Redo"), NO_API) \
	DECLARE_SERIALIZER(ARedoCharacter)


#define Redo_Source_Redo_RedoCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARedoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARedoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARedoCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARedoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARedoCharacter(ARedoCharacter&&); \
	NO_API ARedoCharacter(const ARedoCharacter&); \
public:


#define Redo_Source_Redo_RedoCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARedoCharacter(ARedoCharacter&&); \
	NO_API ARedoCharacter(const ARedoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARedoCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARedoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARedoCharacter)


#define Redo_Source_Redo_RedoCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ARedoCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ARedoCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ARedoCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ARedoCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ARedoCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ARedoCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ARedoCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ARedoCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__precision() { return STRUCT_OFFSET(ARedoCharacter, precision); } \
	FORCEINLINE static uint32 __PPO__NewPos() { return STRUCT_OFFSET(ARedoCharacter, NewPos); } \
	FORCEINLINE static uint32 __PPO__PrevPos() { return STRUCT_OFFSET(ARedoCharacter, PrevPos); }


#define Redo_Source_Redo_RedoCharacter_h_19_PROLOG
#define Redo_Source_Redo_RedoCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Redo_Source_Redo_RedoCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Redo_Source_Redo_RedoCharacter_h_22_SPARSE_DATA \
	Redo_Source_Redo_RedoCharacter_h_22_RPC_WRAPPERS \
	Redo_Source_Redo_RedoCharacter_h_22_INCLASS \
	Redo_Source_Redo_RedoCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Redo_Source_Redo_RedoCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Redo_Source_Redo_RedoCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Redo_Source_Redo_RedoCharacter_h_22_SPARSE_DATA \
	Redo_Source_Redo_RedoCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Redo_Source_Redo_RedoCharacter_h_22_INCLASS_NO_PURE_DECLS \
	Redo_Source_Redo_RedoCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REDO_API UClass* StaticClass<class ARedoCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Redo_Source_Redo_RedoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
