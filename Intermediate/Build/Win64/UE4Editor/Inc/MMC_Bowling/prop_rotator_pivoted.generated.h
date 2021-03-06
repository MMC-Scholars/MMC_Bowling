// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class Ainfo_target;
#ifdef MMC_BOWLING_prop_rotator_pivoted_generated_h
#error "prop_rotator_pivoted.generated.h already included, missing '#pragma once' in prop_rotator_pivoted.h"
#endif
#define MMC_BOWLING_prop_rotator_pivoted_generated_h

#define MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_lerp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPosition(Z_Param_lerp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetByName) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_newTargetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTargetByName(Z_Param_Out_newTargetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTarget) \
	{ \
		P_GET_OBJECT(Ainfo_target,Z_Param_newTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTarget(Z_Param_newTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(Ainfo_target**)Z_Param__Result=this->GetTarget(); \
		P_NATIVE_END; \
	}


#define MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_lerp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPosition(Z_Param_lerp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetByName) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_newTargetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTargetByName(Z_Param_Out_newTargetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTarget) \
	{ \
		P_GET_OBJECT(Ainfo_target,Z_Param_newTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTarget(Z_Param_newTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(Ainfo_target**)Z_Param__Result=this->GetTarget(); \
		P_NATIVE_END; \
	}


#define MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAprop_rotator_pivoted(); \
	friend MMC_BOWLING_API class UClass* Z_Construct_UClass_Aprop_rotator_pivoted(); \
public: \
	DECLARE_CLASS(Aprop_rotator_pivoted, Aprop_rotator, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Bowling"), NO_API) \
	DECLARE_SERIALIZER(Aprop_rotator_pivoted) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAprop_rotator_pivoted(); \
	friend MMC_BOWLING_API class UClass* Z_Construct_UClass_Aprop_rotator_pivoted(); \
public: \
	DECLARE_CLASS(Aprop_rotator_pivoted, Aprop_rotator, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Bowling"), NO_API) \
	DECLARE_SERIALIZER(Aprop_rotator_pivoted) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aprop_rotator_pivoted(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aprop_rotator_pivoted) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aprop_rotator_pivoted); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aprop_rotator_pivoted); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aprop_rotator_pivoted(Aprop_rotator_pivoted&&); \
	NO_API Aprop_rotator_pivoted(const Aprop_rotator_pivoted&); \
public:


#define MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aprop_rotator_pivoted() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aprop_rotator_pivoted(Aprop_rotator_pivoted&&); \
	NO_API Aprop_rotator_pivoted(const Aprop_rotator_pivoted&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aprop_rotator_pivoted); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aprop_rotator_pivoted); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aprop_rotator_pivoted)


#define MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_PRIVATE_PROPERTY_OFFSET
#define MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_23_PROLOG
#define MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_PRIVATE_PROPERTY_OFFSET \
	MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_RPC_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_INCLASS \
	MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_PRIVATE_PROPERTY_OFFSET \
	MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_INCLASS_NO_PURE_DECLS \
	MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMC_Bowling_Source_MMC_Bowling_prop_rotator_pivoted_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
