#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
	Orientation                    = 0,
	Position                       = 1,
	OrientationAndPosition         = 2,
	EOrientPositionSelector_MAX    = 3
};


// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
	Floor                          = 0,
	Eye                            = 1,
	Stage                          = 2,
	EHMDTrackingOrigin_MAX         = 3
};


// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t
{
	Unknown                        = 0,
	Worn                           = 1,
	NotWorn                        = 2,
	EHMDWornState_MAX              = 3
};


// Enum HeadMountedDisplay.EXRDeviceConnectionResult
enum class EXRDeviceConnectionResult : uint8_t
{
	NoTrackingSystem               = 0,
	FeatureNotSupported            = 1,
	NoValidViewport                = 2,
	MiscFailure                    = 3,
	Success                        = 4,
	EXRDeviceConnectionResult_MAX  = 5
};


// Enum HeadMountedDisplay.EXRSystemFlags
enum class EXRSystemFlags : uint8_t
{
	NoFlags                        = 0,
	IsAR                           = 1,
	IsTablet                       = 2,
	IsHeadMounted                  = 3,
	SupportsHandTracking           = 4,
	EXRSystemFlags_MAX             = 5
};


// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t
{
	Disabled                       = 0,
	SingleEyeLetterboxed           = 1,
	Undistorted                    = 2,
	Distorted                      = 3,
	SingleEye                      = 4,
	SingleEyeCroppedToFill         = 5,
	Texture                        = 6,
	TexturePlusEye                 = 7,
	ESpectatorScreenMode_MAX       = 8
};


// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8_t
{
	HeadMountedDisplay             = 0,
	Controller                     = 1,
	TrackingReference              = 2,
	Other                          = 3,
	Invalid                        = 4,
	Any                            = 5,
	EXRTrackedDeviceType_MAX       = 6
};


// Enum HeadMountedDisplay.EHandKeypoint
enum class EHandKeypoint : uint8_t
{
	Palm                           = 0,
	Wrist                          = 1,
	ThumbMetacarpal                = 2,
	ThumbProximal                  = 3,
	ThumbDistal                    = 4,
	ThumbTip                       = 5,
	IndexMetacarpal                = 6,
	IndexProximal                  = 7,
	IndexIntermediate              = 8,
	IndexDistal                    = 9,
	IndexTip                       = 10,
	MiddleMetacarpal               = 11,
	MiddleProximal                 = 12,
	MiddleIntermediate             = 13,
	MiddleDistal                   = 14,
	MiddleTip                      = 15,
	RingMetacarpal                 = 16,
	RingProximal                   = 17,
	RingIntermediate               = 18,
	RingDistal                     = 19,
	RingTip                        = 20,
	LittleMetacarpal               = 21,
	LittleProximal                 = 22,
	LittleIntermediate             = 23,
	LittleDistal                   = 24,
	LittleTip                      = 25,
	EHandKeypoint_MAX              = 26
};


// Enum HeadMountedDisplay.EXRVisualType
enum class EXRVisualType : uint8_t
{
	Controller                     = 0,
	Hand                           = 1,
	EXRVisualType_MAX              = 2
};


// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	NotTracked                     = 0,
	InertialOnly                   = 1,
	Tracked                        = 2,
	ETrackingStatus_MAX            = 3
};


// Enum HeadMountedDisplay.ESpatialInputGestureAxis
enum class ESpatialInputGestureAxis : uint8_t
{
	None                           = 0,
	Manipulation                   = 1,
	Navigation                     = 2,
	NavigationRails                = 3,
	ESpatialInputGestureAxis_MAX   = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HeadMountedDisplay.XRDeviceId
// 0x000C
struct FXRDeviceId
{
	struct FName                                       SystemName;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeviceID;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HeadMountedDisplay.XRGestureConfig
// 0x0006
struct FXRGestureConfig
{
	bool                                               bTap;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHold;                                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0002(0x0001) MISSED OFFSET
	bool                                               bNavigationAxisX;                                         // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNavigationAxisY;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNavigationAxisZ;                                         // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HeadMountedDisplay.XRHMDData
// 0x0060
struct FXRHMDData
{
	bool                                               bValid;                                                   // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       DeviceName;                                               // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ApplicationInstanceID;                                    // 0x000C(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0040(0x0020) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct HeadMountedDisplay.XRMotionControllerData
// 0x00E0
struct FXRMotionControllerData
{
	bool                                               bValid;                                                   // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       DeviceName;                                               // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ApplicationInstanceID;                                    // 0x000C(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FVector                                     GripPosition;                                             // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FQuat                                       GripRotation;                                             // 0x0040(0x0020) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AimPosition;                                              // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	struct FQuat                                       AimRotation;                                              // 0x0080(0x0020) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<struct FVector>                             HandKeyPositions;                                         // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FQuat>                               HandKeyRotations;                                         // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      HandKeyRadii;                                             // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsGrasped;                                               // 0x00D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x00D1(0x000F) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
