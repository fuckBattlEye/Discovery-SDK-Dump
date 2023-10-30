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

// Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
struct UCameraAnimationCameraModifier_StopCameraAnimation_Params
{
	struct FCameraAnimationHandle                      Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
struct UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Params
{
	class UCameraAnimationSequence*                    Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
struct UCameraAnimationCameraModifier_StopAllCameraAnimations_Params
{
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
struct UCameraAnimationCameraModifier_PlayCameraAnimation_Params
{
	class UCameraAnimationSequence*                    Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCameraAnimationParams                      Params;                                                   // (Parm)
	struct FCameraAnimationHandle                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
struct UCameraAnimationCameraModifier_IsCameraAnimationActive_Params
{
	struct FCameraAnimationHandle                      Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Params
{
	class APlayerController*                           PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCameraAnimationCameraModifier*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UCameraAnimationCameraModifier*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UCameraAnimationCameraModifier*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
struct UMatineeCameraShake_StartMatineeCameraShakeFromSource_Params
{
	class APlayerCameraManager*                        PlayerCameraManager;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ShakeClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UCameraShakeSourceComponent*                 SourceComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ECameraShakePlaySpace                   PlaySpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    UserPlaySpaceRot;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UMatineeCameraShake*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
struct UMatineeCameraShake_StartMatineeCameraShake_Params
{
	class APlayerCameraManager*                        PlayerCameraManager;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ShakeClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ECameraShakePlaySpace                   PlaySpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    UserPlaySpaceRot;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UMatineeCameraShake*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
struct UMatineeCameraShake_ReceiveStopShake_Params
{
	bool                                               bImmediately;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
struct UMatineeCameraShake_ReceivePlayShake_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
struct UMatineeCameraShake_ReceiveIsFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
struct UMatineeCameraShake_BlueprintUpdateCameraShake_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMinimalViewInfo                            POV;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FMinimalViewInfo                            ModifiedPOV;                                              // (Parm, OutParm)
};

// Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
struct UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Params
{
	class UCameraShakeBase*                            CameraShake;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UMatineeCameraShake*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
