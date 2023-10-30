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

// Enum AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t
{
	Unknown                        = 0,
	Tracking                       = 1,
	NotTracking                    = 2,
	StoppedTracking                = 3,
	EARTrackingState_MAX           = 4
};


// Enum AugmentedReality.EARSessionConfigFlags
enum class EARSessionConfigFlags : uint8_t
{
	None                           = 0,
	GenerateMeshData               = 1,
	RenderMeshDataInWireframe      = 2,
	GenerateCollisionForMeshData   = 3,
	GenerateNavMeshForMeshData     = 4,
	UseMeshDataForOcclusion        = 5,
	EARSessionConfigFlags_MAX      = 6
};


// Enum AugmentedReality.EPlaneComponentDebugMode
enum class EPlaneComponentDebugMode : uint8_t
{
	None                           = 0,
	ShowNetworkRole                = 1,
	ShowClassification             = 2,
	EPlaneComponentDebugMode_MAX   = 3
};


// Enum AugmentedReality.EFaceComponentDebugMode
enum class EFaceComponentDebugMode : uint8_t
{
	None                           = 0,
	ShowEyeVectors                 = 1,
	ShowFaceMesh                   = 2,
	EFaceComponentDebugMode_MAX    = 3
};


// Enum AugmentedReality.EARFaceTransformMixing
enum class EARFaceTransformMixing : uint8_t
{
	ComponentOnly                  = 0,
	ComponentLocationTrackedRotation = 1,
	ComponentWithTracked           = 2,
	TrackingOnly                   = 3,
	EARFaceTransformMixing_MAX     = 4
};


// Enum AugmentedReality.EImageComponentDebugMode
enum class EImageComponentDebugMode : uint8_t
{
	None                           = 0,
	ShowDetectedImage              = 1,
	EImageComponentDebugMode_MAX   = 2
};


// Enum AugmentedReality.EQRCodeComponentDebugMode
enum class EQRCodeComponentDebugMode : uint8_t
{
	None                           = 0,
	ShowQRCode                     = 1,
	EQRCodeComponentDebugMode_MAX  = 2
};


// Enum AugmentedReality.EPoseComponentDebugMode
enum class EPoseComponentDebugMode : uint8_t
{
	None                           = 0,
	ShowSkeleton                   = 1,
	EPoseComponentDebugMode_MAX    = 2
};


// Enum AugmentedReality.EGeoAnchorComponentDebugMode
enum class EGeoAnchorComponentDebugMode : uint8_t
{
	None                           = 0,
	ShowGeoData                    = 1,
	EGeoAnchorComponentDebugMode_MAX = 2
};


// Enum AugmentedReality.EARServiceAvailability
enum class EARServiceAvailability : uint8_t
{
	UnknownError                   = 0,
	UnknownChecking                = 1,
	UnknownTimedOut                = 2,
	UnsupportedDeviceNotCapable    = 3,
	SupportedNotInstalled          = 4,
	SupportedVersionTooOld         = 5,
	SupportedInstalled             = 6,
	EARServiceAvailability_MAX     = 7
};


// Enum AugmentedReality.EARServiceInstallRequestResult
enum class EARServiceInstallRequestResult : uint8_t
{
	Installed                      = 0,
	DeviceNotCompatible            = 1,
	UserDeclinedInstallation       = 2,
	FatalError                     = 3,
	EARServiceInstallRequestResult_MAX = 4
};


// Enum AugmentedReality.EARServicePermissionRequestResult
enum class EARServicePermissionRequestResult : uint8_t
{
	Granted                        = 0,
	Denied                         = 1,
	EARServicePermissionRequestResult_MAX = 2
};


// Enum AugmentedReality.EARGeoTrackingState
enum class EARGeoTrackingState : uint8_t
{
	Initializing                   = 0,
	Localized                      = 1,
	Localizing                     = 2,
	NotAvailable                   = 3,
	EARGeoTrackingState_MAX        = 4
};


// Enum AugmentedReality.EARGeoTrackingStateReason
enum class EARGeoTrackingStateReason : uint8_t
{
	None                           = 0,
	NotAvailableAtLocation         = 1,
	NeedLocationPermissions        = 2,
	DevicePointedTooLow            = 3,
	WorldTrackingUnstable          = 4,
	WaitingForLocation             = 5,
	GeoDataNotLoaded               = 6,
	VisualLocalizationFailed       = 7,
	WaitingForAvailabilityCheck    = 8,
	EARGeoTrackingStateReason_MAX  = 9
};


// Enum AugmentedReality.EARGeoTrackingAccuracy
enum class EARGeoTrackingAccuracy : uint8_t
{
	Undetermined                   = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EARGeoTrackingAccuracy_MAX     = 4
};


