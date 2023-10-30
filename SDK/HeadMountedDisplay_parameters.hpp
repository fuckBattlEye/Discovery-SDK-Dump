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

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
struct UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Params
{
	struct FTransform                                  ExternalTrackingTransform;                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
struct UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
struct UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Params
{
	struct FScriptDelegate                             InDisconnectedDelegate;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
struct UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
struct UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params
{
	TEnumAsByte<EHMDTrackingOrigin>                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Params
{
	class UTexture*                                    InTexture;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Params
{
	struct FVector2D                                   EyeRectMin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EyeRectMax;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextureRectMin;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextureRectMax;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawEyeFirst;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearBlack;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAlpha;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Params
{
	enum class ESpectatorScreenMode                    Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
struct UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params
{
	float                                              Near;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Far;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
struct UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOrientPositionSelector>               Options;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
struct UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
struct UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
struct UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
struct UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
struct UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Params
{
	struct FXRDeviceId                                 XRDeviceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
struct UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
struct UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
struct UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
struct UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Params
{
	bool                                               bUseFocus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasFocus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
struct UHeadMountedDisplayFunctionLibrary_GetVersionString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
struct UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
struct UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Params
{
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LeftFOV;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RightFOV;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TopFOV;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              BottomFOV;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NearPlane;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FarPlane;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
struct UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params
{
	TEnumAsByte<EHMDTrackingOrigin>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
struct UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
struct UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params
{
	struct FVector                                     CameraOrigin;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              HFOV;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              VFOV;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CameraDistance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NearPlane;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FarPlane;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
struct UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Params
{
	TEnumAsByte<EHMDTrackingOrigin>                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
struct UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
struct UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params
{
	struct FRotator                                    DeviceRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DevicePosition;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
struct UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
struct UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControllerHand                         Hand;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FXRMotionControllerData                     MotionControllerData;                                     // (Parm, OutParm)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
struct UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Params
{
	TEnumAsByte<EHMDWornState>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
struct UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
struct UHeadMountedDisplayFunctionLibrary_GetHMDData_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXRHMDData                                  HMDData;                                                  // (Parm, OutParm)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
struct UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXRDeviceId                                 XRDeviceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIsTracked;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPositionalTracking;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
struct UHeadMountedDisplayFunctionLibrary_GetDevicePose_Params
{
	struct FXRDeviceId                                 XRDeviceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIsTracked;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasPositionalTracking;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
struct UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControllerIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MotionSource;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   Time;                                                     // (Parm, ZeroConstructor)
	bool                                               bTimeWasUsed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bProvidedLinearVelocity;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bProvidedAngularVelocity;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocityRadPerSec;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bProvidedLinearAcceleration;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearAcceleration;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
struct UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Params
{
	struct FName                                       SystemId;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	enum class EXRTrackedDeviceType                    DeviceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FXRDeviceId>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
struct UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
struct UHeadMountedDisplayFunctionLibrary_EnableHMD_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice
struct UHeadMountedDisplayFunctionLibrary_DisconnectRemoteXRDevice_Params
{
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
struct UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Params
{
	struct FString                                     IpAddress;                                                // (Parm, ZeroConstructor)
	int                                                BitRate;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EXRDeviceConnectionResult>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
struct UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Params
{
	struct FXRGestureConfig                            GestureConfig;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
struct UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Params
{
	struct FName                                       ActionPath;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
struct UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Params
{
	struct FTransform                                  ExternalTrackingTransform;                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey
struct UHeadMountedDisplayFunctionLibrary_BreakKey_Params
{
	struct FKey                                        InKey;                                                    // (Parm)
	struct FString                                     InteractionProfile;                                       // (Parm, OutParm, ZeroConstructor)
	enum class EControllerHand                         Hand;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MotionSource;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Indentifier;                                              // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Component;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
struct UHandKeypointConversion_Conv_HandKeypointToInt32_Params
{
	enum class EHandKeypoint                           Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
struct UMotionControllerComponent_SetTrackingSource_Params
{
	enum class EControllerHand                         NewSource;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
struct UMotionControllerComponent_SetTrackingMotionSource_Params
{
	struct FName                                       NewSource;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
struct UMotionControllerComponent_SetShowDeviceModel_Params
{
	bool                                               bShowControllerModel;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
struct UMotionControllerComponent_SetDisplayModelSource_Params
{
	struct FName                                       NewDisplayModelSource;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
struct UMotionControllerComponent_SetCustomDisplayMesh_Params
{
	class UStaticMesh*                                 NewDisplayMesh;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
struct UMotionControllerComponent_SetAssociatedPlayerIndex_Params
{
	int                                                NewPlayer;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
struct UMotionControllerComponent_OnMotionControllerUpdated_Params
{
};

// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
struct UMotionControllerComponent_IsTracked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
struct UMotionControllerComponent_GetTrackingSource_Params
{
	enum class EControllerHand                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
struct UMotionControllerComponent_GetParameterValue_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValueFound;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
struct UMotionControllerComponent_GetHandJointPosition_Params
{
	int                                                jointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValueFound;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
struct UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControllerHand                         Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params
{
	class UMotionControllerComponent*                  MotionControllerComponent;                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
struct UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
struct UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
struct UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
struct UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
struct UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControllerHand                         Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params
{
	class UMotionControllerComponent*                  MotionControllerComponent;                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControllerHand                         Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Params
{
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params
{
	class UMotionControllerComponent*                  MotionControllerComponent;                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
struct UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SystemName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DeviceName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FXRDeviceId                                 XRDeviceId;                                               // (Parm, OutParm)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
struct UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXRDeviceId                                 XRDeviceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
struct UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SystemName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DeviceName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FXRDeviceId                                 XRDeviceId;                                               // (Parm, OutParm)
	class UPrimitiveComponent*                         NewComponent;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAsyncTask_LoadXRDeviceVisComponent*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
struct UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXRDeviceId                                 XRDeviceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent*                         NewComponent;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAsyncTask_LoadXRDeviceVisComponent*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
struct UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Params
{
};

// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
struct UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Params
{
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLoadingMovie;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowOnSet;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
struct UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Params
{
};

// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
struct UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Params
{
};

// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
struct UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Params
{
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearBeforeAdd;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
