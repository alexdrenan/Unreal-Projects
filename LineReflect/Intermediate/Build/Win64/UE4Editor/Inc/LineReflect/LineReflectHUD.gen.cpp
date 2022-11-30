// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LineReflect/LineReflectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineReflectHUD() {}
// Cross Module References
	LINEREFLECT_API UClass* Z_Construct_UClass_ALineReflectHUD_NoRegister();
	LINEREFLECT_API UClass* Z_Construct_UClass_ALineReflectHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_LineReflect();
// End Cross Module References
	void ALineReflectHUD::StaticRegisterNativesALineReflectHUD()
	{
	}
	UClass* Z_Construct_UClass_ALineReflectHUD_NoRegister()
	{
		return ALineReflectHUD::StaticClass();
	}
	struct Z_Construct_UClass_ALineReflectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALineReflectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_LineReflect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALineReflectHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "LineReflectHUD.h" },
		{ "ModuleRelativePath", "LineReflectHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALineReflectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALineReflectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALineReflectHUD_Statics::ClassParams = {
		&ALineReflectHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALineReflectHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALineReflectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALineReflectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALineReflectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALineReflectHUD, 1174294525);
	template<> LINEREFLECT_API UClass* StaticClass<ALineReflectHUD>()
	{
		return ALineReflectHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALineReflectHUD(Z_Construct_UClass_ALineReflectHUD, &ALineReflectHUD::StaticClass, TEXT("/Script/LineReflect"), TEXT("ALineReflectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALineReflectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
