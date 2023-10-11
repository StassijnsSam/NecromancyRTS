// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DemoProject/Spline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpline() {}
// Cross Module References
	DEMOPROJECT_API UClass* Z_Construct_UClass_ASpline_NoRegister();
	DEMOPROJECT_API UClass* Z_Construct_UClass_ASpline();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DemoProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ASpline::execGetLeaderLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLeaderLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpline::execGetPoinstAlongSpline)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amountOfActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPoinstAlongSpline(Z_Param_amountOfActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpline::execStopDrawing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDrawing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpline::execStartDrawing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDrawing();
		P_NATIVE_END;
	}
	void ASpline::StaticRegisterNativesASpline()
	{
		UClass* Class = ASpline::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLeaderLocation", &ASpline::execGetLeaderLocation },
			{ "GetPoinstAlongSpline", &ASpline::execGetPoinstAlongSpline },
			{ "StartDrawing", &ASpline::execStartDrawing },
			{ "StopDrawing", &ASpline::execStopDrawing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpline_GetLeaderLocation_Statics
	{
		struct Spline_eventGetLeaderLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpline_GetLeaderLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Spline_eventGetLeaderLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpline_GetLeaderLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpline_GetLeaderLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpline_GetLeaderLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpline_GetLeaderLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpline, nullptr, "GetLeaderLocation", nullptr, nullptr, sizeof(Spline_eventGetLeaderLocation_Parms), Z_Construct_UFunction_ASpline_GetLeaderLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpline_GetLeaderLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpline_GetLeaderLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpline_GetLeaderLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpline_GetLeaderLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpline_GetLeaderLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics
	{
		struct Spline_eventGetPoinstAlongSpline_Parms
		{
			int32 amountOfActors;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_amountOfActors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics::NewProp_amountOfActors = { "amountOfActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Spline_eventGetPoinstAlongSpline_Parms, amountOfActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Spline_eventGetPoinstAlongSpline_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics::NewProp_amountOfActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpline, nullptr, "GetPoinstAlongSpline", nullptr, nullptr, sizeof(Spline_eventGetPoinstAlongSpline_Parms), Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpline_GetPoinstAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpline_GetPoinstAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpline_StartDrawing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpline_StartDrawing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpline_StartDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpline, nullptr, "StartDrawing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpline_StartDrawing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpline_StartDrawing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpline_StartDrawing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpline_StartDrawing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpline_StopDrawing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpline_StopDrawing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpline_StopDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpline, nullptr, "StopDrawing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpline_StopDrawing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpline_StopDrawing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpline_StopDrawing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpline_StopDrawing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpline_NoRegister()
	{
		return ASpline::StaticClass();
	}
	struct Z_Construct_UClass_ASpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DemoProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpline_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpline_GetLeaderLocation, "GetLeaderLocation" }, // 3791637680
		{ &Z_Construct_UFunction_ASpline_GetPoinstAlongSpline, "GetPoinstAlongSpline" }, // 3538961423
		{ &Z_Construct_UFunction_ASpline_StartDrawing, "StartDrawing" }, // 587460570
		{ &Z_Construct_UFunction_ASpline_StopDrawing, "StopDrawing" }, // 2695747233
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpline_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spline.h" },
		{ "ModuleRelativePath", "Spline.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpline_Statics::ClassParams = {
		&ASpline::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpline, 458629805);
	template<> DEMOPROJECT_API UClass* StaticClass<ASpline>()
	{
		return ASpline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpline(Z_Construct_UClass_ASpline, &ASpline::StaticClass, TEXT("/Script/DemoProject"), TEXT("ASpline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