// Enum AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8_t
{
	Gravity                        = 0,
	GravityAndHeading              = 1,
	Camera                         = 2,
	EARWorldAlignment_MAX          = 3
};


// Enum AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t
{
	None                           = 0,
	Orientation                    = 1,
	World                          = 2,
	Face                           = 3,
	Image                          = 4,
	ObjectScanning                 = 5,
	PoseTracking                   = 6,
	GeoTracking                    = 7,
	EARSessionType_MAX             = 8
};


// Enum AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t
{
	None                           = 0,
	HorizontalPlaneDetection       = 1,
	VerticalPlaneDetection         = 2,
	EARPlaneDetectionMode_MAX      = 3
};


// Enum AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t
{
	None                           = 0,
	AmbientLightEstimate           = 1,
	DirectionalLightEstimate       = 2,
	EARLightEstimationMode_MAX     = 3
};


// Enum AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t
{
	SyncTickWithCameraImage        = 0,
	SyncTickWithoutCameraImage     = 1,
	EARFrameSyncMode_MAX           = 2
};


// Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	None                           = 0,
	Manual                         = 1,
	Automatic                      = 2,
	EAREnvironmentCaptureProbeType_MAX = 3
};


// Enum AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8_t
{
	CurvesAndGeo                   = 0,
	CurvesOnly                     = 1,
	EARFaceTrackingUpdate_MAX      = 2
};


// Enum AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8_t
{
	None                           = 0,
	PoseDetection2D                = 1,
	PersonSegmentation             = 2,
	PersonSegmentationWithDepth    = 3,
	SceneDepth                     = 4,
	SmoothedSceneDepth             = 5,
	EARSessionTrackingFeature_MAX  = 6
};


// Enum AugmentedReality.EARSceneReconstruction
enum class EARSceneReconstruction : uint8_t
{
	None                           = 0,
	MeshOnly                       = 1,
	MeshWithClassification         = 2,
	EARSceneReconstruction_MAX     = 3
};


// Enum AugmentedReality.EARTextureType
enum class EARTextureType : uint8_t
{
	Unknown                        = 0,
	CameraImage                    = 1,
	CameraDepth                    = 2,
	EnvironmentCapture             = 3,
	PersonSegmentationImage        = 4,
	PersonSegmentationDepth        = 5,
	SceneDepthMap                  = 6,
	SceneDepthConfidenceMap        = 7,
	EARTextureType_MAX             = 8
};


// Enum AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8_t
{
	Unkown                         = 0,
	Low                            = 1,
	High                           = 2,
	EARDepthQuality_MAX            = 3
};


// Enum AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8_t
{
	Unkown                         = 0,
	Approximate                    = 1,
	Accurate                       = 2,
	EARDepthAccuracy_MAX           = 3
};


// Enum AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t
{
	FaceRelative                   = 0,
	FaceMirrored                   = 1,
	EARFaceTrackingDirection_MAX   = 2
};


// Enum AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t
{
	EyeBlinkLeft                   = 0,
	EyeLookDownLeft                = 1,
	EyeLookInLeft                  = 2,
	EyeLookOutLeft                 = 3,
	EyeLookUpLeft                  = 4,
	EyeSquintLeft                  = 5,
	EyeWideLeft                    = 6,
	EyeBlinkRight                  = 7,
	EyeLookDownRight               = 8,
	EyeLookInRight                 = 9,
	EyeLookOutRight                = 10,
	EyeLookUpRight                 = 11,
	EyeSquintRight                 = 12,
	EyeWideRight                   = 13,
	JawForward                     = 14,
	JawLeft                        = 15,
	JawRight                       = 16,
	JawOpen                        = 17,
	MouthClose                     = 18,
	MouthFunnel                    = 19,
	MouthPucker                    = 20,
	MouthLeft                      = 21,
	MouthRight                     = 22,
	MouthSmileLeft                 = 23,
	MouthSmileRight                = 24,
	MouthFrownLeft                 = 25,
	MouthFrownRight                = 26,
	MouthDimpleLeft                = 27,
	MouthDimpleRight               = 28,
	MouthStretchLeft               = 29,
	MouthStretchRight              = 30,
	MouthRollLower                 = 31,
	MouthRollUpper                 = 32,
	MouthShrugLower                = 33,
	MouthShrugUpper                = 34,
	MouthPressLeft                 = 35,
	MouthPressRight                = 36,
	MouthLowerDownLeft             = 37,
	MouthLowerDownRight            = 38,
	MouthUpperUpLeft               = 39,
	MouthUpperUpRight              = 40,
	BrowDownLeft                   = 41,
	BrowDownRight                  = 42,
	BrowInnerUp                    = 43,
	BrowOuterUpLeft                = 44,
	BrowOuterUpRight               = 45,
	CheekPuff                      = 46,
	CheekSquintLeft                = 47,
	CheekSquintRight               = 48,
	NoseSneerLeft                  = 49,
	NoseSneerRight                 = 50,
	TongueOut                      = 51,
	HeadYaw                        = 52,
	HeadPitch                      = 53,
	HeadRoll                       = 54,
	LeftEyeYaw                     = 55,
	LeftEyePitch                   = 56,
	LeftEyeRoll                    = 57,
	RightEyeYaw                    = 58,
	RightEyePitch                  = 59,
	RightEyeRoll                   = 60,
	MAX                            = 61
};


