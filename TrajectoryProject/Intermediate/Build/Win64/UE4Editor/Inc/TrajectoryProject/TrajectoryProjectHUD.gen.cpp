// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrajectoryProject/TrajectoryProjectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrajectoryProjectHUD() {}
// Cross Module References
	TRAJECTORYPROJECT_API UClass* Z_Construct_UClass_ATrajectoryProjectHUD_NoRegister();
	TRAJECTORYPROJECT_API UClass* Z_Construct_UClass_ATrajectoryProjectHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TrajectoryProject();
// End Cross Module References
	void ATrajectoryProjectHUD::StaticRegisterNativesATrajectoryProjectHUD()
	{
	}
	UClass* Z_Construct_UClass_ATrajectoryProjectHUD_NoRegister()
	{
		return ATrajectoryProjectHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATrajectoryProjectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrajectoryProjectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TrajectoryProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrajectoryProjectHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TrajectoryProjectHUD.h" },
		{ "ModuleRelativePath", "TrajectoryProjectHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrajectoryProjectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrajectoryProjectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATrajectoryProjectHUD_Statics::ClassParams = {
		&ATrajectoryProjectHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATrajectoryProjectHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATrajectoryProjectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrajectoryProjectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATrajectoryProjectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrajectoryProjectHUD, 2989529500);
	template<> TRAJECTORYPROJECT_API UClass* StaticClass<ATrajectoryProjectHUD>()
	{
		return ATrajectoryProjectHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrajectoryProjectHUD(Z_Construct_UClass_ATrajectoryProjectHUD, &ATrajectoryProjectHUD::StaticClass, TEXT("/Script/TrajectoryProject"), TEXT("ATrajectoryProjectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrajectoryProjectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
