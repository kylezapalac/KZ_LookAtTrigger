// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KZ_LookAtSensorCPP/KZ_LookAtSensorCPPCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKZ_LookAtSensorCPPCharacter() {}
// Cross Module References
	KZ_LOOKATSENSORCPP_API UFunction* Z_Construct_UDelegateFunction_KZ_LookAtSensorCPP_OnUseItem__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_KZ_LookAtSensorCPP();
	KZ_LOOKATSENSORCPP_API UClass* Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_NoRegister();
	KZ_LOOKATSENSORCPP_API UClass* Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_KZ_LookAtSensorCPP_OnUseItem__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KZ_LookAtSensorCPP_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declaration of the delegate that will be called when the Primary Action is triggered\n// It is declared as dynamic so it can be accessed also in Blueprints\n" },
		{ "ModuleRelativePath", "KZ_LookAtSensorCPPCharacter.h" },
		{ "ToolTip", "Declaration of the delegate that will be called when the Primary Action is triggered\nIt is declared as dynamic so it can be accessed also in Blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KZ_LookAtSensorCPP_OnUseItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KZ_LookAtSensorCPP, nullptr, "OnUseItem__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KZ_LookAtSensorCPP_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KZ_LookAtSensorCPP_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KZ_LookAtSensorCPP_OnUseItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_KZ_LookAtSensorCPP_OnUseItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AKZ_LookAtSensorCPPCharacter::StaticRegisterNativesAKZ_LookAtSensorCPPCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKZ_LookAtSensorCPPCharacter);
	UClass* Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_NoRegister()
	{
		return AKZ_LookAtSensorCPPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lineDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lineDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUseItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUseItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_KZ_LookAtSensorCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "KZ_LookAtSensorCPPCharacter.h" },
		{ "ModuleRelativePath", "KZ_LookAtSensorCPPCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KZ_LookAtSensorCPPCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKZ_LookAtSensorCPPCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KZ_LookAtSensorCPPCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKZ_LookAtSensorCPPCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_actor_MetaData[] = {
		{ "Category", "KZ_LookAtSensorCPPCharacter" },
		{ "Comment", "// ADDED BY KZ\n" },
		{ "ModuleRelativePath", "KZ_LookAtSensorCPPCharacter.h" },
		{ "ToolTip", "ADDED BY KZ" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKZ_LookAtSensorCPPCharacter, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_lineDistance_MetaData[] = {
		{ "Category", "KZ_LookAtSensorCPPCharacter" },
		{ "Comment", "// ADDED BY KZ\n" },
		{ "ModuleRelativePath", "KZ_LookAtSensorCPPCharacter.h" },
		{ "ToolTip", "ADDED BY KZ" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_lineDistance = { "lineDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKZ_LookAtSensorCPPCharacter, lineDistance), METADATA_PARAMS(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_lineDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_lineDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_lineColor_MetaData[] = {
		{ "Category", "KZ_LookAtSensorCPPCharacter" },
		{ "Comment", "// ADDED BY KZ\n" },
		{ "ModuleRelativePath", "KZ_LookAtSensorCPPCharacter.h" },
		{ "ToolTip", "ADDED BY KZ" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_lineColor = { "lineColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKZ_LookAtSensorCPPCharacter, lineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_lineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_lineColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "KZ_LookAtSensorCPPCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKZ_LookAtSensorCPPCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_OnUseItem_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Delegate to whom anyone can subscribe to receive this event */" },
		{ "ModuleRelativePath", "KZ_LookAtSensorCPPCharacter.h" },
		{ "ToolTip", "Delegate to whom anyone can subscribe to receive this event" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_OnUseItem = { "OnUseItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKZ_LookAtSensorCPPCharacter, OnUseItem), Z_Construct_UDelegateFunction_KZ_LookAtSensorCPP_OnUseItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_OnUseItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_OnUseItem_MetaData)) }; // 3100596764
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_lineDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_lineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::NewProp_OnUseItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKZ_LookAtSensorCPPCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::ClassParams = {
		&AKZ_LookAtSensorCPPCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter()
	{
		if (!Z_Registration_Info_UClass_AKZ_LookAtSensorCPPCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKZ_LookAtSensorCPPCharacter.OuterSingleton, Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKZ_LookAtSensorCPPCharacter.OuterSingleton;
	}
	template<> KZ_LOOKATSENSORCPP_API UClass* StaticClass<AKZ_LookAtSensorCPPCharacter>()
	{
		return AKZ_LookAtSensorCPPCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKZ_LookAtSensorCPPCharacter);
	struct Z_CompiledInDeferFile_FID_KZ_LookAtSensorCPP_Source_KZ_LookAtSensorCPP_KZ_LookAtSensorCPPCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KZ_LookAtSensorCPP_Source_KZ_LookAtSensorCPP_KZ_LookAtSensorCPPCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKZ_LookAtSensorCPPCharacter, AKZ_LookAtSensorCPPCharacter::StaticClass, TEXT("AKZ_LookAtSensorCPPCharacter"), &Z_Registration_Info_UClass_AKZ_LookAtSensorCPPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKZ_LookAtSensorCPPCharacter), 1197043053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KZ_LookAtSensorCPP_Source_KZ_LookAtSensorCPP_KZ_LookAtSensorCPPCharacter_h_1948256903(TEXT("/Script/KZ_LookAtSensorCPP"),
		Z_CompiledInDeferFile_FID_KZ_LookAtSensorCPP_Source_KZ_LookAtSensorCPP_KZ_LookAtSensorCPPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KZ_LookAtSensorCPP_Source_KZ_LookAtSensorCPP_KZ_LookAtSensorCPPCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
