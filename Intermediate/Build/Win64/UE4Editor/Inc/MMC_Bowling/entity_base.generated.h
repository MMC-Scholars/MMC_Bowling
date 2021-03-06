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
class Aentity_base;
class UObject;
#ifdef MMC_BOWLING_entity_base_generated_h
#error "entity_base.generated.h already included, missing '#pragma once' in entity_base.h"
#endif
#define MMC_BOWLING_entity_base_generated_h

#define MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execFindEntityByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_targetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(Aentity_base**)Z_Param__Result=this->FindEntityByName(Z_Param_targetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindActorByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_targetName); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=Aentity_base::FindActorByName(Z_Param_targetName,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetWorldTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUse) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_caller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Use(Z_Param_caller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateHealth(Z_Param_delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportToTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TeleportToTarget(); \
		P_NATIVE_END; \
	}


#define MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execFindEntityByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_targetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(Aentity_base**)Z_Param__Result=this->FindEntityByName(Z_Param_targetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindActorByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_targetName); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=Aentity_base::FindActorByName(Z_Param_targetName,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetWorldTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUse) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_caller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Use(Z_Param_caller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateHealth(Z_Param_delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportToTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TeleportToTarget(); \
		P_NATIVE_END; \
	}


#define MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_EVENT_PARMS \
	struct entity_base_eventOnUse_Parms \
	{ \
		AActor* caller; \
	}; \
	struct entity_base_eventOnUseIgnored_Parms \
	{ \
		AActor* caller; \
	};


#define MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_CALLBACK_WRAPPERS
#define MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAentity_base(); \
	friend MMC_BOWLING_API class UClass* Z_Construct_UClass_Aentity_base(); \
public: \
	DECLARE_CLASS(Aentity_base, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Bowling"), NO_API) \
	DECLARE_SERIALIZER(Aentity_base) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAentity_base(); \
	friend MMC_BOWLING_API class UClass* Z_Construct_UClass_Aentity_base(); \
public: \
	DECLARE_CLASS(Aentity_base, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Bowling"), NO_API) \
	DECLARE_SERIALIZER(Aentity_base) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aentity_base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aentity_base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aentity_base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aentity_base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aentity_base(Aentity_base&&); \
	NO_API Aentity_base(const Aentity_base&); \
public:


#define MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aentity_base(Aentity_base&&); \
	NO_API Aentity_base(const Aentity_base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aentity_base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aentity_base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aentity_base)


#define MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_PRIVATE_PROPERTY_OFFSET
#define MMC_Bowling_Source_MMC_Bowling_entity_base_h_24_PROLOG \
	MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_EVENT_PARMS


#define MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_PRIVATE_PROPERTY_OFFSET \
	MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_RPC_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_CALLBACK_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_INCLASS \
	MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_PRIVATE_PROPERTY_OFFSET \
	MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_CALLBACK_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_INCLASS_NO_PURE_DECLS \
	MMC_Bowling_Source_MMC_Bowling_entity_base_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMC_Bowling_Source_MMC_Bowling_entity_base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
