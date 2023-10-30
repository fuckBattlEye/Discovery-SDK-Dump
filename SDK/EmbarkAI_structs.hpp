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

// Enum EmbarkAI.EEmbarkTeamId
enum class EEmbarkTeamId : uint8_t
{
	Team1                          = 0,
	Team2                          = 1,
	Team3                          = 2,
	NoTeam                         = 3,
	EEmbarkTeamId_MAX              = 4
};


// Enum EmbarkAI.EAIAlertnessSource
enum class EAIAlertnessSource : uint8_t
{
	Unknown                        = 0,
	Resources                      = 1,
	Enemy                          = 2,
	EAIAlertnessSource_MAX         = 3
};


// Enum EmbarkAI.EAIAlertness
enum class EAIAlertness : uint8_t
{
	Idle                           = 0,
	Alert                          = 1,
	InCombat                       = 2,
	Dormant                        = 3,
	Fleeing                        = 4,
	EAIAlertness_MAX               = 5
};


// Enum EmbarkAI.EAICombatPhase
enum class EAICombatPhase : uint8_t
{
	Normal                         = 0,
	Aggressive                     = 1,
	Passive                        = 2,
	Impaired                       = 3,
	EAICombatPhase_MAX             = 4
};


// Enum EmbarkAI.EAIEmotionalState
enum class EAIEmotionalState : uint8_t
{
	Normal                         = 0,
	Enraged                        = 1,
	Weakened                       = 2,
	EAIEmotionalState_MAX          = 3
};


// Enum EmbarkAI.EUtilitySelectionMethod
enum class EUtilitySelectionMethod : uint8_t
{
	Priority                       = 0,
	Proportional                   = 1,
	EUtilitySelectionMethod_MAX    = 2
};


// Enum EmbarkAI.EAIFocusMode
enum class EAIFocusMode : uint8_t
{
	Movement                       = 0,
	Event                          = 1,
	Target                         = 2,
	Script                         = 3,
	Freeze                         = 4,
	NoFocus                        = 5,
	NUM                            = 6,
	EAIFocusMode_MAX               = 7
};


// Enum EmbarkAI.EAIFocusFlags
enum class EAIFocusFlags : uint8_t
{
	None                           = 0,
	RequireLOS                     = 1,
	RequireDistance                = 2,
	EAIFocusFlags_MAX              = 3
};


// Enum EmbarkAI.EStimulusSense
enum class EStimulusSense : uint8_t
{
	None                           = 0,
	Bypass                         = 1,
	Damage                         = 2,
	Hearing                        = 3,
	Network                        = 4,
	Sight                          = 5,
	Touch                          = 6,
	EStimulusSense_MAX             = 7
};


// Enum EmbarkAI.EAgentGroupRole
enum class EAgentGroupRole : uint8_t
{
	None                           = 0,
	Hunt                           = 1,
	Guard                          = 2,
	Harvest                        = 3,
	EAgentGroupRole_MAX            = 4
};


// Enum EmbarkAI.EAgentEncounterModifier
enum class EAgentEncounterModifier : uint8_t
{
	Default                        = 0,
	Dormant                        = 1,
	Ambush                         = 2,
	EAgentEncounterModifier_MAX    = 3
};


// Enum EmbarkAI.EEnemyRole
enum class EEnemyRole : uint8_t
{
	Damager                        = 0,
	Evader                         = 1,
	Tank                           = 2,
	Support                        = 3,
	EEnemyRole_MAX                 = 4
};


// Enum EmbarkAI.EAIKnowledgebaseNativeEventType
enum class EAIKnowledgebaseNativeEventType : uint8_t
{
	NewTargetDiscovered            = 0,
	TargetRemoved                  = 1,
	EAIKnowledgebaseNativeEventType_MAX = 2
};


// Enum EmbarkAI.EAIAgentOrder
enum class EAIAgentOrder : uint8_t
{
	None                           = 0,
	NonBehavior                    = 1,
	BehaviorCustom                 = 2,
	BehaviorCharge                 = 3,
	BehaviorFlee                   = 4,
	EAIAgentOrder_MAX              = 5
};


