// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LineReflect/ReflectWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReflectWall() {}
// Cross Module References
	LINEREFLECT_API UClass* Z_Construct_UClass_AReflectWall_NoRegister();
	LINEREFLECT_API UClass* Z_Construct_UClass_AReflectWall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LineReflect();
// End Cross Module References
	void AReflectWall::StaticRegisterNativesAReflectWall()
	{
	}
	UClass* Z_Construct_UClass_AReflectWall_NoRegister()
	{
		return AReflectWall::StaticClass();
	}
	struct Z_Construct_UClass_AReflectWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReflectWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LineReflect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReflectWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReflectWall.h" },
		{ "ModuleRelativePath", "ReflectWall.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReflectWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReflectWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReflectWall_Statics::ClassParams = {
		&AReflectWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReflectWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReflectWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReflectWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReflectWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReflectWall, 538238449);
	template<> LINEREFLECT_API UClass* StaticClass<AReflectWall>()
	{
		return AReflectWall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReflectWall(Z_Construct_UClass_AReflectWall, &AReflectWall::StaticClass, TEXT("/Script/LineReflect"), TEXT("AReflectWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReflectWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
