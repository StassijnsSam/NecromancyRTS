// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DemoProject/GroupManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupManager() {}
// Cross Module References
	DEMOPROJECT_API UClass* Z_Construct_UClass_AGroupManager_NoRegister();
	DEMOPROJECT_API UClass* Z_Construct_UClass_AGroupManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DemoProject();
// End Cross Module References
	void AGroupManager::StaticRegisterNativesAGroupManager()
	{
	}
	UClass* Z_Construct_UClass_AGroupManager_NoRegister()
	{
		return AGroupManager::StaticClass();
	}
	struct Z_Construct_UClass_AGroupManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGroupManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DemoProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroupManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GroupManager.h" },
		{ "ModuleRelativePath", "GroupManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGroupManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroupManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGroupManager_Statics::ClassParams = {
		&AGroupManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGroupManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGroupManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGroupManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGroupManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGroupManager, 336397133);
	template<> DEMOPROJECT_API UClass* StaticClass<AGroupManager>()
	{
		return AGroupManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGroupManager(Z_Construct_UClass_AGroupManager, &AGroupManager::StaticClass, TEXT("/Script/DemoProject"), TEXT("AGroupManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGroupManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
