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

// Function EmbarkAI.BTDecorator_UtilityBlueprintBase.CalculateUtility
struct UBTDecorator_UtilityBlueprintBase_CalculateUtility_Params
{
	class AAIController*                               OwnerController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AIPerceiver.GetAIPerceivedActors
struct UAIPerceiver_GetAIPerceivedActors_Params
{
	struct FAIPerceiveResult                           Result;                                                   // (Parm, OutParm)
	struct FActorPerceptionBlueprintInfo               PerceptionInfoTemp;                                       // (Parm, OutParm)
	TArray<class AActor*>                              PerceivedActors;                                          // (Parm, OutParm, ZeroConstructor)
	struct FActorPerceptionBlueprintInfo               EmptyPerceptionInfo;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.UpdateAITargeting
struct UAITargetComponent_UpdateAITargeting_Params
{
	struct FAITargetingParams                          TargetingParams;                                          // (Parm, OutParm)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.StopAttackBy
struct UAITargetComponent_StopAttackBy_Params
{
	class AActor*                                      Attacker;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	enum class EAITokenType                            TokenType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.StartOrQueueForAttackBy
struct UAITargetComponent_StartOrQueueForAttackBy_Params
{
	class AActor*                                      Attacker;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	enum class EAITokenType                            TokenType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.SetBaseThreat
struct UAITargetComponent_SetBaseThreat_Params
{
	float                                              NewBaseThreat;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.RemoveTargetAdjustment
struct UAITargetComponent_RemoveTargetAdjustment_Params
{
	struct FName                                       AdjustmentName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.ReleaseAsTarget
struct UAITargetComponent_ReleaseAsTarget_Params
{
	class AActor*                                      Attacker;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.IsAcquiredAsTargetBy
struct UAITargetComponent_IsAcquiredAsTargetBy_Params
{
	class AActor*                                      Attacker;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.GetNumTargetingTokens
struct UAITargetComponent_GetNumTargetingTokens_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.GetNumAttackTokens
struct UAITargetComponent_GetNumAttackTokens_Params
{
	enum class EAITokenType                            TokenType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.GetMaxNumTargetingTokens
struct UAITargetComponent_GetMaxNumTargetingTokens_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.GetMaxNumAttackTokens
struct UAITargetComponent_GetMaxNumAttackTokens_Params
{
	enum class EAITokenType                            TokenType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.GetBaseThreat
struct UAITargetComponent_GetBaseThreat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.GetAimDirectionOffset
struct UAITargetComponent_GetAimDirectionOffset_Params
{
	struct FVector                                     AimDirection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAITargetingParams                          TargetingParams;                                          // (Parm, OutParm)
	struct FAIAimParams                                AimParams;                                                // (Parm, OutParm)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.GetAccuracyFactor
struct UAITargetComponent_GetAccuracyFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.CanBeAcquiredAsTargetBy
struct UAITargetComponent_CanBeAcquiredAsTargetBy_Params
{
	class AActor*                                      Attacker;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AITargetComponent.AddTargetAdjustment
struct UAITargetComponent_AddTargetAdjustment_Params
{
	struct FName                                       AdjustmentName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTemporaryAITargetingModification           TargetAdjustment;                                         // (Parm, OutParm)
};

// Function EmbarkAI.AITargetComponent.AcquireAsTarget
struct UAITargetComponent_AcquireAsTarget_Params
{
	class AActor*                                      Attacker;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AIFocusingInterface.SelectFocus
struct UAIFocusingInterface_SelectFocus_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIAgent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.AIFocusingInterface.RequestFocus
struct UAIFocusingInterface_RequestFocus_Params
{
	struct FFocusRequest                               FocusRequest;                                             // (Parm)
};

// Function EmbarkAI.AIFocusingInterface.IsRequestValid
struct UAIFocusingInterface_IsRequestValid_Params
{
	struct FFocusRequest                               Request;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AIFocusingInterface.HasValidFocus
struct UAIFocusingInterface_HasValidFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AIFocusingInterface.GetCurrentFocus
struct UAIFocusingInterface_GetCurrentFocus_Params
{
	struct FFocusTarget                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AIFocusingInterface.ClearFocus
struct UAIFocusingInterface_ClearFocus_Params
{
	enum class EAIFocusMode                            FocusMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetTouch
struct UAIAgentStimuliInfoLibrary_GetTouch_Params
{
	struct FAIAgentStimuliInfo                         I;                                                        // (Parm, OutParm)
	struct FAIStimulusInfo                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetStimulusInfosAscendingPriority
struct UAIAgentStimuliInfoLibrary_GetStimulusInfosAscendingPriority_Params
{
	struct FAIAgentStimuliInfo                         I;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FAIStimulusInfo>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetStimulusBySense
struct UAIAgentStimuliInfoLibrary_GetStimulusBySense_Params
{
	struct FAIAgentStimuliInfo                         I;                                                        // (Parm, OutParm)
	enum class EStimulusSense                          Sense;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIStimulusInfo                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetSight
struct UAIAgentStimuliInfoLibrary_GetSight_Params
{
	struct FAIAgentStimuliInfo                         I;                                                        // (Parm, OutParm)
	struct FAIStimulusInfo                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetSensedStimulus
struct UAIAgentStimuliInfoLibrary_GetSensedStimulus_Params
{
	struct FAIAgentStimuliInfo                         I;                                                        // (Parm, OutParm)
	struct FAIStimulus                                 Stimulus;                                                 // (Parm)
	struct FAIStimulusInfo                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetNetwork
struct UAIAgentStimuliInfoLibrary_GetNetwork_Params
{
	struct FAIAgentStimuliInfo                         I;                                                        // (Parm, OutParm)
	struct FAIStimulusInfo                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetLastSensedTime
struct UAIAgentStimuliInfoLibrary_GetLastSensedTime_Params
{
	struct FAIAgentStimuliInfo                         I;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetLastKnownTag
struct UAIAgentStimuliInfoLibrary_GetLastKnownTag_Params
{
	struct FAIAgentStimuliInfo                         I;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetHighestAlertness
struct UAIAgentStimuliInfoLibrary_GetHighestAlertness_Params
{
	struct FAIAgentStimuliInfo                         I;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetHearing
struct UAIAgentStimuliInfoLibrary_GetHearing_Params
{
	struct FAIAgentStimuliInfo                         I;                                                        // (Parm, OutParm)
	struct FAIStimulusInfo                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetDamage
struct UAIAgentStimuliInfoLibrary_GetDamage_Params
{
	struct FAIAgentStimuliInfo                         I;                                                        // (Parm, OutParm)
	struct FAIStimulusInfo                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AIAgentStimuliInfoLibrary.GetBypass
struct UAIAgentStimuliInfoLibrary_GetBypass_Params
{
	struct FAIAgentStimuliInfo                         I;                                                        // (Parm, OutParm)
	struct FAIStimulusInfo                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AIAgentStimuliInfoLibrary.CombatExpiresAt
struct UAIAgentStimuliInfoLibrary_CombatExpiresAt_Params
{
	struct FAIAgentStimuliInfo                         I;                                                        // (Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AIAgentStimuliInfoLibrary.AlertnessExpiresAt
struct UAIAgentStimuliInfoLibrary_AlertnessExpiresAt_Params
{
	struct FAIAgentStimuliInfo                         I;                                                        // (Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AIAgentTargetInfoLibrary.SetThreat
struct UAIAgentTargetInfoLibrary_SetThreat_Params
{
	struct FAgentTargetInfo                            AgentTargetInfo;                                          // (Parm, OutParm)
	int                                                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.AIAgentTargetInfoLibrary.GetThreat
struct UAIAgentTargetInfoLibrary_GetThreat_Params
{
	struct FAgentTargetInfo                            AgentTargetInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AITargetingInterface.SelectTargets
struct UAITargetingInterface_SelectTargets_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIAgent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAITargetComponent*>                  OutSelectedTargets;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkAI.AITargetingInterface.SelectNeutralTargets
struct UAITargetingInterface_SelectNeutralTargets_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIAgent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAITargetComponent*>                  OutSelectedNeutralTargets;                                // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkAI.AITargetingInterface.SelectFriendlyTargets
struct UAITargetingInterface_SelectFriendlyTargets_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIAgent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAITargetComponent*>                  OutSelectedFriendlyTargets;                               // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkAI.AIKnowledgeBaseNativeFunctionLibrary.UpdateAgentTargetInfos
struct UAIKnowledgeBaseNativeFunctionLibrary_UpdateAgentTargetInfos_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<class AAIController*, struct FAgentInfo>      AgentInfoMap;                                             // (Parm, OutParm)
	TMap<class UAITargetComponent*, struct FTargetInfo> TargetInfoMap;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FAIKnowledgebaseNativeEvent>         OutEvents;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkAI.AIKnowledgeBaseNativeFunctionLibrary.UpdateAgentPerception
struct UAIKnowledgeBaseNativeFunctionLibrary_UpdateAgentPerception_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<class AAIController*, struct FAgentInfo>      AgentInfoMap;                                             // (Parm, OutParm)
	TMap<class UAITargetComponent*, struct FTargetInfo> TargetInfoMap;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UAITargetComponent*>                  PerceptionBypassTargets;                                  // (Parm, OutParm, ZeroConstructor)
	class UAIPerceiver*                                Perceiver;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIKnowledgebaseNativeEvent>         OutEvents;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.IsTargetPerceivedBySense
struct UAgentInfoFunctionLibrary_IsTargetPerceivedBySense_Params
{
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAITargetComponent*                          TargetComponent;                                          // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	enum class EStimulusSense                          Sense;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.IsLastTimeWithin
struct UAgentInfoFunctionLibrary_IsLastTimeWithin_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeWithin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.HasTarget
struct UAgentInfoFunctionLibrary_HasTarget_Params
{
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.HasGrantedBehavior
struct UAgentInfoFunctionLibrary_HasGrantedBehavior_Params
{
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetUnsensedFriendlyTargetsWithinRange
struct UAgentInfoFunctionLibrary_GetUnsensedFriendlyTargetsWithinRange_Params
{
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              MaxRange;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAITargetComponent*>                  OutTargets;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetTimeSince
struct UAgentInfoFunctionLibrary_GetTimeSince_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetSmartObjectUserQueryFromAgentInfoSettings
struct UAgentInfoFunctionLibrary_GetSmartObjectUserQueryFromAgentInfoSettings_Params
{
	struct FAgentInfo                                  AgentInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagQuery                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetSmartObjectUserQuery
struct UAgentInfoFunctionLibrary_GetSmartObjectUserQuery_Params
{
	struct FAISmartObjectQuerySettings                 Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAgentInfo                                  AgentInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagQuery                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetSmartObjectQuerySettings
struct UAgentInfoFunctionLibrary_GetSmartObjectQuerySettings_Params
{
	struct FAgentInfo                                  AgentInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAISmartObjectQuerySettings                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetSelectedTargetsWithinRange
struct UAgentInfoFunctionLibrary_GetSelectedTargetsWithinRange_Params
{
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              MaxRange;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAITargetComponent*>                  OutTargets;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetMostRelevantTarget
struct UAgentInfoFunctionLibrary_GetMostRelevantTarget_Params
{
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAITargetComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetMostRelevantNeutralTarget
struct UAgentInfoFunctionLibrary_GetMostRelevantNeutralTarget_Params
{
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAITargetComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetMostRelevantFriendlyTarget
struct UAgentInfoFunctionLibrary_GetMostRelevantFriendlyTarget_Params
{
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAITargetComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetKnownTargetsBySense
struct UAgentInfoFunctionLibrary_GetKnownTargetsBySense_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EStimulusSense                          Sense;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyCurrentlyPerceived;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAITargetComponent*>                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetAllSortedRelevantTargets
struct UAgentInfoFunctionLibrary_GetAllSortedRelevantTargets_Params
{
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UAITargetComponent*>                  ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetAllSortedFriendlyTargets
struct UAgentInfoFunctionLibrary_GetAllSortedFriendlyTargets_Params
{
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UAITargetComponent*>                  ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetAllNeutralTargets
struct UAgentInfoFunctionLibrary_GetAllNeutralTargets_Params
{
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UAITargetComponent*>                  ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetAIAgentsWithinRange
struct UAgentInfoFunctionLibrary_GetAIAgentsWithinRange_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              MaxRange;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AAIController*>                       OutAgents;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetAgentTargetInfoSafe
struct UAgentInfoFunctionLibrary_GetAgentTargetInfoSafe_Params
{
	struct FAgentTargetInfo                            OutAgentTargetInfo;                                       // (Parm, OutParm)
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAITargetComponent*                          TargetComponent;                                          // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GetAgentTargetInfo
struct UAgentInfoFunctionLibrary_GetAgentTargetInfo_Params
{
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAITargetComponent*                          TargetComponent;                                          // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAgentTargetInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GatherPendingAgentOrders
struct UAgentInfoFunctionLibrary_GatherPendingAgentOrders_Params
{
	struct FAgentInfo                                  AgentInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UAgentOrder*>                         OrdersOut;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GatherAllActiveOrdersOfType
struct UAgentInfoFunctionLibrary_GatherAllActiveOrdersOfType_Params
{
	struct FAgentInfo                                  AgentInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UAgentOrder*>                         OrdersOut;                                                // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.GatherAllActiveOrders
struct UAgentInfoFunctionLibrary_GatherAllActiveOrders_Params
{
	struct FAgentInfo                                  AgentInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UAgentOrder*>                         OrdersOut;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.FindFirstPendingAgentBehaviorOrder
struct UAgentInfoFunctionLibrary_FindFirstPendingAgentBehaviorOrder_Params
{
	struct FAgentInfo                                  AgentInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAgentBehaviorOrder*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.FindActiveAgentBehaviorOrder
struct UAgentInfoFunctionLibrary_FindActiveAgentBehaviorOrder_Params
{
	struct FAgentInfo                                  AgentInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAgentBehaviorOrder*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.CanSeeTarget
struct UAgentInfoFunctionLibrary_CanSeeTarget_Params
{
	struct FAgentInfo                                  Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAITargetComponent*                          TargetComponent;                                          // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TimeSinceSeen;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.CalcFocusRotator
struct UAgentInfoFunctionLibrary_CalcFocusRotator_Params
{
	struct FAgentInfo                                  AgentInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFocusTarget                                FocusTarget;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentInfoFunctionLibrary.CalcFocusLocation
struct UAgentInfoFunctionLibrary_CalcFocusLocation_Params
{
	struct FAgentInfo                                  AgentInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFocusTarget                                FocusTarget;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentOrderContextFunctionLibrary.MakeContextAndSetStructData
struct UAgentOrderContextFunctionLibrary_MakeContextAndSetStructData_Params
{
	class AAIController*                               AIController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkGenericStruct                        StructData;                                               // (Parm)
	class UObject*                                     ObjectData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAgentOrderContextBase*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentOrderContextFunctionLibrary.MakeContext
struct UAgentOrderContextFunctionLibrary_MakeContext_Params
{
	class AAIController*                               AIController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ObjectData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAgentOrderContextBase*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentOrderContextBase.IsValid
struct UAgentOrderContextBase_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentOrderContextBase.GetContextLocation
struct UAgentOrderContextBase_GetContextLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentOrderContextHelperFunctionLibrary.CreateAgentOrderObjectContext
struct UAgentOrderContextHelperFunctionLibrary_CreateAgentOrderObjectContext_Params
{
	class AAIController*                               AIAgent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAgentOrderObjectContext*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentOrderContextHelperFunctionLibrary.CreateAgentOrderLocationContext
struct UAgentOrderContextHelperFunctionLibrary_CreateAgentOrderLocationContext_Params
{
	class AAIController*                               AIAgent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UAgentOrderLocationContext*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentOrderContextHelperFunctionLibrary.CreateAgentOrderActorContext
struct UAgentOrderContextHelperFunctionLibrary_CreateAgentOrderActorContext_Params
{
	class AAIController*                               AIAgent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAgentOrderActorContext*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentOrder.SetOrderHandle
struct UAgentOrder_SetOrderHandle_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.AgentOrder.OnOrderStartedBP
struct UAgentOrder_OnOrderStartedBP_Params
{
	class UAgentOrderContextBase*                      InCurrentContext;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.AgentOrder.OnOrderStarted
struct UAgentOrder_OnOrderStarted_Params
{
};

// Function EmbarkAI.AgentOrder.OnOrderIssuedBP
struct UAgentOrder_OnOrderIssuedBP_Params
{
	class UAgentOrderContextBase*                      InCurrentContext;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.AgentOrder.OnOrderIssued_Internal
struct UAgentOrder_OnOrderIssued_Internal_Params
{
};

// Function EmbarkAI.AgentOrder.OnOrderIssued
struct UAgentOrder_OnOrderIssued_Params
{
};

// Function EmbarkAI.AgentOrder.IsValid_Internal
struct UAgentOrder_IsValid_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentOrder.IsValid
struct UAgentOrder_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentOrder.HasOrderTimedout
struct UAgentOrder_HasOrderTimedout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentOrder.HasOrderDurationEnded
struct UAgentOrder_HasOrderDurationEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentOrder.GetOrderTimeoutLeft
struct UAgentOrder_GetOrderTimeoutLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentOrder.GetOrderHandle
struct UAgentOrder_GetOrderHandle_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AgentOrder.GetOrderDurationLeft
struct UAgentOrder_GetOrderDurationLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIAvoidanceManager.RegisterAvoidanceObject
struct UEmbarkAIAvoidanceManager_RegisterAvoidanceObject_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToLive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GroupMask;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GroupsToAvoid;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GroupsToIgnore;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIAvoidanceManager.GetAvoidanceManager
struct UEmbarkAIAvoidanceManager_GetAvoidanceManager_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkAIAvoidanceManager*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIAvoidanceManagerMixinLibrary.RemoveAvoidanceObject
struct UEmbarkAIAvoidanceManagerMixinLibrary_RemoveAvoidanceObject_Params
{
	class UEmbarkAIAvoidanceManager*                   Manager;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AvoidanceUID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.SetTeam
struct AEmbarkAIController_SetTeam_Params
{
	enum class EEmbarkTeamId                           NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.RemovePerceptionComponentByIndex
struct AEmbarkAIController_RemovePerceptionComponentByIndex_Params
{
	int                                                PerceptionComponentIdx;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.RemovePerceptionComponent
struct AEmbarkAIController_RemovePerceptionComponent_Params
{
	class USceneComponent*                             OwningComponent;                                          // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.RegisterAIData
struct AEmbarkAIController_RegisterAIData_Params
{
	class UEmbarkAITemplateDataAsset*                  DataAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.ReceiveRegisterAIData
struct AEmbarkAIController_ReceiveRegisterAIData_Params
{
	class UEmbarkAITemplateDataAsset*                  DataAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.ReceivePostInitializeComponents
struct AEmbarkAIController_ReceivePostInitializeComponents_Params
{
};

// DelegateFunction EmbarkAI.EmbarkAIController.OnPawnChangedSignature__DelegateSignature
struct AEmbarkAIController_OnPawnChangedSignature__DelegateSignature_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.OnActorPerceptionUpdated
struct AEmbarkAIController_OnActorPerceptionUpdated_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIStimulus                                 Stimulus;                                                 // (Parm)
};

// Function EmbarkAI.EmbarkAIController.MakeAIForgetActor
struct AEmbarkAIController_MakeAIForgetActor_Params
{
	class AActor*                                      ActorToForget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.GetTeam
struct AEmbarkAIController_GetTeam_Params
{
	enum class EEmbarkTeamId                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.GetPerceptionSightConfig
struct AEmbarkAIController_GetPerceptionSightConfig_Params
{
	class UAIPerceptionComponent*                      InPerceptionComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEmbarkAISenseConfig_Sight*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.GetPerceptionNetworkConfig
struct AEmbarkAIController_GetPerceptionNetworkConfig_Params
{
	class UAIPerceptionComponent*                      InPerceptionComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEmbarkAISenseConfig_Network*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.GetPerceptionHearingConfig
struct AEmbarkAIController_GetPerceptionHearingConfig_Params
{
	class UAIPerceptionComponent*                      InPerceptionComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEmbarkAISenseConfig_Hearing*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.GetPerceptionDamageConfig
struct AEmbarkAIController_GetPerceptionDamageConfig_Params
{
	class UAIPerceptionComponent*                      InPerceptionComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAISenseConfig_Damage*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.GetPerceptionComponents
struct AEmbarkAIController_GetPerceptionComponents_Params
{
	TArray<class UAIPerceptionComponent*>              OutPerceptionComponents;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkAI.EmbarkAIController.ForgetEverything
struct AEmbarkAIController_ForgetEverything_Params
{
};

// Function EmbarkAI.EmbarkAIController.ForgetActor
struct AEmbarkAIController_ForgetActor_Params
{
	class AActor*                                      ActorToForget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.ConfigureSense
struct AEmbarkAIController_ConfigureSense_Params
{
	class UAIPerceptionComponent*                      InPerceptionComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAISenseConfig*                              SenseConfig;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIController.AddPerceptionComponent
struct AEmbarkAIController_AddPerceptionComponent_Params
{
	class USceneComponent*                             OwningComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UAISenseConfig*>                      SenseConfigs;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkEnvQueryResultWrapper.IsSuccessful
struct UEmbarkEnvQueryResultWrapper_IsSuccessful_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkEnvQueryResultWrapper.IsFinished
struct UEmbarkEnvQueryResultWrapper_IsFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkEnvQueryResultWrapper.IsAborted
struct UEmbarkEnvQueryResultWrapper_IsAborted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkEnvQueryResultWrapper.HasResult
struct UEmbarkEnvQueryResultWrapper_HasResult_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkEnvQueryResultWrapper.GetQueryResult
struct UEmbarkEnvQueryResultWrapper_GetQueryResult_Params
{
	struct FEnvQueryResult                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.EmbarkEnvQueryResultWrapper.Clear
struct UEmbarkEnvQueryResultWrapper_Clear_Params
{
};

// Function EmbarkAI.EnvQueryResultMixinLibrary.GetItemsAsLocations
struct UEnvQueryResultMixinLibrary_GetItemsAsLocations_Params
{
	struct FEnvQueryResult                             Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             OutLocations;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkAI.EnvQueryManagerMixinLibrary.RunQueryWithParams
struct UEnvQueryManagerMixinLibrary_RunQueryWithParams_Params
{
	class UEnvQueryManager*                            Manager;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UEnvQuery*                                   Query;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     RequestOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkEnvQueryParams                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UEmbarkEnvQueryResultWrapper*                NotifyWrapper;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EnvQueryManagerMixinLibrary.RunQuery
struct UEnvQueryManagerMixinLibrary_RunQuery_Params
{
	class UEnvQueryManager*                            Manager;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UEnvQuery*                                   Query;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     RequestOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkEnvQueryResultWrapper*                NotifyWrapper;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIFlowSubsystem.UpdateGroups
struct UEmbarkAIFlowSubsystem_UpdateGroups_Params
{
	TArray<class APawn*>                               Agents;                                                   // (Parm, ZeroConstructor)
	double                                             DeltaUpdateTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIFlowSubsystem.OnTryInitialize
struct UEmbarkAIFlowSubsystem_OnTryInitialize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIFlowSubsystem.OnTick
struct UEmbarkAIFlowSubsystem_OnTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIFlowSubsystem.LineValue
struct UEmbarkAIFlowSubsystem_LineValue_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             SearchDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkipBlockedMargin;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutCollision;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIFlowSubsystem.GradientDescent
struct UEmbarkAIFlowSubsystem_GradientDescent_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Steps;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIFlowSubsystem.GetTime
struct UEmbarkAIFlowSubsystem_GetTime_Params
{
	int                                                CellX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIFlowSubsystem.GetAgentLocations
struct UEmbarkAIFlowSubsystem_GetAgentLocations_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkAI.EmbarkAIFlowSubsystem.FindHeight
struct UEmbarkAIFlowSubsystem_FindHeight_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIFlowSubsystem.ClosestUnblockedLocation
struct UEmbarkAIFlowSubsystem_ClosestUnblockedLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIFlowSubsystem.CellValue
struct UEmbarkAIFlowSubsystem_CellValue_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIFlowSubsystem.CalculateGroupMovement
struct UEmbarkAIFlowSubsystem_CalculateGroupMovement_Params
{
	struct FVector                                     Centroid;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HomeLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIFlowSubsystem.Blocked
struct UEmbarkAIFlowSubsystem_Blocked_Params
{
	int                                                CellX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIGroundPathFollowingComponent.SetOverrideHasReachedCurrentTargetFunction
struct UEmbarkAIGroundPathFollowingComponent_SetOverrideHasReachedCurrentTargetFunction_Params
{
	bool                                               bOverride;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIGroundPathFollowingComponent.SetIgnoreZReachThreshold
struct UEmbarkAIGroundPathFollowingComponent_SetIgnoreZReachThreshold_Params
{
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.GroupRoleInfoMixinLibrary.IsValid
struct UGroupRoleInfoMixinLibrary_IsValid_Params
{
	struct FGroupRoleInfo                              Info;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AIAlertnessFunctionLibrary.ToFName
struct UAIAlertnessFunctionLibrary_ToFName_Params
{
	enum class EAIAlertness                            inAIAlertness;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AIAlertnessSourceFunctionLibrary.ToFName
struct UAIAlertnessSourceFunctionLibrary_ToFName_Params
{
	enum class EAIAlertnessSource                      inAIAlertnessSource;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIKnowledgeBaseInterfaceFunctionLibrary.GetAIKnowledgeBaseInterfaceFromGameMode
struct UEmbarkAIKnowledgeBaseInterfaceFunctionLibrary_GetAIKnowledgeBaseInterfaceFromGameMode_Params
{
	class AGameModeBase*                               GameMode;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAIKnowledgeBaseInterface*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAIKnowledgeBaseInterfaceFunctionLibrary.GetAIKnowledgeBaseInterface
struct UEmbarkAIKnowledgeBaseInterfaceFunctionLibrary_GetAIKnowledgeBaseInterface_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAIKnowledgeBaseInterface*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkAI.AIKnowledgeBaseInterface.UnregisterAITarget
struct UAIKnowledgeBaseInterface_UnregisterAITarget_Params
{
	class UActorComponent*                             Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkAI.AIKnowledgeBaseInterface.UnregisterAIAgent
struct UAIKnowledgeBaseInterface_UnregisterAIAgent_Params
{
	class AAIController*                               Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.AIKnowledgeBaseInterface.RegisterAITarget
struct UAIKnowledgeBaseInterface_RegisterAITarget_Params
{
	class UActorComponent*                             Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkAI.AIKnowledgeBaseInterface.RegisterAIAgent
struct UAIKnowledgeBaseInterface_RegisterAIAgent_Params
{
	class AAIController*                               Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.AIKnowledgeBaseInterface.HasAgentGroupInfo
struct UAIKnowledgeBaseInterface_HasAgentGroupInfo_Params
{
	int                                                GroupId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.AIKnowledgeBaseInterface.GetTargetInfos
struct UAIKnowledgeBaseInterface_GetTargetInfos_Params
{
	TMap<class UAITargetComponent*, struct FTargetInfo> ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkAI.AIKnowledgeBaseInterface.GetTargetInfo
struct UAIKnowledgeBaseInterface_GetTargetInfo_Params
{
	class UAITargetComponent*                          Comp;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTargetInfo                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkAI.AIKnowledgeBaseInterface.GetAgentInfos
struct UAIKnowledgeBaseInterface_GetAgentInfos_Params
{
	TMap<class AAIController*, struct FAgentInfo>      ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkAI.AIKnowledgeBaseInterface.GetAgentInfoNonRef
struct UAIKnowledgeBaseInterface_GetAgentInfoNonRef_Params
{
	class AAIController*                               AIController;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAgentInfo                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.AIKnowledgeBaseInterface.GetAgentInfo
struct UAIKnowledgeBaseInterface_GetAgentInfo_Params
{
	class AAIController*                               AIController;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAgentInfo                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkAI.AIKnowledgeBaseInterface.GetAgentGroupInfo
struct UAIKnowledgeBaseInterface_GetAgentGroupInfo_Params
{
	int                                                GroupId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAgentGroupInfo                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkAI.AIKnowledgeBaseInterface.AgentInfoExist
struct UAIKnowledgeBaseInterface_AgentInfoExist_Params
{
	class AAIController*                               AIController;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAINavigationComponentBase.StopMovement
struct UEmbarkAINavigationComponentBase_StopMovement_Params
{
};

// Function EmbarkAI.EmbarkAINavigationComponentBase.GetMoveDestination
struct UEmbarkAINavigationComponentBase_GetMoveDestination_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAINavigationComponentBase.GetImmediateMoveDestination
struct UEmbarkAINavigationComponentBase_GetImmediateMoveDestination_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAINavigationComponentBase.FindPath
struct UEmbarkAINavigationComponentBase_FindPath_Params
{
	struct FEmbarkAIPathRequest                        PathRequest;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             OutOptimizedPath;                                         // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<EPathFollowingRequestResult>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAICombatPositionQueryBase.UpdateQuery_Internal
struct UEmbarkAICombatPositionQueryBase_UpdateQuery_Internal_Params
{
};

// Function EmbarkAI.EmbarkAICombatPositionQueryBase.UpdateQuery
struct UEmbarkAICombatPositionQueryBase_UpdateQuery_Params
{
};

// Function EmbarkAI.EmbarkAICombatPositionQueryBase.RunQuery_Internal
struct UEmbarkAICombatPositionQueryBase_RunQuery_Internal_Params
{
	struct FCombatPositionQueryInfo                    QueryInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EAICombatPositionQueryState             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAICombatPositionQueryBase.RunQuery
struct UEmbarkAICombatPositionQueryBase_RunQuery_Params
{
	struct FCombatPositionQueryInfo                    QueryInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EAICombatPositionQueryState             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAICombatPositionQueryBase.ReadyToRunContiniousQuery
struct UEmbarkAICombatPositionQueryBase_ReadyToRunContiniousQuery_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAICombatPositionQueryBase.GetQueryResult_Internal
struct UEmbarkAICombatPositionQueryBase_GetQueryResult_Internal_Params
{
	struct FCombatPositionQueryResults                 OutPositionInfo;                                          // (Parm, OutParm)
	enum class EAICombatPositionQueryState             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAICombatPositionQueryBase.GetQueryResult
struct UEmbarkAICombatPositionQueryBase_GetQueryResult_Params
{
	struct FCombatPositionQueryResults                 OutPositionInfo;                                          // (Parm, OutParm)
	enum class EAICombatPositionQueryState             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAISense_Hearing.ReportSoundEvent
struct UEmbarkAISense_Hearing_ReportSoundEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAISense_Network.ReportNetworkEvent
struct UEmbarkAISense_Network_ReportNetworkEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastSeenLocation;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkAISense_Touch.ReportTouchEvent
struct UEmbarkAISense_Touch_ReportTouchEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TouchReceiver;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EventLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectComponent.ReceiveSelectSlot
struct UEmbarkSmartObjectComponent_ReceiveSelectSlot_Params
{
	class AActor*                                      Querier;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AvailableSlots;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectComponent.ReceiveRelease
struct UEmbarkSmartObjectComponent_ReceiveRelease_Params
{
	class AActor*                                      Querier;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectComponent.ReceiveClaim
struct UEmbarkSmartObjectComponent_ReceiveClaim_Params
{
	class AActor*                                      Querier;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectComponent.ReceiveCanBeClaimed
struct UEmbarkSmartObjectComponent_ReceiveCanBeClaimed_Params
{
	class AActor*                                      Querier;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.Release
struct UEmbarkSmartObjectSubsystem_Release_Params
{
	struct FEmbarkSmartObjectClaimHandle               Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.IsInitialized
struct UEmbarkSmartObjectSubsystem_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.InitializeOctree
struct UEmbarkSmartObjectSubsystem_InitializeOctree_Params
{
	struct FBox                                        Bounds;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSmartObjectRawPtrsInRange
struct UEmbarkSmartObjectSubsystem_GetSmartObjectRawPtrsInRange_Params
{
	struct FBox                                        QueryBox;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class UEmbarkSmartObjectComponent*>         OutResults;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSmartObject
struct UEmbarkSmartObjectSubsystem_GetSmartObject_Params
{
	struct FEmbarkSmartObjectClaimHandle               Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UEmbarkSmartObjectComponent*                 ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSlotRotation
struct UEmbarkSmartObjectSubsystem_GetSlotRotation_Params
{
	struct FEmbarkSmartObjectClaimHandle               Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSlotLocation
struct UEmbarkSmartObjectSubsystem_GetSlotLocation_Params
{
	struct FEmbarkSmartObjectClaimHandle               Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetSlotIndex
struct UEmbarkSmartObjectSubsystem_GetSlotIndex_Params
{
	struct FEmbarkSmartObjectClaimHandle               Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetCurrent
struct UEmbarkSmartObjectSubsystem_GetCurrent_Params
{
	class UWorld*                                      World;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkSmartObjectSubsystem*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetClaim
struct UEmbarkSmartObjectSubsystem_GetClaim_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkSmartObjectClaimHandle               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.GetBehaviorOrder
struct UEmbarkSmartObjectSubsystem_GetBehaviorOrder_Params
{
	struct FEmbarkSmartObjectClaimHandle               Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.FindSmartObjectWithPredicate
struct UEmbarkSmartObjectSubsystem_FindSmartObjectWithPredicate_Params
{
	struct FEmbarkSmartObjectRequest                   Request;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Predicate;                                                // (Parm, ZeroConstructor)
	struct FEmbarkSmartObjectClaimHandle               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.FindSmartObject
struct UEmbarkSmartObjectSubsystem_FindSmartObject_Params
{
	struct FEmbarkSmartObjectRequest                   Request;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEmbarkSmartObjectClaimHandle               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.FindClosestSmartObject
struct UEmbarkSmartObjectSubsystem_FindClosestSmartObject_Params
{
	struct FEmbarkSmartObjectRequest                   Request;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEmbarkSmartObjectClaimHandle               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.FindAllSmartObjects
struct UEmbarkSmartObjectSubsystem_FindAllSmartObjects_Params
{
	struct FEmbarkSmartObjectRequest                   Request;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FEmbarkSmartObjectClaimHandle>       OutResults;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.DebugDraw
struct UEmbarkSmartObjectSubsystem_DebugDraw_Params
{
};

// Function EmbarkAI.EmbarkSmartObjectSubsystem.Claim
struct UEmbarkSmartObjectSubsystem_Claim_Params
{
	struct FEmbarkSmartObjectClaimHandle               Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkSmartObjectClaimHandleMixinLibrary.IsValid
struct UEmbarkSmartObjectClaimHandleMixinLibrary_IsValid_Params
{
	struct FEmbarkSmartObjectClaimHandle               Handle;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkTeamFunctionLibrary.SetActorTeam
struct UEmbarkTeamFunctionLibrary_SetActorTeam_Params
{
	class AActor*                                      ActorToUpdate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkTeamId                           NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAI.EmbarkTeamFunctionLibrary.GetAttitudeBetweenTeams
struct UEmbarkTeamFunctionLibrary_GetAttitudeBetweenTeams_Params
{
	enum class EEmbarkTeamId                           AskingTeam;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkTeamId                           TargetTeam;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkTeamFunctionLibrary.GetAttitudeBetweenActors
struct UEmbarkTeamFunctionLibrary_GetAttitudeBetweenActors_Params
{
	class AActor*                                      AskingActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAI.EmbarkTeamFunctionLibrary.GetActorTeam
struct UEmbarkTeamFunctionLibrary_GetActorTeam_Params
{
	class AActor*                                      TeamMember;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkTeamId                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
