// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKZ_LookAtSensorCPP_init() {}
	KZ_LOOKATSENSORCPP_API UFunction* Z_Construct_UDelegateFunction_KZ_LookAtSensorCPP_OnPickUp__DelegateSignature();
	KZ_LOOKATSENSORCPP_API UFunction* Z_Construct_UDelegateFunction_KZ_LookAtSensorCPP_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_KZ_LookAtSensorCPP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_KZ_LookAtSensorCPP()
	{
		if (!Z_Registration_Info_UPackage__Script_KZ_LookAtSensorCPP.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_KZ_LookAtSensorCPP_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KZ_LookAtSensorCPP_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/KZ_LookAtSensorCPP",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDD9791E2,
				0x4A142ED2,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_KZ_LookAtSensorCPP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_KZ_LookAtSensorCPP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_KZ_LookAtSensorCPP(Z_Construct_UPackage__Script_KZ_LookAtSensorCPP, TEXT("/Script/KZ_LookAtSensorCPP"), Z_Registration_Info_UPackage__Script_KZ_LookAtSensorCPP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDD9791E2, 0x4A142ED2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