// Enum AugmentedReality.EAREye
enum class EAREye : uint8_t
{
	LeftEye                        = 0,
	RightEye                       = 1,
	EAREye_MAX                     = 2
};


// Enum AugmentedReality.EARCaptureType
enum class EARCaptureType : uint8_t
{
	Camera                         = 0,
	QRCode                         = 1,
	SpatialMapping                 = 2,
	SceneUnderstanding             = 3,
	HandMesh                       = 4,
	EARCaptureType_MAX             = 5
};


// Enum AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t
{
	None                           = 0,
	FeaturePoint                   = 1,
	GroundPlane                    = 2,
	PlaneUsingExtent               = 3,
	PlaneUsingBoundaryPolygon      = 4,
	EARLineTraceChannels_MAX       = 5
};


// Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
	NotTracking                    = 0,
	OrientationOnly                = 1,
	OrientationAndPosition         = 2,
	EARTrackingQuality_MAX         = 3
};


// Enum AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8_t
{
	None                           = 0,
	Initializing                   = 1,
	Relocalizing                   = 2,
	ExcessiveMotion                = 3,
	InsufficientFeatures           = 4,
	InsufficientLight              = 5,
	BadState                       = 6,
	EARTrackingQualityReason_MAX   = 7
};


// Enum AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
	NotStarted                     = 0,
	Running                        = 1,
	NotSupported                   = 2,
	FatalError                     = 3,
	PermissionNotGranted           = 4,
	UnsupportedConfiguration       = 5,
	Other                          = 6,
	EARSessionStatus_MAX           = 7
};


// Enum AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8_t
{
	NotAvailable                   = 0,
	StillMappingNotRelocalizable   = 1,
	StillMappingRelocalizable      = 2,
	Mapped                         = 3,
	EARWorldMappingState_MAX       = 4
};


// Enum AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	Diagonal                       = 2,
	EARPlaneOrientation_MAX        = 3
};


// Enum AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8_t
{
	NotApplicable                  = 0,
	Unknown                        = 1,
	Wall                           = 2,
	Ceiling                        = 3,
	Floor                          = 4,
	Table                          = 5,
	Seat                           = 6,
	Face                           = 7,
	Image                          = 8,
	World                          = 9,
	SceneObject                    = 10,
	HandMesh                       = 11,
	Door                           = 12,
	Window                         = 13,
	EARObjectClassification_MAX    = 14
};


// Enum AugmentedReality.EARSpatialMeshUsageFlags
enum class EARSpatialMeshUsageFlags : uint8_t
{
	NotApplicable                  = 0,
	Visible                        = 1,
	Collision                      = 2,
	EARSpatialMeshUsageFlags_MAX   = 3
};


// Enum AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8_t
{
	Model                          = 0,
	ParentJoint                    = 1,
	EARJointTransformSpace_MAX     = 2
};


// Enum AugmentedReality.EARAltitudeSource
enum class EARAltitudeSource : uint8_t
{
	Precise                        = 0,
	Coarse                         = 1,
	UserDefined                    = 2,
	Unknown                        = 3,
	EARAltitudeSource_MAX          = 4
};


