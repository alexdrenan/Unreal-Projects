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
#ifdef TRAJECTORYPROJECT_TrajectoryProjectProjectile_generated_h
#error "TrajectoryProjectProjectile.generated.h already included, missing '#pragma once' in TrajectoryProjectProjectile.h"
#endif
#define TRAJECTORYPROJECT_TrajectoryProjectProjectile_generated_h

#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_SPARSE_DATA
#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrajectoryProjectProjectile(); \
	friend struct Z_Construct_UClass_ATrajectoryProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(ATrajectoryProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TrajectoryProject"), NO_API) \
	DECLARE_SERIALIZER(ATrajectoryProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATrajectoryProjectProjectile(); \
	friend struct Z_Construct_UClass_ATrajectoryProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(ATrajectoryProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TrajectoryProject"), NO_API) \
	DECLARE_SERIALIZER(ATrajectoryProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrajectoryProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrajectoryProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrajectoryProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrajectoryProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrajectoryProjectProjectile(ATrajectoryProjectProjectile&&); \
	NO_API ATrajectoryProjectProjectile(const ATrajectoryProjectProjectile&); \
public:


#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrajectoryProjectProjectile(ATrajectoryProjectProjectile&&); \
	NO_API ATrajectoryProjectProjectile(const ATrajectoryProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrajectoryProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrajectoryProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrajectoryProjectProjectile)


#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATrajectoryProjectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATrajectoryProjectProjectile, ProjectileMovement); }


#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_13_PROLOG
#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_SPARSE_DATA \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_RPC_WRAPPERS \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_INCLASS \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_SPARSE_DATA \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_INCLASS_NO_PURE_DECLS \
	TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRAJECTORYPROJECT_API UClass* StaticClass<class ATrajectoryProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TrajectoryProject_Source_TrajectoryProject_TrajectoryProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
