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

// Enum ControlRig.EControlRigComponentSpace
enum class EControlRigComponentSpace : uint8_t
{
	WorldSpace                     = 0,
	ActorSpace                     = 1,
	ComponentSpace                 = 2,
	RigSpace                       = 3,
	LocalSpace                     = 4,
	Max                            = 5
};


// Enum ControlRig.EControlRigComponentMapDirection
enum class EControlRigComponentMapDirection : uint8_t
{
	Input                          = 0,
	Output                         = 1,
	EControlRigComponentMapDirection_MAX = 2
};


// Enum ControlRig.ETransformSpaceMode
enum class ETransformSpaceMode : uint8_t
{
	LocalSpace                     = 0,
	GlobalSpace                    = 1,
	BaseSpace                      = 2,
	BaseJoint                      = 3,
	Max                            = 4
};


// Enum ControlRig.EControlRigClampSpatialMode
enum class EControlRigClampSpatialMode : uint8_t
{
	Plane                          = 0,
	Cylinder                       = 1,
	Sphere                         = 2,
	EControlRigClampSpatialMode_MAX = 3
};


// Enum ControlRig.ETransformGetterType
enum class ETransformGetterType : uint8_t
{
	Initial                        = 0,
	Current                        = 1,
	Max                            = 2
};


// Enum ControlRig.EBoneGetterSetterMode
enum class EBoneGetterSetterMode : uint8_t
{
	LocalSpace                     = 0,
	GlobalSpace                    = 1,
	Max                            = 2
};


// Enum ControlRig.ERigExecutionType
enum class ERigExecutionType : uint8_t
{
	Runtime                        = 0,
	Editing                        = 1,
	Max                            = 2
};


// Enum ControlRig.EControlRigDrawSettings
enum class EControlRigDrawSettings : uint8_t
{
	Points                         = 0,
	Lines                          = 1,
	LineStrip                      = 2,
	DynamicMesh                    = 3,
	EControlRigDrawSettings_MAX    = 4
};


// Enum ControlRig.EControlRigDrawHierarchyMode
enum class EControlRigDrawHierarchyMode : uint8_t
{
	Axes                           = 0,
	Max                            = 1
};


// Enum ControlRig.EControlRigAnimEasingType
enum class EControlRigAnimEasingType : uint8_t
{
	Linear                         = 0,
	QuadraticEaseIn                = 1,
	QuadraticEaseOut               = 2,
	QuadraticEaseInOut             = 3,
	CubicEaseIn                    = 4,
	CubicEaseOut                   = 5,
	CubicEaseInOut                 = 6,
	QuarticEaseIn                  = 7,
	QuarticEaseOut                 = 8,
	QuarticEaseInOut               = 9,
	QuinticEaseIn                  = 10,
	QuinticEaseOut                 = 11,
	QuinticEaseInOut               = 12,
	SineEaseIn                     = 13,
	SineEaseOut                    = 14,
	SineEaseInOut                  = 15,
	CircularEaseIn                 = 16,
	CircularEaseOut                = 17,
	CircularEaseInOut              = 18,
	ExponentialEaseIn              = 19,
	ExponentialEaseOut             = 20,
	ExponentialEaseInOut           = 21,
	ElasticEaseIn                  = 22,
	ElasticEaseOut                 = 23,
	ElasticEaseInOut               = 24,
	BackEaseIn                     = 25,
	BackEaseOut                    = 26,
	BackEaseInOut                  = 27,
	BounceEaseIn                   = 28,
	BounceEaseOut                  = 29,
	BounceEaseInOut                = 30,
	EControlRigAnimEasingType_MAX  = 31
};


// Enum ControlRig.ECRSimPointIntegrateType
enum class ECRSimPointIntegrateType : uint8_t
{
	Verlet                         = 0,
	SemiExplicitEuler              = 1,
	ECRSimPointIntegrateType_MAX   = 2
};


// Enum ControlRig.ECRSimConstraintType
enum class ECRSimConstraintType : uint8_t
{
	Distance                       = 0,
	DistanceFromA                  = 1,
	DistanceFromB                  = 2,
	Plane                          = 3,
	ECRSimConstraintType_MAX       = 4
};


// Enum ControlRig.ECRSimPointForceType
enum class ECRSimPointForceType : uint8_t
{
	Direction                      = 0,
	ECRSimPointForceType_MAX       = 1
};


// Enum ControlRig.ECRSimSoftCollisionType
enum class ECRSimSoftCollisionType : uint8_t
{
	Plane                          = 0,
	Sphere                         = 1,
	Cone                           = 2,
	ECRSimSoftCollisionType_MAX    = 3
};


// Enum ControlRig.EControlRigFKRigExecuteMode
enum class EControlRigFKRigExecuteMode : uint8_t
{
	Replace                        = 0,
	Additive                       = 1,
	Max                            = 2
};


// Enum ControlRig.EMovieSceneControlRigSpaceType
enum class EMovieSceneControlRigSpaceType : uint8_t
{
	Parent                         = 0,
	World                          = 1,
	ControlRig                     = 2,
	EMovieSceneControlRigSpaceType_MAX = 3
};


// Enum ControlRig.ERigTransformStackEntryType
enum class ERigTransformStackEntryType : uint8_t
{
	TransformPose                  = 0,
	ControlOffset                  = 1,
	ControlShape                   = 2,
	CurveValue                     = 3,
	ERigTransformStackEntryType_MAX = 4
};


// Enum ControlRig.ERigElementType
enum class ERigElementType : uint8_t
{
	None                           = 0,
	Bone                           = 1,
	Null                           = 2,
	Space                          = 3,
	Control                        = 4,
	Curve                          = 5,
	RigidBody                      = 6,
	Reference                      = 7,
	Last                           = 8,
	All                            = 9,
	ToResetAfterSetupEvent         = 10,
	ERigElementType_MAX            = 11
};


// Enum ControlRig.ERigBoneType
enum class ERigBoneType : uint8_t
{
	Imported                       = 0,
	User                           = 1,
	ERigBoneType_MAX               = 2
};


// Enum ControlRig.ERigHierarchyNotification
enum class ERigHierarchyNotification : uint8_t
{
	ElementAdded                   = 0,
	ElementRemoved                 = 1,
	ElementRenamed                 = 2,
	ElementSelected                = 3,
	ElementDeselected              = 4,
	ParentChanged                  = 5,
	HierarchyReset                 = 6,
	ControlSettingChanged          = 7,
	ControlVisibilityChanged       = 8,
	ControlShapeTransformChanged   = 9,
	ParentWeightsChanged           = 10,
	Max                            = 11
};


// Enum ControlRig.ERigEvent
enum class ERigEvent : uint8_t
{
	None                           = 0,
	RequestAutoKey                 = 1,
	Max                            = 2
};


// Enum ControlRig.EControlRigSetKey
enum class EControlRigSetKey : uint8_t
{
	DoNotCare                      = 0,
	Always                         = 1,
	Never                          = 2,
	EControlRigSetKey_MAX          = 3
};


// Enum ControlRig.ERigControlType
enum class ERigControlType : uint8_t
{
	Bool                           = 0,
	Float                          = 1,
	Integer                        = 2,
	Vector2D                       = 3,
	Position                       = 4,
	Scale                          = 5,
	Rotator                        = 6,
	Transform                      = 7,
	TransformNoScale               = 8,
	EulerTransform                 = 9,
	ERigControlType_MAX            = 10
};


// Enum ControlRig.ERigControlValueType
enum class ERigControlValueType : uint8_t
{
	Initial                        = 0,
	Current                        = 1,
	Minimum                        = 2,
	Maximum                        = 3,
	ERigControlValueType_MAX       = 4
};


// Enum ControlRig.ERigControlAxis
enum class ERigControlAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ERigControlAxis_MAX            = 3
};


// Enum ControlRig.ERigTransformType
enum class ERigTransformType : uint8_t
{
	InitialLocal                   = 0,
	CurrentLocal                   = 1,
	InitialGlobal                  = 2,
	CurrentGlobal                  = 3,
	NumTransformTypes              = 4,
	ERigTransformType_MAX          = 5
};


// Enum ControlRig.ERigSpaceType
enum class ERigSpaceType : uint8_t
{
	Global                         = 0,
	Bone                           = 1,
	Control                        = 2,
	Space                          = 3,
	ERigSpaceType_MAX              = 4
};


// Enum ControlRig.EControlRigState
enum class EControlRigState : uint8_t
{
	Init                           = 0,
	Update                         = 1,
	Invalid                        = 2,
	EControlRigState_MAX           = 3
};


// Enum ControlRig.EAimMode
enum class EAimMode : uint8_t
{
	AimAtTarget                    = 0,
	OrientToTarget                 = 1,
	MAX                            = 2
};


// Enum ControlRig.EApplyTransformMode
enum class EApplyTransformMode : uint8_t
{
	Override                       = 0,
	Additive                       = 1,
	Max                            = 2
};


// Enum ControlRig.ERigUnitDebugPointMode
enum class ERigUnitDebugPointMode : uint8_t
{
	Point                          = 0,
	Vector                         = 1,
	Max                            = 2
};


// Enum ControlRig.ERigUnitDebugTransformMode
enum class ERigUnitDebugTransformMode : uint8_t
{
	Point                          = 0,
	Axes                           = 1,
	Box                            = 2,
	Max                            = 3
};


// Enum ControlRig.ERigSwitchParentMode
enum class ERigSwitchParentMode : uint8_t
{
	World                          = 0,
	DefaultParent                  = 1,
	ParentItem                     = 2,
	ERigSwitchParentMode_MAX       = 3
};


// Enum ControlRig.EControlRigCurveAlignment
enum class EControlRigCurveAlignment : uint8_t
{
	Front                          = 0,
	Stretched                      = 1,
	EControlRigCurveAlignment_MAX  = 2
};


// Enum ControlRig.EControlRigVectorKind
enum class EControlRigVectorKind : uint8_t
{
	Direction                      = 0,
	Location                       = 1,
	EControlRigVectorKind_MAX      = 2
};


// Enum ControlRig.ERBFKernelType
enum class ERBFKernelType : uint8_t
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	ERBFKernelType_MAX             = 5
};


// Enum ControlRig.ERBFQuatDistanceType
enum class ERBFQuatDistanceType : uint8_t
{
	Euclidean                      = 0,
	ArcLength                      = 1,
	SwingAngle                     = 2,
	TwistAngle                     = 3,
	ERBFQuatDistanceType_MAX       = 4
};


// Enum ControlRig.ERBFVectorDistanceType
enum class ERBFVectorDistanceType : uint8_t
{
	Euclidean                      = 0,
	Manhattan                      = 1,
	ArcLength                      = 2,
	ERBFVectorDistanceType_MAX     = 3
};


// Enum ControlRig.EControlRigModifyBoneMode
enum class EControlRigModifyBoneMode : uint8_t
{
	OverrideLocal                  = 0,
	OverrideGlobal                 = 1,
	AdditiveLocal                  = 2,
	AdditiveGlobal                 = 3,
	Max                            = 4
};


// Enum ControlRig.EConstraintInterpType
enum class EConstraintInterpType : uint8_t
{
	Average                        = 0,
	Shortest                       = 1,
	Max                            = 2
};


