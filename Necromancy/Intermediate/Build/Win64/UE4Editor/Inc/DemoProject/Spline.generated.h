// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef DEMOPROJECT_Spline_generated_h
#error "Spline.generated.h already included, missing '#pragma once' in Spline.h"
#endif
#define DEMOPROJECT_Spline_generated_h

#define Necromancy_Source_DemoProject_Spline_h_14_SPARSE_DATA
#define Necromancy_Source_DemoProject_Spline_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLeaderLocation); \
	DECLARE_FUNCTION(execGetPoinstAlongSpline); \
	DECLARE_FUNCTION(execStopDrawing); \
	DECLARE_FUNCTION(execStartDrawing);


#define Necromancy_Source_DemoProject_Spline_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLeaderLocation); \
	DECLARE_FUNCTION(execGetPoinstAlongSpline); \
	DECLARE_FUNCTION(execStopDrawing); \
	DECLARE_FUNCTION(execStartDrawing);


#define Necromancy_Source_DemoProject_Spline_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpline(); \
	friend struct Z_Construct_UClass_ASpline_Statics; \
public: \
	DECLARE_CLASS(ASpline, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemoProject"), NO_API) \
	DECLARE_SERIALIZER(ASpline)


#define Necromancy_Source_DemoProject_Spline_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASpline(); \
	friend struct Z_Construct_UClass_ASpline_Statics; \
public: \
	DECLARE_CLASS(ASpline, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemoProject"), NO_API) \
	DECLARE_SERIALIZER(ASpline)


#define Necromancy_Source_DemoProject_Spline_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpline(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpline) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpline); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpline(ASpline&&); \
	NO_API ASpline(const ASpline&); \
public:


#define Necromancy_Source_DemoProject_Spline_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpline(ASpline&&); \
	NO_API ASpline(const ASpline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpline)


#define Necromancy_Source_DemoProject_Spline_h_14_PRIVATE_PROPERTY_OFFSET
#define Necromancy_Source_DemoProject_Spline_h_11_PROLOG
#define Necromancy_Source_DemoProject_Spline_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Necromancy_Source_DemoProject_Spline_h_14_PRIVATE_PROPERTY_OFFSET \
	Necromancy_Source_DemoProject_Spline_h_14_SPARSE_DATA \
	Necromancy_Source_DemoProject_Spline_h_14_RPC_WRAPPERS \
	Necromancy_Source_DemoProject_Spline_h_14_INCLASS \
	Necromancy_Source_DemoProject_Spline_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Necromancy_Source_DemoProject_Spline_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Necromancy_Source_DemoProject_Spline_h_14_PRIVATE_PROPERTY_OFFSET \
	Necromancy_Source_DemoProject_Spline_h_14_SPARSE_DATA \
	Necromancy_Source_DemoProject_Spline_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Necromancy_Source_DemoProject_Spline_h_14_INCLASS_NO_PURE_DECLS \
	Necromancy_Source_DemoProject_Spline_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMOPROJECT_API UClass* StaticClass<class ASpline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Necromancy_Source_DemoProject_Spline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
