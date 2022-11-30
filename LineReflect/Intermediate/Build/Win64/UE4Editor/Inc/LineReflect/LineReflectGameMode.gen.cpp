// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LineReflect/LineReflectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineReflectGameMode() {}
// Cross Module References
	LINEREFLECT_API UClass* Z_Construct_UClass_ALineReflectGameMode_NoRegister();
	LINEREFLECT_API UClass* Z_Construct_UClass_ALineReflectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LineReflect();
// End Cross Module References
	void ALineReflectGameMode::StaticRegisterNativesALineReflectGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALineReflectGameMode_NoRegister()
	{
		return ALineReflectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALineReflectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALineReflectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LineReflect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineReflectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LineReflectGameMode.h" },
		{ "ModuleRelativePath", "LineReflectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALineReflectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALineReflectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALineReflectGameMode_Statics::ClassParams = {
		&ALineReflectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALineReflectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALineReflectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALineReflectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALineReflectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALineReflectGameMode, 2412269071);
	template<> LINEREFLECT_API UClass* StaticClass<ALineReflectGameMode>()
	{
		return ALineReflectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALineReflectGameMode(Z_Construct_UClass_ALineReflectGameMode, &ALineReflectGameMode::StaticClass, TEXT("/Script/LineReflect"), TEXT("ALineReflectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALineReflectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