// Enum EmbarkAI.EAICombatStateDataSelection
enum class EAICombatStateDataSelection : uint8_t
{
	Custom                         = 0,
	CapabilityGroup                = 1,
	SelectedUtility                = 2,
	ActiveOrder                    = 3,
	TransitionInstigator           = 4,
	EAICombatStateDataSelection_MAX = 5
};


// Enum EmbarkAI.EAICombatStateCapabilityGroupSelection
enum class EAICombatStateCapabilityGroupSelection : uint8_t
{
	None                           = 0,
	AssociatedCapabilityGroup      = 1,
	HighestUtility                 = 2,
	EAICombatStateCapabilityGroupSelection_MAX = 3
};


// Enum EmbarkAI.EAICombatStateTargetSelection
enum class EAICombatStateTargetSelection : uint8_t
{
	DefaultHostileTarget           = 0,
	DefaultFriendlyTarget          = 1,
	EAICombatStateTargetSelection_MAX = 2
};


// Enum EmbarkAI.EAINavigationCapability
enum class EAINavigationCapability : uint8_t
{
	Ground                         = 0,
	Flying                         = 1,
	GroundAndFlying                = 2,
	Default                        = 3,
	EAINavigationCapability_MAX    = 4
};


// Enum EmbarkAI.EAIMovementSpeed
enum class EAIMovementSpeed : uint8_t
{
	NotSpecified                   = 0,
	VerySlow                       = 1,
	Slow                           = 2,
	Normal                         = 3,
	Fast                           = 4,
	VeryFast                       = 5,
	EAIMovementSpeed_MAX           = 6
};


// Enum EmbarkAI.EAICombatPositionQueryState
enum class EAICombatPositionQueryState : uint8_t
{
	Idle                           = 0,
	Searching                      = 1,
	SearchFailed                   = 2,
	SearchSuccess                  = 3,
	EAICombatPositionQueryState_MAX = 4
};


// Enum EmbarkAI.EAISoundMaskingEngine
enum class EAISoundMaskingEngine : uint8_t
{
	None                           = 0,
	VeryQuiet                      = 1,
	Quiet                          = 2,
	Medium                         = 3,
	Loud                           = 4,
	EAISoundMaskingEngine_MAX      = 5
};


// Enum EmbarkAI.EAISoundInterestRange
enum class EAISoundInterestRange : uint8_t
{
	Short                          = 0,
	Medium                         = 1,
	Long                           = 2,
	Massive                        = 3,
	EAISoundInterestRange_MAX      = 4
};


// Enum EmbarkAI.EAITokenType
enum class EAITokenType : uint8_t
{
	Near                           = 0,
	Medium                         = 1,
	Far                            = 2,
	NUM                            = 3,
	EAITokenType_MAX               = 4
};


// Enum EmbarkAI.EEmbarkEnvQueryFlyingProjection
enum class EEmbarkEnvQueryFlyingProjection : uint8_t
{
	Geometry                       = 0,
	Voxel                          = 1,
	EEmbarkEnvQueryFlyingProjection_MAX = 2
};


