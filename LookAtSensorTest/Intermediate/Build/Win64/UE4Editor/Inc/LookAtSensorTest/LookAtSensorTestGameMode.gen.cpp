// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LookAtSensorTest/LookAtSensorTestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookAtSensorTestGameMode() {}
// Cross Module References
	LOOKATSENSORTEST_API UClass* Z_Construct_UClass_ALookAtSensorTestGameMode_NoRegister();
	LOOKATSENSORTEST_API UClass* Z_Construct_UClass_ALookAtSensorTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LookAtSensorTest();
// End Cross Module References
	void ALookAtSensorTestGameMode::StaticRegisterNativesALookAtSensorTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALookAtSensorTestGameMode_NoRegister()
	{
		return ALookAtSensorTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALookAtSensorTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALookAtSensorTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LookAtSensorTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALookAtSensorTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LookAtSensorTestGameMode.h" },
		{ "ModuleRelativePath", "LookAtSensorTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALookAtSensorTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALookAtSensorTestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALookAtSensorTestGameMode_Statics::ClassParams = {
		&ALookAtSensorTestGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALookAtSensorTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALookAtSensorTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALookAtSensorTestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALookAtSensorTestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALookAtSensorTestGameMode, 3475260229);
	template<> LOOKATSENSORTEST_API UClass* StaticClass<ALookAtSensorTestGameMode>()
	{
		return ALookAtSensorTestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALookAtSensorTestGameMode(Z_Construct_UClass_ALookAtSensorTestGameMode, &ALookAtSensorTestGameMode::StaticClass, TEXT("/Script/LookAtSensorTest"), TEXT("ALookAtSensorTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALookAtSensorTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
