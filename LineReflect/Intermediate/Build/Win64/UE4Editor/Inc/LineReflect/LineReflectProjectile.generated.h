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
#ifdef LINEREFLECT_LineReflectProjectile_generated_h
#error "LineReflectProjectile.generated.h already included, missing '#pragma once' in LineReflectProjectile.h"
#endif
#define LINEREFLECT_LineReflectProjectile_generated_h

#define LineReflect_Source_LineReflect_LineReflectProjectile_h_15_SPARSE_DATA
#define LineReflect_Source_LineReflect_LineReflectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define LineReflect_Source_LineReflect_LineReflectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define LineReflect_Source_LineReflect_LineReflectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALineReflectProjectile(); \
	friend struct Z_Construct_UClass_ALineReflectProjectile_Statics; \
public: \
	DECLARE_CLASS(ALineReflectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LineReflect"), NO_API) \
	DECLARE_SERIALIZER(ALineReflectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define LineReflect_Source_LineReflect_LineReflectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALineReflectProjectile(); \
	friend struct Z_Construct_UClass_ALineReflectProjectile_Statics; \
public: \
	DECLARE_CLASS(ALineReflectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LineReflect"), NO_API) \
	DECLARE_SERIALIZER(ALineReflectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define LineReflect_Source_LineReflect_LineReflectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALineReflectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALineReflectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALineReflectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALineReflectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALineReflectProjectile(ALineReflectProjectile&&); \
	NO_API ALineReflectProjectile(const ALineReflectProjectile&); \
public:


#define LineReflect_Source_LineReflect_LineReflectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALineReflectProjectile(ALineReflectProjectile&&); \
	NO_API ALineReflectProjectile(const ALineReflectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALineReflectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALineReflectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALineReflectProjectile)


#define LineReflect_Source_LineReflect_LineReflectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ALineReflectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ALineReflectProjectile, ProjectileMovement); }


#define LineReflect_Source_LineReflect_LineReflectProjectile_h_12_PROLOG
#define LineReflect_Source_LineReflect_LineReflectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LineReflect_Source_LineReflect_LineReflectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	LineReflect_Source_LineReflect_LineReflectProjectile_h_15_SPARSE_DATA \
	LineReflect_Source_LineReflect_LineReflectProjectile_h_15_RPC_WRAPPERS \
	LineReflect_Source_LineReflect_LineReflectProjectile_h_15_INCLASS \
	LineReflect_Source_LineReflect_LineReflectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LineReflect_Source_LineReflect_LineReflectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LineReflect_Source_LineReflect_LineReflectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	LineReflect_Source_LineReflect_LineReflectProjectile_h_15_SPARSE_DATA \
	LineReflect_Source_LineReflect_LineReflectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	LineReflect_Source_LineReflect_LineReflectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	LineReflect_Source_LineReflect_LineReflectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LINEREFLECT_API UClass* StaticClass<class ALineReflectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LineReflect_Source_LineReflect_LineReflectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
