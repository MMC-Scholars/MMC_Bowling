// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FTransform;
class UObject;
class Ainfo_target;
#ifdef MMC_BOWLING_info_target_generated_h
#error "info_target.generated.h already included, missing '#pragma once' in info_target.h"
#endif
#define MMC_BOWLING_info_target_generated_h

#define MMC_Bowling_Source_MMC_Bowling_info_target_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOffsetToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_fromActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetOffsetToActor(Z_Param_fromActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_fromActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->GetTransformToActor(Z_Param_fromActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTargetNearestToLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_worldLocation); \
		P_GET_OBJECT(UObject,Z_Param_worldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(Ainfo_target**)Z_Param__Result=Ainfo_target::FindTargetNearestToLocation(Z_Param_worldLocation,Z_Param_worldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTargetByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_targetName); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(Ainfo_target**)Z_Param__Result=Ainfo_target::FindTargetByName(Z_Param_targetName,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetAtOrigin) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(Ainfo_target**)Z_Param__Result=Ainfo_target::GetTargetAtOrigin(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define MMC_Bowling_Source_MMC_Bowling_info_target_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOffsetToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_fromActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetOffsetToActor(Z_Param_fromActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_fromActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->GetTransformToActor(Z_Param_fromActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTargetNearestToLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_worldLocation); \
		P_GET_OBJECT(UObject,Z_Param_worldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(Ainfo_target**)Z_Param__Result=Ainfo_target::FindTargetNearestToLocation(Z_Param_worldLocation,Z_Param_worldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTargetByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_targetName); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(Ainfo_target**)Z_Param__Result=Ainfo_target::FindTargetByName(Z_Param_targetName,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetAtOrigin) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(Ainfo_target**)Z_Param__Result=Ainfo_target::GetTargetAtOrigin(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define MMC_Bowling_Source_MMC_Bowling_info_target_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAinfo_target(); \
	friend MMC_BOWLING_API class UClass* Z_Construct_UClass_Ainfo_target(); \
public: \
	DECLARE_CLASS(Ainfo_target, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Bowling"), NO_API) \
	DECLARE_SERIALIZER(Ainfo_target) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Bowling_Source_MMC_Bowling_info_target_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAinfo_target(); \
	friend MMC_BOWLING_API class UClass* Z_Construct_UClass_Ainfo_target(); \
public: \
	DECLARE_CLASS(Ainfo_target, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Bowling"), NO_API) \
	DECLARE_SERIALIZER(Ainfo_target) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Bowling_Source_MMC_Bowling_info_target_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Ainfo_target(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Ainfo_target) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ainfo_target); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ainfo_target); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Ainfo_target(Ainfo_target&&); \
	NO_API Ainfo_target(const Ainfo_target&); \
public:


#define MMC_Bowling_Source_MMC_Bowling_info_target_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Ainfo_target(Ainfo_target&&); \
	NO_API Ainfo_target(const Ainfo_target&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ainfo_target); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ainfo_target); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Ainfo_target)


#define MMC_Bowling_Source_MMC_Bowling_info_target_h_22_PRIVATE_PROPERTY_OFFSET
#define MMC_Bowling_Source_MMC_Bowling_info_target_h_19_PROLOG
#define MMC_Bowling_Source_MMC_Bowling_info_target_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Bowling_Source_MMC_Bowling_info_target_h_22_PRIVATE_PROPERTY_OFFSET \
	MMC_Bowling_Source_MMC_Bowling_info_target_h_22_RPC_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_info_target_h_22_INCLASS \
	MMC_Bowling_Source_MMC_Bowling_info_target_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMC_Bowling_Source_MMC_Bowling_info_target_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Bowling_Source_MMC_Bowling_info_target_h_22_PRIVATE_PROPERTY_OFFSET \
	MMC_Bowling_Source_MMC_Bowling_info_target_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	MMC_Bowling_Source_MMC_Bowling_info_target_h_22_INCLASS_NO_PURE_DECLS \
	MMC_Bowling_Source_MMC_Bowling_info_target_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMC_Bowling_Source_MMC_Bowling_info_target_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
