// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Redo/RedoHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedoHUD() {}
// Cross Module References
	REDO_API UClass* Z_Construct_UClass_ARedoHUD_NoRegister();
	REDO_API UClass* Z_Construct_UClass_ARedoHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Redo();
// End Cross Module References
	void ARedoHUD::StaticRegisterNativesARedoHUD()
	{
	}
	UClass* Z_Construct_UClass_ARedoHUD_NoRegister()
	{
		return ARedoHUD::StaticClass();
	}
	struct Z_Construct_UClass_ARedoHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARedoHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Redo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARedoHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "RedoHUD.h" },
		{ "ModuleRelativePath", "RedoHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARedoHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARedoHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARedoHUD_Statics::ClassParams = {
		&ARedoHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARedoHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARedoHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARedoHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARedoHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARedoHUD, 2940895907);
	template<> REDO_API UClass* StaticClass<ARedoHUD>()
	{
		return ARedoHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARedoHUD(Z_Construct_UClass_ARedoHUD, &ARedoHUD::StaticClass, TEXT("/Script/Redo"), TEXT("ARedoHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARedoHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
