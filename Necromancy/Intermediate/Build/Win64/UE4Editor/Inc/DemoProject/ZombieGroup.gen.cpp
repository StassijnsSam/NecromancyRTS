// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DemoProject/ZombieGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieGroup() {}
// Cross Module References
	DEMOPROJECT_API UClass* Z_Construct_UClass_AZombieGroup_NoRegister();
	DEMOPROJECT_API UClass* Z_Construct_UClass_AZombieGroup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DemoProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AZombieGroup::execMoveGroupIntoFormation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveGroupIntoFormation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZombieGroup::execInitializeGroup)
	{
		P_GET_TARRAY(AActor*,Z_Param_selectedZombies);
		P_GET_OBJECT(AActor,Z_Param_groupLeader);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeGroup(Z_Param_selectedZombies,Z_Param_groupLeader);
		P_NATIVE_END;
	}
	void AZombieGroup::StaticRegisterNativesAZombieGroup()
	{
		UClass* Class = AZombieGroup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeGroup", &AZombieGroup::execInitializeGroup },
			{ "MoveGroupIntoFormation", &AZombieGroup::execMoveGroupIntoFormation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics
	{
		struct ZombieGroup_eventInitializeGroup_Parms
		{
			TArray<AActor*> selectedZombies;
			AActor* groupLeader;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectedZombies_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_selectedZombies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_groupLeader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics::NewProp_selectedZombies_Inner = { "selectedZombies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics::NewProp_selectedZombies = { "selectedZombies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieGroup_eventInitializeGroup_Parms, selectedZombies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics::NewProp_groupLeader = { "groupLeader", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieGroup_eventInitializeGroup_Parms, groupLeader), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics::NewProp_selectedZombies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics::NewProp_selectedZombies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics::NewProp_groupLeader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ZombieGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieGroup, nullptr, "InitializeGroup", nullptr, nullptr, sizeof(ZombieGroup_eventInitializeGroup_Parms), Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieGroup_InitializeGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieGroup_InitializeGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieGroup_MoveGroupIntoFormation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieGroup_MoveGroupIntoFormation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ZombieGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieGroup_MoveGroupIntoFormation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieGroup, nullptr, "MoveGroupIntoFormation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieGroup_MoveGroupIntoFormation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieGroup_MoveGroupIntoFormation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieGroup_MoveGroupIntoFormation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieGroup_MoveGroupIntoFormation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZombieGroup_NoRegister()
	{
		return AZombieGroup::StaticClass();
	}
	struct Z_Construct_UClass_AZombieGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DemoProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AZombieGroup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZombieGroup_InitializeGroup, "InitializeGroup" }, // 2570320040
		{ &Z_Construct_UFunction_AZombieGroup_MoveGroupIntoFormation, "MoveGroupIntoFormation" }, // 253740344
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieGroup.h" },
		{ "ModuleRelativePath", "ZombieGroup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieGroup_Statics::ClassParams = {
		&AZombieGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieGroup, 4030043139);
	template<> DEMOPROJECT_API UClass* StaticClass<AZombieGroup>()
	{
		return AZombieGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieGroup(Z_Construct_UClass_AZombieGroup, &AZombieGroup::StaticClass, TEXT("/Script/DemoProject"), TEXT("AZombieGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
