// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class Abowling_pin;
#ifdef MMC_BOWLING_bowling_pin_generated_h
#error "bowling_pin.generated.h already included, missing '#pragma once' in bowling_pin.h"
#endif
#define MMC_BOWLING_bowling_pin_generated_h

#define MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetAndLower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetAndLower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRaiseAndLower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RaiseAndLower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPinClosestToTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_targetName); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(Abowling_pin**)Z_Param__Result=Abowling_pin::GetPinClosestToTarget(Z_Param_targetName,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetAndLower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetAndLower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRaiseAndLower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RaiseAndLower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPinClosestToTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_targetName); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(Abowling_pin**)Z_Param__Result=Abowling_pin::GetPinClosestToTarget(Z_Param_targetName,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_EVENT_PARMS
#define MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_CALLBACK_WRAPPERS
#define MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAbowling_pin(); \
	friend MMC_BOWLING_API class UClass* Z_Construct_UClass_Abowling_pin(); \
public: \
	DECLARE_CLASS(Abowling_pin, Aentity_base, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Bowling"), NO_API) \
	DECLARE_SERIALIZER(Abowling_pin) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAbowling_pin(); \
	friend MMC_BOWLING_API class UClass* Z_Construct_UClass_Abowling_pin(); \
public: \
	DECLARE_CLASS(Abowling_pin, Aentity_base, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Bowling"), NO_API) \
	DECLARE_SERIALIZER(Abowling_pin) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Abowling_pin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Abowling_pin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Abowling_pin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Abowling_pin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Abowling_pin(Abowling_pin&&); \
	NO_API Abowling_pin(const Abowling_pin&); \
public:


#define MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Abowling_pin(Abowling_pin&&); \
	NO_API Abowling_pin(const Abowling_pin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Abowling_pin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Abowling_pin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Abowling_pin)


#define MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_PRIVATE_PROPERTY_OFFSET
#define MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_16_PROLOG \
	MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_EVENT_PARMS


#define MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_PRIVATE_PROPERTY_OFFSET \
	MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_RPC_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_CALLBACK_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_INCLASS \
	MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_PRIVATE_PROPERTY_OFFSET \
	MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_CALLBACK_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_INCLASS_NO_PURE_DECLS \
	MMC_Bowling_Source_MMC_Bowling_bowling_pin_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMC_Bowling_Source_MMC_Bowling_bowling_pin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
