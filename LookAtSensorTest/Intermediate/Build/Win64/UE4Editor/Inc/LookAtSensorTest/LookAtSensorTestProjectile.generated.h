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
#ifdef LOOKATSENSORTEST_LookAtSensorTestProjectile_generated_h
#error "LookAtSensorTestProjectile.generated.h already included, missing '#pragma once' in LookAtSensorTestProjectile.h"
#endif
#define LOOKATSENSORTEST_LookAtSensorTestProjectile_generated_h

#define LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_SPARSE_DATA
#define LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALookAtSensorTestProjectile(); \
	friend struct Z_Construct_UClass_ALookAtSensorTestProjectile_Statics; \
public: \
	DECLARE_CLASS(ALookAtSensorTestProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LookAtSensorTest"), NO_API) \
	DECLARE_SERIALIZER(ALookAtSensorTestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALookAtSensorTestProjectile(); \
	friend struct Z_Construct_UClass_ALookAtSensorTestProjectile_Statics; \
public: \
	DECLARE_CLASS(ALookAtSensorTestProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LookAtSensorTest"), NO_API) \
	DECLARE_SERIALIZER(ALookAtSensorTestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALookAtSensorTestProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALookAtSensorTestProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALookAtSensorTestProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALookAtSensorTestProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALookAtSensorTestProjectile(ALookAtSensorTestProjectile&&); \
	NO_API ALookAtSensorTestProjectile(const ALookAtSensorTestProjectile&); \
public:


#define LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALookAtSensorTestProjectile(ALookAtSensorTestProjectile&&); \
	NO_API ALookAtSensorTestProjectile(const ALookAtSensorTestProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALookAtSensorTestProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALookAtSensorTestProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALookAtSensorTestProjectile)


#define LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ALookAtSensorTestProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ALookAtSensorTestProjectile, ProjectileMovement); }


#define LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_12_PROLOG
#define LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_SPARSE_DATA \
	LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_RPC_WRAPPERS \
	LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_INCLASS \
	LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_SPARSE_DATA \
	LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_INCLASS_NO_PURE_DECLS \
	LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOOKATSENSORTEST_API UClass* StaticClass<class ALookAtSensorTestProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LookAtSensorTest_Source_LookAtSensorTest_LookAtSensorTestProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