// Enum EmbarkAI.EEmbarkEnvTestPathfinding
enum class EEmbarkEnvTestPathfinding : uint8_t
{
	PathExist                      = 0,
	PathLength                     = 1,
	EEmbarkEnvTestPathfinding_MAX  = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkAI.AIPerceiveResult
// 0x0050
struct FAIPerceiveResult
{
	TMap<class AActor*, struct FActorPerceptionBlueprintInfo> PerceivedActors;                                          // 0x0000(0x0050) (Edit, BlueprintVisible)
};

// ScriptStruct EmbarkAI.AITargetingParams
// 0x0058
struct FAITargetingParams
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAheadTime;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionCorrectionSpeed;                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FVector                                     AimAtPosition;                                            // 0x0010(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TrackingVelocity;                                         // 0x0028(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastPosition;                                             // 0x0040(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAI.FocusTarget
// 0x0028
struct FFocusTarget
{
	class UAITargetComponent*                          Target;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAI.FocusRequest
// 0x0040
struct FFocusRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FFocusTarget                                FocusTarget;                                              // 0x0008(0x0028) (Edit, BlueprintVisible)
	float                                              ExpireTime;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RequiredDistance;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkAI.AIAgentStimuliInfo
// 0x0030
struct FAIAgentStimuliInfo
{
	struct FVector                                     LastKnownLocation;                                        // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct EmbarkAI.AgentTargetInfo
// 0x00A8
struct FAgentTargetInfo
{
	class UAITargetComponent*                          TargetComp;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     LastKnownLocation;                                        // 0x0008(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastValidTime;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastAimDotTowardsUs;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastAimDotLeftRightOfUs;                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastUpdateTime;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastShotAtUsTime;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastAimedTime;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWithinLoS;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0039(0x0017) MISSED OFFSET
	struct FAITargetingParams                          TargetingParams;                                          // 0x0050(0x0058) (Edit, BlueprintVisible)
};

// ScriptStruct EmbarkAI.NetworkMessageSettings
// 0x0020
struct FNetworkMessageSettings
{
	TArray<class UClass*>                              TriggerForSenses;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Range;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastInterval;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialNetworkBroadcastDelay;                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkAI.AISmartObjectQuerySettings
// 0x00E0
struct FAISmartObjectQuerySettings
{
	struct FGameplayTagQuery                           Hunt;                                                     // 0x0000(0x0048) (Edit, BlueprintVisible)
	struct FGameplayTagQuery                           Guard;                                                    // 0x0048(0x0048) (Edit, BlueprintVisible)
	struct FGameplayTagQuery                           Harvest;                                                  // 0x0090(0x0048) (Edit, BlueprintVisible)
	float                                              Cooldown;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SearchFrequency;                                          // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAI.AISmartObjectData
// 0x02A8
struct FAISmartObjectData
{
	struct FAISmartObjectQuerySettings                 IdleQuery;                                                // 0x0000(0x00E0) (Edit, BlueprintVisible)
	struct FAISmartObjectQuerySettings                 AlertQuery;                                               // 0x00E0(0x00E0) (Edit, BlueprintVisible)
	struct FAISmartObjectQuerySettings                 CombatQuery;                                              // 0x01C0(0x00E0) (Edit, BlueprintVisible)
	float                                              InterestRange;                                            // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastTimeUsingSmartObject;                                 // 0x02A4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAI.PerceptionConfig
// 0x0010
struct FPerceptionConfig
{
	class UEmbarkAISenseConfig_Sight*                  SightConfig;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEmbarkAISenseConfig_Hearing*                HearingConfig;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAI.AgentInfo
// 0x04C8
struct FAgentInfo
{
	class AAIController*                               AIAgent;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAITargetComponent*                          TargetComponent;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIFocusingInterface*                        AIFocusing;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAITargetingInterface*                       AITargeting;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAITemplateDataAsset*                        TemplateData;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0028(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0040(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SqrDistToClosestPlayer;                                   // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TMap<class UAIPerceptionComponent*, struct FPerceptionConfig> BasePerceptionConfigs;                                    // 0x0060(0x0050) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	class USMInstance*                                 AlertnessStateFSMInstance;                                // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USMInstance*                                 AICombatStateFSMInstance;                                 // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpawnedGroupId;                                           // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	float                                              Aggression;                                               // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FFocusTarget                                SelectedFocusTarget;                                      // 0x00D8(0x0028) (Edit, BlueprintVisible)
	TArray<class UAITargetComponent*>                  SelectedTargets;                                          // 0x0100(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UAITargetComponent*>                  SelectedFriendlyTargets;                                  // 0x0110(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UAITargetComponent*>                  SelectedNeutralTargets;                                   // 0x0120(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TMap<class UAITargetComponent*, struct FAgentTargetInfo> AgentTargetInfos;                                         // 0x0130(0x0050) (Edit, BlueprintVisible)
	TArray<class UAITargetComponent*>                  AgentFriendlyInfos;                                       // 0x0180(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UAITargetComponent*>                  AgentNeutralInfos;                                        // 0x0190(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TMap<class UAITargetComponent*, struct FAIAgentStimuliInfo> StimuliInfos;                                             // 0x01A0(0x0050) (Edit, BlueprintVisible)
	int                                                NextLoSUpdateIndex;                                       // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasTargetsWithinLoS;                                     // 0x01F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01F5(0x0003) MISSED OFFSET
	class UAgentOrder*                                 ActiveAgentOrder;                                         // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAgentOrder*>                         ActiveAgentOrdersAsync;                                   // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAgentOrder*>                         PendingAgentOrders;                                       // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FAISmartObjectData                          SmartObjectData;                                          // 0x0220(0x02A8) (Edit, BlueprintVisible)
};

// ScriptStruct EmbarkAI.FlowHeightMap
// 0x0020
struct FFlowHeightMap
{
	TArray<double>                                     Vertices;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                XSize;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                YSize;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DistanceBetweenVertices;                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkAI.FlowPriorityBucket
// 0x0018
struct FFlowPriorityBucket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct EmbarkAI.GroupRoleInfo
// 0x0028
struct FGroupRoleInfo
{
	TArray<class AAIController*>                       Members;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     Centroid;                                                 // 0x0010(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAI.TargetThreatInfo
// 0x0010
struct FTargetThreatInfo
{
	float                                              AggresiveThreat;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefensiveThreat;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealingThreat;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UtilityThreat;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAI.TargetInfo
// 0x00B8
struct FTargetInfo
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAITargetComponent*                          TargetComp;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0028(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AimOffset;                                                // 0x0040(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AimLocation;                                              // 0x0058(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AimDirection;                                             // 0x0070(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTargetThreatInfo                           GeneratedThreat;                                          // 0x0088(0x0010) (Edit, BlueprintVisible)
	float                                              BaseThreat;                                               // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthFraction;                                           // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastUpdateTime;                                           // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastShotTime;                                             // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClusterFactor;                                            // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccuracyFactor;                                           // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00B0(0x0001) MISSED OFFSET
	bool                                               bBypassPerception;                                        // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAiming;                                                // 0x00B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x00B3(0x0005) MISSED OFFSET
};

// ScriptStruct EmbarkAI.AgentGroupMember
// 0x0010
struct FAgentGroupMember
{
	class AAIController*                               AIController;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkAI.PendingOrder
// 0x0020
struct FPendingOrder
{
	class UClass*                                      AgentOrder;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAgentOrderContextBase*                      Context;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                OrderHandle;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkAI.PendingAgentOrder
// 0x0028
struct FPendingAgentOrder
{
	class AAIController*                               AIAgent;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPendingOrder                               Order;                                                    // 0x0008(0x0020)
};

// ScriptStruct EmbarkAI.PendingAbortOrder
// 0x0010
struct FPendingAbortOrder
{
	class AAIController*                               AIAgent;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                OrderHandle;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkAI.AgentGroupInfo
// 0x0148
struct FAgentGroupInfo
{
	TArray<struct FAgentGroupMember>                   AgentMembers;                                             // 0x0000(0x0010) (ZeroConstructor)
	class AAIController*                               GroupLeader;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<enum class EAgentGroupRole, struct FPendingOrder> GroupOrders;                                              // 0x0018(0x0050)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET
	struct FVector                                     HomeLocation;                                             // 0x0088(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              SearchRadius;                                             // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FVector                                     GroupLocation;                                            // 0x00A8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     GroupTargetLocation;                                      // 0x00C0(0x0018) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPendingAgentOrder>                  PendingAgentOrders;                                       // 0x00D8(0x0010) (ZeroConstructor)
	TArray<struct FPendingAbortOrder>                  PendingAbortAgentOrders;                                  // 0x00E8(0x0010) (ZeroConstructor)
	TMap<enum class EAgentGroupRole, struct FGroupRoleInfo> RoleData;                                                 // 0x00F8(0x0050)
};

// ScriptStruct EmbarkAI.EmbarkAIPathRequest
// 0x0028
struct FEmbarkAIPathRequest
{
	struct FVector                                     Destination;                                              // 0x0000(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	float                                              AcceptanceRadius;                                         // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePathfinding;                                          // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkAI.CombatPositionQueryInfo
// 0x0030
struct FCombatPositionQueryInfo
{
	class AAIController*                               AIAgent;                                                  // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OptimalRange;                                             // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FVector                                     TargetLocation;                                           // 0x0010(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAITargetComponent*                          TargetComponent;                                          // 0x0028(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct EmbarkAI.CombatPositionQueryResults
// 0x0020
struct FCombatPositionQueryResults
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0008(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAI.EmbarkAISoundEvent
// 0x0038
struct FEmbarkAISoundEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      Instigator;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // 0x0010(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkAI.EmbarkAINetworkEvent
// 0x0040
struct FEmbarkAINetworkEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      Instigator;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLastSeenLocation;                                   // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x0034(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkAI.EmbarkAITouchEvent
// 0x0030
struct FEmbarkAITouchEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      TouchReceiver;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAI.AITokenInfo
// 0x0010
struct FAITokenInfo
{
	class AActor*                                      Claimer;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAI.EmbarkSmartObjectSlot
// 0x0090
struct FEmbarkSmartObjectSlot
{
	struct FGameplayTagContainer                       UserTags;                                                 // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FTransform                                  RelativeTransform;                                        // 0x0020(0x0060) (Edit, BlueprintVisible, IsPlainOldData)
	class UClass*                                      BehaviorOrder;                                            // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkAI.EmbarkSmartObjectHandle
// 0x0008
struct FEmbarkSmartObjectHandle
{
	class UEmbarkSmartObjectComponent*                 SmartObject;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct EmbarkAI.EmbarkSmartObjectClaimHandle
// 0x0018
struct FEmbarkSmartObjectClaimHandle
{
	class AActor*                                      Querier;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FEmbarkSmartObjectHandle                    Handle;                                                   // 0x0008(0x0008) (Transient)
	int                                                SlotIndex;                                                // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkAI.EmbarkSmartObjectRequest
// 0x0088
struct FEmbarkSmartObjectRequest
{
	class AActor*                                      Querier;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBox                                        QueryBox;                                                 // 0x0008(0x0038) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery                           TagQuery;                                                 // 0x0040(0x0048) (Edit, BlueprintVisible)
};

// ScriptStruct EmbarkAI.AIAimParams
// 0x0010
struct FAIAimParams
{
	float                                              Accuracy;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetDirection;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetRadius;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetMaxAngleDifference;                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAI.TemporaryAITargetingModification
// 0x0008
struct FTemporaryAITargetingModification
{
	float                                              ThreatMultiplier;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccuracyFactorMultiplier;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAI.AIStimulusInfo
// 0x0030
struct FAIStimulusInfo
{
	float                                              Alertness;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstSensedAt;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpiresAt;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensedAt;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // 0x0010(0x0008) (Edit, BlueprintVisible)
	struct FVector                                     SensedLocation;                                           // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAI.AIKnowledgebaseNativeEvent
// 0x0018
struct FAIKnowledgebaseNativeEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AAIController*                               AIAgent;                                                  // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAITargetComponent*                          Target;                                                   // 0x0010(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct EmbarkAI.EmbarkEnvQueryParams
// 0x0100
struct FEmbarkEnvQueryParams
{
	TMap<struct FName, bool>                           BoolParams;                                               // 0x0000(0x0050) (Edit)
	TMap<struct FName, int>                            IntParams;                                                // 0x0050(0x0050) (Edit)
	TMap<struct FName, float>                          FloatParams;                                              // 0x00A0(0x0050) (Edit)
	TArray<struct FEnvNamedValue>                      NamedParams;                                              // 0x00F0(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct EmbarkAI.PendingGroupOrder
// 0x0028
struct FPendingGroupOrder
{
	unsigned char                                      Roles;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FPendingOrder                               Order;                                                    // 0x0008(0x0020)
};

// ScriptStruct EmbarkAI.AIAlertnessUtilitySet
// 0x0014
struct FAIAlertnessUtilitySet
{
	float                                              Idle;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alert;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InCombat;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Dormant;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Fleeing;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct EmbarkAI.AgentCallbacks
// 0x00B0
struct FAgentCallbacks
{
	struct FScriptMulticastDelegate                    OnAlertnessChanged;                                       // 0x0000(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEmotionalStateChanged;                                  // 0x0010(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCombatPhaseChanged;                                     // 0x0020(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTargetChanged;                                          // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFriendlyTargetChanged;                                  // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNeutralTargetChanged;                                   // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNewTargetDiscovered;                                    // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTargetRemoved;                                          // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAggressionChanged;                                      // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAgentOrderStarted;                                      // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAgentOrderEnded;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
};

// ScriptStruct EmbarkAI.EmbarkAIMoveRequest
// 0x0028
struct FEmbarkAIMoveRequest
{
	struct FVector                                     Destination;                                              // 0x0000(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	float                                              AcceptanceRadius;                                         // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePathfinding;                                          // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
