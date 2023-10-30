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

// Enum EmbarkConstructable.EConstructableHealthChangeReason
enum class EConstructableHealthChangeReason : uint8_t
{
	WasHealed                      = 0,
	WasDamaged                     = 1,
	BrokeFromAttack                = 2,
	BrokeDueToParentGettingDestroyed = 3,
	BrokeDueToInstantDestruction   = 4,
	TookNoDamage                   = 5,
	SelfRemoval                    = 6,
	NUMBER_OF_ENTRIES              = 7,
	EConstructableHealthChangeReason_MAX = 8
};


// Enum EmbarkConstructable.EConstructableFeatureQualityLevel
enum class EConstructableFeatureQualityLevel : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Full                           = 3,
	NUMBER_OF_ENTRIES              = 4,
	EConstructableFeatureQualityLevel_MAX = 5
};


// Enum EmbarkConstructable.EConstructablePartTargetType
enum class EConstructablePartTargetType : uint8_t
{
	NoTarget                       = 0,
	TargetOrientation_World        = 1,
	TargetLocation_World           = 2,
	TargetActor                    = 3,
	TargetComponent                = 4,
	TargetConstructablePart        = 5,
	TargetRelativeRotation         = 6,
	TerminalValue                  = 7,
	NUMBER_OF_ENTRIES              = 8,
	EConstructablePartTargetType_MAX = 9
};


// Enum EmbarkConstructable.EConstructableCapabilityEventType
enum class EConstructableCapabilityEventType : uint8_t
{
	Start                          = 0,
	Stop                           = 1,
	NUMBER_OF_ENTRIES              = 2,
	EConstructableCapabilityEventType_MAX = 3
};


// Enum EmbarkConstructable.EConstructablePartTransformSelectionType
enum class EConstructablePartTransformSelectionType : uint8_t
{
	PartPivot                      = 0,
	Socket                         = 1,
	Proxy                          = 2,
	EConstructablePartTransformSelectionType_MAX = 3
};


// Enum EmbarkConstructable.EConstructableReplicationType
enum class EConstructableReplicationType : uint8_t
{
	Disabled                       = 0,
	Constraint                     = 1,
	Child                          = 2,
	Full                           = 3,
	EConstructableReplicationType_MAX = 4
};


// Enum EmbarkConstructable.EConstructablePartRelativeTransformSpace
enum class EConstructablePartRelativeTransformSpace : uint8_t
{
	PartPivot                      = 0,
	Actor                          = 1,
	ParentSocket                   = 2,
	EConstructablePartRelativeTransformSpace_MAX = 3
};


// Enum EmbarkConstructable.EOrientationFilterType
enum class EOrientationFilterType : uint8_t
{
	None                           = 0,
	Lerp                           = 1,
	MinJerk                        = 2,
	EOrientationFilterType_MAX     = 3
};


// Enum EmbarkConstructable.EConstructablePartPivotType
enum class EConstructablePartPivotType : uint8_t
{
	Socket                         = 0,
	FirstOfSocketGroup             = 1,
	NormalizedSocketGroup          = 2,
	EConstructablePartPivotType_MAX = 3
};


