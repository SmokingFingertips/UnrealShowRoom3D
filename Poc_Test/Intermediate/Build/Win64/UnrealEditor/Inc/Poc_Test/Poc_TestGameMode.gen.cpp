// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Poc_Test/Poc_TestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoc_TestGameMode() {}
// Cross Module References
	POC_TEST_API UClass* Z_Construct_UClass_APoc_TestGameMode_NoRegister();
	POC_TEST_API UClass* Z_Construct_UClass_APoc_TestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Poc_Test();
// End Cross Module References
	void APoc_TestGameMode::StaticRegisterNativesAPoc_TestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APoc_TestGameMode);
	UClass* Z_Construct_UClass_APoc_TestGameMode_NoRegister()
	{
		return APoc_TestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APoc_TestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoc_TestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Poc_Test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoc_TestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Poc_TestGameMode.h" },
		{ "ModuleRelativePath", "Poc_TestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoc_TestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoc_TestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APoc_TestGameMode_Statics::ClassParams = {
		&APoc_TestGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APoc_TestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APoc_TestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APoc_TestGameMode()
	{
		if (!Z_Registration_Info_UClass_APoc_TestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APoc_TestGameMode.OuterSingleton, Z_Construct_UClass_APoc_TestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APoc_TestGameMode.OuterSingleton;
	}
	template<> POC_TEST_API UClass* StaticClass<APoc_TestGameMode>()
	{
		return APoc_TestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoc_TestGameMode);
	struct Z_CompiledInDeferFile_FID_Poc_Test_Source_Poc_Test_Poc_TestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Poc_Test_Source_Poc_Test_Poc_TestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APoc_TestGameMode, APoc_TestGameMode::StaticClass, TEXT("APoc_TestGameMode"), &Z_Registration_Info_UClass_APoc_TestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APoc_TestGameMode), 3352705956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Poc_Test_Source_Poc_Test_Poc_TestGameMode_h_1756474971(TEXT("/Script/Poc_Test"),
		Z_CompiledInDeferFile_FID_Poc_Test_Source_Poc_Test_Poc_TestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Poc_Test_Source_Poc_Test_Poc_TestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