// Enum AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8_t
{
	Landscape                      = 0,
	Portrait                       = 1,
	EARCandidateImageOrientation_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AugmentedReality.ARCameraIntrinsics
// 0x0028
struct FARCameraIntrinsics
{
	struct FIntPoint                                   ImageResolution;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FocalLength;                                              // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PrincipalPoint;                                           // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AugmentedReality.ARSessionStatus
// 0x0018
struct FARSessionStatus
{
	struct FString                                     AdditionalInfo;                                           // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AugmentedReality.ARSkeletonDefinition
// 0x0028
struct FARSkeletonDefinition
{
	int                                                NumJoints;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               JointNames;                                               // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        ParentIndices;                                            // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AugmentedReality.ARPose2D
// 0x0048
struct FARPose2D
{
	struct FARSkeletonDefinition                       SkeletonDefinition;                                       // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FVector2D>                           JointLocations;                                           // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<bool>                                       IsJointTracked;                                           // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AugmentedReality.ARTraceResult
// 0x0090
struct FARTraceResult
{
	float                                              DistanceFromCamera;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  LocalTransform;                                           // 0x0010(0x0060) (IsPlainOldData)
	class UARTrackedGeometry*                          TrackedGeometry;                                          // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0078(0x0018) MISSED OFFSET
};

// ScriptStruct AugmentedReality.ARSessionPayload
// 0x0018
struct FARSessionPayload
{
	int                                                ConfigFlags;                                              // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UMaterialInterface*                          DefaultMeshMaterial;                                      // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                             // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AugmentedReality.ARPlaneUpdatePayload
// 0x00D0
struct FARPlaneUpdatePayload
{
	struct FARSessionPayload                           SessionPayload;                                           // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  WorldTransform;                                           // 0x0020(0x0060) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x0080(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extents;                                                  // 0x0098(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             BoundaryVertices;                                         // 0x00B0(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
};

// ScriptStruct AugmentedReality.ARPointUpdatePayload
// 0x0001
struct FARPointUpdatePayload
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AugmentedReality.ARFaceUpdatePayload
// 0x0060
struct FARFaceUpdatePayload
{
	struct FARSessionPayload                           SessionPayload;                                           // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FVector                                     LeftEyePosition;                                          // 0x0018(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightEyePosition;                                         // 0x0030(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtTarget;                                             // 0x0048(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AugmentedReality.ARImageUpdatePayload
// 0x00A0
struct FARImageUpdatePayload
{
	struct FARSessionPayload                           SessionPayload;                                           // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  WorldTransform;                                           // 0x0020(0x0060) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UARCandidateImage*                           DetectedImage;                                            // 0x0080(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EstimatedSize;                                            // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
};

// ScriptStruct AugmentedReality.ARQRCodeUpdatePayload
// 0x00B0
struct FARQRCodeUpdatePayload
{
	struct FARSessionPayload                           SessionPayload;                                           // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  WorldTransform;                                           // 0x0020(0x0060) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     Extents;                                                  // 0x0080(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     QRCode;                                                   // 0x0098(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
};

// ScriptStruct AugmentedReality.ARPoseUpdatePayload
// 0x0070
struct FARPoseUpdatePayload
{
	struct FTransform                                  WorldTransform;                                           // 0x0000(0x0060) (BlueprintVisible, IsPlainOldData)
	TArray<struct FTransform>                          JointTransforms;                                          // 0x0060(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AugmentedReality.AREnvironmentProbeUpdatePayload
// 0x0060
struct FAREnvironmentProbeUpdatePayload
{
	struct FTransform                                  WorldTransform;                                           // 0x0000(0x0060) (BlueprintVisible, IsPlainOldData)
};

// ScriptStruct AugmentedReality.ARObjectUpdatePayload
// 0x0060
struct FARObjectUpdatePayload
{
	struct FTransform                                  WorldTransform;                                           // 0x0000(0x0060) (BlueprintVisible, IsPlainOldData)
};

// ScriptStruct AugmentedReality.ARMeshUpdatePayload
// 0x0090
struct FARMeshUpdatePayload
{
	struct FARSessionPayload                           SessionPayload;                                           // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  WorldTransform;                                           // 0x0020(0x0060) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
};

// ScriptStruct AugmentedReality.ARGeoAnchorUpdatePayload
// 0x00A0
struct FARGeoAnchorUpdatePayload
{
	struct FARSessionPayload                           SessionPayload;                                           // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  WorldTransform;                                           // 0x0020(0x0060) (BlueprintVisible, IsPlainOldData)
	float                                              Longitude;                                                // 0x0080(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Latitude;                                                 // 0x0084(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AltitudeMeters;                                           // 0x0088(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     AnchorName;                                               // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AugmentedReality.ARVideoFormat
// 0x000C
struct FARVideoFormat
{
	int                                                FPS;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AugmentedReality.ARPose3D
// 0x0050
struct FARPose3D
{
	struct FARSkeletonDefinition                       SkeletonDefinition;                                       // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FTransform>                          JointTransforms;                                          // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<bool>                                       IsJointTracked;                                           // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct AugmentedReality.TrackedGeometryGroup
// 0x0018
struct FTrackedGeometryGroup
{
	class AARActor*                                    ARActor;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UARComponent*                                ARComponent;                                              // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UARTrackedGeometry*                          TrackedGeometry;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AugmentedReality.ARSharedWorldReplicationState
// 0x0008
struct FARSharedWorldReplicationState
{
	int                                                PreviewImageOffset;                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ARWorldOffset;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