// Enum EmbarkConstructable.EConstructableTrainingShape
enum class EConstructableTrainingShape : uint8_t
{
	Sphere                         = 0,
	Box                            = 1,
	Capsule                        = 2,
	EConstructableTrainingShape_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkConstructable.ComponentOrStyle
// 0x0018
struct FComponentOrStyle
{
	class USceneComponent*                             Component;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class AActor*                                      Owner;                                                    // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PartID;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePart
// 0x0028
struct FConstructablePart
{
	class UPrimitiveComponent*                         StyleComponent;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TScriptInterface<class UConstructableStyleComponent> Style;                                                    // 0x0008(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ID;                                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AConstructableBase*                          ConstructableOwner;                                       // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructableCapabilityID
// 0x0001
struct FConstructableCapabilityID
{
	unsigned char                                      ID;                                                       // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructableSMNetworkData
// 0x0018
struct FConstructableSMNetworkData
{
	struct FConstructableCapabilityID                  CapabilityID;                                             // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FEmbarkSMActiveStateData                    SMActiveState;                                            // 0x0008(0x0010) (BlueprintVisible)
};

// ScriptStruct EmbarkConstructable.ConstructableCapabilityEvent
// 0x0010
struct FConstructableCapabilityEvent
{
	struct FConstructableCapabilityID                  ID;                                                       // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     TargetObject;                                             // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructableDamageData
// 0x0044 (0x0050 - 0x000C)
struct FConstructableDamageData : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class APawn*                                       DamageInstigatorPawn;                                     // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                AffectedPartID;                                           // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FVector_NetQuantize                         ImpactLocation;                                           // 0x0020(0x0018) (BlueprintVisible, Transient)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0038(0x0001) MISSED OFFSET
	unsigned char                                      DamageType;                                               // 0x0039(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	float                                              CurrentHealthUNorm_RoughEstimate;                         // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              HealthChangeSNorm_RoughEstimate;                          // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              HealthChange;                                             // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                EventID;                                                  // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      Severity;                                                 // 0x004C(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFromOriginalSource;                                      // 0x004D(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructableDamageDataArray
// 0x0018 (0x0128 - 0x0110)
struct FConstructableDamageDataArray : public FFastArraySerializer
{
	TArray<struct FConstructableDamageData>            Items;                                                    // 0x0110(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ThrusterSimParams
// 0x00B0
struct FThrusterSimParams
{
	struct FTransform                                  BodyTransform;                                            // 0x0000(0x0060) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    StableRotation;                                           // 0x0060(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetMoveVector;                                         // 0x0078(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BodyMass;                                                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdditionalSpeed;                                          // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdditionalSpeedFactorZ;                                   // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightPidResult;                                          // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationPidResult;                                        // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructableStylePropertyOuter
// 0x0018
struct FConstructableStylePropertyOuter
{
	class UClass*                                      PropertyActorClass;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	class UObject*                                     PropertyOuterCDO;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bIsPropertyOuterConstructable;                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePartList
// 0x00B0
struct FConstructablePartList
{
	struct FGameplayTagQuery                           PartQuery;                                                // 0x0000(0x0048) (Edit, DisableEditOnInstance)
	struct FConstructableStylePropertyOuter            PropertyOuterContainer;                                   // 0x0048(0x0018) (Edit, DisableEditOnInstance, EditConst)
	TMap<int, struct FName>                            PartList;                                                 // 0x0060(0x0050) (Edit, EditFixedSize, DisableEditOnInstance, EditConst)
};

// ScriptStruct EmbarkConstructable.ConstructablePartSelection
// 0x000C
struct FConstructablePartSelection
{
	int                                                PartID;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PartDisplayName;                                          // 0x0004(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructableStyleProxy
// 0x00D0
struct FConstructableStyleProxy
{
	struct FEmbarkProxyTransform                       Proxy;                                                    // 0x0000(0x00A0) (Edit)
	TWeakObjectPtr<class UPrimitiveComponent>          StyleAsComponent;                                         // 0x00A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TScriptInterface<class UConstructableStyleComponent> Style;                                                    // 0x00A8(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PartID;                                                   // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FName                                       AttachName;                                               // 0x00BC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00C4(0x000C) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePartTransform
// 0x0100
struct FConstructablePartTransform
{
	struct FConstructableStyleProxy                    StyleProxy;                                               // 0x0000(0x00D0) (Transient)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TScriptInterface<class UConstructableStyleComponent> Style;                                                    // 0x00D8(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PartID;                                                   // 0x00F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePartTransformSelection
// 0x0130
struct FConstructablePartTransformSelection
{
	struct FConstructablePartSelection                 PartSelection;                                            // 0x0000(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FEmbarkSocketSelection                      SocketSelection;                                          // 0x0010(0x0008) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FConstructableStyleProxy                    StyleProxy;                                               // 0x0020(0x00D0) (Edit, DisableEditOnInstance)
	struct FConstructablePart                          Part;                                                     // 0x00F0(0x0028) (Transient)
	TWeakObjectPtr<class UPrimitiveComponent>          StyleAsComponent;                                         // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TScriptInterface<class UConstructableStyleComponent> Style;                                                    // 0x0120(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructablePerceptionServiceSenseConfig
// 0x0058
struct FConstructablePerceptionServiceSenseConfig
{
	struct FGameplayTagQuery                           RequiredPartTags;                                         // 0x0000(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<class UAISenseConfig*>                      SenseConfigs;                                             // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmbarkConstructable.ConstructableSkeletalMeshStyleProxyPartChildren
// 0x0010
struct FConstructableSkeletalMeshStyleProxyPartChildren
{
	TArray<int>                                        ChildrenPartIDs;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// ScriptStruct EmbarkConstructable.ConstructablePartIDRange
// 0x0008
struct FConstructablePartIDRange
{
	int                                                BasePartID;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NrIDs;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructableStyleSocketGroupDataArray
// 0x0010
struct FConstructableStyleSocketGroupDataArray
{
	TArray<struct FName>                               SocketList;                                               // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// ScriptStruct EmbarkConstructable.ConstructableStyleSKSocketGroupContainer
// 0x0050
struct FConstructableStyleSKSocketGroupContainer
{
	TMap<struct FName, struct FConstructableStyleSocketGroupDataArray> SocketGroupList;                                          // 0x0000(0x0050) (Edit, EditFixedSize, DisableEditOnInstance, EditConst)
};

// ScriptStruct EmbarkConstructable.ConstructableSkeletalMeshStylePartSocketID
// 0x000C
struct FConstructableSkeletalMeshStylePartSocketID
{
	int                                                SocketID;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FName                                       PartName;                                                 // 0x0004(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructableSkeletalMeshStylePartSocketIDContainer
// 0x0050
struct FConstructableSkeletalMeshStylePartSocketIDContainer
{
	TMap<struct FName, struct FConstructableSkeletalMeshStylePartSocketID> Items;                                                    // 0x0000(0x0050) (Edit, EditFixedSize, DisableEditOnInstance, EditConst)
};

// ScriptStruct EmbarkConstructable.TSSDriveParams
// 0x0018
struct FTSSDriveParams
{
	int                                                PhysicsConstraintIndex;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOrientationDriveTwist;                                   // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOrientationDriveSwing;                                   // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAngularVelocityDriveTwist;                               // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAngularVelocityDriveSwing;                               // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableCollision;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Spring;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damper;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.SLERPDriveParams
// 0x0014
struct FSLERPDriveParams
{
	int                                                PhysicsConstraintIndex;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOrientationDrive;                                        // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAngularVelocityDrive;                                    // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableCollision;                                        // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	float                                              Spring;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damper;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.LinearDriveParams
// 0x0014
struct FLinearDriveParams
{
	int                                                PhysicsConstraintIndex;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bXAxisEnabled;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bYAxisEnabled;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bZAxisEnabled;                                            // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableCollision;                                        // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spring;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damper;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ActorBBReplicatedPart
// 0x0070
struct FActorBBReplicatedPart
{
	struct FABBLowCompressedWorldTransform             Transform;                                                // 0x0000(0x0060)
	int                                                PartID;                                                   // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EConstructableReplicationType>         Replication;                                              // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0065(0x000B) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePartReplicationData
// 0x003C (0x0048 - 0x000C)
struct FConstructablePartReplicationData : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FVector_NetQuantize10                       PartLocation;                                             // 0x0010(0x0018) (BlueprintVisible, Transient)
	struct FRotator                                    PartOrientation;                                          // 0x0028(0x0018) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PartID;                                                   // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EConstructableReplicationType>         Replication;                                              // 0x0044(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePartReplicationDataArray
// 0x0018 (0x0128 - 0x0110)
struct FConstructablePartReplicationDataArray : public FFastArraySerializer
{
	TArray<struct FConstructablePartReplicationData>   Items;                                                    // 0x0110(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructableSkeletalReplicationConfig
// 0x0048
struct FConstructableSkeletalReplicationConfig
{
	struct FGameplayTagQuery                           InitialReplicatedJointTags;                               // 0x0000(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct EmbarkConstructable.ConstructablePartReplicationConfig
// 0x0050
struct FConstructablePartReplicationConfig
{
	struct FGameplayTagQuery                           InitialReplicatedPartTags;                                // 0x0000(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TEnumAsByte<EConstructableReplicationType>         InitialReplicationType;                                   // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.AngularConstraintData
// 0x001C
struct FAngularConstraintData
{
	float                                              PitchLimitDegrees;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YawLimitDegrees;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollLimitDegrees;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchLimitMiddleDegrees;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YawLimitMiddleDegrees;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollLimitMiddleDegrees;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              PitchMotion;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              YawMotion;                                                // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              RollMotion;                                               // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructableMeshStyleSlotTransform
// 0x0080
struct FConstructableMeshStyleSlotTransform
{
	struct FGameplayTagContainer                       SlotTags;                                                 // 0x0000(0x0020) (Edit)
	struct FTransform                                  SlotTransform;                                            // 0x0020(0x0060) (Edit, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructableStylePartListEntry
// 0x0130
struct FConstructableStylePartListEntry
{
	struct FEmbarkSocketSelection                      SocketSelection;                                          // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FConstructableStyleProxy                    StyleProxy;                                               // 0x0010(0x00D0) (Edit, DisableEditOnInstance)
	struct FName                                       PartName;                                                 // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                PartID;                                                   // 0x00E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FConstructablePart                          Part;                                                     // 0x00F0(0x0028) (Transient)
	TWeakObjectPtr<class UPrimitiveComponent>          StyleAsComponent;                                         // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TScriptInterface<class UConstructableStyleComponent> Style;                                                    // 0x0120(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructableStylePartList
// 0x0070
struct FConstructableStylePartList
{
	struct FGameplayTagQuery                           PartQuery;                                                // 0x0000(0x0048) (Edit, DisableEditOnInstance)
	struct FEmbarkPropertyOuter                        PropertyOuterContainer;                                   // 0x0048(0x0010) (Edit, DisableEditOnInstance)
	TArray<struct FConstructableStylePartListEntry>    PartList;                                                 // 0x0058(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst)
	class AActor*                                      Owner;                                                    // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructablePartParentInfo
// 0x0028
struct FConstructablePartParentInfo
{
	class UPrimitiveComponent*                         ParentStyleComponent;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class UConstructableStyleComponent> Style;                                                    // 0x0008(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ParentPartID;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // 0x001C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructableProxyPart
// 0x00E0
struct FConstructableProxyPart
{
	struct FTransform                                  RelativeToParentTransform;                                // 0x0000(0x0060) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FGameplayTagContainer                       PartTags;                                                 // 0x0060(0x0020) (Edit, DisableEditOnInstance, EditConst)
	struct FRotator                                    InitialRelativeRotation;                                  // 0x0080(0x0018) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FConstructablePartIDRange                   PartIDRange;                                              // 0x0098(0x0008) (Edit, DisableEditOnInstance, EditConst)
	struct FConstructablePartParentInfo                ParentPart;                                               // 0x00A0(0x0028) (Edit, DisableEditOnInstance, EditConst)
	struct FName                                       PartName;                                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bIsDestroyed;                                             // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00D1(0x000F) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePartTargetingData
// 0x005C (0x0068 - 0x000C)
struct FConstructablePartTargetingData : public FFastArraySerializerItem
{
	int                                                AffectedPartID;                                           // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	struct FVector                                     TargetLocation;                                           // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    TargetOrientation;                                        // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     TargetObject;                                             // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                TargetPartID;                                             // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                EventID;                                                  // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0058(0x0010) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.OrientationSpeedFilter
// 0x0040
struct FOrientationSpeedFilter
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              FilterSpeed;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRotationSpeed;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x000C(0x0034) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePartTargetingConfig
// 0x0060
struct FConstructablePartTargetingConfig
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FOrientationSpeedFilter                     OrientationInterpolationFilter;                           // 0x0008(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              OrientationInterpolationSpeed;                            // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRotationSpeedDegPerSec;                                // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HasReachedTargetAcceptanceThreshold;                      // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PredictionResponsivenessUNorm;                            // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSpeedCmPerSec;                                  // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDirectlyUpdatePartOrientations;                          // 0x005C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreferLobbingProjectiles;                                // 0x005D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePartGroupTargetingConfig
// 0x00A8
struct FConstructablePartGroupTargetingConfig
{
	struct FGameplayTagQuery                           RequiredPartTags;                                         // 0x0000(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FConstructablePartTargetingConfig           Config;                                                   // 0x0048(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct EmbarkConstructable.ConstructablePartPivotConfig
// 0x0058
struct FConstructablePartPivotConfig
{
	struct FGameplayTagQuery                           RequiredPartTags;                                         // 0x0000(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FName                                       SocketName;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePartTargetingDataArray
// 0x0018 (0x0128 - 0x0110)
struct FConstructablePartTargetingDataArray : public FFastArraySerializer
{
	TArray<struct FConstructablePartTargetingData>     Items;                                                    // 0x0110(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructableTrainingShapeInfo
// 0x0068
struct FConstructableTrainingShapeInfo
{
	struct FConstructablePartSelection                 SelectedPart;                                             // 0x0000(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FVector                                     RelativeLocation;                                         // 0x0010(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x0028(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HalfExtent;                                               // 0x0040(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DefaultTag;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructablePartTargetingEventData
// 0x0050 (0x00B8 - 0x0068)
struct FConstructablePartTargetingEventData : public FConstructablePartTargetingData
{
	struct FRotator                                    ActualPartOrientationWorld;                               // 0x0068(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    CurrentTargetingOrientationWorld;                         // 0x0080(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasReachedTarget;                                        // 0x0098(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FVector                                     LastKnownTargetLocation;                                  // 0x00A0(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructablePartTagData
// 0x0028
struct FConstructablePartTagData
{
	int                                                PartID;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       AggregatedTags;                                           // 0x0008(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct EmbarkConstructable.ComponentOrStyleTargetData
// 0x0018 (0x0020 - 0x0008)
struct FComponentOrStyleTargetData : public FGameplayAbilityTargetData
{
	struct FComponentOrStyle                           Target;                                                   // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct EmbarkConstructable.ConstructablePartAbilityData
// 0x0060
struct FConstructablePartAbilityData
{
	int                                                MainPartID;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0004(0x0050) UNKNOWN PROPERTY: PartIDsAssociatedWithAbility
	TWeakObjectPtr<class UGameplayEffect>              CostGameplayEffect;                                       // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructablePartAttributeMapping
// 0x01F0
struct FConstructablePartAttributeMapping
{
	class UEmbarkAttributeSet*                         PartAttributeSet;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PartAttributeSetId;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E4];                                     // 0x000C(0x01E4) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePartAttributeBaseData
// 0x0018
struct FConstructablePartAttributeBaseData
{
	class UAttributeSet*                               BaseAttributeSet;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BaseAttributeName;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PartID;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePartAttributeChangedData
// 0x0020
struct FConstructablePartAttributeChangedData
{
	struct FConstructablePartAttributeBaseData         PartAttributeBaseData;                                    // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              OldValue;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructableTargetHitData
// 0x00F0
struct FConstructableTargetHitData
{
	struct FHitResult                                  Hit;                                                      // 0x0000(0x00E8) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AffectedDegreeUNorm;                                      // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePartDamageModelData
// 0x0014
struct FConstructablePartDamageModelData
{
	int                                                AffectedPartID;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AffectedDegreeUNorm;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TakenDamage;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RawTakenDamage;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVisibleToAttack;                                       // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePartAttackerData
// 0x0060
struct FConstructablePartAttackerData
{
	int                                                AttackingPartID;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UPrimaryDataAsset*                           EnemyType;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<unsigned char, float>                         SnapshottedDamage;                                        // 0x0010(0x0050) (Edit, BlueprintVisible)
};

// ScriptStruct EmbarkConstructable.ReplicatedSubobjectTargetData
// 0x0008 (0x0010 - 0x0008)
struct FReplicatedSubobjectTargetData : public FGameplayAbilityTargetData
{
	class UReplicatedSubobject*                        TargetObject;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructableGameplayEffectContext
// 0x0098 (0x0178 - 0x00E0)
struct FConstructableGameplayEffectContext : public FEmbarkGameplayEffectContext
{
	bool                                               bAffectActor;                                             // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	TArray<struct FConstructablePartDamageModelData>   AffectedParts;                                            // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                PrimaryTargetPartId;                                      // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FConstructablePartAttackerData              AttackingPartInfo;                                        // 0x0100(0x0060) (Edit, BlueprintVisible)
	float                                              ActorRawTakenDamage;                                      // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActorAffectedDegreeUNorm;                                 // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0168(0x0001) MISSED OFFSET
	unsigned char                                      DamageType;                                               // 0x0169(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x016A(0x0002) MISSED OFFSET
	int                                                EventID;                                                  // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      OriginatorObject;                                         // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructableTargetData
// 0x0020 (0x0028 - 0x0008)
struct FConstructableTargetData : public FGameplayAbilityTargetData
{
	TWeakObjectPtr<class AActor>                       TargetActor;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FConstructablePartDamageModelData>   TargetParts;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                PrimaryTargetPartId;                                      // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              TargetActorAffectedDegreeUNorm;                           // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructablePartQueryParams
// 0x0001
struct FConstructablePartQueryParams
{
	bool                                               bAllowDestroyedParts;                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkConstructable.ConstructableHealthEvent
// 0x0068
struct FConstructableHealthEvent
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ThrusterDefinition
// 0x0090
struct FThrusterDefinition
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0060) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Scalar;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FVector                                     Force;                                                    // 0x0068(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PartID;                                                   // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0084(0x000C) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructableFastArrayReplicationAmortizationTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FConstructableFastArrayReplicationAmortizationTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.TargetingServiceParams
// 0x0008
struct FTargetingServiceParams
{
	float                                              SpeedModifier;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0004(0x0001) MISSED OFFSET
	bool                                               bSendTerminalValue;                                       // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructableStyleSocket
// 0x0070
struct FConstructableStyleSocket
{
	struct FTransform                                  SocketTransform;                                          // 0x0000(0x0060) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructableSocketRepIndexData
// 0x000C
struct FConstructableSocketRepIndexData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct EmbarkConstructable.ConstructablePartAttributeSetMetaData
// 0x0040
struct FConstructablePartAttributeSetMetaData
{
	struct FSoftClassPath                              CoreAttributeSetClass;                                    // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                NrAttributesPerSet;                                       // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              PartAttributeSetClasses;                                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               BaseAttributeNames;                                       // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct EmbarkConstructable.LinearConstraintData
// 0x0008
struct FLinearConstraintData
{
	float                                              Limit;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               XMotion;                                                  // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               YMotion;                                                  // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               ZMotion;                                                  // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
