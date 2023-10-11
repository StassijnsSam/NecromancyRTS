// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DEMOPROJECT_ZombieGroup_generated_h
#error "ZombieGroup.generated.h already included, missing '#pragma once' in ZombieGroup.h"
#endif
#define DEMOPROJECT_ZombieGroup_generated_h

#define Necromancy_Source_DemoProject_ZombieGroup_h_15_SPARSE_DATA
#define Necromancy_Source_DemoProject_ZombieGroup_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveGroupIntoFormation); \
	DECLARE_FUNCTION(execInitializeGroup);


#define Necromancy_Source_DemoProject_ZombieGroup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveGroupIntoFormation); \
	DECLARE_FUNCTION(execInitializeGroup);


#define Necromancy_Source_DemoProject_ZombieGroup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombieGroup(); \
	friend struct Z_Construct_UClass_AZombieGroup_Statics; \
public: \
	DECLARE_CLASS(AZombieGroup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemoProject"), NO_API) \
	DECLARE_SERIALIZER(AZombieGroup)


#define Necromancy_Source_DemoProject_ZombieGroup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAZombieGroup(); \
	friend struct Z_Construct_UClass_AZombieGroup_Statics; \
public: \
	DECLARE_CLASS(AZombieGroup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemoProject"), NO_API) \
	DECLARE_SERIALIZER(AZombieGroup)


#define Necromancy_Source_DemoProject_ZombieGroup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombieGroup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombieGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieGroup(AZombieGroup&&); \
	NO_API AZombieGroup(const AZombieGroup&); \
public:


#define Necromancy_Source_DemoProject_ZombieGroup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieGroup(AZombieGroup&&); \
	NO_API AZombieGroup(const AZombieGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombieGroup)


#define Necromancy_Source_DemoProject_ZombieGroup_h_15_PRIVATE_PROPERTY_OFFSET
#define Necromancy_Source_DemoProject_ZombieGroup_h_12_PROLOG
#define Necromancy_Source_DemoProject_ZombieGroup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Necromancy_Source_DemoProject_ZombieGroup_h_15_PRIVATE_PROPERTY_OFFSET \
	Necromancy_Source_DemoProject_ZombieGroup_h_15_SPARSE_DATA \
	Necromancy_Source_DemoProject_ZombieGroup_h_15_RPC_WRAPPERS \
	Necromancy_Source_DemoProject_ZombieGroup_h_15_INCLASS \
	Necromancy_Source_DemoProject_ZombieGroup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Necromancy_Source_DemoProject_ZombieGroup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Necromancy_Source_DemoProject_ZombieGroup_h_15_PRIVATE_PROPERTY_OFFSET \
	Necromancy_Source_DemoProject_ZombieGroup_h_15_SPARSE_DATA \
	Necromancy_Source_DemoProject_ZombieGroup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Necromancy_Source_DemoProject_ZombieGroup_h_15_INCLASS_NO_PURE_DECLS \
	Necromancy_Source_DemoProject_ZombieGroup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMOPROJECT_API UClass* StaticClass<class AZombieGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Necromancy_Source_DemoProject_ZombieGroup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
