// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef REDO_RedoProjectile_generated_h
#error "RedoProjectile.generated.h already included, missing '#pragma once' in RedoProjectile.h"
#endif
#define REDO_RedoProjectile_generated_h

#define Redo_Source_Redo_RedoProjectile_h_16_SPARSE_DATA
#define Redo_Source_Redo_RedoProjectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Redo_Source_Redo_RedoProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Redo_Source_Redo_RedoProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARedoProjectile(); \
	friend struct Z_Construct_UClass_ARedoProjectile_Statics; \
public: \
	DECLARE_CLASS(ARedoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Redo"), NO_API) \
	DECLARE_SERIALIZER(ARedoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Redo_Source_Redo_RedoProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesARedoProjectile(); \
	friend struct Z_Construct_UClass_ARedoProjectile_Statics; \
public: \
	DECLARE_CLASS(ARedoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Redo"), NO_API) \
	DECLARE_SERIALIZER(ARedoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Redo_Source_Redo_RedoProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARedoProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARedoProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARedoProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARedoProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARedoProjectile(ARedoProjectile&&); \
	NO_API ARedoProjectile(const ARedoProjectile&); \
public:


#define Redo_Source_Redo_RedoProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARedoProjectile(ARedoProjectile&&); \
	NO_API ARedoProjectile(const ARedoProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARedoProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARedoProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARedoProjectile)


#define Redo_Source_Redo_RedoProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ARedoProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ARedoProjectile, ProjectileMovement); }


#define Redo_Source_Redo_RedoProjectile_h_13_PROLOG
#define Redo_Source_Redo_RedoProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Redo_Source_Redo_RedoProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	Redo_Source_Redo_RedoProjectile_h_16_SPARSE_DATA \
	Redo_Source_Redo_RedoProjectile_h_16_RPC_WRAPPERS \
	Redo_Source_Redo_RedoProjectile_h_16_INCLASS \
	Redo_Source_Redo_RedoProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Redo_Source_Redo_RedoProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Redo_Source_Redo_RedoProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	Redo_Source_Redo_RedoProjectile_h_16_SPARSE_DATA \
	Redo_Source_Redo_RedoProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Redo_Source_Redo_RedoProjectile_h_16_INCLASS_NO_PURE_DECLS \
	Redo_Source_Redo_RedoProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REDO_API UClass* StaticClass<class ARedoProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Redo_Source_Redo_RedoProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