// Enum ControlRig.ERigUnitVisualDebugPointMode
enum class ERigUnitVisualDebugPointMode : uint8_t
{
	Point                          = 0,
	Vector                         = 1,
	Max                            = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ControlRig.RigElementKey
// 0x000C
struct FRigElementKey
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigControlElementCustomization
// 0x0020
struct FRigControlElementCustomization
{
	TArray<struct FRigElementKey>                      AvailableSpaces;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FRigElementKey>                      RemovedSpaces;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ControlRig.ControlRigDrawInstruction
// 0x00D0
struct FControlRigDrawInstruction
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControlRigDrawSettings>               PrimitiveType;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FVector>                             Positions;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0040(0x0060) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x00A0(0x0030) MISSED OFFSET
};

// ScriptStruct ControlRig.ControlRigDrawContainer
// 0x0018
struct FControlRigDrawContainer
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FControlRigDrawInstruction>          Instructions;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ControlRig.RigInfluenceEntry
// 0x0020
struct FRigInfluenceEntry
{
	struct FRigElementKey                              Source;                                                   // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FRigElementKey>                      AffectedList;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigInfluenceMap
// 0x0068
struct FRigInfluenceMap
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRigInfluenceEntry>                  Entries;                                                  // 0x0008(0x0010) (ZeroConstructor)
	TMap<struct FRigElementKey, int>                   KeyToIndex;                                               // 0x0018(0x0050)
};

// ScriptStruct ControlRig.RigInfluenceMapPerEvent
// 0x0060
struct FRigInfluenceMapPerEvent
{
	TArray<struct FRigInfluenceMap>                    Maps;                                                     // 0x0000(0x0010) (ZeroConstructor)
	TMap<struct FName, int>                            EventToIndex;                                             // 0x0010(0x0050)
};

// ScriptStruct ControlRig.ControlRigComponentMappedElement
// 0x00D0
struct FControlRigComponentMappedElement
{
	struct FComponentReference                         ComponentReference;                                       // 0x0000(0x0028) (Edit, BlueprintVisible)
	int                                                TransformIndex;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TransformName;                                            // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FName                                       ElementName;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	struct FTransform                                  Offset;                                                   // 0x0050(0x0060) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Weight;                                                   // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                ElementIndex;                                             // 0x00C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                SubIndex;                                                 // 0x00C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.ControlRigComponentMappedComponent
// 0x0018
struct FControlRigComponentMappedComponent
{
	class USceneComponent*                             Component;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ElementName;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.ControlRigShapeDefinition
// 0x00A0
struct FControlRigShapeDefinition
{
	struct FName                                       ShapeName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: StaticMesh
	struct FTransform                                  Transform;                                                // 0x0030(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
};

// ScriptStruct ControlRig.CachedRigElement
// 0x0020
struct FCachedRigElement
{
	struct FRigElementKey                              Key;                                                      // 0x0000(0x000C)
	uint16_t                                           Index;                                                    // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	int                                                ContainerVersion;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigPoseElement
// 0x00F0
struct FRigPoseElement
{
	struct FCachedRigElement                           Index;                                                    // 0x0000(0x0020)
	struct FTransform                                  GlobalTransform;                                          // 0x0020(0x0060) (IsPlainOldData)
	struct FTransform                                  LocalTransform;                                           // 0x0080(0x0060) (IsPlainOldData)
	float                                              CurveValue;                                               // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00E4(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigPose
// 0x0070
struct FRigPose
{
	TArray<struct FRigPoseElement>                     Elements;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                HierarchyTopologyVersion;                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PoseHash;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0018(0x0058) MISSED OFFSET
};

// ScriptStruct ControlRig.RigControlValueStorage
// 0x0084
struct FRigControlValueStorage
{
	float                                              Float00;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float01;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float02;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float03;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float10;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float11;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float12;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float13;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float20;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float21;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float22;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float23;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float30;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float31;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float32;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float33;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float00_2;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float01_2;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float02_2;                                                // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float03_2;                                                // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float10_2;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float11_2;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float12_2;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float13_2;                                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float20_2;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float21_2;                                                // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float22_2;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float23_2;                                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float30_2;                                                // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float31_2;                                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float32_2;                                                // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Float33_2;                                                // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigControlValue
// 0x00F0
struct FRigControlValue
{
	struct FRigControlValueStorage                     FloatStorage;                                             // 0x0000(0x0084)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0084(0x000C) MISSED OFFSET
	struct FTransform                                  Storage;                                                  // 0x0090(0x0060) (Deprecated, IsPlainOldData)
};

// ScriptStruct ControlRig.RigControlCopy
// 0x02A0
struct FRigControlCopy
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FRigControlValue                            Value;                                                    // 0x0020(0x00F0)
	struct FRigElementKey                              ParentKey;                                                // 0x0110(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FTransform                                  OffsetTransform;                                          // 0x0120(0x0060) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  ParentTransform;                                          // 0x0180(0x0060) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  LocalTransform;                                           // 0x01E0(0x0060) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  GlobalTransform;                                          // 0x0240(0x0060) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ControlRig.ControlRigControlPose
// 0x0060
struct FControlRigControlPose
{
	TArray<struct FRigControlCopy>                     CopyOfControls;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) MISSED OFFSET
};

// ScriptStruct ControlRig.ChannelMapInfo
// 0x002C
struct FChannelMapInfo
{
	int                                                ControlIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalChannelIndex;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChannelIndex;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParentControlIndex;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ChannelTypeName;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bDoesHaveSpace;                                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                SpaceChannelIndex;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskIndex;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CategoryIndex;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0028(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.EnumParameterNameAndCurve
// 0x00E8
struct FEnumParameterNameAndCurve
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneByteChannel                      ParameterCurve;                                           // 0x0008(0x00E0)
};

// ScriptStruct ControlRig.IntegerParameterNameAndCurve
// 0x00E0
struct FIntegerParameterNameAndCurve
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneIntegerChannel                   ParameterCurve;                                           // 0x0008(0x00D8)
};

// ScriptStruct ControlRig.MovieSceneControlRigSpaceBaseKey
// 0x0010
struct FMovieSceneControlRigSpaceBaseKey
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FRigElementKey                              ControlRigElement;                                        // 0x0004(0x000C) (Edit)
};

// ScriptStruct ControlRig.MovieSceneControlRigSpaceChannel
// 0x0098 (0x00E8 - 0x0050)
struct FMovieSceneControlRigSpaceChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        KeyTimes;                                                 // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneControlRigSpaceBaseKey>   KeyValues;                                                // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0070(0x0078) MISSED OFFSET
};

// ScriptStruct ControlRig.SpaceControlNameAndChannel
// 0x00F0
struct FSpaceControlNameAndChannel
{
	struct FName                                       ControlName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneControlRigSpaceChannel           SpaceCurve;                                               // 0x0008(0x00E8)
};

// ScriptStruct ControlRig.RigUnit
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit : public FRigVMStruct
{

};

// ScriptStruct ControlRig.ControlRigExecuteContext
// 0x0000 (0x00C0 - 0x00C0)
struct FControlRigExecuteContext : public FRigVMExecuteContext
{

};

// ScriptStruct ControlRig.RigUnitMutable
// 0x00C8 (0x00D0 - 0x0008)
struct FRigUnitMutable : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FControlRigExecuteContext                   ExecuteContext;                                           // 0x0010(0x00C0) (Transient)
};

// ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
// 0x0000 (0x00D0 - 0x00D0)
struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{

};

// ScriptStruct ControlRig.ConstraintNodeData
// 0x0140
struct FConstraintNodeData
{
	struct FTransform                                  RelativeParent;                                           // 0x0000(0x0060) (IsPlainOldData)
	struct FConstraintOffset                           ConstraintOffset;                                         // 0x0060(0x00C0)
	struct FName                                       LinkedNode;                                               // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTransformConstraint>                Constraints;                                              // 0x0128(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.AnimationHierarchy
// 0x0010 (0x0088 - 0x0078)
struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
	TArray<struct FConstraintNodeData>                 UserData;                                                 // 0x0078(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.ControlRigIOSettings
// 0x0002
struct FControlRigIOSettings
{
	bool                                               bUpdatePose;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateCurves;                                            // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.AnimNode_ControlRigBase
// 0x0200 (0x0258 - 0x0058)
struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{
	struct FPoseLink                                   Source;                                                   // 0x0058(0x0010) (Edit)
	bool                                               bResetInputPoseToInitial;                                 // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTransferInputPose;                                       // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTransferInputCurves;                                     // 0x006A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTransferPoseInGlobalSpace;                               // 0x006B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FBoneReference>                      InputBonesToTransfer;                                     // 0x0070(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x1C0];                                     // 0x0080(0x01C0) MISSED OFFSET
	TWeakObjectPtr<class UNodeMappingContainer>        NodeMappingContainer;                                     // 0x0240(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FControlRigIOSettings                       InputSettings;                                            // 0x0248(0x0002) (Transient)
	struct FControlRigIOSettings                       OutputSettings;                                           // 0x024A(0x0002) (Transient)
	bool                                               bExecute;                                                 // 0x024C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x024D(0x000B) MISSED OFFSET
};

// ScriptStruct ControlRig.AnimNode_ControlRig
// 0x0200 (0x0458 - 0x0258)
struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
	class UClass*                                      ControlRigClass;                                          // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UControlRig*                                 ControlRig;                                               // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x026C(0x0001) MISSED OFFSET
	unsigned char                                      bAlphaBoolEnabled : 1;                                    // 0x026D(0x0001) (Edit)
	unsigned char                                      bSetRefPoseFromSkeleton : 1;                              // 0x026D(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x026E(0x0002) MISSED OFFSET
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0270(0x0008) (Edit)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0278(0x0048) (Edit)
	struct FName                                       AlphaCurveName;                                           // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x02C8(0x0030) (Edit)
	TMap<struct FName, struct FName>                   InputMapping;                                             // 0x02F8(0x0050)
	TMap<struct FName, struct FName>                   OutputMapping;                                            // 0x0348(0x0050)
	unsigned char                                      UnknownData02[0xB0];                                      // 0x0398(0x00B0) MISSED OFFSET
	int                                                LODThreshold;                                             // 0x0448(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x044C(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
// 0x0008 (0x0260 - 0x0258)
struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
	TWeakObjectPtr<class UControlRig>                  ControlRig;                                               // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ControlRig.ControlRigAnimInstanceProxy
// 0x00A0 (0x0920 - 0x0880)
struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0880(0x00A0) MISSED OFFSET
};

// ScriptStruct ControlRig.ControlRigComponentMappedBone
// 0x0010
struct FControlRigComponentMappedBone
{
	struct FName                                       Source;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Target;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.ControlRigComponentMappedCurve
// 0x0010
struct FControlRigComponentMappedCurve
{
	struct FName                                       Source;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Target;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.ControlRigDrawInterface
// 0x0000 (0x0018 - 0x0018)
struct FControlRigDrawInterface : public FControlRigDrawContainer
{

};

// ScriptStruct ControlRig.ControlShapeActorCreationParam
// 0x01B0
struct FControlShapeActorCreationParam
{
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0000(0x01B0) MISSED OFFSET
};

// ScriptStruct ControlRig.AnimNode_ControlRigInputPose
// 0x0020 (0x0030 - 0x0010)
struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0010(0x0010)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct ControlRig.ControlRigLayerInstanceProxy
// 0x00A0 (0x0920 - 0x0880)
struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0880(0x00A0) MISSED OFFSET
};

// ScriptStruct ControlRig.CRFourPointBezier
// 0x0060
struct FCRFourPointBezier
{
	struct FVector                                     A;                                                        // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     C;                                                        // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     D;                                                        // 0x0048(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReference
// 0x0008
struct FControlRigSequenceObjectReference
{
	class UClass*                                      ControlRigClass;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
// 0x0010
struct FControlRigSequenceObjectReferences
{
	TArray<struct FControlRigSequenceObjectReference>  Array;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
// 0x0020
struct FControlRigSequenceObjectReferenceMap
{
	TArray<struct FGuid>                               BindingIds;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FControlRigSequenceObjectReferences> References;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.ControlRigSettingsPerPinBool
// 0x0050
struct FControlRigSettingsPerPinBool
{
	TMap<struct FString, bool>                         Values;                                                   // 0x0000(0x0050) (Edit)
};

// ScriptStruct ControlRig.ControlRigValidationContext
// 0x0028
struct FControlRigValidationContext
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ControlRig.CRSimContainer
// 0x0018
struct FCRSimContainer
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              TimeStep;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedTime;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeLeftForStep;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.CRSimLinearSpring
// 0x0010
struct FCRSimLinearSpring
{
	int                                                SubjectA;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubjectB;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Coefficient;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Equilibrium;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.CRSimPoint
// 0x0040
struct FCRSimPoint
{
	float                                              Mass;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LinearDamping;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InheritMotion;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0010(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // 0x0028(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.CRSimPointConstraint
// 0x0040
struct FCRSimPointConstraint
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	int                                                SubjectA;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubjectB;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FVector                                     DataA;                                                    // 0x0010(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DataB;                                                    // 0x0028(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.CRSimPointForce
// 0x0028
struct FCRSimPointForce
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FVector                                     Vector;                                                   // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Coefficient;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bNormalize;                                               // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.CRSimSoftCollision
// 0x0080
struct FCRSimSoftCollision
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0060) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0060(0x0004) MISSED OFFSET
	float                                              MinimumDistance;                                          // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumDistance;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	float                                              Coefficient;                                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInverted;                                                // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0075(0x000B) MISSED OFFSET
};

// ScriptStruct ControlRig.CRSimPointContainer
// 0x0060 (0x0078 - 0x0018)
struct FCRSimPointContainer : public FCRSimContainer
{
	TArray<struct FCRSimPoint>                         Points;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FCRSimLinearSpring>                  Springs;                                                  // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FCRSimPointForce>                    Forces;                                                   // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FCRSimSoftCollision>                 CollisionVolumes;                                         // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FCRSimPointConstraint>               Constraints;                                              // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FCRSimPoint>                         PreviousStep;                                             // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
// 0x0118 (0x0120 - 0x0008)
struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
	bool                                               bAdditive;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bApplyBoneFilter;                                         // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FInputBlendPose                             BoneFilter;                                               // 0x0010(0x0010)
	struct FMovieSceneFloatChannel                     Weight;                                                   // 0x0020(0x00E8)
	struct FMovieSceneEvaluationOperand                Operand;                                                  // 0x0108(0x0014)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
// 0x0030 (0x00B0 - 0x0080)
struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{
	TArray<struct FEnumParameterNameAndCurve>          Enums;                                                    // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FIntegerParameterNameAndCurve>       Integers;                                                 // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FSpaceControlNameAndChannel>         Spaces;                                                   // 0x00A0(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigElement
// 0x0018
struct FRigElement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigBone
// 0x0158 (0x0170 - 0x0018)
struct FRigBone : public FRigElement
{
	struct FName                                       ParentName;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ParentIndex;                                              // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x0030(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTransform                                  GlobalTransform;                                          // 0x0090(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FTransform                                  LocalTransform;                                           // 0x00F0(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	TArray<int>                                        Dependents;                                               // 0x0150(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0160(0x0010) MISSED OFFSET
};

// ScriptStruct ControlRig.RigBoneHierarchy
// 0x0010
struct FRigBoneHierarchy
{
	TArray<struct FRigBone>                            Bones;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ControlRig.RigControl
// 0x04F8 (0x0510 - 0x0018)
struct FRigControl : public FRigElement
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	struct FName                                       DisplayName;                                              // 0x001C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParentName;                                               // 0x0024(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ParentIndex;                                              // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       SpaceName;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SpaceIndex;                                               // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FTransform                                  OffsetTransform;                                          // 0x0040(0x0060) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRigControlValue                            InitialValue;                                             // 0x00A0(0x00F0) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FRigControlValue                            Value;                                                    // 0x0190(0x00F0) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0280(0x0001) MISSED OFFSET
	bool                                               bIsCurve;                                                 // 0x0281(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAnimatable;                                              // 0x0282(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitTranslation;                                        // 0x0283(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitRotation;                                           // 0x0284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitScale;                                              // 0x0285(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawLimits;                                              // 0x0286(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x9];                                       // 0x0287(0x0009) MISSED OFFSET
	struct FRigControlValue                            MinimumValue;                                             // 0x0290(0x00F0) (Edit, BlueprintVisible)
	struct FRigControlValue                            MaximumValue;                                             // 0x0380(0x00F0) (Edit, BlueprintVisible)
	bool                                               bGizmoEnabled;                                            // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGizmoVisible;                                            // 0x0471(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0472(0x0002) MISSED OFFSET
	struct FName                                       GizmoName;                                                // 0x0474(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	struct FTransform                                  GizmoTransform;                                           // 0x0480(0x0060) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                GizmoColor;                                               // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Dependents;                                               // 0x04F0(0x0010) (ZeroConstructor, Transient)
	bool                                               bIsTransientControl;                                      // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	class UEnum*                                       ControlEnum;                                              // 0x0508(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigControlHierarchy
// 0x0010
struct FRigControlHierarchy
{
	TArray<struct FRigControl>                         Controls;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ControlRig.RigCurve
// 0x0008 (0x0020 - 0x0018)
struct FRigCurve : public FRigElement
{
	float                                              Value;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigCurveContainer
// 0x0010
struct FRigCurveContainer
{
	TArray<struct FRigCurve>                           Curves;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ControlRig.RigTransformStackEntry
// 0x00F0
struct FRigTransformStackEntry
{
	struct FRigElementKey                              Key;                                                      // 0x0000(0x000C)
	TEnumAsByte<ERigTransformStackEntryType>           EntryType;                                                // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERigTransformType>                     TransformType;                                            // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	struct FTransform                                  OldTransform;                                             // 0x0010(0x0060) (IsPlainOldData)
	struct FTransform                                  NewTransform;                                             // 0x0070(0x0060) (IsPlainOldData)
	bool                                               bAffectChildren;                                          // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	TArray<struct FString>                             Callstack;                                                // 0x00D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigSpace
// 0x00D8 (0x00F0 - 0x0018)
struct FRigSpace : public FRigElement
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	struct FName                                       ParentName;                                               // 0x001C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ParentIndex;                                              // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x0030(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FTransform                                  LocalTransform;                                           // 0x0090(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
};

// ScriptStruct ControlRig.RigSpaceHierarchy
// 0x0010
struct FRigSpaceHierarchy
{
	TArray<struct FRigSpace>                           Spaces;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ControlRig.RigHierarchyContainer
// 0x0040
struct FRigHierarchyContainer
{
	struct FRigBoneHierarchy                           BoneHierarchy;                                            // 0x0000(0x0010)
	struct FRigSpaceHierarchy                          SpaceHierarchy;                                           // 0x0010(0x0010)
	struct FRigControlHierarchy                        ControlHierarchy;                                         // 0x0020(0x0010)
	struct FRigCurveContainer                          CurveContainer;                                           // 0x0030(0x0010)
};

// ScriptStruct ControlRig.RigHierarchyRef
// 0x0001
struct FRigHierarchyRef
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ControlRig.RigControlLimitEnabled
// 0x0002
struct FRigControlLimitEnabled
{
	bool                                               bMinimum;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMaximum;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigControlModifiedContext
// 0x0014
struct FRigControlModifiedContext
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct ControlRig.RigElementKeyCollection
// 0x0010
struct FRigElementKeyCollection
{
	TArray<struct FRigElementKey>                      Keys;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ControlRig.RigEventContext
// 0x0028
struct FRigEventContext
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ControlRig.RigMirrorSettings
// 0x0028
struct FRigMirrorSettings
{
	TEnumAsByte<EAxis>                                 MirrorAxis;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 AxisToFlip;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     SearchString;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ReplaceString;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ControlRig.RigComputedTransform
// 0x0070
struct FRigComputedTransform
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
};

// ScriptStruct ControlRig.RigLocalAndGlobalTransform
// 0x00E0
struct FRigLocalAndGlobalTransform
{
	struct FRigComputedTransform                       Local;                                                    // 0x0000(0x0070) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRigComputedTransform                       Global;                                                   // 0x0070(0x0070) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ControlRig.RigCurrentAndInitialTransform
// 0x01C0
struct FRigCurrentAndInitialTransform
{
	struct FRigLocalAndGlobalTransform                 Current;                                                  // 0x0000(0x00E0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRigLocalAndGlobalTransform                 Initial;                                                  // 0x00E0(0x00E0) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ControlRig.RigBaseElement
// 0x0050
struct FRigBaseElement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FRigElementKey                              Key;                                                      // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	int                                                Index;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SubIndex;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bSelected;                                                // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x33];                                      // 0x001D(0x0033) MISSED OFFSET
};

// ScriptStruct ControlRig.RigTransformElement
// 0x0200 (0x0250 - 0x0050)
struct FRigTransformElement : public FRigBaseElement
{
	struct FRigCurrentAndInitialTransform              Pose;                                                     // 0x0050(0x01C0) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0210(0x0040) MISSED OFFSET
};

// ScriptStruct ControlRig.RigSingleParentElement
// 0x0010 (0x0260 - 0x0250)
struct FRigSingleParentElement : public FRigTransformElement
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0250(0x0010) MISSED OFFSET
};

// ScriptStruct ControlRig.RigElementWeight
// 0x000C
struct FRigElementWeight
{
	float                                              Location;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigElementParentConstraint
// 0x0090
struct FRigElementParentConstraint
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct ControlRig.RigMultiParentElement
// 0x02C0 (0x0510 - 0x0250)
struct FRigMultiParentElement : public FRigTransformElement
{
	struct FRigCurrentAndInitialTransform              Parent;                                                   // 0x0250(0x01C0) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x100];                                     // 0x0410(0x0100) MISSED OFFSET
};

// ScriptStruct ControlRig.RigBoneElement
// 0x0000 (0x0260 - 0x0260)
struct FRigBoneElement : public FRigSingleParentElement
{

};

// ScriptStruct ControlRig.RigNullElement
// 0x0000 (0x0510 - 0x0510)
struct FRigNullElement : public FRigMultiParentElement
{

};

// ScriptStruct ControlRig.RigControlSettings
// 0x0260
struct FRigControlSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FName                                       DisplayName;                                              // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000C(0x0001) MISSED OFFSET
	bool                                               bIsCurve;                                                 // 0x000D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAnimatable;                                              // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	TArray<struct FRigControlLimitEnabled>             LimitEnabled;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bDrawLimits;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FRigControlValue                            MinimumValue;                                             // 0x0030(0x00F0) (BlueprintVisible)
	struct FRigControlValue                            MaximumValue;                                             // 0x0120(0x00F0) (BlueprintVisible)
	bool                                               bShapeEnabled;                                            // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShapeVisible;                                            // 0x0211(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0212(0x0002) MISSED OFFSET
	struct FName                                       ShapeName;                                                // 0x0214(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShapeColor;                                               // 0x021C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTransientControl;                                      // 0x022C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	class UEnum*                                       ControlEnum;                                              // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRigControlElementCustomization             Customization;                                            // 0x0238(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigControlElement
// 0x05E0 (0x0AF0 - 0x0510)
struct FRigControlElement : public FRigMultiParentElement
{
	struct FRigControlSettings                         Settings;                                                 // 0x0510(0x0260) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRigCurrentAndInitialTransform              Offset;                                                   // 0x0770(0x01C0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRigCurrentAndInitialTransform              Shape;                                                    // 0x0930(0x01C0) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ControlRig.RigCurveElement
// 0x0008 (0x0058 - 0x0050)
struct FRigCurveElement : public FRigBaseElement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigRigidBodySettings
// 0x0004
struct FRigRigidBodySettings
{
	float                                              Mass;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigRigidBodyElement
// 0x0000 (0x0260 - 0x0260)
struct FRigRigidBodyElement : public FRigSingleParentElement
{
	struct FRigRigidBodySettings                       Settings;                                                 // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigReferenceElement
// 0x0010 (0x0270 - 0x0260)
struct FRigReferenceElement : public FRigSingleParentElement
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
};

// ScriptStruct ControlRig.RigHierarchyCopyPasteContentPerElement
// 0x0200
struct FRigHierarchyCopyPasteContentPerElement
{
	struct FRigElementKey                              Key;                                                      // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Content;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FRigElementKey>                      Parents;                                                  // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FRigElementWeight>                   ParentWeights;                                            // 0x0030(0x0010) (ZeroConstructor)
	struct FRigCurrentAndInitialTransform              Pose;                                                     // 0x0040(0x01C0)
};

// ScriptStruct ControlRig.RigHierarchyCopyPasteContent
// 0x0050
struct FRigHierarchyCopyPasteContent
{
	TArray<struct FRigHierarchyCopyPasteContentPerElement> Elements;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<enum class ERigElementType>                 Types;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Contents;                                                 // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FTransform>                          LocalTransforms;                                          // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FTransform>                          GlobalTransforms;                                         // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigInfluenceEntryModifier
// 0x0010
struct FRigInfluenceEntryModifier
{
	TArray<struct FRigElementKey>                      AffectedList;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_SimBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_SimBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_AccumulateBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_AccumulateBase : public FRigUnit_SimBase
{

};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_AccumulateFloatAdd : public FRigUnit_AccumulateBase
{
	float                                              Increment;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InitialValue;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Result;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedValue;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
// 0x0068 (0x0070 - 0x0008)
struct FRigUnit_AccumulateVectorAdd : public FRigUnit_AccumulateBase
{
	struct FVector                                     Increment;                                                // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialValue;                                             // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0040(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedValue;                                         // 0x0058(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_AccumulateFloatMul : public FRigUnit_AccumulateBase
{
	float                                              Multiplier;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InitialValue;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Result;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedValue;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
// 0x0068 (0x0070 - 0x0008)
struct FRigUnit_AccumulateVectorMul : public FRigUnit_AccumulateBase
{
	struct FVector                                     Multiplier;                                               // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialValue;                                             // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0040(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedValue;                                         // 0x0058(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_AccumulateQuatMul : public FRigUnit_AccumulateBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Multiplier;                                               // 0x0010(0x0020) (IsPlainOldData)
	struct FQuat                                       InitialValue;                                             // 0x0030(0x0020) (IsPlainOldData)
	bool                                               bFlipOrder;                                               // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0052(0x000E) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0060(0x0020) (IsPlainOldData)
	struct FQuat                                       AccumulatedValue;                                         // 0x0080(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
// 0x0198 (0x01A0 - 0x0008)
struct FRigUnit_AccumulateTransformMul : public FRigUnit_AccumulateBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Multiplier;                                               // 0x0010(0x0060) (IsPlainOldData)
	struct FTransform                                  InitialValue;                                             // 0x0070(0x0060) (IsPlainOldData)
	bool                                               bFlipOrder;                                               // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x00D1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x00D2(0x000E) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x00E0(0x0060) (IsPlainOldData)
	struct FTransform                                  AccumulatedValue;                                         // 0x0140(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_AccumulateFloatLerp : public FRigUnit_AccumulateBase
{
	float                                              TargetValue;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InitialValue;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Blend;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              Result;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedValue;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
// 0x0068 (0x0070 - 0x0008)
struct FRigUnit_AccumulateVectorLerp : public FRigUnit_AccumulateBase
{
	struct FVector                                     TargetValue;                                              // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialValue;                                             // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Blend;                                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0040(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedValue;                                         // 0x0058(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_AccumulateQuatLerp : public FRigUnit_AccumulateBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       TargetValue;                                              // 0x0010(0x0020) (IsPlainOldData)
	struct FQuat                                       InitialValue;                                             // 0x0030(0x0020) (IsPlainOldData)
	float                                              Blend;                                                    // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0055(0x000B) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0060(0x0020) (IsPlainOldData)
	struct FQuat                                       AccumulatedValue;                                         // 0x0080(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
// 0x0198 (0x01A0 - 0x0008)
struct FRigUnit_AccumulateTransformLerp : public FRigUnit_AccumulateBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  TargetValue;                                              // 0x0010(0x0060) (IsPlainOldData)
	struct FTransform                                  InitialValue;                                             // 0x0070(0x0060) (IsPlainOldData)
	float                                              Blend;                                                    // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x00D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x00D5(0x000B) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x00E0(0x0060) (IsPlainOldData)
	struct FTransform                                  AccumulatedValue;                                         // 0x0140(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_AccumulateFloatRange : public FRigUnit_AccumulateBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedMinimum;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedMaximum;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
// 0x0078 (0x0080 - 0x0008)
struct FRigUnit_AccumulateVectorRange : public FRigUnit_AccumulateBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Minimum;                                                  // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Maximum;                                                  // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedMinimum;                                       // 0x0050(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedMaximum;                                       // 0x0068(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AddBoneTransform
// 0x00A0 (0x0170 - 0x00D0)
struct FRigUnit_AddBoneTransform : public FRigUnitMutable
{
	struct FName                                       bone;                                                     // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00E0(0x0060) (IsPlainOldData)
	float                                              Weight;                                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPostMultiply;                                            // 0x0144(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0145(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0146(0x0002) MISSED OFFSET
	struct FCachedRigElement                           CachedBone;                                               // 0x0148(0x0020) (Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AimBone_Target
// 0x0048
struct FRigUnit_AimBone_Target
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FVector                                     Axis;                                                     // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // 0x0020(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0038(0x0004) MISSED OFFSET
	struct FName                                       Space;                                                    // 0x003C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AimItem_Target
// 0x0048
struct FRigUnit_AimItem_Target
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FVector                                     Axis;                                                     // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // 0x0020(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0038(0x0004) MISSED OFFSET
	struct FRigElementKey                              Space;                                                    // 0x003C(0x000C) (Edit)
};

// ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
// 0x0070
struct FRigUnit_AimBone_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0010(0x0060) (Edit, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_HighlevelBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_HighlevelBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_AimBoneMath
// 0x0218 (0x0220 - 0x0008)
struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  InputTransform;                                           // 0x0010(0x0060) (IsPlainOldData)
	struct FRigUnit_AimItem_Target                     Primary;                                                  // 0x0070(0x0048)
	struct FRigUnit_AimItem_Target                     Secondary;                                                // 0x00B8(0x0048)
	float                                              Weight;                                                   // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0104(0x000C) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0110(0x0060) (IsPlainOldData)
	struct FRigUnit_AimBone_DebugSettings              DebugSettings;                                            // 0x0170(0x0070)
	struct FCachedRigElement                           PrimaryCachedSpace;                                       // 0x01E0(0x0020)
	struct FCachedRigElement                           SecondaryCachedSpace;                                     // 0x0200(0x0020)
};

// ScriptStruct ControlRig.RigUnit_AimBone
// 0x0170 (0x0240 - 0x00D0)
struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       bone;                                                     // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRigUnit_AimBone_Target                     Primary;                                                  // 0x00D8(0x0048)
	struct FRigUnit_AimBone_Target                     Secondary;                                                // 0x0120(0x0048)
	float                                              Weight;                                                   // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x016C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x016D(0x0003) MISSED OFFSET
	struct FRigUnit_AimBone_DebugSettings              DebugSettings;                                            // 0x0170(0x0070)
	struct FCachedRigElement                           CachedBoneIndex;                                          // 0x01E0(0x0020)
	struct FCachedRigElement                           PrimaryCachedSpace;                                       // 0x0200(0x0020)
	struct FCachedRigElement                           SecondaryCachedSpace;                                     // 0x0220(0x0020)
};

// ScriptStruct ControlRig.RigUnit_AimItem
// 0x0180 (0x0250 - 0x00D0)
struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey                              Item;                                                     // 0x00D0(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FRigUnit_AimItem_Target                     Primary;                                                  // 0x00E0(0x0048)
	struct FRigUnit_AimItem_Target                     Secondary;                                                // 0x0128(0x0048)
	float                                              Weight;                                                   // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0174(0x000C) MISSED OFFSET
	struct FRigUnit_AimBone_DebugSettings              DebugSettings;                                            // 0x0180(0x0070)
	struct FCachedRigElement                           CachedItem;                                               // 0x01F0(0x0020)
	struct FCachedRigElement                           PrimaryCachedSpace;                                       // 0x0210(0x0020)
	struct FCachedRigElement                           SecondaryCachedSpace;                                     // 0x0230(0x0020)
};

// ScriptStruct ControlRig.AimTarget
// 0x0090
struct FAimTarget
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (Edit, IsPlainOldData)
	struct FVector                                     AlignVector;                                              // 0x0070(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
// 0x0010
struct FRigUnit_AimConstraint_WorkData
{
	TArray<struct FConstraintData>                     ConstraintData;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_AimConstraint
// 0x0070 (0x0140 - 0x00D0)
struct FRigUnit_AimConstraint : public FRigUnitMutable
{
	struct FName                                       Joint;                                                    // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FVector                                     AimVector;                                                // 0x00E0(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpVector;                                                 // 0x00F8(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAimTarget>                          AimTargets;                                               // 0x0110(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAimTarget>                          UpTargets;                                                // 0x0120(0x0010) (Edit, ZeroConstructor)
	struct FRigUnit_AimConstraint_WorkData             WorkData;                                                 // 0x0130(0x0010)
};

// ScriptStruct ControlRig.RigUnit_AlphaInterp
// 0x0070 (0x0078 - 0x0008)
struct FRigUnit_AlphaInterp : public FRigUnit_SimBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bMapRange;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FInputRange                                 InRange;                                                  // 0x0018(0x0008)
	struct FInputRange                                 OutRange;                                                 // 0x0020(0x0008)
	bool                                               bClampResult;                                             // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              ClampMin;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClampMax;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInterpResult;                                            // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              InterpSpeedIncreasing;                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeedDecreasing;                                    // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        ScaleBiasClamp;                                           // 0x0044(0x0030)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AlphaInterpVector
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_AlphaInterpVector : public FRigUnit_SimBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bMapRange;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FInputRange                                 InRange;                                                  // 0x002C(0x0008)
	struct FInputRange                                 OutRange;                                                 // 0x0034(0x0008)
	bool                                               bClampResult;                                             // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              ClampMin;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClampMax;                                                 // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInterpResult;                                            // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              InterpSpeedIncreasing;                                    // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeedDecreasing;                                    // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0058(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        ScaleBiasClamp;                                           // 0x0070(0x0030)
};

// ScriptStruct ControlRig.RigUnit_AnimBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_AnimBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_AnimEasingType
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_AnimEasingType : public FRigUnit_AnimBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AnimEasing
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_AnimEasing : public FRigUnit_AnimBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	float                                              SourceMinimum;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceMaximum;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetMinimum;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetMaximum;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
// 0x00A8 (0x00B0 - 0x0008)
struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0010(0x0088)
	float                                              SourceMinimum;                                            // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceMaximum;                                            // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetMinimum;                                            // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetMaximum;                                            // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AnimRichCurve
// 0x0088 (0x0090 - 0x0008)
struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase
{
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0008(0x0088)
};

// ScriptStruct ControlRig.RigUnit_ApplyFK
// 0x00F0 (0x01C0 - 0x00D0)
struct FRigUnit_ApplyFK : public FRigUnitMutable
{
	struct FName                                       Joint;                                                    // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00E0(0x0060) (IsPlainOldData)
	struct FTransformFilter                            Filter;                                                   // 0x0140(0x0009) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	struct FTransform                                  BaseTransform;                                            // 0x0150(0x0060) (Edit, IsPlainOldData)
	struct FName                                       BaseJoint;                                                // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_BeginExecution
// 0x00C8 (0x00D0 - 0x0008)
struct FRigUnit_BeginExecution : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FControlRigExecuteContext                   ExecuteContext;                                           // 0x0010(0x00C0) (Edit, Transient)
};

// ScriptStruct ControlRig.BlendTarget
// 0x0070
struct FBlendTarget
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0060) (Edit, IsPlainOldData)
	float                                              Weight;                                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_BlendTransform
// 0x00D8 (0x00E0 - 0x0008)
struct FRigUnit_BlendTransform : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Source;                                                   // 0x0010(0x0060) (IsPlainOldData)
	TArray<struct FBlendTarget>                        Targets;                                                  // 0x0070(0x0010) (ZeroConstructor)
	struct FTransform                                  Result;                                                   // 0x0080(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
// 0x000C
struct FRigUnit_BoneHarmonics_BoneTarget
{
	struct FName                                       bone;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
// 0x0010
struct FRigUnit_Harmonics_TargetItem
{
	struct FRigElementKey                              Item;                                                     // 0x0000(0x000C)
	float                                              Ratio;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
// 0x0028
struct FRigUnit_BoneHarmonics_WorkData
{
	TArray<struct FCachedRigElement>                   CachedItems;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     WaveTime;                                                 // 0x0010(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics
// 0x00C0 (0x0190 - 0x00D0)
struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{
	TArray<struct FRigUnit_BoneHarmonics_BoneTarget>   Bones;                                                    // 0x00D0(0x0010) (ZeroConstructor)
	struct FVector                                     WaveSpeed;                                                // 0x00E0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveFrequency;                                            // 0x00F8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveAmplitude;                                            // 0x0110(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveOffset;                                               // 0x0128(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveNoise;                                                // 0x0140(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET
	float                                              WaveMinimum;                                              // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaveMaximum;                                              // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0164(0x0001) MISSED OFFSET
	bool                                               bPropagateToChildren;                                     // 0x0165(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0166(0x0002) MISSED OFFSET
	struct FRigUnit_BoneHarmonics_WorkData             WorkData;                                                 // 0x0168(0x0028) (Transient)
};

// ScriptStruct ControlRig.RigUnit_ItemHarmonics
// 0x00C0 (0x0190 - 0x00D0)
struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{
	TArray<struct FRigUnit_Harmonics_TargetItem>       Targets;                                                  // 0x00D0(0x0010) (ZeroConstructor)
	struct FVector                                     WaveSpeed;                                                // 0x00E0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveFrequency;                                            // 0x00F8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveAmplitude;                                            // 0x0110(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveOffset;                                               // 0x0128(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveNoise;                                                // 0x0140(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET
	float                                              WaveMinimum;                                              // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaveMaximum;                                              // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	struct FRigUnit_BoneHarmonics_WorkData             WorkData;                                                 // 0x0168(0x0028) (Transient)
};

// ScriptStruct ControlRig.RigUnit_Item
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_Item : public FRigUnit
{
	struct FRigElementKey                              Item;                                                     // 0x0008(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_BoneName
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_BoneName : public FRigUnit
{
	struct FName                                       bone;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_SpaceName
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_SpaceName : public FRigUnit
{
	struct FName                                       Space;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ControlName
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_ControlName : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
// 0x000C
struct FRigUnit_CCDIK_RotationLimit
{
	struct FName                                       bone;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Limit;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
// 0x0010
struct FRigUnit_CCDIK_RotationLimitPerItem
{
	struct FRigElementKey                              Item;                                                     // 0x0000(0x000C)
	float                                              Limit;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
// 0x0060
struct FRigUnit_CCDIK_WorkData
{
	TArray<struct FCCDIKChainLink>                     Chain;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FCachedRigElement>                   CachedItems;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        RotationLimitIndex;                                       // 0x0020(0x0010) (ZeroConstructor)
	TArray<float>                                      RotationLimitsPerItem;                                    // 0x0030(0x0010) (ZeroConstructor)
	struct FCachedRigElement                           CachedEffector;                                           // 0x0040(0x0020)
};

// ScriptStruct ControlRig.RigUnit_CCDIK
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectorBone;                                             // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  EffectorTransform;                                        // 0x00E0(0x0060) (IsPlainOldData)
	float                                              Precision;                                                // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bStartFromTail;                                           // 0x014C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x014D(0x0003) MISSED OFFSET
	float                                              BaseRotationLimit;                                        // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	TArray<struct FRigUnit_CCDIK_RotationLimit>        RotationLimits;                                           // 0x0158(0x0010) (ZeroConstructor)
	bool                                               bPropagateToChildren;                                     // 0x0168(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	struct FRigUnit_CCDIK_WorkData                     WorkData;                                                 // 0x0170(0x0060)
};

// ScriptStruct ControlRig.RigUnit_CCDIKPerItem
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection                    Items;                                                    // 0x00D0(0x0010)
	struct FTransform                                  EffectorTransform;                                        // 0x00E0(0x0060) (IsPlainOldData)
	float                                              Precision;                                                // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bStartFromTail;                                           // 0x014C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x014D(0x0003) MISSED OFFSET
	float                                              BaseRotationLimit;                                        // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                                           // 0x0158(0x0010) (ZeroConstructor)
	bool                                               bPropagateToChildren;                                     // 0x0168(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	struct FRigUnit_CCDIK_WorkData                     WorkData;                                                 // 0x0170(0x0060)
};

// ScriptStruct ControlRig.RigUnit_CCDIKItemArray
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_CCDIKItemArray : public FRigUnit_HighlevelBaseMutable
{
	TArray<struct FRigElementKey>                      Items;                                                    // 0x00D0(0x0010) (ZeroConstructor)
	struct FTransform                                  EffectorTransform;                                        // 0x00E0(0x0060) (IsPlainOldData)
	float                                              Precision;                                                // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bStartFromTail;                                           // 0x014C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x014D(0x0003) MISSED OFFSET
	float                                              BaseRotationLimit;                                        // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                                           // 0x0158(0x0010) (ZeroConstructor)
	bool                                               bPropagateToChildren;                                     // 0x0168(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	struct FRigUnit_CCDIK_WorkData                     WorkData;                                                 // 0x0170(0x0060)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
// 0x0048
struct FRigUnit_ChainHarmonics_Reach
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FVector                                     ReachTarget;                                              // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReachAxis;                                                // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              ReachMinimum;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReachMaximum;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
// 0x0078
struct FRigUnit_ChainHarmonics_Wave
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FVector                                     WaveFrequency;                                            // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveAmplitude;                                            // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveOffset;                                               // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveNoise;                                                // 0x0050(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              WaveMinimum;                                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaveMaximum;                                              // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
// 0x0058
struct FRigUnit_ChainHarmonics_Pendulum
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              PendulumStiffness;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PendulumGravity;                                          // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              PendulumBlend;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PendulumDrag;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PendulumMinimum;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PendulumMaximum;                                          // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FVector                                     UnwindAxis;                                               // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              UnwindMinimum;                                            // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UnwindMaximum;                                            // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
// 0x0098
struct FRigUnit_ChainHarmonics_WorkData
{
	struct FVector                                     Time;                                                     // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	TArray<struct FCachedRigElement>                   Items;                                                    // 0x0018(0x0010) (ZeroConstructor)
	TArray<float>                                      Ratio;                                                    // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             LocalTip;                                                 // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             PendulumTip;                                              // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             PendulumPosition;                                         // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             PendulumVelocity;                                         // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             HierarchyLine;                                            // 0x0078(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             VelocityLines;                                            // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics
// 0x02D0 (0x03A0 - 0x00D0)
struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       ChainRoot;                                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Speed;                                                    // 0x00D8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRigUnit_ChainHarmonics_Reach               Reach;                                                    // 0x00F0(0x0048)
	struct FRigUnit_ChainHarmonics_Wave                Wave;                                                     // 0x0138(0x0078)
	struct FRuntimeFloatCurve                          WaveCurve;                                                // 0x01B0(0x0088)
	struct FRigUnit_ChainHarmonics_Pendulum            Pendulum;                                                 // 0x0238(0x0058)
	bool                                               bDrawDebug;                                               // 0x0290(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0291(0x000F) MISSED OFFSET
	struct FTransform                                  DrawWorldOffset;                                          // 0x02A0(0x0060) (IsPlainOldData)
	struct FRigUnit_ChainHarmonics_WorkData            WorkData;                                                 // 0x0300(0x0098) (Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
// 0x02D0 (0x03A0 - 0x00D0)
struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey                              ChainRoot;                                                // 0x00D0(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FVector                                     Speed;                                                    // 0x00E0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRigUnit_ChainHarmonics_Reach               Reach;                                                    // 0x00F8(0x0048)
	struct FRigUnit_ChainHarmonics_Wave                Wave;                                                     // 0x0140(0x0078)
	struct FRuntimeFloatCurve                          WaveCurve;                                                // 0x01B8(0x0088)
	struct FRigUnit_ChainHarmonics_Pendulum            Pendulum;                                                 // 0x0240(0x0058)
	bool                                               bDrawDebug;                                               // 0x0298(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	struct FTransform                                  DrawWorldOffset;                                          // 0x02A0(0x0060) (IsPlainOldData)
	struct FRigUnit_ChainHarmonics_WorkData            WorkData;                                                 // 0x0300(0x0098) (Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_CollectionBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_CollectionBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
// 0x0000 (0x00D0 - 0x00D0)
struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable
{

};

// ScriptStruct ControlRig.RigUnit_CollectionChain
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{
	struct FRigElementKey                              FirstItem;                                                // 0x0008(0x000C)
	struct FRigElementKey                              LastItem;                                                 // 0x0014(0x000C)
	bool                                               Reverse;                                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FRigElementKeyCollection                    Collection;                                               // 0x0028(0x0010)
	struct FRigElementKeyCollection                    CachedCollection;                                         // 0x0038(0x0010)
	int                                                CachedHierarchyHash;                                      // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_CollectionChainArray
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_CollectionChainArray : public FRigUnit_CollectionBase
{
	struct FRigElementKey                              FirstItem;                                                // 0x0008(0x000C)
	struct FRigElementKey                              LastItem;                                                 // 0x0014(0x000C)
	bool                                               Reverse;                                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FRigElementKey>                      Items;                                                    // 0x0028(0x0010) (ZeroConstructor)
	struct FRigElementKeyCollection                    CachedCollection;                                         // 0x0038(0x0010)
	int                                                CachedHierarchyHash;                                      // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_CollectionNameSearch
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{
	struct FName                                       PartialName;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	struct FRigElementKeyCollection                    Collection;                                               // 0x0018(0x0010)
	struct FRigElementKeyCollection                    CachedCollection;                                         // 0x0028(0x0010)
	int                                                CachedHierarchyHash;                                      // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_CollectionNameSearchArray
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_CollectionNameSearchArray : public FRigUnit_CollectionBase
{
	struct FName                                       PartialName;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	TArray<struct FRigElementKey>                      Items;                                                    // 0x0018(0x0010) (ZeroConstructor)
	struct FRigElementKeyCollection                    CachedCollection;                                         // 0x0028(0x0010)
	int                                                CachedHierarchyHash;                                      // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_CollectionChildren
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{
	struct FRigElementKey                              Parent;                                                   // 0x0008(0x000C)
	bool                                               bIncludeParent;                                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecursive;                                               // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FRigElementKeyCollection                    Collection;                                               // 0x0018(0x0010)
	struct FRigElementKeyCollection                    CachedCollection;                                         // 0x0028(0x0010)
	int                                                CachedHierarchyHash;                                      // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_CollectionChildrenArray
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_CollectionChildrenArray : public FRigUnit_CollectionBase
{
	struct FRigElementKey                              Parent;                                                   // 0x0008(0x000C)
	bool                                               bIncludeParent;                                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecursive;                                               // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	TArray<struct FRigElementKey>                      Items;                                                    // 0x0018(0x0010) (ZeroConstructor)
	struct FRigElementKeyCollection                    CachedCollection;                                         // 0x0028(0x0010)
	int                                                CachedHierarchyHash;                                      // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
// 0x0050 (0x0058 - 0x0008)
struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection                    Items;                                                    // 0x0008(0x0010)
	struct FName                                       Old;                                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       New;                                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               RemoveInvalidItems;                                       // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDuplicates;                                         // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FRigElementKeyCollection                    Collection;                                               // 0x0030(0x0010)
	struct FRigElementKeyCollection                    CachedCollection;                                         // 0x0040(0x0010)
	int                                                CachedHierarchyHash;                                      // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_CollectionReplaceItemsArray
// 0x0050 (0x0058 - 0x0008)
struct FRigUnit_CollectionReplaceItemsArray : public FRigUnit_CollectionBase
{
	TArray<struct FRigElementKey>                      Items;                                                    // 0x0008(0x0010) (ZeroConstructor)
	struct FName                                       Old;                                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       New;                                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               RemoveInvalidItems;                                       // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDuplicates;                                         // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	TArray<struct FRigElementKey>                      Result;                                                   // 0x0030(0x0010) (ZeroConstructor)
	struct FRigElementKeyCollection                    CachedCollection;                                         // 0x0040(0x0010)
	int                                                CachedHierarchyHash;                                      // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_CollectionItems
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{
	TArray<struct FRigElementKey>                      Items;                                                    // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bAllowDuplicates;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FRigElementKeyCollection                    Collection;                                               // 0x0020(0x0010)
};

// ScriptStruct ControlRig.RigUnit_CollectionGetItems
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_CollectionGetItems : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection                    Collection;                                               // 0x0008(0x0010)
	TArray<struct FRigElementKey>                      Items;                                                    // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndices
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_CollectionGetParentIndices : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection                    Collection;                                               // 0x0008(0x0010)
	TArray<int>                                        ParentIndices;                                            // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndicesItemArray
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_CollectionGetParentIndicesItemArray : public FRigUnit_CollectionBase
{
	TArray<struct FRigElementKey>                      Items;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<int>                                        ParentIndices;                                            // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_CollectionUnion
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection                    A;                                                        // 0x0008(0x0010)
	struct FRigElementKeyCollection                    B;                                                        // 0x0018(0x0010)
	bool                                               bAllowDuplicates;                                         // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FRigElementKeyCollection                    Collection;                                               // 0x0030(0x0010)
};

// ScriptStruct ControlRig.RigUnit_CollectionIntersection
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection                    A;                                                        // 0x0008(0x0010)
	struct FRigElementKeyCollection                    B;                                                        // 0x0018(0x0010)
	struct FRigElementKeyCollection                    Collection;                                               // 0x0028(0x0010)
};

// ScriptStruct ControlRig.RigUnit_CollectionDifference
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection                    A;                                                        // 0x0008(0x0010)
	struct FRigElementKeyCollection                    B;                                                        // 0x0018(0x0010)
	struct FRigElementKeyCollection                    Collection;                                               // 0x0028(0x0010)
};

// ScriptStruct ControlRig.RigUnit_CollectionReverse
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection                    Collection;                                               // 0x0008(0x0010)
	struct FRigElementKeyCollection                    Reversed;                                                 // 0x0018(0x0010)
};

// ScriptStruct ControlRig.RigUnit_CollectionCount
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection                    Collection;                                               // 0x0008(0x0010)
	int                                                Count;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection                    Collection;                                               // 0x0008(0x0010)
	int                                                Index;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              Item;                                                     // 0x001C(0x000C)
};

// ScriptStruct ControlRig.RigUnit_CollectionLoop
// 0x00F0 (0x01C0 - 0x00D0)
struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{
	struct FRigElementKeyCollection                    Collection;                                               // 0x00D0(0x0010)
	struct FRigElementKey                              Item;                                                     // 0x00E0(0x000C)
	int                                                Index;                                                    // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Continue;                                                 // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FControlRigExecuteContext                   Completed;                                                // 0x0100(0x00C0)
};

// ScriptStruct ControlRig.RigUnit_CollectionAddItem
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_CollectionAddItem : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection                    Collection;                                               // 0x0008(0x0010)
	struct FRigElementKey                              Item;                                                     // 0x0018(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FRigElementKeyCollection                    Result;                                                   // 0x0028(0x0010)
};

// ScriptStruct ControlRig.RigUnit_Control
// 0x0178 (0x0180 - 0x0008)
struct FRigUnit_Control : public FRigUnit
{
	struct FEulerTransform                             Transform;                                                // 0x0008(0x0048) (Edit, BlueprintVisible)
	struct FTransform                                  Base;                                                     // 0x0050(0x0060) (IsPlainOldData)
	struct FTransform                                  InitTransform;                                            // 0x00B0(0x0060) (IsPlainOldData)
	struct FTransform                                  Result;                                                   // 0x0110(0x0060) (IsPlainOldData)
	struct FTransformFilter                            Filter;                                                   // 0x0170(0x0009)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
// 0x0060 (0x01E0 - 0x0180)
struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
{
	struct FTransform                                  MeshTransform;                                            // 0x0180(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ConvertTransform
// 0x00B8 (0x00C0 - 0x0008)
struct FRigUnit_ConvertTransform : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Input;                                                    // 0x0010(0x0060) (IsPlainOldData)
	struct FEulerTransform                             Result;                                                   // 0x0070(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
// 0x00A8 (0x00B0 - 0x0008)
struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
	struct FEulerTransform                             Input;                                                    // 0x0008(0x0048)
	struct FTransform                                  Result;                                                   // 0x0050(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ConvertRotation
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_ConvertRotation : public FRigUnit
{
	struct FRotator                                    Input;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0020(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
// 0x0000 (0x0040 - 0x0040)
struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{

};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_ConvertQuaternion : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Input;                                                    // 0x0010(0x0020) (IsPlainOldData)
	struct FRotator                                    Result;                                                   // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
	struct FVector                                     Input;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Result;                                                   // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{
	struct FVector                                     Input;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0020(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
	struct FRotator                                    Input;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Input;                                                    // 0x0010(0x0020) (IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
// 0x0088 (0x0090 - 0x0008)
struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Input;                                                    // 0x0010(0x0020) (IsPlainOldData)
	struct FVector                                     TwistAxis;                                                // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FQuat                                       Swing;                                                    // 0x0050(0x0020) (IsPlainOldData)
	struct FQuat                                       Twist;                                                    // 0x0070(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_DebugBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_DebugBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_DebugBaseMutable
// 0x0000 (0x00D0 - 0x00D0)
struct FRigUnit_DebugBaseMutable : public FRigUnitMutable
{

};

// ScriptStruct ControlRig.RigUnit_DebugBezier
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable
{
	struct FCRFourPointBezier                          Bezier;                                                   // 0x00D0(0x0060)
	float                                              MinimumU;                                                 // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumU;                                                 // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0138(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Detail;                                                   // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0160(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x01C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x01C1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_DebugBezierItemSpace : public FRigUnit_DebugBaseMutable
{
	struct FCRFourPointBezier                          Bezier;                                                   // 0x00D0(0x0060)
	float                                              MinimumU;                                                 // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumU;                                                 // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0138(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Detail;                                                   // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              Space;                                                    // 0x0150(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0160(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x01C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x01C1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugHierarchy
// 0x0090 (0x0160 - 0x00D0)
struct FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable
{
	float                                              Scale;                                                    // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x00D4(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x00F0(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0150(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0151(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugPose
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_DebugPose : public FRigUnit_DebugBaseMutable
{
	struct FRigPose                                    Pose;                                                     // 0x00D0(0x0070)
	float                                              Scale;                                                    // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0144(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0160(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x01C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x01C1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugLine
// 0x00C0 (0x0190 - 0x00D0)
struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
{
	struct FVector                                     A;                                                        // 0x00D0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x00E8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0100(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0114(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0120(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0180(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0181(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugLineItemSpace
// 0x00C0 (0x0190 - 0x00D0)
struct FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
{
	struct FVector                                     A;                                                        // 0x00D0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x00E8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0100(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              Space;                                                    // 0x0114(0x000C)
	struct FTransform                                  WorldOffset;                                              // 0x0120(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0180(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0181(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugLineStrip
// 0x00A0 (0x0170 - 0x00D0)
struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
{
	TArray<struct FVector>                             Points;                                                   // 0x00D0(0x0010) (ZeroConstructor)
	struct FLinearColor                                Color;                                                    // 0x00E0(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x00F4(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0100(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0160(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0161(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugLineStripItemSpace
// 0x00A0 (0x0170 - 0x00D0)
struct FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
{
	TArray<struct FVector>                             Points;                                                   // 0x00D0(0x0010) (ZeroConstructor)
	struct FLinearColor                                Color;                                                    // 0x00E0(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              Space;                                                    // 0x00F4(0x000C)
	struct FTransform                                  WorldOffset;                                              // 0x0100(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0160(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0161(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugPoint
// 0x00B8 (0x00C0 - 0x0008)
struct FRigUnit_DebugPoint : public FRigUnit_DebugBase
{
	struct FVector                                     Vector;                                                   // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0020(0x0004) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0024(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0050(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x00B1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugPointMutable
// 0x00B0 (0x0180 - 0x00D0)
struct FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable
{
	struct FVector                                     Vector;                                                   // 0x00D0(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E8(0x0004) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x00EC(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0104(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0110(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0171(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugRectangle
// 0x00F0 (0x01C0 - 0x00D0)
struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{
	struct FTransform                                  Transform;                                                // 0x00D0(0x0060) (IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0130(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  WorldOffset;                                              // 0x0150(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x01B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x01B1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugRectangleItemSpace
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
{
	struct FTransform                                  Transform;                                                // 0x00D0(0x0060) (IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0130(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              Space;                                                    // 0x0148(0x000C)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0154(0x000C) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0160(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x01C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x01C1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugArc
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{
	struct FTransform                                  Transform;                                                // 0x00D0(0x0060) (IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0130(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinimumDegrees;                                           // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumDegrees;                                           // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Detail;                                                   // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0154(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0160(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x01C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x01C1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugArcItemSpace
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable
{
	struct FTransform                                  Transform;                                                // 0x00D0(0x0060) (IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0130(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinimumDegrees;                                           // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumDegrees;                                           // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Detail;                                                   // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              Space;                                                    // 0x0154(0x000C)
	struct FTransform                                  WorldOffset;                                              // 0x0160(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x01C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x01C1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugTransform
// 0x0108 (0x0110 - 0x0008)
struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0070(0x0004) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0074(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x008C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x00A0(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0101(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugTransformMutable
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
{
	struct FTransform                                  Transform;                                                // 0x00D0(0x0060) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0130(0x0004) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0134(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x014C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0154(0x000C) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0160(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x01C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x01C1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugTransformMutableItemSpace
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable
{
	struct FTransform                                  Transform;                                                // 0x00D0(0x0060) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0130(0x0004) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0134(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              Space;                                                    // 0x014C(0x000C)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0158(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0160(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x01C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x01C1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
// 0x0010
struct FRigUnit_DebugTransformArrayMutable_WorkData
{
	TArray<struct FTransform>                          DrawTransforms;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
// 0x00C0 (0x0190 - 0x00D0)
struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{
	TArray<struct FTransform>                          Transforms;                                               // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E0(0x0004) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x00E4(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x00FC(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0104(0x000C) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0110(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	struct FRigUnit_DebugTransformArrayMutable_WorkData WorkData;                                                 // 0x0178(0x0010) (Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
// 0x00C0 (0x0190 - 0x00D0)
struct FRigUnit_DebugTransformArrayMutableItemSpace : public FRigUnit_DebugBaseMutable
{
	TArray<struct FTransform>                          Transforms;                                               // 0x00D0(0x0010) (ZeroConstructor)
	TArray<int>                                        ParentIndices;                                            // 0x00E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F0(0x0004) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x00F4(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              Space;                                                    // 0x010C(0x000C)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0120(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0180(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0181(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PreviousValue;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Cache;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
// 0x0060 (0x0068 - 0x0008)
struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Delta;                                                    // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PreviousValue;                                            // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Cache;                                                    // 0x0050(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
// 0x0088 (0x0090 - 0x0008)
struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0010(0x0020) (IsPlainOldData)
	struct FQuat                                       Delta;                                                    // 0x0030(0x0020) (IsPlainOldData)
	struct FQuat                                       PreviousValue;                                            // 0x0050(0x0020) (IsPlainOldData)
	struct FQuat                                       Cache;                                                    // 0x0070(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
// 0x0188 (0x0190 - 0x0008)
struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0060) (IsPlainOldData)
	struct FTransform                                  Delta;                                                    // 0x0070(0x0060) (IsPlainOldData)
	struct FTransform                                  PreviousValue;                                            // 0x00D0(0x0060) (IsPlainOldData)
	struct FTransform                                  Cache;                                                    // 0x0130(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
// 0x0030
struct FRigUnit_DistributeRotation_Rotation
{
	struct FQuat                                       Rotation;                                                 // 0x0000(0x0020) (IsPlainOldData)
	float                                              Ratio;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
// 0x0050
struct FRigUnit_DistributeRotation_WorkData
{
	TArray<struct FCachedRigElement>                   CachedItems;                                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        ItemRotationA;                                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        ItemRotationB;                                            // 0x0020(0x0010) (ZeroConstructor)
	TArray<float>                                      ItemRotationT;                                            // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FTransform>                          ItemLocalTransforms;                                      // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation
// 0x0080 (0x0150 - 0x00D0)
struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EndBone;                                                  // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                                // 0x00E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F0(0x0004) MISSED OFFSET
	float                                              Weight;                                                   // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FRigUnit_DistributeRotation_WorkData        WorkData;                                                 // 0x0100(0x0050) (Transient)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
// 0x0080 (0x0150 - 0x00D0)
struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection                    Items;                                                    // 0x00D0(0x0010)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                                // 0x00E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F0(0x0004) MISSED OFFSET
	float                                              Weight;                                                   // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigUnit_DistributeRotation_WorkData        WorkData;                                                 // 0x00F8(0x0050) (Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DistributeRotationForItemArray
// 0x0080 (0x0150 - 0x00D0)
struct FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable
{
	TArray<struct FRigElementKey>                      Items;                                                    // 0x00D0(0x0010) (ZeroConstructor)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                                // 0x00E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F0(0x0004) MISSED OFFSET
	float                                              Weight;                                                   // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigUnit_DistributeRotation_WorkData        WorkData;                                                 // 0x00F8(0x0050) (Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
// 0x0078 (0x0080 - 0x0008)
struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
{
	struct FName                                       InstructionName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0020(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
// 0x0020 (0x00F0 - 0x00D0)
struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{
	struct FName                                       InstructionName;                                          // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x00D8(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
// 0x0010 (0x00E0 - 0x00D0)
struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{
	struct FName                                       InstructionName;                                          // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
// 0x0070 (0x0140 - 0x00D0)
struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{
	struct FName                                       InstructionName;                                          // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00E0(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_DynamicHierarchyBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBaseMutable
// 0x0000 (0x00D0 - 0x00D0)
struct FRigUnit_DynamicHierarchyBaseMutable : public FRigUnitMutable
{

};

// ScriptStruct ControlRig.RigUnit_AddParent
// 0x0020 (0x00F0 - 0x00D0)
struct FRigUnit_AddParent : public FRigUnit_DynamicHierarchyBaseMutable
{
	struct FRigElementKey                              Child;                                                    // 0x00D0(0x000C)
	struct FRigElementKey                              Parent;                                                   // 0x00DC(0x000C)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SwitchParent
// 0x0020 (0x00F0 - 0x00D0)
struct FRigUnit_SwitchParent : public FRigUnit_DynamicHierarchyBaseMutable
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D0(0x0004) MISSED OFFSET
	struct FRigElementKey                              Child;                                                    // 0x00D4(0x000C)
	struct FRigElementKey                              Parent;                                                   // 0x00E0(0x000C)
	bool                                               bMaintainGlobal;                                          // 0x00EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeights
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase
{
	struct FRigElementKey                              Child;                                                    // 0x0008(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FRigElementWeight>                   Weights;                                                  // 0x0018(0x0010) (ZeroConstructor)
	struct FRigElementKeyCollection                    Parents;                                                  // 0x0028(0x0010)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeightsArray
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_HierarchyGetParentWeightsArray : public FRigUnit_DynamicHierarchyBase
{
	struct FRigElementKey                              Child;                                                    // 0x0008(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FRigElementWeight>                   Weights;                                                  // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FRigElementKey>                      Parents;                                                  // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_HierarchySetParentWeights
// 0x0020 (0x00F0 - 0x00D0)
struct FRigUnit_HierarchySetParentWeights : public FRigUnit_DynamicHierarchyBaseMutable
{
	struct FRigElementKey                              Child;                                                    // 0x00D0(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TArray<struct FRigElementWeight>                   Weights;                                                  // 0x00E0(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
// 0x0040
struct FRigUnit_FABRIK_WorkData
{
	TArray<struct FFABRIKChainLink>                    Chain;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FCachedRigElement>                   CachedItems;                                              // 0x0010(0x0010) (ZeroConstructor)
	struct FCachedRigElement                           CachedEffector;                                           // 0x0020(0x0020)
};

// ScriptStruct ControlRig.RigUnit_FABRIK
// 0x00D0 (0x01A0 - 0x00D0)
struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectorBone;                                             // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  EffectorTransform;                                        // 0x00E0(0x0060) (IsPlainOldData)
	float                                              Precision;                                                // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	int                                                MaxIterations;                                            // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigUnit_FABRIK_WorkData                    WorkData;                                                 // 0x0150(0x0040) (Transient)
	bool                                               bSetEffectorTransform;                                    // 0x0190(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0191(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_FABRIKPerItem
// 0x00D0 (0x01A0 - 0x00D0)
struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection                    Items;                                                    // 0x00D0(0x0010)
	struct FTransform                                  EffectorTransform;                                        // 0x00E0(0x0060) (IsPlainOldData)
	float                                              Precision;                                                // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	int                                                MaxIterations;                                            // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigUnit_FABRIK_WorkData                    WorkData;                                                 // 0x0150(0x0040) (Transient)
	bool                                               bSetEffectorTransform;                                    // 0x0190(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0191(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_FABRIKItemArray
// 0x00D0 (0x01A0 - 0x00D0)
struct FRigUnit_FABRIKItemArray : public FRigUnit_HighlevelBaseMutable
{
	TArray<struct FRigElementKey>                      Items;                                                    // 0x00D0(0x0010) (ZeroConstructor)
	struct FTransform                                  EffectorTransform;                                        // 0x00E0(0x0060) (IsPlainOldData)
	float                                              Precision;                                                // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	int                                                MaxIterations;                                            // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigUnit_FABRIK_WorkData                    WorkData;                                                 // 0x0150(0x0040) (Transient)
	bool                                               bSetEffectorTransform;                                    // 0x0190(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0191(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
// 0x0030
struct FRigUnit_FitChainToCurve_Rotation
{
	struct FQuat                                       Rotation;                                                 // 0x0000(0x0020) (Edit, IsPlainOldData)
	float                                              Ratio;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
// 0x0090
struct FRigUnit_FitChainToCurve_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CurveColor;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SegmentsColor;                                            // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0030(0x0060) (Edit, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
// 0x0098
struct FRigUnit_FitChainToCurve_WorkData
{
	float                                              ChainLength;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FVector>                             ItemPositions;                                            // 0x0008(0x0010) (ZeroConstructor)
	TArray<float>                                      ItemSegments;                                             // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             CurvePositions;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<float>                                      CurveSegments;                                            // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FCachedRigElement>                   CachedItems;                                              // 0x0048(0x0010) (ZeroConstructor)
	TArray<int>                                        ItemRotationA;                                            // 0x0058(0x0010) (ZeroConstructor)
	TArray<int>                                        ItemRotationB;                                            // 0x0068(0x0010) (ZeroConstructor)
	TArray<float>                                      ItemRotationT;                                            // 0x0078(0x0010) (ZeroConstructor)
	TArray<struct FTransform>                          ItemLocalTransforms;                                      // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve
// 0x0220 (0x02F0 - 0x00D0)
struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EndBone;                                                  // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FCRFourPointBezier                          Bezier;                                                   // 0x00E0(0x0060)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0140(0x0004) MISSED OFFSET
	float                                              Minimum;                                                  // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SamplingPrecision;                                        // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PrimaryAxis;                                              // 0x0150(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondaryAxis;                                            // 0x0168(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PoleVectorPosition;                                       // 0x0180(0x0018) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRigUnit_FitChainToCurve_Rotation>   Rotations;                                                // 0x0198(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01A8(0x0004) MISSED OFFSET
	float                                              Weight;                                                   // 0x01AC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x01B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x01B1(0x000F) MISSED OFFSET
	struct FRigUnit_FitChainToCurve_DebugSettings      DebugSettings;                                            // 0x01C0(0x0090)
	struct FRigUnit_FitChainToCurve_WorkData           WorkData;                                                 // 0x0250(0x0098) (Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
// 0x0220 (0x02F0 - 0x00D0)
struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection                    Items;                                                    // 0x00D0(0x0010)
	struct FCRFourPointBezier                          Bezier;                                                   // 0x00E0(0x0060)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0140(0x0004) MISSED OFFSET
	float                                              Minimum;                                                  // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SamplingPrecision;                                        // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PrimaryAxis;                                              // 0x0150(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondaryAxis;                                            // 0x0168(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PoleVectorPosition;                                       // 0x0180(0x0018) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRigUnit_FitChainToCurve_Rotation>   Rotations;                                                // 0x0198(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01A8(0x0004) MISSED OFFSET
	float                                              Weight;                                                   // 0x01AC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x01B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x01B1(0x000F) MISSED OFFSET
	struct FRigUnit_FitChainToCurve_DebugSettings      DebugSettings;                                            // 0x01C0(0x0090)
	struct FRigUnit_FitChainToCurve_WorkData           WorkData;                                                 // 0x0250(0x0098) (Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurveItemArray
// 0x0220 (0x02F0 - 0x00D0)
struct FRigUnit_FitChainToCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
	TArray<struct FRigElementKey>                      Items;                                                    // 0x00D0(0x0010) (ZeroConstructor)
	struct FCRFourPointBezier                          Bezier;                                                   // 0x00E0(0x0060)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0140(0x0004) MISSED OFFSET
	float                                              Minimum;                                                  // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SamplingPrecision;                                        // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PrimaryAxis;                                              // 0x0150(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondaryAxis;                                            // 0x0168(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PoleVectorPosition;                                       // 0x0180(0x0018) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRigUnit_FitChainToCurve_Rotation>   Rotations;                                                // 0x0198(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01A8(0x0004) MISSED OFFSET
	float                                              Weight;                                                   // 0x01AC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x01B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x01B1(0x000F) MISSED OFFSET
	struct FRigUnit_FitChainToCurve_DebugSettings      DebugSettings;                                            // 0x01C0(0x0090)
	struct FRigUnit_FitChainToCurve_WorkData           WorkData;                                                 // 0x0250(0x0098) (Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_BinaryFloatOp : public FRigUnit
{
	float                                              Argument0;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Argument1;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_Clamp_Float
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_Clamp_Float : public FRigUnit
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MapRange_Float
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_MapRange_Float : public FRigUnit
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinIn;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxIn;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinOut;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxOut;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ForLoopCount
// 0x00D0 (0x01A0 - 0x00D0)
struct FRigUnit_ForLoopCount : public FRigUnitMutable
{
	int                                                Count;                                                    // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Continue;                                                 // 0x00DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	struct FControlRigExecuteContext                   Completed;                                                // 0x00E0(0x00C0) (Edit, Transient)
};

// ScriptStruct ControlRig.RigUnit_GetBoneTransform
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_GetBoneTransform : public FRigUnit
{
	struct FName                                       bone;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0060) (IsPlainOldData)
	struct FCachedRigElement                           CachedBone;                                               // 0x0080(0x0020) (Transient)
};

// ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_GetControlInitialTransform : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0060) (IsPlainOldData)
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x0080(0x0020)
};

// ScriptStruct ControlRig.RigUnit_GetControlBool
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_GetControlBool : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x0018(0x0020)
};

// ScriptStruct ControlRig.RigUnit_GetControlFloat
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_GetControlFloat : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x0020(0x0020)
};

// ScriptStruct ControlRig.RigUnit_GetControlInteger
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_GetControlInteger : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                IntegerValue;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Minimum;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Maximum;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x0020(0x0020)
};

// ScriptStruct ControlRig.RigUnit_GetControlVector2D
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_GetControlVector2D : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Vector;                                                   // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Minimum;                                                  // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Maximum;                                                  // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x0040(0x0020)
};

// ScriptStruct ControlRig.RigUnit_GetControlVector
// 0x0078 (0x0080 - 0x0008)
struct FRigUnit_GetControlVector : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	struct FVector                                     Vector;                                                   // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Minimum;                                                  // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Maximum;                                                  // 0x0048(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x0060(0x0020)
};

// ScriptStruct ControlRig.RigUnit_GetControlRotator
// 0x0078 (0x0080 - 0x0008)
struct FRigUnit_GetControlRotator : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	struct FRotator                                    Rotator;                                                  // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Minimum;                                                  // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Maximum;                                                  // 0x0048(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x0060(0x0020)
};

// ScriptStruct ControlRig.RigUnit_GetControlTransform
// 0x0158 (0x0160 - 0x0008)
struct FRigUnit_GetControlTransform : public FRigUnit
{
	struct FName                                       Control;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0060) (IsPlainOldData)
	struct FTransform                                  Minimum;                                                  // 0x0080(0x0060) (IsPlainOldData)
	struct FTransform                                  Maximum;                                                  // 0x00E0(0x0060) (IsPlainOldData)
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x0140(0x0020)
};

// ScriptStruct ControlRig.RigUnit_GetCurveValue
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_GetCurveValue : public FRigUnit
{
	struct FName                                       Curve;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FCachedRigElement                           CachedCurveIndex;                                         // 0x0018(0x0020)
};

// ScriptStruct ControlRig.RigUnit_GetDeltaTime
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase
{
	float                                              Result;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_GetInitialBoneTransform : public FRigUnit
{
	struct FName                                       bone;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0060) (IsPlainOldData)
	struct FCachedRigElement                           CachedBone;                                               // 0x0080(0x0020) (Transient)
};

// ScriptStruct ControlRig.RigUnit_GetJointTransform
// 0x00E0 (0x01B0 - 0x00D0)
struct FRigUnit_GetJointTransform : public FRigUnitMutable
{
	struct FName                                       Joint;                                                    // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FTransform                                  BaseTransform;                                            // 0x00E0(0x0060) (IsPlainOldData)
	struct FName                                       BaseJoint;                                                // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
	struct FTransform                                  Output;                                                   // 0x0150(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
// 0x00B8 (0x00C0 - 0x0008)
struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
{
	struct FName                                       bone;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0060) (IsPlainOldData)
	struct FCachedRigElement                           CachedBone;                                               // 0x0080(0x0020) (Transient)
	struct FCachedRigElement                           CachedSpace;                                              // 0x00A0(0x0020) (Transient)
};

// ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
// 0x00C8 (0x00D0 - 0x0008)
struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
{
	struct FRigElementKey                              Child;                                                    // 0x0008(0x000C)
	bool                                               bChildInitial;                                            // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FRigElementKey                              Parent;                                                   // 0x0018(0x000C)
	bool                                               bParentInitial;                                           // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0025(0x000B) MISSED OFFSET
	struct FTransform                                  RelativeTransform;                                        // 0x0030(0x0060) (IsPlainOldData)
	struct FCachedRigElement                           CachedChild;                                              // 0x0090(0x0020)
	struct FCachedRigElement                           CachedParent;                                             // 0x00B0(0x0020)
};

// ScriptStruct ControlRig.RigUnit_GetSpaceTransform
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_GetSpaceTransform : public FRigUnit
{
	struct FName                                       Space;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0060) (IsPlainOldData)
	struct FCachedRigElement                           CachedSpaceIndex;                                         // 0x0080(0x0020)
};

// ScriptStruct ControlRig.RigUnit_GetTransform
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_GetTransform : public FRigUnit
{
	struct FRigElementKey                              Item;                                                     // 0x0008(0x000C)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0014(0x0001) MISSED OFFSET
	bool                                               bInitial;                                                 // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x0016(0x000A) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0060) (IsPlainOldData)
	struct FCachedRigElement                           CachedIndex;                                              // 0x0080(0x0020)
};

// ScriptStruct ControlRig.RigUnit_GetTransformArray
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_GetTransformArray : public FRigUnit
{
	struct FRigElementKeyCollection                    Items;                                                    // 0x0008(0x0010)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0018(0x0001) MISSED OFFSET
	bool                                               bInitial;                                                 // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	TArray<struct FTransform>                          Transforms;                                               // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FCachedRigElement>                   CachedIndex;                                              // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_GetTransformItemArray
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_GetTransformItemArray : public FRigUnit
{
	TArray<struct FRigElementKey>                      Items;                                                    // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0018(0x0001) MISSED OFFSET
	bool                                               bInitial;                                                 // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	TArray<struct FTransform>                          Transforms;                                               // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FCachedRigElement>                   CachedIndex;                                              // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_GetWorldTime
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_GetWorldTime : public FRigUnit_AnimBase
{
	float                                              Year;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Month;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Day;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeekDay;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Hours;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minutes;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Seconds;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OverallSeconds;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_HierarchyBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_HierarchyBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_HierarchyBaseMutable
// 0x0000 (0x00D0 - 0x00D0)
struct FRigUnit_HierarchyBaseMutable : public FRigUnitMutable
{

};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParent
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{
	struct FRigElementKey                              Child;                                                    // 0x0008(0x000C)
	struct FRigElementKey                              Parent;                                                   // 0x0014(0x000C)
	struct FCachedRigElement                           CachedChild;                                              // 0x0020(0x0020)
	struct FCachedRigElement                           CachedParent;                                             // 0x0040(0x0020)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParents
// 0x0050 (0x0058 - 0x0008)
struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{
	struct FRigElementKey                              Child;                                                    // 0x0008(0x000C)
	bool                                               bIncludeChild;                                            // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bReverse;                                                 // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FRigElementKeyCollection                    Parents;                                                  // 0x0018(0x0010)
	struct FCachedRigElement                           CachedChild;                                              // 0x0028(0x0020)
	struct FRigElementKeyCollection                    CachedParents;                                            // 0x0048(0x0010)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetParentsItemArray
// 0x0050 (0x0058 - 0x0008)
struct FRigUnit_HierarchyGetParentsItemArray : public FRigUnit_HierarchyBase
{
	struct FRigElementKey                              Child;                                                    // 0x0008(0x000C)
	bool                                               bIncludeChild;                                            // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bReverse;                                                 // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	TArray<struct FRigElementKey>                      Parents;                                                  // 0x0018(0x0010) (ZeroConstructor)
	struct FCachedRigElement                           CachedChild;                                              // 0x0028(0x0020)
	struct FRigElementKeyCollection                    CachedParents;                                            // 0x0048(0x0010)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
// 0x0050 (0x0058 - 0x0008)
struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{
	struct FRigElementKey                              Parent;                                                   // 0x0008(0x000C)
	bool                                               bIncludeParent;                                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecursive;                                               // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FRigElementKeyCollection                    Children;                                                 // 0x0018(0x0010)
	struct FCachedRigElement                           CachedParent;                                             // 0x0028(0x0020)
	struct FRigElementKeyCollection                    CachedChildren;                                           // 0x0048(0x0010)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
// 0x0050 (0x0058 - 0x0008)
struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{
	struct FRigElementKey                              Item;                                                     // 0x0008(0x000C)
	bool                                               bIncludeItem;                                             // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FRigElementKeyCollection                    Siblings;                                                 // 0x0018(0x0010)
	struct FCachedRigElement                           CachedItem;                                               // 0x0028(0x0020)
	struct FRigElementKeyCollection                    CachedSiblings;                                           // 0x0048(0x0010)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblingsItemArray
// 0x0050 (0x0058 - 0x0008)
struct FRigUnit_HierarchyGetSiblingsItemArray : public FRigUnit_HierarchyBase
{
	struct FRigElementKey                              Item;                                                     // 0x0008(0x000C)
	bool                                               bIncludeItem;                                             // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TArray<struct FRigElementKey>                      Siblings;                                                 // 0x0018(0x0010) (ZeroConstructor)
	struct FCachedRigElement                           CachedItem;                                               // 0x0028(0x0020)
	struct FRigElementKeyCollection                    CachedSiblings;                                           // 0x0048(0x0010)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetPose
// 0x0088 (0x0090 - 0x0008)
struct FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase
{
	bool                                               Initial;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FRigElementKeyCollection                    ItemsToGet;                                               // 0x0010(0x0010)
	struct FRigPose                                    Pose;                                                     // 0x0020(0x0070)
};

// ScriptStruct ControlRig.RigUnit_HierarchyGetPoseItemArray
// 0x0088 (0x0090 - 0x0008)
struct FRigUnit_HierarchyGetPoseItemArray : public FRigUnit_HierarchyBase
{
	bool                                               Initial;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FRigElementKey>                      ItemsToGet;                                               // 0x0010(0x0010) (ZeroConstructor)
	struct FRigPose                                    Pose;                                                     // 0x0020(0x0070)
};

// ScriptStruct ControlRig.RigUnit_HierarchySetPose
// 0x0090 (0x0160 - 0x00D0)
struct FRigUnit_HierarchySetPose : public FRigUnit_HierarchyBaseMutable
{
	struct FRigPose                                    Pose;                                                     // 0x00D0(0x0070)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0140(0x0008) MISSED OFFSET
	struct FRigElementKeyCollection                    ItemsToSet;                                               // 0x0148(0x0010)
	float                                              Weight;                                                   // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_HierarchySetPoseItemArray
// 0x0090 (0x0160 - 0x00D0)
struct FRigUnit_HierarchySetPoseItemArray : public FRigUnit_HierarchyBaseMutable
{
	struct FRigPose                                    Pose;                                                     // 0x00D0(0x0070)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0140(0x0008) MISSED OFFSET
	TArray<struct FRigElementKey>                      ItemsToSet;                                               // 0x0148(0x0010) (ZeroConstructor)
	float                                              Weight;                                                   // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_PoseIsEmpty
// 0x0078 (0x0080 - 0x0008)
struct FRigUnit_PoseIsEmpty : public FRigUnit_HierarchyBase
{
	struct FRigPose                                    Pose;                                                     // 0x0008(0x0070)
	bool                                               IsEmpty;                                                  // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_PoseGetItems
// 0x0088 (0x0090 - 0x0008)
struct FRigUnit_PoseGetItems : public FRigUnit_HierarchyBase
{
	struct FRigPose                                    Pose;                                                     // 0x0008(0x0070)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	struct FRigElementKeyCollection                    Items;                                                    // 0x0080(0x0010)
};

// ScriptStruct ControlRig.RigUnit_PoseGetItemsItemArray
// 0x0088 (0x0090 - 0x0008)
struct FRigUnit_PoseGetItemsItemArray : public FRigUnit_HierarchyBase
{
	struct FRigPose                                    Pose;                                                     // 0x0008(0x0070)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TArray<struct FRigElementKey>                      Items;                                                    // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_PoseGetDelta
// 0x0120 (0x0128 - 0x0008)
struct FRigUnit_PoseGetDelta : public FRigUnit_HierarchyBase
{
	struct FRigPose                                    PoseA;                                                    // 0x0008(0x0070)
	struct FRigPose                                    PoseB;                                                    // 0x0078(0x0070)
	float                                              PositionThreshold;                                        // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotationThreshold;                                        // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ScaleThreshold;                                           // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurveThreshold;                                           // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	struct FRigElementKeyCollection                    ItemsToCompare;                                           // 0x0100(0x0010)
	bool                                               PosesAreEqual;                                            // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FRigElementKeyCollection                    ItemsWithDelta;                                           // 0x0118(0x0010)
};

// ScriptStruct ControlRig.RigUnit_PoseGetTransform
// 0x00F8 (0x0100 - 0x0008)
struct FRigUnit_PoseGetTransform : public FRigUnit_HierarchyBase
{
	struct FRigPose                                    Pose;                                                     // 0x0008(0x0070)
	struct FRigElementKey                              Item;                                                     // 0x0078(0x000C)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0084(0x0001) MISSED OFFSET
	bool                                               Valid;                                                    // 0x0085(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x0086(0x000A) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0090(0x0060) (IsPlainOldData)
	float                                              CurveValue;                                               // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CachedPoseElementIndex;                                   // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CachedPoseHash;                                           // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_PoseGetTransformArray
// 0x0088 (0x0090 - 0x0008)
struct FRigUnit_PoseGetTransformArray : public FRigUnit_HierarchyBase
{
	struct FRigPose                                    Pose;                                                     // 0x0008(0x0070)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0078(0x0001) MISSED OFFSET
	bool                                               Valid;                                                    // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x007A(0x0006) MISSED OFFSET
	TArray<struct FTransform>                          Transforms;                                               // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_PoseGetCurve
// 0x0088 (0x0090 - 0x0008)
struct FRigUnit_PoseGetCurve : public FRigUnit_HierarchyBase
{
	struct FRigPose                                    Pose;                                                     // 0x0008(0x0070)
	struct FName                                       Curve;                                                    // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              CurveValue;                                               // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CachedPoseElementIndex;                                   // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CachedPoseHash;                                           // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_PoseLoop
// 0x0220 (0x02F0 - 0x00D0)
struct FRigUnit_PoseLoop : public FRigUnit_HierarchyBaseMutable
{
	struct FRigPose                                    Pose;                                                     // 0x00D0(0x0070)
	struct FRigElementKey                              Item;                                                     // 0x0140(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FTransform                                  GlobalTransform;                                          // 0x0150(0x0060) (IsPlainOldData)
	struct FTransform                                  LocalTransform;                                           // 0x01B0(0x0060) (IsPlainOldData)
	float                                              CurveValue;                                               // 0x0210(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0214(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // 0x021C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Continue;                                                 // 0x0220(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0221(0x000F) MISSED OFFSET
	struct FControlRigExecuteContext                   Completed;                                                // 0x0230(0x00C0)
};

// ScriptStruct ControlRig.RigUnit_InverseExecution
// 0x00C8 (0x00D0 - 0x0008)
struct FRigUnit_InverseExecution : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FControlRigExecuteContext                   ExecuteContext;                                           // 0x0010(0x00C0) (Edit, Transient)
};

// ScriptStruct ControlRig.RigUnit_IsInteracting
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_IsInteracting : public FRigUnit
{
	bool                                               bIsInteracting;                                           // 0x0008(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ItemBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_ItemBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_ItemBaseMutable
// 0x0000 (0x00D0 - 0x00D0)
struct FRigUnit_ItemBaseMutable : public FRigUnitMutable
{

};

// ScriptStruct ControlRig.RigUnit_ItemExists
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_ItemExists : public FRigUnit_ItemBase
{
	struct FRigElementKey                              Item;                                                     // 0x0008(0x000C)
	bool                                               Exists;                                                   // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FCachedRigElement                           CachedIndex;                                              // 0x0018(0x0020)
};

// ScriptStruct ControlRig.RigUnit_ItemReplace
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
{
	struct FRigElementKey                              Item;                                                     // 0x0008(0x000C)
	struct FName                                       Old;                                                      // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       New;                                                      // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              Result;                                                   // 0x0024(0x000C)
};

// ScriptStruct ControlRig.RigUnit_ItemEquals
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_ItemEquals : public FRigUnit_ItemBase
{
	struct FRigElementKey                              A;                                                        // 0x0008(0x000C)
	struct FRigElementKey                              B;                                                        // 0x0014(0x000C)
	bool                                               Result;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ItemNotEquals
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_ItemNotEquals : public FRigUnit_ItemBase
{
	struct FRigElementKey                              A;                                                        // 0x0008(0x000C)
	struct FRigElementKey                              B;                                                        // 0x0014(0x000C)
	bool                                               Result;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ItemTypeEquals
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_ItemTypeEquals : public FRigUnit_ItemBase
{
	struct FRigElementKey                              A;                                                        // 0x0008(0x000C)
	struct FRigElementKey                              B;                                                        // 0x0014(0x000C)
	bool                                               Result;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ItemTypeNotEquals
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase
{
	struct FRigElementKey                              A;                                                        // 0x0008(0x000C)
	struct FRigElementKey                              B;                                                        // 0x0014(0x000C)
	bool                                               Result;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_KalmanFloat
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_KalmanFloat : public FRigUnit_SimBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BufferSize;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<float>                                      Buffer;                                                   // 0x0018(0x0010) (ZeroConstructor)
	int                                                LastInsertIndex;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_KalmanVector
// 0x0050 (0x0058 - 0x0008)
struct FRigUnit_KalmanVector : public FRigUnit_SimBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	int                                                BufferSize;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0028(0x0018) (ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Buffer;                                                   // 0x0040(0x0010) (ZeroConstructor)
	int                                                LastInsertIndex;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_KalmanTransform
// 0x00F8 (0x0100 - 0x0008)
struct FRigUnit_KalmanTransform : public FRigUnit_SimBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0060) (IsPlainOldData)
	int                                                BufferSize;                                               // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0080(0x0060) (IsPlainOldData)
	TArray<struct FTransform>                          Buffer;                                                   // 0x00E0(0x0010) (ZeroConstructor)
	int                                                LastInsertIndex;                                          // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_MathMutableBase
// 0x0000 (0x00D0 - 0x00D0)
struct FRigUnit_MathMutableBase : public FRigUnitMutable
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathBoolBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolConstant
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase
{
	bool                                               Value;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase
{
	bool                                               Value;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase
{
	bool                                               A;                                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolNot
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolAnd
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolNand
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolOr
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathBoolOr : public FRigUnit_MathBoolBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolEquals
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase
{
	bool                                               A;                                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase
{
	bool                                               A;                                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolToggled
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathBoolToggled : public FRigUnit_MathBoolBase
{
	bool                                               Value;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Toggled;                                                  // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Initialized;                                              // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               LastValue;                                                // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathColorBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathColorBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathColorBinaryOp
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase
{
	struct FLinearColor                                A;                                                        // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                B;                                                        // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Result;                                                   // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathColorFromFloat
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Result;                                                   // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathColorAdd
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathColorAdd : public FRigUnit_MathColorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathColorSub
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathColorSub : public FRigUnit_MathColorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathColorMul
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathColorMul : public FRigUnit_MathColorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathColorLerp
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathColorLerp : public FRigUnit_MathColorBase
{
	struct FLinearColor                                A;                                                        // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                B;                                                        // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              T;                                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Result;                                                   // 0x002C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathFloatBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatConstant
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstPi
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatConstHalfPi : public FRigUnit_MathFloatConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatConstTwoPi : public FRigUnit_MathFloatConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatConstE
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatConstE : public FRigUnit_MathFloatConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatAdd
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatAdd : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatSub
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatSub : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatMul
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatMul : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatDiv
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatDiv : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatMod
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatMod : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatMin
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatMax
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatPow
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathFloatPow : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatSqrt
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatSqrt : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatNegate
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatNegate : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatAbs
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatAbs : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatFloor
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Int;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatCeil
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatCeil : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Int;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatRound
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatRound : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Int;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatToInt
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathFloatToInt : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathFloatSign
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatSign : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatClamp
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathFloatLerp
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              T;                                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathFloatRemap
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceMinimum;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceMaximum;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetMinimum;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetMaximum;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bClamp;                                                   // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              Result;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatEquals
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatEquals : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatNotEquals : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatGreater
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatGreater : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatLess
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatGreaterEqual : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatLessEqual : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatIsNearlyEqual : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase
{
	bool                                               Condition;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              IfTrue;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IfFalse;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathFloatDeg
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatDeg : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatRad
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatRad : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatSin
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatSin : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatCos
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatCos : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatTan
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatTan : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatAsin
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatAsin : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatAcos
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatAcos : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatAtan
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatAtan : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              C;                                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AlphaAngle;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BetaAngle;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GammaAngle;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatExponential
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathFloatExponential : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathIntBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathIntBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathIntUnaryOp
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathIntUnaryOp : public FRigUnit_MathIntBase
{
	int                                                Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathIntBinaryOp
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathIntBinaryOp : public FRigUnit_MathIntBase
{
	int                                                A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathIntAdd
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathIntAdd : public FRigUnit_MathIntBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathIntSub
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathIntSub : public FRigUnit_MathIntBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathIntMul
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathIntMul : public FRigUnit_MathIntBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathIntDiv
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathIntDiv : public FRigUnit_MathIntBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathIntMod
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathIntMod : public FRigUnit_MathIntBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathIntMin
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathIntMin : public FRigUnit_MathIntBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathIntMax
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathIntMax : public FRigUnit_MathIntBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathIntPow
// 0x0000 (0x0018 - 0x0018)
struct FRigUnit_MathIntPow : public FRigUnit_MathIntBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathIntNegate
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathIntNegate : public FRigUnit_MathIntUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathIntAbs
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathIntAbs : public FRigUnit_MathIntUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathIntToFloat
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathIntToFloat : public FRigUnit_MathIntBase
{
	int                                                Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathIntSign
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_MathIntSign : public FRigUnit_MathIntUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathIntClamp
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathIntClamp : public FRigUnit_MathIntBase
{
	int                                                Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Minimum;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Maximum;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathIntEquals
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathIntEquals : public FRigUnit_MathIntBase
{
	int                                                A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathIntNotEquals
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathIntNotEquals : public FRigUnit_MathIntBase
{
	int                                                A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathIntGreater
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathIntGreater : public FRigUnit_MathIntBase
{
	int                                                A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathIntLess
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathIntLess : public FRigUnit_MathIntBase
{
	int                                                A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathIntGreaterEqual
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathIntGreaterEqual : public FRigUnit_MathIntBase
{
	int                                                A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathIntLessEqual
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_MathIntLessEqual : public FRigUnit_MathIntBase
{
	int                                                A;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathMatrixBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathMatrixBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathMatrixUnaryOp
// 0x0108 (0x0110 - 0x0008)
struct FRigUnit_MathMatrixUnaryOp : public FRigUnit_MathMatrixBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMatrix                                     Value;                                                    // 0x0010(0x0080) (ZeroConstructor, IsPlainOldData)
	struct FMatrix                                     Result;                                                   // 0x0090(0x0080) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathMatrixBinaryOp
// 0x0188 (0x0190 - 0x0008)
struct FRigUnit_MathMatrixBinaryOp : public FRigUnit_MathMatrixBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMatrix                                     A;                                                        // 0x0010(0x0080) (ZeroConstructor, IsPlainOldData)
	struct FMatrix                                     B;                                                        // 0x0090(0x0080) (ZeroConstructor, IsPlainOldData)
	struct FMatrix                                     Result;                                                   // 0x0110(0x0080) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathMatrixToTransform
// 0x00E8 (0x00F0 - 0x0008)
struct FRigUnit_MathMatrixToTransform : public FRigUnit_MathMatrixBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMatrix                                     Value;                                                    // 0x0010(0x0080) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Result;                                                   // 0x0090(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathMatrixFromTransform
// 0x00E8 (0x00F0 - 0x0008)
struct FRigUnit_MathMatrixFromTransform : public FRigUnit_MathMatrixBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (IsPlainOldData)
	struct FMatrix                                     Result;                                                   // 0x0070(0x0080) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathMatrixToVectors
// 0x00E8 (0x00F0 - 0x0008)
struct FRigUnit_MathMatrixToVectors : public FRigUnit_MathMatrixBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMatrix                                     Value;                                                    // 0x0010(0x0080) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // 0x0090(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     X;                                                        // 0x00A8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Y;                                                        // 0x00C0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Z;                                                        // 0x00D8(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathMatrixFromVectors
// 0x00E8 (0x00F0 - 0x0008)
struct FRigUnit_MathMatrixFromVectors : public FRigUnit_MathMatrixBase
{
	struct FVector                                     Origin;                                                   // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     X;                                                        // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Y;                                                        // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Z;                                                        // 0x0050(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	struct FMatrix                                     Result;                                                   // 0x0070(0x0080) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathMatrixMul
// 0x0000 (0x0190 - 0x0190)
struct FRigUnit_MathMatrixMul : public FRigUnit_MathMatrixBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathMatrixInverse
// 0x0000 (0x0110 - 0x0110)
struct FRigUnit_MathMatrixInverse : public FRigUnit_MathMatrixUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathQuaternionBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0010(0x0020) (IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0030(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
// 0x0068 (0x0070 - 0x0008)
struct FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       A;                                                        // 0x0010(0x0020) (IsPlainOldData)
	struct FQuat                                       B;                                                        // 0x0030(0x0020) (IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0050(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase
{
	struct FVector                                     Axis;                                                     // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0030(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase
{
	struct FVector                                     Euler;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0030(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase
{
	struct FRotator                                    Rotator;                                                  // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0020(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_MathQuaternionFromTwoVectors : public FRigUnit_MathQuaternionBase
{
	struct FVector                                     A;                                                        // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0040(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0010(0x0020) (IsPlainOldData)
	struct FVector                                     Axis;                                                     // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionScale
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathQuaternionScale : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0010(0x0020) (IsPlainOldData)
	float                                              Scale;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0010(0x0020) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0010(0x0020) (IsPlainOldData)
	struct FRotator                                    Result;                                                   // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionMul
// 0x0000 (0x0070 - 0x0070)
struct FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
// 0x0078 (0x0080 - 0x0008)
struct FRigUnit_MathQuaternionSlerp : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       A;                                                        // 0x0010(0x0020) (IsPlainOldData)
	struct FQuat                                       B;                                                        // 0x0030(0x0020) (IsPlainOldData)
	float                                              T;                                                        // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0060(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_MathQuaternionEquals : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       A;                                                        // 0x0010(0x0020) (IsPlainOldData)
	struct FQuat                                       B;                                                        // 0x0030(0x0020) (IsPlainOldData)
	bool                                               Result;                                                   // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0051(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_MathQuaternionNotEquals : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       A;                                                        // 0x0010(0x0020) (IsPlainOldData)
	struct FQuat                                       B;                                                        // 0x0030(0x0020) (IsPlainOldData)
	bool                                               Result;                                                   // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0051(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
// 0x0068 (0x0070 - 0x0008)
struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase
{
	bool                                               Condition;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FQuat                                       IfTrue;                                                   // 0x0010(0x0020) (IsPlainOldData)
	struct FQuat                                       IfFalse;                                                  // 0x0030(0x0020) (IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0050(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionDot
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_MathQuaternionDot : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       A;                                                        // 0x0010(0x0020) (IsPlainOldData)
	struct FQuat                                       B;                                                        // 0x0030(0x0020) (IsPlainOldData)
	float                                              Result;                                                   // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
// 0x0058 (0x0060 - 0x0008)
struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Quaternion;                                               // 0x0010(0x0020) (IsPlainOldData)
	struct FVector                                     Vector;                                                   // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0048(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Quaternion;                                               // 0x0010(0x0020) (IsPlainOldData)
	TEnumAsByte<EAxis>                                 Axis;                                                     // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
// 0x0088 (0x0090 - 0x0008)
struct FRigUnit_MathQuaternionSwingTwist : public FRigUnit_MathQuaternionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Input;                                                    // 0x0010(0x0020) (IsPlainOldData)
	struct FVector                                     TwistAxis;                                                // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FQuat                                       Swing;                                                    // 0x0050(0x0020) (IsPlainOldData)
	struct FQuat                                       Twist;                                                    // 0x0070(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
// 0x0090
struct FRigUnit_MathRBFInterpolateQuatWorkData
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
// 0x0090
struct FRigUnit_MathRBFInterpolateVectorWorkData
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathRBFInterpolateBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatBase
// 0x00E8 (0x00F0 - 0x0008)
struct FRigUnit_MathRBFInterpolateQuatBase : public FRigUnit_MathRBFInterpolateBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Input;                                                    // 0x0010(0x0020) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0030(0x0004) MISSED OFFSET
	float                                              SmoothingAngle;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bNormalizeOutput;                                         // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FVector                                     TwistAxis;                                                // 0x0040(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	struct FRigUnit_MathRBFInterpolateQuatWorkData     WorkData;                                                 // 0x0060(0x0090) (Transient)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorBase
// 0x00B8 (0x00C0 - 0x0008)
struct FRigUnit_MathRBFInterpolateVectorBase : public FRigUnit_MathRBFInterpolateBase
{
	struct FVector                                     Input;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0020(0x0004) MISSED OFFSET
	float                                              SmoothingRadius;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bNormalizeOutput;                                         // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FRigUnit_MathRBFInterpolateVectorWorkData   WorkData;                                                 // 0x0030(0x0090) (Transient)
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatFloat_Target
// 0x0030
struct FMathRBFInterpolateQuatFloat_Target
{
	struct FQuat                                       Target;                                                   // 0x0000(0x0020) (IsPlainOldData)
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatFloat
// 0x0020 (0x0110 - 0x00F0)
struct FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase
{
	TArray<struct FMathRBFInterpolateQuatFloat_Target> Targets;                                                  // 0x00F0(0x0010) (ZeroConstructor)
	float                                              Output;                                                   // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0104(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatVector_Target
// 0x0040
struct FMathRBFInterpolateQuatVector_Target
{
	struct FQuat                                       Target;                                                   // 0x0000(0x0020) (IsPlainOldData)
	struct FVector                                     Value;                                                    // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatVector
// 0x0030 (0x0120 - 0x00F0)
struct FRigUnit_MathRBFInterpolateQuatVector : public FRigUnit_MathRBFInterpolateQuatBase
{
	TArray<struct FMathRBFInterpolateQuatVector_Target> Targets;                                                  // 0x00F0(0x0010) (ZeroConstructor)
	struct FVector                                     Output;                                                   // 0x0100(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatColor_Target
// 0x0030
struct FMathRBFInterpolateQuatColor_Target
{
	struct FQuat                                       Target;                                                   // 0x0000(0x0020) (IsPlainOldData)
	struct FLinearColor                                Value;                                                    // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatColor
// 0x0020 (0x0110 - 0x00F0)
struct FRigUnit_MathRBFInterpolateQuatColor : public FRigUnit_MathRBFInterpolateQuatBase
{
	TArray<struct FMathRBFInterpolateQuatColor_Target> Targets;                                                  // 0x00F0(0x0010) (ZeroConstructor)
	struct FLinearColor                                Output;                                                   // 0x0100(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatQuat_Target
// 0x0040
struct FMathRBFInterpolateQuatQuat_Target
{
	struct FQuat                                       Target;                                                   // 0x0000(0x0020) (IsPlainOldData)
	struct FQuat                                       Value;                                                    // 0x0020(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatQuat
// 0x0030 (0x0120 - 0x00F0)
struct FRigUnit_MathRBFInterpolateQuatQuat : public FRigUnit_MathRBFInterpolateQuatBase
{
	TArray<struct FMathRBFInterpolateQuatQuat_Target>  Targets;                                                  // 0x00F0(0x0010) (ZeroConstructor)
	struct FQuat                                       Output;                                                   // 0x0100(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.MathRBFInterpolateQuatXform_Target
// 0x0080
struct FMathRBFInterpolateQuatXform_Target
{
	struct FQuat                                       Target;                                                   // 0x0000(0x0020) (IsPlainOldData)
	struct FTransform                                  Value;                                                    // 0x0020(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatXform
// 0x0070 (0x0160 - 0x00F0)
struct FRigUnit_MathRBFInterpolateQuatXform : public FRigUnit_MathRBFInterpolateQuatBase
{
	TArray<struct FMathRBFInterpolateQuatXform_Target> Targets;                                                  // 0x00F0(0x0010) (ZeroConstructor)
	struct FTransform                                  Output;                                                   // 0x0100(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorFloat_Target
// 0x0020
struct FMathRBFInterpolateVectorFloat_Target
{
	struct FVector                                     Target;                                                   // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorFloat
// 0x0020 (0x00E0 - 0x00C0)
struct FRigUnit_MathRBFInterpolateVectorFloat : public FRigUnit_MathRBFInterpolateVectorBase
{
	TArray<struct FMathRBFInterpolateVectorFloat_Target> Targets;                                                  // 0x00C0(0x0010) (ZeroConstructor)
	float                                              Output;                                                   // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorVector_Target
// 0x0030
struct FMathRBFInterpolateVectorVector_Target
{
	struct FVector                                     Target;                                                   // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorVector
// 0x0030 (0x00F0 - 0x00C0)
struct FRigUnit_MathRBFInterpolateVectorVector : public FRigUnit_MathRBFInterpolateVectorBase
{
	TArray<struct FMathRBFInterpolateVectorVector_Target> Targets;                                                  // 0x00C0(0x0010) (ZeroConstructor)
	struct FVector                                     Output;                                                   // 0x00D0(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorColor_Target
// 0x0028
struct FMathRBFInterpolateVectorColor_Target
{
	struct FVector                                     Target;                                                   // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorColor
// 0x0020 (0x00E0 - 0x00C0)
struct FRigUnit_MathRBFInterpolateVectorColor : public FRigUnit_MathRBFInterpolateVectorBase
{
	TArray<struct FMathRBFInterpolateVectorColor_Target> Targets;                                                  // 0x00C0(0x0010) (ZeroConstructor)
	struct FLinearColor                                Output;                                                   // 0x00D0(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorQuat_Target
// 0x0040
struct FMathRBFInterpolateVectorQuat_Target
{
	struct FVector                                     Target;                                                   // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0020(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorQuat
// 0x0030 (0x00F0 - 0x00C0)
struct FRigUnit_MathRBFInterpolateVectorQuat : public FRigUnit_MathRBFInterpolateVectorBase
{
	TArray<struct FMathRBFInterpolateVectorQuat_Target> Targets;                                                  // 0x00C0(0x0010) (ZeroConstructor)
	struct FQuat                                       Output;                                                   // 0x00D0(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.MathRBFInterpolateVectorXform_Target
// 0x0080
struct FMathRBFInterpolateVectorXform_Target
{
	struct FVector                                     Target;                                                   // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0020(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorXform
// 0x0070 (0x0130 - 0x00C0)
struct FRigUnit_MathRBFInterpolateVectorXform : public FRigUnit_MathRBFInterpolateVectorBase
{
	TArray<struct FMathRBFInterpolateVectorXform_Target> Targets;                                                  // 0x00C0(0x0010) (ZeroConstructor)
	struct FTransform                                  Output;                                                   // 0x00D0(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathTransformBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathTransformMutableBase
// 0x0000 (0x00D0 - 0x00D0)
struct FRigUnit_MathTransformMutableBase : public FRigUnit_MathMutableBase
{

};

// ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
// 0x00C8 (0x00D0 - 0x0008)
struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0060) (IsPlainOldData)
	struct FTransform                                  Result;                                                   // 0x0070(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
// 0x0128 (0x0130 - 0x0008)
struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  A;                                                        // 0x0010(0x0060) (IsPlainOldData)
	struct FTransform                                  B;                                                        // 0x0070(0x0060) (IsPlainOldData)
	struct FTransform                                  Result;                                                   // 0x00D0(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
// 0x00A8 (0x00B0 - 0x0008)
struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase
{
	struct FEulerTransform                             EulerTransform;                                           // 0x0008(0x0048)
	struct FTransform                                  Result;                                                   // 0x0050(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
// 0x00B8 (0x00C0 - 0x0008)
struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0060) (IsPlainOldData)
	struct FEulerTransform                             Result;                                                   // 0x0070(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathTransformMul
// 0x0000 (0x0130 - 0x0130)
struct FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
// 0x0128 (0x0130 - 0x0008)
struct FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Global;                                                   // 0x0010(0x0060) (IsPlainOldData)
	struct FTransform                                  Parent;                                                   // 0x0070(0x0060) (IsPlainOldData)
	struct FTransform                                  Local;                                                    // 0x00D0(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformMakeAbsolute
// 0x0128 (0x0130 - 0x0008)
struct FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Local;                                                    // 0x0010(0x0060) (IsPlainOldData)
	struct FTransform                                  Parent;                                                   // 0x0070(0x0060) (IsPlainOldData)
	struct FTransform                                  Global;                                                   // 0x00D0(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformAccumulateArray
// 0x0090 (0x0160 - 0x00D0)
struct FRigUnit_MathTransformAccumulateArray : public FRigUnit_MathTransformMutableBase
{
	TArray<struct FTransform>                          Transforms;                                               // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
	struct FTransform                                  Root;                                                     // 0x00F0(0x0060) (IsPlainOldData)
	TArray<int>                                        ParentIndices;                                            // 0x0150(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_MathTransformInverse
// 0x0000 (0x00D0 - 0x00D0)
struct FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathTransformLerp
// 0x0138 (0x0140 - 0x0008)
struct FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  A;                                                        // 0x0010(0x0060) (IsPlainOldData)
	struct FTransform                                  B;                                                        // 0x0070(0x0060) (IsPlainOldData)
	float                                              T;                                                        // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x00E0(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
// 0x0128 (0x0130 - 0x0008)
struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase
{
	bool                                               Condition;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FTransform                                  IfTrue;                                                   // 0x0010(0x0060) (IsPlainOldData)
	struct FTransform                                  IfFalse;                                                  // 0x0070(0x0060) (IsPlainOldData)
	struct FTransform                                  Result;                                                   // 0x00D0(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0070(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0088(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_MathTransformTransformVector : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0070(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0088(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformFromSRT
// 0x0108 (0x0110 - 0x0008)
struct FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase
{
	struct FVector                                     Location;                                                 // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Rotation;                                                 // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FVector                                     Scale;                                                    // 0x0040(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0060(0x0060) (IsPlainOldData)
	struct FEulerTransform                             EulerTransform;                                           // 0x00C0(0x0048)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathTransformClampSpatially
// 0x0158 (0x0160 - 0x0008)
struct FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0060) (IsPlainOldData)
	TEnumAsByte<EAxis>                                 Axis;                                                     // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControlRigClampSpatialMode>           Type;                                                     // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	float                                              Minimum;                                                  // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FTransform                                  Space;                                                    // 0x0080(0x0060) (IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	struct FLinearColor                                DebugColor;                                               // 0x00E4(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              DebugThickness;                                           // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0100(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_MathVectorBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_MathVectorBinaryOp : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0010(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorAdd
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorSub
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_MathVectorSub : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorMul
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_MathVectorMul : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorScale
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathVectorScale : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Factor;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0028(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorDiv
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_MathVectorDiv : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorMod
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_MathVectorMod : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorMin
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorMax
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorNegate
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorNegate : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorAbs
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorAbs : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorFloor
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorCeil
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorCeil : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorRound
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorRound : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorSign
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorSign : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorClamp
// 0x0060 (0x0068 - 0x0008)
struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Minimum;                                                  // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Maximum;                                                  // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0050(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorLerp
// 0x0050 (0x0058 - 0x0008)
struct FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              T;                                                        // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0040(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorRemap
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SourceMinimum;                                            // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SourceMaximum;                                            // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetMinimum;                                            // 0x0050(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetMaximum;                                            // 0x0068(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bClamp;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0088(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorEquals
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathVectorNotEquals : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
// 0x0050 (0x0058 - 0x0008)
struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase
{
	bool                                               Condition;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FVector                                     IfTrue;                                                   // 0x0010(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     IfFalse;                                                  // 0x0028(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0040(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorDeg
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorDeg : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorRad
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorRad : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorLengthSquared : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorLength
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorDistance
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathVectorDistance : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorCross
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_MathVectorCross : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorDot
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathVectorDot : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorUnit
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorUnit : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorSetLength
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathVectorSetLength : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0028(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorClampLength
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathVectorClampLength : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              MinimumLength;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumLength;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0028(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorMirror
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorAngle
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathVectorAngle : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorParallel
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathVectorParallel : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_MathVectorOrthogonal : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
// 0x0098 (0x00A0 - 0x0008)
struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier                          Bezier;                                                   // 0x0008(0x0060)
	float                                              T;                                                        // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0070(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Tangent;                                                  // 0x0088(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
// 0x0060 (0x0068 - 0x0008)
struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier                          Bezier;                                                   // 0x0008(0x0060)
};

// ScriptStruct ControlRig.RigUnit_MathVectorClampSpatially
// 0x00B8 (0x00C0 - 0x0008)
struct FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 Axis;                                                     // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControlRigClampSpatialMode>           Type;                                                     // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              Minimum;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FTransform                                  Space;                                                    // 0x0030(0x0060) (IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FLinearColor                                DebugColor;                                               // 0x0094(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              DebugThickness;                                           // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x00A8(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathIntersectPlane
// 0x0080 (0x0088 - 0x0008)
struct FRigUnit_MathIntersectPlane : public FRigUnit_MathVectorBase
{
	struct FVector                                     Start;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlanePoint;                                               // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlaneNormal;                                              // 0x0050(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0068(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathDistanceToPlane
// 0x0068 (0x0070 - 0x0008)
struct FRigUnit_MathDistanceToPlane : public FRigUnit_MathVectorBase
{
	struct FVector                                     Point;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlanePoint;                                               // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlaneNormal;                                              // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClosestPointOnPlane;                                      // 0x0050(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              SignedDistance;                                           // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
// 0x0070
struct FRigUnit_ModifyBoneTransforms_PerBone
{
	struct FName                                       bone;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (Edit, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
// 0x0010
struct FRigUnit_ModifyTransforms_WorkData
{
	TArray<struct FCachedRigElement>                   CachedItems;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
// 0x0000 (0x0010 - 0x0010)
struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
{

};

// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{
	TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;                                             // 0x00D0(0x0010) (ZeroConstructor)
	float                                              Weight;                                                   // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeightMinimum;                                            // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeightMaximum;                                            // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FRigUnit_ModifyBoneTransforms_WorkData      WorkData;                                                 // 0x00F0(0x0010) (Transient)
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
// 0x0070
struct FRigUnit_ModifyTransforms_PerItem
{
	struct FRigElementKey                              Item;                                                     // 0x0000(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (Edit, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ModifyTransforms
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{
	TArray<struct FRigUnit_ModifyTransforms_PerItem>   ItemToModify;                                             // 0x00D0(0x0010) (ZeroConstructor)
	float                                              Weight;                                                   // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeightMinimum;                                            // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeightMaximum;                                            // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FRigUnit_ModifyTransforms_WorkData          WorkData;                                                 // 0x00F0(0x0010) (Transient)
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
// 0x0068
struct FRigUnit_MultiFABRIK_WorkData
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
// 0x0020
struct FRigUnit_MultiFABRIK_EndEffector
{
	struct FName                                       bone;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MultiFABRIK
// 0x0090 (0x0160 - 0x00D0)
struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       RootBone;                                                 // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRigUnit_MultiFABRIK_EndEffector>    Effectors;                                                // 0x00D8(0x0010) (ZeroConstructor)
	float                                              Precision;                                                // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x00EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	int                                                MaxIterations;                                            // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FRigUnit_MultiFABRIK_WorkData               WorkData;                                                 // 0x00F8(0x0068) (Transient)
};

// ScriptStruct ControlRig.RigUnit_NameBase
// 0x0000 (0x0008 - 0x0008)
struct FRigUnit_NameBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_NameConcat
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_NameConcat : public FRigUnit_NameBase
{
	struct FName                                       A;                                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       B;                                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Result;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_NameTruncate
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_NameTruncate : public FRigUnit_NameBase
{
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               FromEnd;                                                  // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FName                                       Remainder;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Chopped;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_NameReplace
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_NameReplace : public FRigUnit_NameBase
{
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Old;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       New;                                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Result;                                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_EndsWith
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_EndsWith : public FRigUnit_NameBase
{
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Ending;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_StartsWith
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_StartsWith : public FRigUnit_NameBase
{
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Start;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_Contains
// 0x0018 (0x0020 - 0x0008)
struct FRigUnit_Contains : public FRigUnit_NameBase
{
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Search;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_NoiseFloat
// 0x0020 (0x0028 - 0x0008)
struct FRigUnit_NoiseFloat : public FRigUnit_MathBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_NoiseVector
// 0x0080 (0x0088 - 0x0008)
struct FRigUnit_NoiseVector : public FRigUnit_MathBase
{
	struct FVector                                     Position;                                                 // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Speed;                                                    // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Frequency;                                                // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0058(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Time;                                                     // 0x0070(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
// 0x00A0 (0x0170 - 0x00D0)
struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{
	struct FRigElementKey                              Item;                                                     // 0x00D0(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FTransform                                  OffsetTransform;                                          // 0x00E0(0x0060) (IsPlainOldData)
	float                                              Weight;                                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0144(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	struct FCachedRigElement                           CachedIndex;                                              // 0x0148(0x0020)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
// 0x01A0 (0x0270 - 0x00D0)
struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{
	struct FRigElementKey                              Subject;                                                  // 0x00D0(0x000C)
	int                                                ParentIndex;                                              // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigElementKeyCollection                    Parents;                                                  // 0x00E0(0x0010)
	struct FTransform                                  InitialGlobalTransform;                                   // 0x00F0(0x0060) (IsPlainOldData)
	float                                              Weight;                                                   // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0154(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0160(0x0060) (IsPlainOldData)
	bool                                               Switched;                                                 // 0x01C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FCachedRigElement                           CachedSubject;                                            // 0x01C8(0x0020)
	struct FCachedRigElement                           CachedParent;                                             // 0x01E8(0x0020)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0208(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeOffset;                                           // 0x0210(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraintArray
// 0x01A0 (0x0270 - 0x00D0)
struct FRigUnit_ParentSwitchConstraintArray : public FRigUnitMutable
{
	struct FRigElementKey                              Subject;                                                  // 0x00D0(0x000C)
	int                                                ParentIndex;                                              // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      Parents;                                                  // 0x00E0(0x0010) (ZeroConstructor)
	struct FTransform                                  InitialGlobalTransform;                                   // 0x00F0(0x0060) (IsPlainOldData)
	float                                              Weight;                                                   // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0154(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0160(0x0060) (IsPlainOldData)
	bool                                               Switched;                                                 // 0x01C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FCachedRigElement                           CachedSubject;                                            // 0x01C8(0x0020)
	struct FCachedRigElement                           CachedParent;                                             // 0x01E8(0x0020)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0208(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeOffset;                                           // 0x0210(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
// 0x0080
struct FRigUnit_PointSimulation_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawPointsAsSpheres;                                     // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  WorldOffset;                                              // 0x0020(0x0060) (Edit, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
// 0x0014
struct FRigUnit_PointSimulation_BoneTarget
{
	struct FName                                       bone;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TranslationPoint;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PrimaryAimPoint;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SecondaryAimPoint;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
// 0x0088
struct FRigUnit_PointSimulation_WorkData
{
	struct FCRSimPointContainer                        Simulation;                                               // 0x0000(0x0078)
	TArray<struct FCachedRigElement>                   BoneIndices;                                              // 0x0078(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_SimBaseMutable
// 0x0000 (0x00D0 - 0x00D0)
struct FRigUnit_SimBaseMutable : public FRigUnitMutable
{

};

// ScriptStruct ControlRig.RigUnit_PointSimulation
// 0x0210 (0x02E0 - 0x00D0)
struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable
{
	TArray<struct FCRSimPoint>                         Points;                                                   // 0x00D0(0x0010) (ZeroConstructor)
	TArray<struct FCRSimLinearSpring>                  Links;                                                    // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FCRSimPointForce>                    Forces;                                                   // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FCRSimSoftCollision>                 CollisionVolumes;                                         // 0x0100(0x0010) (ZeroConstructor)
	float                                              SimulatedStepsPerSecond;                                  // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	float                                              VerletBlend;                                              // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets;                                              // 0x0120(0x0010) (ZeroConstructor)
	bool                                               bLimitLocalPosition;                                      // 0x0130(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0131(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0132(0x0006) MISSED OFFSET
	struct FVector                                     PrimaryAimAxis;                                           // 0x0138(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondaryAimAxis;                                         // 0x0150(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	struct FRigUnit_PointSimulation_DebugSettings      DebugSettings;                                            // 0x0170(0x0080)
	struct FCRFourPointBezier                          Bezier;                                                   // 0x01F0(0x0060)
	struct FRigUnit_PointSimulation_WorkData           WorkData;                                                 // 0x0250(0x0088) (Transient)
	unsigned char                                      UnknownData04[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_PrepareForExecution
// 0x00C8 (0x00D0 - 0x0008)
struct FRigUnit_PrepareForExecution : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FControlRigExecuteContext                   ExecuteContext;                                           // 0x0010(0x00C0) (Edit, Transient)
};

// ScriptStruct ControlRig.RigUnit_StartProfilingTimer
// 0x0000 (0x00D0 - 0x00D0)
struct FRigUnit_StartProfilingTimer : public FRigUnit_DebugBaseMutable
{

};

// ScriptStruct ControlRig.RigUnit_EndProfilingTimer
// 0x0020 (0x00F0 - 0x00D0)
struct FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable
{
	int                                                NumberOfMeasurements;                                     // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FString                                     Prefix;                                                   // 0x00D8(0x0010) (ZeroConstructor)
	float                                              AccumulatedTime;                                          // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MeasurementsLeft;                                         // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
// 0x00F8 (0x0100 - 0x0008)
struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
{
	struct FRigElementKey                              Child;                                                    // 0x0008(0x000C)
	bool                                               bChildInitial;                                            // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FRigElementKey                              OldParent;                                                // 0x0018(0x000C)
	bool                                               bOldParentInitial;                                        // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FRigElementKey                              NewParent;                                                // 0x0028(0x000C)
	bool                                               bNewParentInitial;                                        // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0035(0x000B) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0040(0x0060) (IsPlainOldData)
	struct FCachedRigElement                           CachedChild;                                              // 0x00A0(0x0020)
	struct FCachedRigElement                           CachedOldParent;                                          // 0x00C0(0x0020)
	struct FCachedRigElement                           CachedNewParent;                                          // 0x00E0(0x0020)
};

// ScriptStruct ControlRig.RigUnit_PropagateTransform
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_PropagateTransform : public FRigUnitMutable
{
	struct FRigElementKey                              Item;                                                     // 0x00D0(0x000C)
	bool                                               bRecomputeGlobal;                                         // 0x00DC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bApplyToChildren;                                         // 0x00DD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecursive;                                               // 0x00DE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00DF(0x0001) MISSED OFFSET
	struct FCachedRigElement                           CachedIndex;                                              // 0x00E0(0x0020) (Transient)
};

// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
// 0x0068 (0x0070 - 0x0008)
struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Argument0;                                                // 0x0010(0x0020) (IsPlainOldData)
	struct FQuat                                       Argument1;                                                // 0x0030(0x0020) (IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0050(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
// 0x0000 (0x0070 - 0x0070)
struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{

};

// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Argument;                                                 // 0x0010(0x0020) (IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0030(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_InverseQuaterion
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{

};

// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Argument;                                                 // 0x0010(0x0020) (IsPlainOldData)
	struct FVector                                     Axis;                                                     // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
	struct FVector                                     Axis;                                                     // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0030(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_QuaternionToAngle : public FRigUnit
{
	struct FVector                                     Axis;                                                     // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Argument;                                                 // 0x0020(0x0020) (IsPlainOldData)
	float                                              Angle;                                                    // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_RandomFloat
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_RandomFloat : public FRigUnit_MathBase
{
	int                                                Seed;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastResult;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastSeed;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BaseSeed;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeLeft;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_RandomVector
// 0x0050 (0x0058 - 0x0008)
struct FRigUnit_RandomVector : public FRigUnit_MathBase
{
	int                                                Seed;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastResult;                                               // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	int                                                LastSeed;                                                 // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BaseSeed;                                                 // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeLeft;                                                 // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SendEvent
// 0x0020 (0x00F0 - 0x00D0)
struct FRigUnit_SendEvent : public FRigUnitMutable
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D0(0x0004) MISSED OFFSET
	struct FRigElementKey                              Item;                                                     // 0x00D4(0x000C)
	float                                              OffsetInSeconds;                                          // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // 0x00E4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyDuringInteraction;                                   // 0x00E5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x00E6(0x000A) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SequenceExecution
// 0x03C8 (0x03D0 - 0x0008)
struct FRigUnit_SequenceExecution : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FControlRigExecuteContext                   ExecuteContext;                                           // 0x0010(0x00C0) (Edit, Transient)
	struct FControlRigExecuteContext                   A;                                                        // 0x00D0(0x00C0) (Edit, Transient)
	struct FControlRigExecuteContext                   B;                                                        // 0x0190(0x00C0) (Edit, Transient)
	struct FControlRigExecuteContext                   C;                                                        // 0x0250(0x00C0) (Edit, Transient)
	struct FControlRigExecuteContext                   D;                                                        // 0x0310(0x00C0) (Edit, Transient)
};

// ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{
	struct FName                                       bone;                                                     // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00E0(0x0060) (IsPlainOldData)
	struct FTransform                                  Result;                                                   // 0x0140(0x0060) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x01A0(0x0001) MISSED OFFSET
	bool                                               bPropagateToChildren;                                     // 0x01A1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x01A2(0x0006) MISSED OFFSET
	struct FCachedRigElement                           CachedBone;                                               // 0x01A8(0x0020) (Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetBoneRotation
// 0x0060 (0x0130 - 0x00D0)
struct FRigUnit_SetBoneRotation : public FRigUnitMutable
{
	struct FName                                       bone;                                                     // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x00E0(0x0020) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0100(0x0004) MISSED OFFSET
	float                                              Weight;                                                   // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	struct FCachedRigElement                           CachedBone;                                               // 0x0110(0x0020) (Transient)
};

// ScriptStruct ControlRig.RigUnit_SetBoneTransform
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_SetBoneTransform : public FRigUnitMutable
{
	struct FName                                       bone;                                                     // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00E0(0x0060) (IsPlainOldData)
	struct FTransform                                  Result;                                                   // 0x0140(0x0060) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01A0(0x0004) MISSED OFFSET
	float                                              Weight;                                                   // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x01A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET
	struct FCachedRigElement                           CachedBone;                                               // 0x01B0(0x0020) (Transient)
};

// ScriptStruct ControlRig.RigUnit_SetBoneTranslation
// 0x0050 (0x0120 - 0x00D0)
struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
{
	struct FName                                       bone;                                                     // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x00D8(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F0(0x0004) MISSED OFFSET
	float                                              Weight;                                                   // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FCachedRigElement                           CachedBone;                                               // 0x0100(0x0020) (Transient)
};

// ScriptStruct ControlRig.RigUnit_SetControlColor
// 0x0040 (0x0110 - 0x00D0)
struct FRigUnit_SetControlColor : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x00D8(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x00E8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetControlOffset
// 0x00A0 (0x0170 - 0x00D0)
struct FRigUnit_SetControlOffset : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FTransform                                  Offset;                                                   // 0x00E0(0x0060) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0140(0x0008) MISSED OFFSET
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x0148(0x0020)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetControlBool
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_SetControlBool : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x00E0(0x0020)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
// 0x000C
struct FRigUnit_SetMultiControlBool_Entry
{
	struct FName                                       Control;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlBool
// 0x0020 (0x00F0 - 0x00D0)
struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
{
	TArray<struct FRigUnit_SetMultiControlBool_Entry>  Entries;                                                  // 0x00D0(0x0010) (ZeroConstructor)
	TArray<struct FCachedRigElement>                   CachedControlIndices;                                     // 0x00E0(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_SetControlFloat
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_SetControlFloat : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x00E0(0x0020)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
// 0x000C
struct FRigUnit_SetMultiControlFloat_Entry
{
	struct FName                                       Control;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{
	TArray<struct FRigUnit_SetMultiControlFloat_Entry> Entries;                                                  // 0x00D0(0x0010) (ZeroConstructor)
	float                                              Weight;                                                   // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TArray<struct FCachedRigElement>                   CachedControlIndices;                                     // 0x00E8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetControlInteger
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_SetControlInteger : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Weight;                                                   // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntegerValue;                                             // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x00E0(0x0020)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
// 0x000C
struct FRigUnit_SetMultiControlInteger_Entry
{
	struct FName                                       Control;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                IntegerValue;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{
	TArray<struct FRigUnit_SetMultiControlInteger_Entry> Entries;                                                  // 0x00D0(0x0010) (ZeroConstructor)
	float                                              Weight;                                                   // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TArray<struct FCachedRigElement>                   CachedControlIndices;                                     // 0x00E8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetControlVector2D
// 0x0040 (0x0110 - 0x00D0)
struct FRigUnit_SetControlVector2D : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FVector2D                                   Vector;                                                   // 0x00E0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x00F0(0x0020)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
// 0x0018
struct FRigUnit_SetMultiControlVector2D_Entry
{
	struct FName                                       Control;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Vector;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{
	TArray<struct FRigUnit_SetMultiControlVector2D_Entry> Entries;                                                  // 0x00D0(0x0010) (ZeroConstructor)
	float                                              Weight;                                                   // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TArray<struct FCachedRigElement>                   CachedControlIndices;                                     // 0x00E8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetControlVector
// 0x0050 (0x0120 - 0x00D0)
struct FRigUnit_SetControlVector : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FVector                                     Vector;                                                   // 0x00E0(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x0100(0x0020)
};

// ScriptStruct ControlRig.RigUnit_SetControlRotator
// 0x0050 (0x0120 - 0x00D0)
struct FRigUnit_SetControlRotator : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FRotator                                    Rotator;                                                  // 0x00E0(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x0100(0x0020)
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
// 0x0028
struct FRigUnit_SetMultiControlRotator_Entry
{
	struct FName                                       Control;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{
	TArray<struct FRigUnit_SetMultiControlRotator_Entry> Entries;                                                  // 0x00D0(0x0010) (ZeroConstructor)
	float                                              Weight;                                                   // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TArray<struct FCachedRigElement>                   CachedControlIndices;                                     // 0x00E8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetControlTransform
// 0x00A0 (0x0170 - 0x00D0)
struct FRigUnit_SetControlTransform : public FRigUnitMutable
{
	struct FName                                       Control;                                                  // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00E0(0x0060) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0140(0x0008) MISSED OFFSET
	struct FCachedRigElement                           CachedControlIndex;                                       // 0x0148(0x0020)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetControlVisibility
// 0x0040 (0x0110 - 0x00D0)
struct FRigUnit_SetControlVisibility : public FRigUnitMutable
{
	struct FRigElementKey                              Item;                                                     // 0x00D0(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FString                                     Pattern;                                                  // 0x00E0(0x0010) (ZeroConstructor)
	bool                                               bVisible;                                                 // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	TArray<struct FCachedRigElement>                   CachedControlIndices;                                     // 0x00F8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetCurveValue
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_SetCurveValue : public FRigUnitMutable
{
	struct FName                                       Curve;                                                    // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FCachedRigElement                           CachedCurveIndex;                                         // 0x00E0(0x0020)
};

// ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
// 0x00C0 (0x0190 - 0x00D0)
struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{
	struct FName                                       bone;                                                     // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x00E0(0x0060) (IsPlainOldData)
	float                                              Weight;                                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0144(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	struct FCachedRigElement                           CachedBone;                                               // 0x0148(0x0020) (Transient)
	struct FCachedRigElement                           CachedSpaceIndex;                                         // 0x0168(0x0020) (Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
// 0x00D0 (0x01A0 - 0x00D0)
struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{
	struct FRigElementKey                              Child;                                                    // 0x00D0(0x000C)
	struct FRigElementKey                              Parent;                                                   // 0x00DC(0x000C)
	bool                                               bParentInitial;                                           // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FTransform                                  RelativeTransform;                                        // 0x00F0(0x0060) (IsPlainOldData)
	float                                              Weight;                                                   // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0154(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	struct FCachedRigElement                           CachedChild;                                              // 0x0158(0x0020)
	struct FCachedRigElement                           CachedParent;                                             // 0x0178(0x0020)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0198(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{
	struct FName                                       SpaceName;                                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00E0(0x0060) (IsPlainOldData)
	struct FTransform                                  Result;                                                   // 0x0140(0x0060) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01A0(0x0008) MISSED OFFSET
	struct FCachedRigElement                           CachedSpaceIndex;                                         // 0x01A8(0x0020)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetSpaceTransform
// 0x00A0 (0x0170 - 0x00D0)
struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
{
	struct FName                                       Space;                                                    // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00E0(0x0060) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0140(0x0008) MISSED OFFSET
	struct FCachedRigElement                           CachedSpaceIndex;                                         // 0x0148(0x0020)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetTransform
// 0x00A0 (0x0170 - 0x00D0)
struct FRigUnit_SetTransform : public FRigUnitMutable
{
	struct FRigElementKey                              Item;                                                     // 0x00D0(0x000C)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00DC(0x0001) MISSED OFFSET
	bool                                               bInitial;                                                 // 0x00DD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00DE(0x0002) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00E0(0x0060) (IsPlainOldData)
	float                                              Weight;                                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0144(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	struct FCachedRigElement                           CachedIndex;                                              // 0x0148(0x0020)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetTranslation
// 0x0050 (0x0120 - 0x00D0)
struct FRigUnit_SetTranslation : public FRigUnitMutable
{
	struct FRigElementKey                              Item;                                                     // 0x00D0(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FVector                                     Translation;                                              // 0x00E0(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x00FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	struct FCachedRigElement                           CachedIndex;                                              // 0x0100(0x0020)
};

// ScriptStruct ControlRig.RigUnit_SetRotation
// 0x0060 (0x0130 - 0x00D0)
struct FRigUnit_SetRotation : public FRigUnitMutable
{
	struct FRigElementKey                              Item;                                                     // 0x00D0(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x00E0(0x0020) (IsPlainOldData)
	float                                              Weight;                                                   // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0104(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FCachedRigElement                           CachedIndex;                                              // 0x0108(0x0020)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetScale
// 0x0050 (0x0120 - 0x00D0)
struct FRigUnit_SetScale : public FRigUnitMutable
{
	struct FRigElementKey                              Item;                                                     // 0x00D0(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FVector                                     Scale;                                                    // 0x00E0(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x00FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	struct FCachedRigElement                           CachedIndex;                                              // 0x0100(0x0020)
};

// ScriptStruct ControlRig.RigUnit_SetTransformArray
// 0x0040 (0x0110 - 0x00D0)
struct FRigUnit_SetTransformArray : public FRigUnitMutable
{
	struct FRigElementKeyCollection                    Items;                                                    // 0x00D0(0x0010)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00E0(0x0001) MISSED OFFSET
	bool                                               bInitial;                                                 // 0x00E1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00E2(0x0006) MISSED OFFSET
	TArray<struct FTransform>                          Transforms;                                               // 0x00E8(0x0010) (ZeroConstructor)
	float                                              Weight;                                                   // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x00FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	TArray<struct FCachedRigElement>                   CachedIndex;                                              // 0x0100(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_SetTransformItemArray
// 0x0040 (0x0110 - 0x00D0)
struct FRigUnit_SetTransformItemArray : public FRigUnitMutable
{
	TArray<struct FRigElementKey>                      Items;                                                    // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00E0(0x0001) MISSED OFFSET
	bool                                               bInitial;                                                 // 0x00E1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00E2(0x0006) MISSED OFFSET
	TArray<struct FTransform>                          Transforms;                                               // 0x00E8(0x0010) (ZeroConstructor)
	float                                              Weight;                                                   // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x00FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	TArray<struct FCachedRigElement>                   CachedIndex;                                              // 0x0100(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
// 0x0048
struct FRigUnit_SlideChain_WorkData
{
	float                                              ChainLength;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<float>                                      ItemSegments;                                             // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FCachedRigElement>                   CachedItems;                                              // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FTransform>                          Transforms;                                               // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FTransform>                          BlendedTransforms;                                        // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_SlideChain
// 0x0060 (0x0130 - 0x00D0)
struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EndBone;                                                  // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              SlideAmount;                                              // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x00E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FRigUnit_SlideChain_WorkData                WorkData;                                                 // 0x00E8(0x0048) (Transient)
};

// ScriptStruct ControlRig.RigUnit_SlideChainPerItem
// 0x0060 (0x0130 - 0x00D0)
struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection                    Items;                                                    // 0x00D0(0x0010)
	float                                              SlideAmount;                                              // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x00E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FRigUnit_SlideChain_WorkData                WorkData;                                                 // 0x00E8(0x0048) (Transient)
};

// ScriptStruct ControlRig.RigUnit_SlideChainItemArray
// 0x0060 (0x0130 - 0x00D0)
struct FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable
{
	TArray<struct FRigElementKey>                      Items;                                                    // 0x00D0(0x0010) (ZeroConstructor)
	float                                              SlideAmount;                                              // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x00E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FRigUnit_SlideChain_WorkData                WorkData;                                                 // 0x00E8(0x0048) (Transient)
};

// ScriptStruct ControlRig.RegionScaleFactors
// 0x0010
struct FRegionScaleFactors
{
	float                                              PositiveWidth;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NegativeWidth;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PositiveHeight;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NegativeHeight;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.SphericalRegion
// 0x0014
struct FSphericalRegion
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct ControlRig.SphericalPoseReaderDebugSettings
// 0x0010
struct FSphericalPoseReaderDebugSettings
{
	bool                                               bDrawDebug;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDraw2D;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawLocalAxes;                                           // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              DebugScale;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DebugSegments;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugThickness;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_SphericalPoseReader
// 0x00E0 (0x01B0 - 0x00D0)
struct FRigUnit_SphericalPoseReader : public FRigUnit_HighlevelBaseMutable
{
	float                                              OutputParam;                                              // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              DriverItem;                                               // 0x00D4(0x000C)
	struct FVector                                     DriverAxis;                                               // 0x00E0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationOffset;                                           // 0x00F8(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              ActiveRegionSize;                                         // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRegionScaleFactors                         ActiveRegionScaleFactors;                                 // 0x0114(0x0010)
	float                                              FalloffSize;                                              // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRegionScaleFactors                         FalloffRegionScaleFactors;                                // 0x0128(0x0010)
	bool                                               FlipWidthScaling;                                         // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               FlipHeightScaling;                                        // 0x0139(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x013A(0x0002) MISSED OFFSET
	struct FRigElementKey                              OptionalParentItem;                                       // 0x013C(0x000C)
	struct FSphericalPoseReaderDebugSettings           Debug;                                                    // 0x0148(0x0010)
	struct FSphericalRegion                            InnerRegion;                                              // 0x0158(0x0014) (Transient)
	struct FSphericalRegion                            OuterRegion;                                              // 0x016C(0x0014) (Transient)
	struct FVector                                     DriverNormal;                                             // 0x0180(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Driver2D;                                                 // 0x0198(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
// 0x0080
struct FRigUnit_SpringIK_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0020(0x0060) (Edit, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
// 0x00B8
struct FRigUnit_SpringIK_WorkData
{
	TArray<struct FCachedRigElement>                   CachedBones;                                              // 0x0000(0x0010) (ZeroConstructor, Transient)
	struct FCachedRigElement                           CachedPoleVector;                                         // 0x0010(0x0020)
	TArray<struct FTransform>                          Transforms;                                               // 0x0030(0x0010) (ZeroConstructor)
	struct FCRSimPointContainer                        Simulation;                                               // 0x0040(0x0078)
};

// ScriptStruct ControlRig.RigUnit_SpringIK
// 0x01D0 (0x02A0 - 0x00D0)
struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EndBone;                                                  // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              HierarchyStrength;                                        // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EffectorStrength;                                         // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EffectorRatio;                                            // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RootStrength;                                             // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RootRatio;                                                // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PoleVector;                                               // 0x00F8(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bFlipPolePlane;                                           // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	struct FName                                       PoleVectorSpace;                                          // 0x0114(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FVector                                     PrimaryAxis;                                              // 0x0120(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondaryAxis;                                            // 0x0138(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bLiveSimulation;                                          // 0x0150(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	int                                                Iterations;                                               // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bLimitLocalPosition;                                      // 0x0158(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0159(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x015A(0x0006) MISSED OFFSET
	struct FRigUnit_SpringIK_DebugSettings             DebugSettings;                                            // 0x0160(0x0080)
	struct FRigUnit_SpringIK_WorkData                  WorkData;                                                 // 0x01E0(0x00B8) (Transient)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SpringInterp
// 0x0028 (0x0030 - 0x0008)
struct FRigUnit_SpringInterp : public FRigUnit_SimBase
{
	float                                              Current;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Stiffness;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CriticalDamping;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFloatSpringState                           SpringState;                                              // 0x0020(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SpringInterpVector
// 0x0090 (0x0098 - 0x0008)
struct FRigUnit_SpringInterpVector : public FRigUnit_SimBase
{
	struct FVector                                     Current;                                                  // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Stiffness;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CriticalDamping;                                          // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0048(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVectorSpringState                          SpringState;                                              // 0x0060(0x0038)
};

// ScriptStruct ControlRig.RigUnit_SpringInterpV2
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_SpringInterpV2 : public FRigUnit_SimBase
{
	float                                              Target;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CriticalDamping;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Force;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseCurrentInput;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              Current;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetVelocityAmount;                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitializeFromTarget;                                    // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              Result;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Velocity;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SimulatedResult;                                          // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFloatSpringState                           SpringState;                                              // 0x0034(0x000C)
};

// ScriptStruct ControlRig.RigUnit_SpringInterpVectorV2
// 0x00E0 (0x00E8 - 0x0008)
struct FRigUnit_SpringInterpVectorV2 : public FRigUnit_SimBase
{
	struct FVector                                     Target;                                                   // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CriticalDamping;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Force;                                                    // 0x0028(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseCurrentInput;                                         // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FVector                                     Current;                                                  // 0x0048(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              TargetVelocityAmount;                                     // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitializeFromTarget;                                    // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0068(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0080(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SimulatedResult;                                          // 0x0098(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVectorSpringState                          SpringState;                                              // 0x00B0(0x0038)
};

// ScriptStruct ControlRig.RigUnit_SpringInterpQuaternionV2
// 0x0128 (0x0130 - 0x0008)
struct FRigUnit_SpringInterpQuaternionV2 : public FRigUnit_SimBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Target;                                                   // 0x0010(0x0020) (IsPlainOldData)
	float                                              Strength;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CriticalDamping;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Torque;                                                   // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseCurrentInput;                                         // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0051(0x000F) MISSED OFFSET
	struct FQuat                                       Current;                                                  // 0x0060(0x0020) (IsPlainOldData)
	float                                              TargetVelocityAmount;                                     // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitializeFromTarget;                                    // 0x0084(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0085(0x000B) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0090(0x0020) (IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x00B0(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FQuat                                       SimulatedResult;                                          // 0x00D0(0x0020) (IsPlainOldData)
	struct FQuaternionSpringState                      SpringState;                                              // 0x00F0(0x0040)
};

// ScriptStruct ControlRig.RigUnit_FramesToSeconds
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_FramesToSeconds : public FRigUnit_AnimBase
{
	float                                              Frames;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Seconds;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_SecondsToFrames
// 0x0008 (0x0010 - 0x0008)
struct FRigUnit_SecondsToFrames : public FRigUnit_AnimBase
{
	float                                              Seconds;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Frames;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_Timeline
// 0x0010 (0x0018 - 0x0008)
struct FRigUnit_Timeline : public FRigUnit_SimBase
{
	float                                              Speed;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedValue;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
// 0x0040 (0x0048 - 0x0008)
struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SecondsAgo;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BufferSize;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeRange;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<float>                                      Buffer;                                                   // 0x0020(0x0010) (ZeroConstructor)
	TArray<float>                                      DeltaTimes;                                               // 0x0030(0x0010) (ZeroConstructor)
	int                                                LastInsertIndex;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UpperBound;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetVector
// 0x0068 (0x0070 - 0x0008)
struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              SecondsAgo;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BufferSize;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeRange;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Buffer;                                                   // 0x0048(0x0010) (ZeroConstructor)
	TArray<float>                                      DeltaTimes;                                               // 0x0058(0x0010) (ZeroConstructor)
	int                                                LastInsertIndex;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UpperBound;                                               // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
// 0x0108 (0x0110 - 0x0008)
struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0060) (IsPlainOldData)
	float                                              SecondsAgo;                                               // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BufferSize;                                               // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeRange;                                                // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0080(0x0060) (IsPlainOldData)
	TArray<struct FTransform>                          Buffer;                                                   // 0x00E0(0x0010) (ZeroConstructor)
	TArray<float>                                      DeltaTimes;                                               // 0x00F0(0x0010) (ZeroConstructor)
	int                                                LastInsertIndex;                                          // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UpperBound;                                               // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
// 0x0128 (0x0130 - 0x0008)
struct FRigUnit_BinaryTransformOp : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Argument0;                                                // 0x0010(0x0060) (IsPlainOldData)
	struct FTransform                                  Argument1;                                                // 0x0070(0x0060) (IsPlainOldData)
	struct FTransform                                  Result;                                                   // 0x00D0(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MultiplyTransform
// 0x0000 (0x0130 - 0x0130)
struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{

};

// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
// 0x0000 (0x0130 - 0x0130)
struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{

};

// ScriptStruct ControlRig.ConstraintTarget
// 0x0070
struct FConstraintTarget
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0060) (Edit, IsPlainOldData)
	float                                              Weight;                                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMaintainOffset;                                          // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransformFilter                            Filter;                                                   // 0x0065(0x0009) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
// 0x0060
struct FRigUnit_TransformConstraint_WorkData
{
	TArray<struct FConstraintData>                     ConstraintData;                                           // 0x0000(0x0010) (ZeroConstructor)
	TMap<int, int>                                     ConstraintDataToTargets;                                  // 0x0010(0x0050)
};

// ScriptStruct ControlRig.RigUnit_TransformConstraint
// 0x00F0 (0x01C0 - 0x00D0)
struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       bone;                                                     // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FTransform                                  BaseTransform;                                            // 0x00E0(0x0060) (Edit, IsPlainOldData)
	struct FName                                       BaseBone;                                                 // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FConstraintTarget>                   Targets;                                                  // 0x0148(0x0010) (Edit, ZeroConstructor)
	bool                                               bUseInitialTransforms;                                    // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	struct FRigUnit_TransformConstraint_WorkData       WorkData;                                                 // 0x0160(0x0060) (Transient)
};

// ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
// 0x0100 (0x01D0 - 0x00D0)
struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey                              Item;                                                     // 0x00D0(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FTransform                                  BaseTransform;                                            // 0x00E0(0x0060) (Edit, IsPlainOldData)
	struct FRigElementKey                              BaseItem;                                                 // 0x0140(0x000C) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	TArray<struct FConstraintTarget>                   Targets;                                                  // 0x0150(0x0010) (Edit, ZeroConstructor)
	bool                                               bUseInitialTransforms;                                    // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	struct FRigUnit_TransformConstraint_WorkData       WorkData;                                                 // 0x0168(0x0060) (Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.ConstraintParent
// 0x0010
struct FConstraintParent
{
	struct FRigElementKey                              Item;                                                     // 0x0000(0x000C) (Edit)
	float                                              Weight;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ParentConstraint_AdvancedSettings
// 0x0002
struct FRigUnit_ParentConstraint_AdvancedSettings
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ParentConstraint
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey                              Child;                                                    // 0x00D0(0x000C) (Edit)
	bool                                               bMaintainOffset;                                          // 0x00DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransformFilter                            Filter;                                                   // 0x00DD(0x0009) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00E6(0x0002) MISSED OFFSET
	TArray<struct FConstraintParent>                   Parents;                                                  // 0x00E8(0x0010) (Edit, ZeroConstructor)
	struct FRigUnit_ParentConstraint_AdvancedSettings  AdvancedSettings;                                         // 0x00F8(0x0002) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00FA(0x0002) MISSED OFFSET
	float                                              Weight;                                                   // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_PositionConstraint
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_PositionConstraint : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey                              Child;                                                    // 0x00D0(0x000C) (Edit)
	bool                                               bMaintainOffset;                                          // 0x00DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFilterOptionPerAxis                        Filter;                                                   // 0x00DD(0x0003) (Edit)
	TArray<struct FConstraintParent>                   Parents;                                                  // 0x00E0(0x0010) (Edit, ZeroConstructor)
	float                                              Weight;                                                   // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_PositionConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey                              Child;                                                    // 0x00D0(0x000C) (Edit)
	bool                                               bMaintainOffset;                                          // 0x00DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFilterOptionPerAxis                        Filter;                                                   // 0x00DD(0x0003) (Edit)
	TArray<struct FConstraintParent>                   Parents;                                                  // 0x00E0(0x0010) (Edit, ZeroConstructor)
	float                                              Weight;                                                   // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_RotationConstraint_AdvancedSettings
// 0x0002
struct FRigUnit_RotationConstraint_AdvancedSettings
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_RotationConstraint
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_RotationConstraint : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey                              Child;                                                    // 0x00D0(0x000C) (Edit)
	bool                                               bMaintainOffset;                                          // 0x00DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFilterOptionPerAxis                        Filter;                                                   // 0x00DD(0x0003) (Edit)
	TArray<struct FConstraintParent>                   Parents;                                                  // 0x00E0(0x0010) (Edit, ZeroConstructor)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;                                         // 0x00F0(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	float                                              Weight;                                                   // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_RotationConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey                              Child;                                                    // 0x00D0(0x000C) (Edit)
	bool                                               bMaintainOffset;                                          // 0x00DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFilterOptionPerAxis                        Filter;                                                   // 0x00DD(0x0003) (Edit)
	TArray<struct FConstraintParent>                   Parents;                                                  // 0x00E0(0x0010) (Edit, ZeroConstructor)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;                                         // 0x00F0(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	float                                              Weight;                                                   // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ScaleConstraint
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_ScaleConstraint : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey                              Child;                                                    // 0x00D0(0x000C) (Edit)
	bool                                               bMaintainOffset;                                          // 0x00DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFilterOptionPerAxis                        Filter;                                                   // 0x00DD(0x0003) (Edit)
	TArray<struct FConstraintParent>                   Parents;                                                  // 0x00E0(0x0010) (Edit, ZeroConstructor)
	float                                              Weight;                                                   // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
// 0x0030 (0x0100 - 0x00D0)
struct FRigUnit_ScaleConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey                              Child;                                                    // 0x00D0(0x000C) (Edit)
	bool                                               bMaintainOffset;                                          // 0x00DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFilterOptionPerAxis                        Filter;                                                   // 0x00DD(0x0003) (Edit)
	TArray<struct FConstraintParent>                   Parents;                                                  // 0x00E0(0x0010) (Edit, ZeroConstructor)
	float                                              Weight;                                                   // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
// 0x0030
struct FRigUnit_TwistBones_WorkData
{
	TArray<struct FCachedRigElement>                   CachedItems;                                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      ItemRatios;                                               // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FTransform>                          ItemTransforms;                                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_TwistBones
// 0x0080 (0x0150 - 0x00D0)
struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EndBone;                                                  // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TwistAxis;                                                // 0x00E0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PoleAxis;                                                 // 0x00F8(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0110(0x0004) MISSED OFFSET
	float                                              Weight;                                                   // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FRigUnit_TwistBones_WorkData                WorkData;                                                 // 0x0120(0x0030) (Transient)
};

// ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
// 0x0080 (0x0150 - 0x00D0)
struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection                    Items;                                                    // 0x00D0(0x0010)
	struct FVector                                     TwistAxis;                                                // 0x00E0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PoleAxis;                                                 // 0x00F8(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0110(0x0004) MISSED OFFSET
	float                                              Weight;                                                   // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FRigUnit_TwistBones_WorkData                WorkData;                                                 // 0x0120(0x0030) (Transient)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
// 0x0310 (0x03E0 - 0x00D0)
struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{
	struct FName                                       StartJoint;                                               // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndJoint;                                                 // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PoleTarget;                                               // 0x00E0(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Spin;                                                     // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FTransform                                  EndEffector;                                              // 0x0100(0x0060) (Edit, IsPlainOldData)
	float                                              IKBlend;                                                  // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0164(0x000C) MISSED OFFSET
	struct FTransform                                  StartJointFKTransform;                                    // 0x0170(0x0060) (Edit, IsPlainOldData)
	struct FTransform                                  MidJointFKTransform;                                      // 0x01D0(0x0060) (Edit, IsPlainOldData)
	struct FTransform                                  EndJointFKTransform;                                      // 0x0230(0x0060) (Edit, IsPlainOldData)
	float                                              PreviousFKIKBlend;                                        // 0x0290(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0294(0x000C) MISSED OFFSET
	struct FTransform                                  StartJointIKTransform;                                    // 0x02A0(0x0060) (Transient, IsPlainOldData)
	struct FTransform                                  MidJointIKTransform;                                      // 0x0300(0x0060) (Transient, IsPlainOldData)
	struct FTransform                                  EndJointIKTransform;                                      // 0x0360(0x0060) (Transient, IsPlainOldData)
	int                                                StartJointIndex;                                          // 0x03C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MidJointIndex;                                            // 0x03C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                EndJointIndex;                                            // 0x03C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              UpperLimbLength;                                          // 0x03CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LowerLimbLength;                                          // 0x03D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x03D4(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
// 0x0070
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0010(0x0060) (Edit, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
// 0x01F0 (0x02C0 - 0x00D0)
struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       BoneA;                                                    // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneB;                                                    // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectorBone;                                             // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FTransform                                  Effector;                                                 // 0x00F0(0x0060) (IsPlainOldData)
	struct FVector                                     PrimaryAxis;                                              // 0x0150(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondaryAxis;                                            // 0x0168(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              SecondaryAxisWeight;                                      // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	struct FVector                                     PoleVector;                                               // 0x0188(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01A0(0x0004) MISSED OFFSET
	struct FName                                       PoleVectorSpace;                                          // 0x01A4(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStretch;                                           // 0x01AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01AD(0x0003) MISSED OFFSET
	float                                              StretchStartRatio;                                        // 0x01B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StretchMaximumRatio;                                      // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x01B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BoneALength;                                              // 0x01BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BoneBLength;                                              // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x01C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xB];                                       // 0x01C5(0x000B) MISSED OFFSET
	struct FRigUnit_TwoBoneIKSimple_DebugSettings      DebugSettings;                                            // 0x01D0(0x0070)
	struct FCachedRigElement                           CachedBoneAIndex;                                         // 0x0240(0x0020)
	struct FCachedRigElement                           CachedBoneBIndex;                                         // 0x0260(0x0020)
	struct FCachedRigElement                           CachedEffectorBoneIndex;                                  // 0x0280(0x0020)
	struct FCachedRigElement                           CachedPoleVectorSpaceIndex;                               // 0x02A0(0x0020)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
// 0x0200 (0x02D0 - 0x00D0)
struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey                              ItemA;                                                    // 0x00D0(0x000C)
	struct FRigElementKey                              ItemB;                                                    // 0x00DC(0x000C)
	struct FRigElementKey                              EffectorItem;                                             // 0x00E8(0x000C)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET
	struct FTransform                                  Effector;                                                 // 0x0100(0x0060) (IsPlainOldData)
	struct FVector                                     PrimaryAxis;                                              // 0x0160(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondaryAxis;                                            // 0x0178(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              SecondaryAxisWeight;                                      // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	struct FVector                                     PoleVector;                                               // 0x0198(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01B0(0x0004) MISSED OFFSET
	struct FRigElementKey                              PoleVectorSpace;                                          // 0x01B4(0x000C)
	bool                                               bEnableStretch;                                           // 0x01C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	float                                              StretchStartRatio;                                        // 0x01C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StretchMaximumRatio;                                      // 0x01C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x01CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ItemALength;                                              // 0x01D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ItemBLength;                                              // 0x01D4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x01D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	struct FRigUnit_TwoBoneIKSimple_DebugSettings      DebugSettings;                                            // 0x01E0(0x0070)
	struct FCachedRigElement                           CachedItemAIndex;                                         // 0x0250(0x0020)
	struct FCachedRigElement                           CachedItemBIndex;                                         // 0x0270(0x0020)
	struct FCachedRigElement                           CachedEffectorItemIndex;                                  // 0x0290(0x0020)
	struct FCachedRigElement                           CachedPoleVectorSpaceIndex;                               // 0x02B0(0x0020)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
// 0x0078 (0x0080 - 0x0008)
struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{
	struct FVector                                     Root;                                                     // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PoleVector;                                               // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Effector;                                                 // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStretch;                                           // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              StretchStartRatio;                                        // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StretchMaximumRatio;                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BoneALength;                                              // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BoneBLength;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FVector                                     Elbow;                                                    // 0x0068(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
// 0x0198 (0x01A0 - 0x0008)
struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Root;                                                     // 0x0010(0x0060) (IsPlainOldData)
	struct FVector                                     PoleVector;                                               // 0x0070(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	struct FTransform                                  Effector;                                                 // 0x0090(0x0060) (IsPlainOldData)
	struct FVector                                     PrimaryAxis;                                              // 0x00F0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondaryAxis;                                            // 0x0108(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              SecondaryAxisWeight;                                      // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStretch;                                           // 0x0124(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
	float                                              StretchStartRatio;                                        // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StretchMaximumRatio;                                      // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BoneALength;                                              // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BoneBLength;                                              // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	struct FTransform                                  Elbow;                                                    // 0x0140(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_BinaryVectorOp : public FRigUnit
{
	struct FVector                                     Argument0;                                                // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Argument1;                                                // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0038(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_Add_VectorVector
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
// 0x0038 (0x0040 - 0x0008)
struct FRigUnit_Distance_VectorVector : public FRigUnit
{
	struct FVector                                     Argument0;                                                // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Argument1;                                                // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
// 0x00D0 (0x00D8 - 0x0008)
struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase
{
	struct FVector                                     Target;                                                   // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damp;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Blend;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FVector                                     Force;                                                    // 0x0030(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0048(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0060(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Acceleration;                                             // 0x0078(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FCRSimPoint                                 Point;                                                    // 0x0090(0x0040) (Transient)
	bool                                               bInitialized;                                             // 0x00D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_VisualDebugVector
// 0x0040 (0x0048 - 0x0008)
struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0024(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneSpace;                                                // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_VisualDebugVectorItemSpace
// 0x0040 (0x0048 - 0x0008)
struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
{
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0024(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              Space;                                                    // 0x003C(0x000C)
};

// ScriptStruct ControlRig.RigUnit_VisualDebugQuat
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0010(0x0020) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              Thickness;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneSpace;                                                // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_VisualDebugQuatItemSpace
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Value;                                                    // 0x0010(0x0020) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              Thickness;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              Space;                                                    // 0x003C(0x000C)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_VisualDebugTransform
// 0x0088 (0x0090 - 0x0008)
struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              Thickness;                                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneSpace;                                                // 0x007C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0084(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_VisualDebugTransformItemSpace
// 0x0088 (0x0090 - 0x0008)
struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Value;                                                    // 0x0010(0x0060) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              Thickness;                                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              Space;                                                    // 0x007C(0x000C)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SphereTraceWorld
// 0x0070 (0x0078 - 0x0008)
struct FRigUnit_SphereTraceWorld : public FRigUnit
{
	struct FVector                                     Start;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              Radius;                                                   // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHit;                                                     // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FVector                                     HitLocation;                                              // 0x0048(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // 0x0060(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_SphereTraceByTraceChannel
// 0x0070 (0x0078 - 0x0008)
struct FRigUnit_SphereTraceByTraceChannel : public FRigUnit
{
	struct FVector                                     Start;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              Radius;                                                   // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHit;                                                     // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FVector                                     HitLocation;                                              // 0x0048(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // 0x0060(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_SphereTraceByObjectTypes
// 0x0078 (0x0080 - 0x0008)
struct FRigUnit_SphereTraceByObjectTypes : public FRigUnit
{
	struct FVector                                     Start;                                                    // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0038(0x0010) (ZeroConstructor)
	float                                              Radius;                                                   // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHit;                                                     // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FVector                                     HitLocation;                                              // 0x0050(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // 0x0068(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
// 0x00C8 (0x00D0 - 0x0008)
struct FRigUnit_ToWorldSpace_Transform : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (IsPlainOldData)
	struct FTransform                                  World;                                                    // 0x0070(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
// 0x00C8 (0x00D0 - 0x0008)
struct FRigUnit_ToRigSpace_Transform : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (IsPlainOldData)
	struct FTransform                                  Global;                                                   // 0x0070(0x0060) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_ToWorldSpace_Location : public FRigUnit
{
	struct FVector                                     Location;                                                 // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     World;                                                    // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
// 0x0030 (0x0038 - 0x0008)
struct FRigUnit_ToRigSpace_Location : public FRigUnit
{
	struct FVector                                     Location;                                                 // 0x0008(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Global;                                                   // 0x0020(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0010(0x0020) (IsPlainOldData)
	struct FQuat                                       World;                                                    // 0x0030(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
// 0x0048 (0x0050 - 0x0008)
struct FRigUnit_ToRigSpace_Rotation : public FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0010(0x0020) (IsPlainOldData)
	struct FQuat                                       Global;                                                   // 0x0030(0x0020) (IsPlainOldData)
};

// ScriptStruct ControlRig.StructReference
// 0x0008
struct FStructReference
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
