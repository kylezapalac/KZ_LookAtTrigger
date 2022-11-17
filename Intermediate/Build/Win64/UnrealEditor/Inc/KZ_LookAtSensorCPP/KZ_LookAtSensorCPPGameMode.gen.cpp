// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KZ_LookAtSensorCPP/KZ_LookAtSensorCPPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKZ_LookAtSensorCPPGameMode() {}
// Cross Module References
	KZ_LOOKATSENSORCPP_API UClass* Z_Construct_UClass_AKZ_LookAtSensorCPPGameMode_NoRegister();
	KZ_LOOKATSENSORCPP_API UClass* Z_Construct_UClass_AKZ_LookAtSensorCPPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_KZ_LookAtSensorCPP();
// End Cross Module References
	void AKZ_LookAtSensorCPPGameMode::StaticRegisterNativesAKZ_LookAtSensorCPPGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKZ_LookAtSensorCPPGameMode);
	UClass* Z_Construct_UClass_AKZ_LookAtSensorCPPGameMode_NoRegister()
	{
		return AKZ_LookAtSensorCPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKZ_LookAtSensorCPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKZ_LookAtSensorCPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KZ_LookAtSensorCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKZ_LookAtSensorCPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "KZ_LookAtSensorCPPGameMode.h" },
		{ "ModuleRelativePath", "KZ_LookAtSensorCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKZ_LookAtSensorCPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKZ_LookAtSensorCPPGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKZ_LookAtSensorCPPGameMode_Statics::ClassParams = {
		&AKZ_LookAtSensorCPPGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AKZ_LookAtSensorCPPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKZ_LookAtSensorCPPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKZ_LookAtSensorCPPGameMode()
	{
		if (!Z_Registration_Info_UClass_AKZ_LookAtSensorCPPGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKZ_LookAtSensorCPPGameMode.OuterSingleton, Z_Construct_UClass_AKZ_LookAtSensorCPPGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKZ_LookAtSensorCPPGameMode.OuterSingleton;
	}
	template<> KZ_LOOKATSENSORCPP_API UClass* StaticClass<AKZ_LookAtSensorCPPGameMode>()
	{
		return AKZ_LookAtSensorCPPGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKZ_LookAtSensorCPPGameMode);
	struct Z_CompiledInDeferFile_FID_KZ_LookAtSensorCPP_Source_KZ_LookAtSensorCPP_KZ_LookAtSensorCPPGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KZ_LookAtSensorCPP_Source_KZ_LookAtSensorCPP_KZ_LookAtSensorCPPGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKZ_LookAtSensorCPPGameMode, AKZ_LookAtSensorCPPGameMode::StaticClass, TEXT("AKZ_LookAtSensorCPPGameMode"), &Z_Registration_Info_UClass_AKZ_LookAtSensorCPPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKZ_LookAtSensorCPPGameMode), 3568463736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KZ_LookAtSensorCPP_Source_KZ_LookAtSensorCPP_KZ_LookAtSensorCPPGameMode_h_901546153(TEXT("/Script/KZ_LookAtSensorCPP"),
		Z_CompiledInDeferFile_FID_KZ_LookAtSensorCPP_Source_KZ_LookAtSensorCPP_KZ_LookAtSensorCPPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KZ_LookAtSensorCPP_Source_KZ_LookAtSensorCPP_KZ_LookAtSensorCPPGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
