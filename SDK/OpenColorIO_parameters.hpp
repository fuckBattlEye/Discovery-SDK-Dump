#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
struct UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FOpenColorIOColorConversionSettings         ConversionSettings;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	class UTexture*                                    InputTexture;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      OutputRenderTarget;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
struct UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Params
{
	TArray<struct FSceneViewExtensionIsActiveFunctor>  IsActiveFunctions;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
struct UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Params
{
	struct FSceneViewExtensionIsActiveFunctor          IsActiveFunction;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
struct UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Params
{
	struct FOpenColorIODisplayConfiguration            InDisplayConfiguration;                                   // (Parm)
};

// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
struct UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension_Params
{
};

// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
struct UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Params
{
	struct FOpenColorIODisplayConfiguration            InDisplayConfiguration;                                   // (Parm)
	struct FSceneViewExtensionIsActiveFunctor          IsActiveFunction;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	class UOpenColorIODisplayExtensionWrapper*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
