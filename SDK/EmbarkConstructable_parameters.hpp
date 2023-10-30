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

// Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromSceneComponent
struct UFComponentOrStyleLibrary_MakeFromSceneComponent_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FComponentOrStyle                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromPrimitiveComponent
struct UFComponentOrStyleLibrary_MakeFromPrimitiveComponent_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FComponentOrStyle                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromPhysicsBodyIndex
struct UFComponentOrStyleLibrary_MakeFromPhysicsBodyIndex_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BodyIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FComponentOrStyle                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromPart
struct UFComponentOrStyleLibrary_MakeFromPart_Params
{
	class AConstructableBase*                          PartOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FComponentOrStyle                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromHitResult
struct UFComponentOrStyleLibrary_MakeFromHitResult_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FComponentOrStyle                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.IsValid
struct UFComponentOrStyleLibrary_IsValid_Params
{
	struct FComponentOrStyle                           ComponentOrStyle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.IsPartReference
struct UFComponentOrStyleLibrary_IsPartReference_Params
{
	struct FComponentOrStyle                           ComponentOrStyle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.IsPartAndDestroyed
struct UFComponentOrStyleLibrary_IsPartAndDestroyed_Params
{
	struct FComponentOrStyle                           ComponentOrStyle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.IsPartAndAlive
struct UFComponentOrStyleLibrary_IsPartAndAlive_Params
{
	struct FComponentOrStyle                           ComponentOrStyle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.GetWorldTransform
struct UFComponentOrStyleLibrary_GetWorldTransform_Params
{
	struct FComponentOrStyle                           ComponentOrStyle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.GetTransform
struct UFComponentOrStyleLibrary_GetTransform_Params
{
	struct FComponentOrStyle                           ComponentOrStyle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               bWorldTransform;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.GetOwner
struct UFComponentOrStyleLibrary_GetOwner_Params
{
	struct FComponentOrStyle                           ComponentOrStyle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.GetClosestPointOnCollision
struct UFComponentOrStyleLibrary_GetClosestPointOnCollision_Params
{
	struct FComponentOrStyle                           ComponentOrStyle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutPointOnBody;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.GetCenterBounds
struct UFComponentOrStyleLibrary_GetCenterBounds_Params
{
	struct FComponentOrStyle                           ComponentOrStyle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.GetBounds
struct UFComponentOrStyleLibrary_GetBounds_Params
{
	struct FComponentOrStyle                           ComponentOrStyle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBox                                        Bounds;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.GetActor
struct UFComponentOrStyleLibrary_GetActor_Params
{
	struct FComponentOrStyle                           ComponentOrStyle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.AdvancedAPI_GetPartReference
struct UFComponentOrStyleLibrary_AdvancedAPI_GetPartReference_Params
{
	struct FComponentOrStyle                           ComponentOrStyle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                OutPartId;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkConstructable.FComponentOrStyleLibrary.AdvancedAPI_GetComponent
struct UFComponentOrStyleLibrary_AdvancedAPI_GetComponent_Params
{
	struct FComponentOrStyle                           ComponentOrStyle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkConstructable.ComponentOrStyleTargetHandleMixinLibrary.GetFirstValidComponentOrStyleTarget
struct UComponentOrStyleTargetHandleMixinLibrary_GetFirstValidComponentOrStyleTarget_Params
{
	struct FGameplayAbilityTargetDataHandle            Handle;                                                   // (Parm, OutParm)
	struct FComponentOrStyle                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.ComponentOrStyleTargetHandleMixinLibrary.GetComponentOrStyleTarget
struct UComponentOrStyleTargetHandleMixinLibrary_GetComponentOrStyleTarget_Params
{
	struct FGameplayAbilityTargetDataHandle            Handle;                                                   // (Parm, OutParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FComponentOrStyle                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.ComponentOrStyleTargetHandleMixinLibrary.GetAllValidComponentOrStyleTargets
struct UComponentOrStyleTargetHandleMixinLibrary_GetAllValidComponentOrStyleTargets_Params
{
	struct FGameplayAbilityTargetDataHandle            Handle;                                                   // (Parm, OutParm)
	TArray<struct FComponentOrStyle>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkConstructable.ComponentOrStyleTargetHandleMixinLibrary.AddComponentOrStyleTarget
struct UComponentOrStyleTargetHandleMixinLibrary_AddComponentOrStyleTarget_Params
{
	struct FGameplayAbilityTargetDataHandle            Handle;                                                   // (Parm, OutParm)
	struct FComponentOrStyle                           Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.TrySetPartAttributeBaseValue_Server
struct UConstructableAbilitySystemComponent_TrySetPartAttributeBaseValue_Server_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.TryGetPartAttributeCurrentValue_Server
struct UConstructableAbilitySystemComponent_TryGetPartAttributeCurrentValue_Server_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutCurrentValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.TryGetPartAttributeBaseValue_Server
struct UConstructableAbilitySystemComponent_TryGetPartAttributeBaseValue_Server_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutBaseValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.TryGetPartAttribute_Server
struct UConstructableAbilitySystemComponent_TryGetPartAttribute_Server_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          OutGameplayAttribute;                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.RemovePartTags
struct UConstructableAbilitySystemComponent_RemovePartTags_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       TagsToRemove;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.RemovePartTag
struct UConstructableAbilitySystemComponent_RemovePartTag_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                TagToRemove;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.RegisterPartAttributeChangedCallbackForAllParts_Server
struct UConstructableAbilitySystemComponent_RegisterPartAttributeChangedCallbackForAllParts_Server_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     CallbackObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CallbackFunctionName_FOnAttributeChangeData;              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.RegisterPartAttributeChangedCallback_Server
struct UConstructableAbilitySystemComponent_RegisterPartAttributeChangedCallback_Server_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     CallbackObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CallbackFunctionName_FOnAttributeChangeData;              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.QueryPartTags
struct UConstructableAbilitySystemComponent_QueryPartTags_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConstructablePartTagData                   OutPartTagData;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartHasTag
struct UConstructableAbilitySystemComponent_PartHasTag_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                RequiredTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartHasAnyTags
struct UConstructableAbilitySystemComponent_PartHasAnyTags_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       RequiredTags;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartHasAllTags
struct UConstructableAbilitySystemComponent_PartHasAllTags_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       RequiredTags;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartAttributeToPartID
struct UConstructableAbilitySystemComponent_PartAttributeToPartID_Params
{
	struct FGameplayAttribute                          PartGameplayAttribute;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartAttributeToBaseData
struct UConstructableAbilitySystemComponent_PartAttributeToBaseData_Params
{
	struct FGameplayAttribute                          PartGameplayAttribute;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FConstructablePartAttributeBaseData         OutBaseData;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.GiveAbilityToPart_Server
struct UConstructableAbilitySystemComponent_GiveAbilityToPart_Server_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InAbilityClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  OutHandle;                                                // (Parm, OutParm)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalSourceObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.GetPartTagCount
struct UConstructableAbilitySystemComponent_GetPartTagCount_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                TagToQuery;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.GetPartAbilityData
struct UConstructableAbilitySystemComponent_GetPartAbilityData_Params
{
	struct FGameplayAbilitySpecHandle                  PartAbilitySpecHandle;                                    // (Parm)
	struct FConstructablePartAbilityData               OutData;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.GetOwnerConstructable
struct UConstructableAbilitySystemComponent_GetOwnerConstructable_Params
{
	class AConstructableBase*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.GetAndRegisterPartAttributeChangedCallback_Server
struct UConstructableAbilitySystemComponent_GetAndRegisterPartAttributeChangedCallback_Server_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     CallbackObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CallbackFunctionName_FOnAttributeChangeData;              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutCurrentValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.CalcUtility
struct UConstructableAbilitySystemComponent_CalcUtility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.AllocateAttributesForPart_Server
struct UConstructableAbilitySystemComponent_AllocateAttributesForPart_Server_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.AddPartTags
struct UConstructableAbilitySystemComponent_AddPartTags_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       TagsToAdd;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableAbilitySystemComponent.AddPartTag
struct UConstructableAbilitySystemComponent_AddPartTag_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                TagToAdd;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.GetTargetActor
struct UGameplayAbilityTargetDataHandleMixinLibrary_GetTargetActor_Params
{
	struct FGameplayAbilityTargetDataHandle            Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.GetNum
struct UGameplayAbilityTargetDataHandleMixinLibrary_GetNum_Params
{
	struct FGameplayAbilityTargetDataHandle            Handle;                                                   // (Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.GetFirstReplicatedSubobject
struct UGameplayAbilityTargetDataHandleMixinLibrary_GetFirstReplicatedSubobject_Params
{
	struct FGameplayAbilityTargetDataHandle            Handle;                                                   // (Parm, OutParm)
	class UReplicatedSubobject*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.ApplyGameplayEffectSpec
struct UGameplayAbilityTargetDataHandleMixinLibrary_ApplyGameplayEffectSpec_Params
{
	struct FGameplayAbilityTargetDataHandle            Handle;                                                   // (Parm, OutParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectSpec                         Spec;                                                     // (Parm, OutParm)
};

// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.ApplyEffectToTargets
struct UGameplayAbilityTargetDataHandleMixinLibrary_ApplyEffectToTargets_Params
{
	struct FGameplayAbilityTargetDataHandle            Handle;                                                   // (Parm, OutParm)
	struct FGameplayEffectSpec                         Spec;                                                     // (Parm, OutParm)
	TArray<struct FActiveGameplayEffectHandle>         OutAppliedHandles;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               bApplyAffectedUNormAsEffectLevel;                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.AddReplicatedSubobjectTarget
struct UGameplayAbilityTargetDataHandleMixinLibrary_AddReplicatedSubobjectTarget_Params
{
	struct FGameplayAbilityTargetDataHandle            Handle;                                                   // (Parm, OutParm)
	class UReplicatedSubobject*                        TargetedObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.AddConstructableTargetData
struct UGameplayAbilityTargetDataHandleMixinLibrary_AddConstructableTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            Handle;                                                   // (Parm, OutParm)
	class AActor*                                      TargetedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FConstructablePartDamageModelData>   TargetedParts;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                PrimaryTargetPartId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.AddActorTargetData
struct UGameplayAbilityTargetDataHandleMixinLibrary_AddActorTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            Handle;                                                   // (Parm, OutParm)
	class AActor*                                      TargetedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetedActorAffectedDegreeUNorm;                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetReplicateAffectedPartIDs
struct UGameplayEffectContextMixinLibrary_SetReplicateAffectedPartIDs_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetRawDamage
struct UGameplayEffectContextMixinLibrary_SetRawDamage_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              RawDamage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetPrimaryTargetPartId
struct UGameplayEffectContextMixinLibrary_SetPrimaryTargetPartId_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                PrimaryAffectedPart;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetOriginatorObject
struct UGameplayEffectContextMixinLibrary_SetOriginatorObject_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Originator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetEventID
struct UGameplayEffectContextMixinLibrary_SetEventID_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (Parm, OutParm)
	int                                                InEventID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetDamageType
struct UGameplayEffectContextMixinLibrary_SetDamageType_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (Parm, OutParm)
	unsigned char                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetAttackingPartInfo
struct UGameplayEffectContextMixinLibrary_SetAttackingPartInfo_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FConstructablePartAttackerData              AttackingPartInfo;                                        // (Parm, OutParm)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetAffectedParts
struct UGameplayEffectContextMixinLibrary_SetAffectedParts_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FConstructablePartDamageModelData>   AffectedParts;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetAffectActorAttributes
struct UGameplayEffectContextMixinLibrary_SetAffectActorAttributes_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bShouldAffectActorAttributes;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetActorRawTakenDamage
struct UGameplayEffectContextMixinLibrary_SetActorRawTakenDamage_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              RawDamage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetActorAffectedDegreeUNorm
struct UGameplayEffectContextMixinLibrary_SetActorAffectedDegreeUNorm_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (Parm, OutParm)
	float                                              ActorAffectedDegreeUNorm;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.IsReplicatingAffectedPartIDs
struct UGameplayEffectContextMixinLibrary_IsReplicatingAffectedPartIDs_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetRawDamage
struct UGameplayEffectContextMixinLibrary_GetRawDamage_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetPrimaryTargetPartId
struct UGameplayEffectContextMixinLibrary_GetPrimaryTargetPartId_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetOriginatorObject
struct UGameplayEffectContextMixinLibrary_GetOriginatorObject_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetEventID
struct UGameplayEffectContextMixinLibrary_GetEventID_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetDamageType
struct UGameplayEffectContextMixinLibrary_GetDamageType_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAttackingPartInfo
struct UGameplayEffectContextMixinLibrary_GetAttackingPartInfo_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FConstructablePartAttackerData              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectedPartsNum
struct UGameplayEffectContextMixinLibrary_GetAffectedPartsNum_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectedParts
struct UGameplayEffectContextMixinLibrary_GetAffectedParts_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FConstructablePartDamageModelData>   AffectedParts;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectedPartIDs
struct UGameplayEffectContextMixinLibrary_GetAffectedPartIDs_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectedPart
struct UGameplayEffectContextMixinLibrary_GetAffectedPart_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                PartIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConstructablePartDamageModelData           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectActorAttributes
struct UGameplayEffectContextMixinLibrary_GetAffectActorAttributes_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetActorRawTakenDamage
struct UGameplayEffectContextMixinLibrary_GetActorRawTakenDamage_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetActorAffectedDegreeUNorm
struct UGameplayEffectContextMixinLibrary_GetActorAffectedDegreeUNorm_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.AddAffectedParts
struct UGameplayEffectContextMixinLibrary_AddAffectedParts_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FConstructablePartDamageModelData>   AffectedParts;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.AddAffectedPart
struct UGameplayEffectContextMixinLibrary_AddAffectedPart_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FConstructablePartDamageModelData           AffectedPart;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.GrantedTagsMixinLibrary.AddGrantedTags
struct UGrantedTagsMixinLibrary_AddGrantedTags_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, OutParm)
	struct FGameplayTagContainer                       InGameplayTagsToAdd;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.GrantedTagsMixinLibrary.AddGrantedTag
struct UGrantedTagsMixinLibrary_AddGrantedTag_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, OutParm)
	struct FGameplayTag                                InTagToAdd;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.SetDynamicSubtree
struct AConstructableAIControllerBase_SetDynamicSubtree_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBehaviorTree*                               BehaviorTree;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.RequestFocus_Internal
struct AConstructableAIControllerBase_RequestFocus_Internal_Params
{
	struct FFocusRequest                               Request;                                                  // (Parm)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.RequestFocus
struct AConstructableAIControllerBase_RequestFocus_Params
{
	struct FFocusRequest                               Request;                                                  // (Parm)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.RemovePartPerceptionComponent
struct AConstructableAIControllerBase_RemovePartPerceptionComponent_Params
{
	int                                                OwningPartID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.IsRequestValid_Internal
struct AConstructableAIControllerBase_IsRequestValid_Internal_Params
{
	struct FFocusRequest                               Request;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.IsRequestValid
struct AConstructableAIControllerBase_IsRequestValid_Params
{
	struct FFocusRequest                               Request;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.HasValidFocus_Internal
struct AConstructableAIControllerBase_HasValidFocus_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.HasValidFocus
struct AConstructableAIControllerBase_HasValidFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.HasDynamicTreeTag
struct AConstructableAIControllerBase_HasDynamicTreeTag_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.GetCurrentFocus_Internal
struct AConstructableAIControllerBase_GetCurrentFocus_Internal_Params
{
	struct FFocusTarget                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.GetCurrentFocus
struct AConstructableAIControllerBase_GetCurrentFocus_Params
{
	struct FFocusTarget                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.ClearFocus_Internal
struct AConstructableAIControllerBase_ClearFocus_Internal_Params
{
	enum class EAIFocusMode                            FocusMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.ClearFocus
struct AConstructableAIControllerBase_ClearFocus_Params
{
	enum class EAIFocusMode                            FocusMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.ClearDynamicSubTree
struct AConstructableAIControllerBase_ClearDynamicSubTree_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.CalcFocusRotator_Internal
struct AConstructableAIControllerBase_CalcFocusRotator_Internal_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.CalcFocusRotator
struct AConstructableAIControllerBase_CalcFocusRotator_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.CalcFocusLocation_Internal
struct AConstructableAIControllerBase_CalcFocusLocation_Internal_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.CalcFocusLocation
struct AConstructableAIControllerBase_CalcFocusLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableAIControllerBase.AddPartPerceptionComponent
struct AConstructableAIControllerBase_AddPartPerceptionComponent_Params
{
	class USceneComponent*                             OwningComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UAISenseConfig*>                      SenseConfigs;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                OwningPartID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.QueryPartsNoParams
struct AConstructableBase_QueryPartsNoParams_Params
{
	struct FGameplayTagQuery                           PartQuery;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FConstructablePart>                  OutParts;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkConstructable.ConstructableBase.QueryParts
struct AConstructableBase_QueryParts_Params
{
	struct FGameplayTagQuery                           PartQuery;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FConstructablePartQueryParams               QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FConstructablePart>                  OutParts;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkConstructable.ConstructableBase.QueryPartIDs
struct AConstructableBase_QueryPartIDs_Params
{
	struct FGameplayTagQuery                           PartQuery;                                                // (Parm)
};

// Function EmbarkConstructable.ConstructableBase.PumpServiceDataToStyles_Client
struct AConstructableBase_PumpServiceDataToStyles_Client_Params
{
	float                                              DeltaTimeSecs;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.OnActorFinalized
struct AConstructableBase_OnActorFinalized_Params
{
};

// Function EmbarkConstructable.ConstructableBase.IsValidPartID
struct AConstructableBase_IsValidPartID_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.IsPartDestroyed
struct AConstructableBase_IsPartDestroyed_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.IsConstructableDestroyed
struct AConstructableBase_IsConstructableDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.GetStyleComponentFromPartID
struct AConstructableBase_GetStyleComponentFromPartID_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.GetSocketRepIndex
struct AConstructableBase_GetSocketRepIndex_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                OutSocketIndex;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.GetSocketDataFromRepIndex
struct AConstructableBase_GetSocketDataFromRepIndex_Params
{
	int                                                SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutPartId;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OutSocketName;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.GetRootPartID
struct AConstructableBase_GetRootPartID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.GetRootPart
struct AConstructableBase_GetRootPart_Params
{
	struct FConstructablePart                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.ConstructableBase.GetPartTags
struct AConstructableBase_GetPartTags_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OutGameplayTags;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.GetPartSocketGroupTransforms
struct AConstructableBase_GetPartSocketGroupTransforms_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketGroupName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FTransform>                          OutTransforms;                                            // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.GetPartSocketGroup
struct AConstructableBase_GetPartSocketGroup_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketGroupName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FConstructableStyleSocket>           OutSocketList;                                            // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.GetPartFromID
struct AConstructableBase_GetPartFromID_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConstructablePart                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.ConstructableBase.GetLastPartID
struct AConstructableBase_GetLastPartID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.GetFirstPartSocketGroupTransform
struct AConstructableBase_GetFirstPartSocketGroupTransform_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketGroupName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform                                  OutSocketTransform;                                       // (Parm, OutParm, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.GetFirstPartSocketGroup
struct AConstructableBase_GetFirstPartSocketGroup_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketGroupName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FConstructableStyleSocket                   OutSocket;                                                // (Parm, OutParm)
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.GetConstructableASC
struct AConstructableBase_GetConstructableASC_Params
{
	class UConstructableAbilitySystemComponent*        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.GetAllStyleComponents
struct AConstructableBase_GetAllStyleComponents_Params
{
	TArray<class UPrimitiveComponent*>                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkConstructable.ConstructableBase.GetAllParts
struct AConstructableBase_GetAllParts_Params
{
	TArray<struct FConstructablePart>                  OutAllParts;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkConstructable.ConstructableBase.GetAllPartIDs
struct AConstructableBase_GetAllPartIDs_Params
{
	TArray<int>                                        OutAllPartIDs;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkConstructable.ConstructableBase.DestroyPart_Server
struct AConstructableBase_DestroyPart_Server_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EConstructableHealthChangeReason        DestructionMethod;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.CreateConstructablePart_Server
struct AConstructableBase_CreateConstructablePart_Server_Params
{
	class UClass*                                      StyleComponentClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConstructablePartIDRange                   OutPartIDRange;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableBase.CompleteConstruction
struct AConstructableBase_CompleteConstruction_Params
{
};

// Function EmbarkConstructable.ConstructableServiceComponentBase.SimClassType
struct UConstructableServiceComponentBase_SimClassType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableServiceComponentBase.OnPumpDataToStyle
struct UConstructableServiceComponentBase_OnPumpDataToStyle_Params
{
	float                                              DeltaTimeSecs;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableServiceComponentBase.OnFullyConstructed
struct UConstructableServiceComponentBase_OnFullyConstructed_Params
{
};

// Function EmbarkConstructable.ConstructableServiceComponentBase.GetSimBaseStatePtr
struct UConstructableServiceComponentBase_GetSimBaseStatePtr_Params
{
	class USimConstructableBaseClass*                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableServiceComponentBase.EditSimBaseStatePtr
struct UConstructableServiceComponentBase_EditSimBaseStatePtr_Params
{
	class USimConstructableBaseClass*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableCapabilityServiceBase.OnCapabilityEvent_Client
struct UConstructableCapabilityServiceBase_OnCapabilityEvent_Client_Params
{
	class UConstructableCapabilityBase*                Capability;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConstructableCapabilityEvent               EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableCapabilityServiceBase.NetMulticast_StateMachine
struct UConstructableCapabilityServiceBase_NetMulticast_StateMachine_Params
{
	TArray<struct FConstructableSMNetworkData>         Data;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableCapabilityServiceBase.NetMulticast_EventData
struct UConstructableCapabilityServiceBase_NetMulticast_EventData_Params
{
	TArray<struct FConstructableCapabilityEvent>       Data;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableDynamicAttributes.IsValidAttributeName
struct UConstructableDynamicAttributes_IsValidAttributeName_Params
{
	struct FName                                       AttributeTypeName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableDynamicAttributes.GetSetClassesForAttributeName
struct UConstructableDynamicAttributes_GetSetClassesForAttributeName_Params
{
	struct FName                                       AttributeTypeName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              OutAttributeSetClasses;                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableDynamicAttributes.GetPartAttributeSetMetaData
struct UConstructableDynamicAttributes_GetPartAttributeSetMetaData_Params
{
	class UClass*                                      BaseClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConstructablePartAttributeSetMetaData      OutMetaData;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableDynamicAttributes.GetMaxPrefixVersionName
struct UConstructableDynamicAttributes_GetMaxPrefixVersionName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableDynamicAttributes.GetAllAttributeNames
struct UConstructableDynamicAttributes_GetAllAttributeNames_Params
{
};

// Function EmbarkConstructable.ConstructableGameplayAbility.CanActivateConstructableAbility
struct UConstructableGameplayAbility_CanActivateConstructableAbility_Params
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayAbilityActorInfo                   ScopedActorInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableGameplayAbility.CalculateUtility
struct UConstructableGameplayAbility_CalculateUtility_Params
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayAbilityActorInfo                   ScopedActorInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableGameplayAbility.ActivateConstructableAbility
struct UConstructableGameplayAbility_ActivateConstructableAbility_Params
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayAbilityActorInfo                   ScopedActorInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableGameplayCueNotify_Actor.OnConstructableDestroyed
struct AConstructableGameplayCueNotify_Actor_OnConstructableDestroyed_Params
{
	class AConstructableBase*                          Constructable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableGameplayCueNotify_Actor.Handle_OnConstructableDestroyed
struct AConstructableGameplayCueNotify_Actor_Handle_OnConstructableDestroyed_Params
{
	class AConstructableBase*                          Constructable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.SimConstructableBaseClass.GetService
struct USimConstructableBaseClass_GetService_Params
{
	class UConstructableServiceComponentBase*          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkConstructable.SimConstructableBaseClass.FindAndSetServiceForActor
struct USimConstructableBaseClass_FindAndSetServiceForActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ServiceClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.SimConstructableBaseClass.DeinitFromReplication
struct USimConstructableBaseClass_DeinitFromReplication_Params
{
};

// Function EmbarkConstructable.ConstructableDamageDataArraySimState.OnRep_Items
struct UConstructableDamageDataArraySimState_OnRep_Items_Params
{
};

// Function EmbarkConstructable.ConstructableDamageDataArraySimState.InitForActor
struct UConstructableDamageDataArraySimState_InitForActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableFastArrayReplicationServiceComponentBase.StartDeferredEventProcessing_Server
struct UConstructableFastArrayReplicationServiceComponentBase_StartDeferredEventProcessing_Server_Params
{
};

// Function EmbarkConstructable.ConstructableHealthServiceComponent.ReplicatePartDamageData_Server
struct UConstructableHealthServiceComponent_ReplicatePartDamageData_Server_Params
{
	struct FConstructableDamageData                    DamageData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableHealthServiceComponent.PollLatestHealthData
struct UConstructableHealthServiceComponent_PollLatestHealthData_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConstructableDamageData                    OutLatestHealthData;                                      // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableHealthServiceComponent.PollInterpolatedHealthData
struct UConstructableHealthServiceComponent_PollInterpolatedHealthData_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConstructableDamageData                    OutInterpolatedHealthData;                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableHealthServiceComponent.HandlePartDamaged
struct UConstructableHealthServiceComponent_HandlePartDamaged_Params
{
	class UPrimitiveComponent*                         OwnerStyleComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FConstructableDamageData                    DamageData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableHoverMovementUtils.CalculateThrusterLocalForces
struct UConstructableHoverMovementUtils_CalculateThrusterLocalForces_Params
{
	struct FThrusterSimParams                          ThrusterSimParams;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FThrusterDefinition>                 InOutThrusters;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkConstructable.ConstructableMovementComponentBase.UpdateNetStateFromBaseMovementState_Server
struct UConstructableMovementComponentBase_UpdateNetStateFromBaseMovementState_Server_Params
{
	class UConstructableMovementNetState*              NetState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableMovementComponentBase.UpdateBaseMovementStateFromNetState_Client
struct UConstructableMovementComponentBase_UpdateBaseMovementStateFromNetState_Client_Params
{
	class UConstructableMovementNetState*              NetState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableMovementComponentBase.SetEnableStructDeltaCompression
struct UConstructableMovementComponentBase_SetEnableStructDeltaCompression_Params
{
};

// Function EmbarkConstructable.ConstructableMovementComponentBase.RemovePhysicsSuppressor
struct UConstructableMovementComponentBase_RemovePhysicsSuppressor_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableMovementComponentBase.RemoveMovementSuppressor
struct UConstructableMovementComponentBase_RemoveMovementSuppressor_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableMovementComponentBase.OnRep_RootTransform
struct UConstructableMovementComponentBase_OnRep_RootTransform_Params
{
};

// Function EmbarkConstructable.ConstructableMovementComponentBase.OnPhysicsSuppressionChangeState
struct UConstructableMovementComponentBase_OnPhysicsSuppressionChangeState_Params
{
	bool                                               bNewSupressionState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableMovementComponentBase.GetDesiredVelocity
struct UConstructableMovementComponentBase_GetDesiredVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableMovementComponentBase.GetCurrentLocalRotationOffset
struct UConstructableMovementComponentBase_GetCurrentLocalRotationOffset_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableMovementComponentBase.GetAngularVelocity_Client
struct UConstructableMovementComponentBase_GetAngularVelocity_Client_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableMovementComponentBase.AddPhysicsSuppressor
struct UConstructableMovementComponentBase_AddPhysicsSuppressor_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableMovementComponentBase.AddMovementSuppressor
struct UConstructableMovementComponentBase_AddMovementSuppressor_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartTransform
struct UConstructablePartMixinLibrary_SetPartTransform_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (Parm, OutParm)
	bool                                               bSetWorldTransform;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartSimulatePhysics
struct UConstructablePartMixinLibrary_SetPartSimulatePhysics_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (Parm, OutParm)
	bool                                               bSimulatePhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartShouldAlwaysGenerateOverlaps
struct UConstructablePartMixinLibrary_SetPartShouldAlwaysGenerateOverlaps_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (Parm, OutParm)
	bool                                               bShouldAlwaysGenerateOverlaps;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartLinearVelocity
struct UConstructablePartMixinLibrary_SetPartLinearVelocity_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (Parm, OutParm)
	struct FVector                                     LinearVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartCollisionProfileName
struct UConstructablePartMixinLibrary_SetPartCollisionProfileName_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (Parm, OutParm)
	struct FName                                       InCollisionProfileName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartAngularVelocityInDegrees
struct UConstructablePartMixinLibrary_SetPartAngularVelocityInDegrees_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (Parm, OutParm)
	struct FVector                                     AngularVelocityDegrees;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.SetDampingProperties
struct UConstructablePartMixinLibrary_SetDampingProperties_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (Parm, OutParm)
	float                                              LinearDamping;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngularDamping;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.RefreshSocketGroups
struct UConstructablePartMixinLibrary_RefreshSocketGroups_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (Parm, OutParm)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.IsValidPartIDForStyle
struct UConstructablePartMixinLibrary_IsValidPartIDForStyle_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.IsValid
struct UConstructablePartMixinLibrary_IsValid_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.IsStaticMesh
struct UConstructablePartMixinLibrary_IsStaticMesh_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.IsSkeletalMesh
struct UConstructablePartMixinLibrary_IsSkeletalMesh_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.IsProxy
struct UConstructablePartMixinLibrary_IsProxy_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.IsPointInsidePart
struct UConstructablePartMixinLibrary_IsPointInsidePart_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.IsPartDestroyed
struct UConstructablePartMixinLibrary_IsPartDestroyed_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetWorldTransform
struct UConstructablePartMixinLibrary_GetWorldTransform_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetWorldRotationQuat
struct UConstructablePartMixinLibrary_GetWorldRotationQuat_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetWorldRotation
struct UConstructablePartMixinLibrary_GetWorldRotation_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetWorldLocation
struct UConstructablePartMixinLibrary_GetWorldLocation_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetStyleComponent
struct UConstructablePartMixinLibrary_GetStyleComponent_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetSlotTransform
struct UConstructablePartMixinLibrary_GetSlotTransform_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWantWorldTransform;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRootPartID
struct UConstructablePartMixinLibrary_GetRootPartID_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRelativeTransform
struct UConstructablePartMixinLibrary_GetRelativeTransform_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRelativeRotationQuat
struct UConstructablePartMixinLibrary_GetRelativeRotationQuat_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRelativeRotation
struct UConstructablePartMixinLibrary_GetRelativeRotation_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRelativeLocation
struct UConstructablePartMixinLibrary_GetRelativeLocation_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartTransform
struct UConstructablePartMixinLibrary_GetPartTransform_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWantWorldTransform;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartTags
struct UConstructablePartMixinLibrary_GetPartTags_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       OutGameplayTags;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketTransform
struct UConstructablePartMixinLibrary_GetPartSocketTransform_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       SocketName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketID
struct UConstructablePartMixinLibrary_GetPartSocketID_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       SocketName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                OutSocketID;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketGroupTransforms
struct UConstructablePartMixinLibrary_GetPartSocketGroupTransforms_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       SocketGroupName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FTransform>                          OutTransformList;                                         // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketGroupNames
struct UConstructablePartMixinLibrary_GetPartSocketGroupNames_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       SocketGroupName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FName>                               OutSocketGroupNameList;                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketGroup
struct UConstructablePartMixinLibrary_GetPartSocketGroup_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       SocketGroupName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FConstructableStyleSocket>           OutSocketList;                                            // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartsIntersectingSphere
struct UConstructablePartMixinLibrary_GetPartsIntersectingSphere_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     SphereOrigin;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              SphereRadius;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutPartIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSimulatePhysics
struct UConstructablePartMixinLibrary_GetPartSimulatePhysics_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartParent
struct UConstructablePartMixinLibrary_GetPartParent_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FConstructablePartParentInfo                OutParentInfo;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartName
struct UConstructablePartMixinLibrary_GetPartName_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartMass
struct UConstructablePartMixinLibrary_GetPartMass_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              OutMass;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartLinearVelocityAtLocation
struct UConstructablePartMixinLibrary_GetPartLinearVelocityAtLocation_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutLinearVelocity;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartLinearVelocity
struct UConstructablePartMixinLibrary_GetPartLinearVelocity_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     OutLinearVelocity;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartInitialRelativeTransform
struct UConstructablePartMixinLibrary_GetPartInitialRelativeTransform_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  OutInitialRelativeTransform;                              // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartInitialRelativeRotation
struct UConstructablePartMixinLibrary_GetPartInitialRelativeRotation_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    OutInitialRelativeRotation;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartIDsMatchingTagQuery
struct UConstructablePartMixinLibrary_GetPartIDsMatchingTagQuery_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagQuery                           Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartIDRange
struct UConstructablePartMixinLibrary_GetPartIDRange_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FConstructablePartIDRange                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartIDFromPhysicsBodyIndex
struct UConstructablePartMixinLibrary_GetPartIDFromPhysicsBodyIndex_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                PhysicsBodyIndex;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutPartId;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartIDFromHitResult
struct UConstructablePartMixinLibrary_GetPartIDFromHitResult_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartCollisionProfileName
struct UConstructablePartMixinLibrary_GetPartCollisionProfileName_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartChildren
struct UConstructablePartMixinLibrary_GetPartChildren_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FConstructablePart>                  OutPartChildren;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               bIsRecursive;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlsoGetDestroyedParts;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartBounds
struct UConstructablePartMixinLibrary_GetPartBounds_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBox                                        OutBounds;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartBodyInstance
struct UConstructablePartMixinLibrary_GetPartBodyInstance_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBodyInstance                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartAngularVelocityInDegrees
struct UConstructablePartMixinLibrary_GetPartAngularVelocityInDegrees_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     OutAngularVelocityDegrees;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetNormalizedSocketGroupTransform
struct UConstructablePartMixinLibrary_GetNormalizedSocketGroupTransform_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       SocketGroupName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetFirstPartSocketGroupTransform
struct UConstructablePartMixinLibrary_GetFirstPartSocketGroupTransform_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       SocketGroupName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetFirstPartSocketGroup
struct UConstructablePartMixinLibrary_GetFirstPartSocketGroup_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       SocketGroupName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FConstructableStyleSocket                   OutSocket;                                                // (Parm, OutParm)
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetAttachSocketName
struct UConstructablePartMixinLibrary_GetAttachSocketName_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.DestroyPart
struct UConstructablePartMixinLibrary_DestroyPart_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (Parm, OutParm)
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EConstructableHealthChangeReason        DestructionMethod;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.AttachActor
struct UConstructablePartMixinLibrary_AttachActor_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (Parm, OutParm)
	class AActor*                                      ActorToAttach;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EAttachmentRule                         AttachmentRule;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.AddSocketData
struct UConstructablePartMixinLibrary_AddSocketData_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (Parm, OutParm)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.AddPartTags
struct UConstructablePartMixinLibrary_AddPartTags_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (Parm, OutParm)
	struct FGameplayTagContainer                       PartTags;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.AddPartImpulseAtLocation
struct UConstructablePartMixinLibrary_AddPartImpulseAtLocation_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (Parm, OutParm)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartMixinLibrary.AddPartForceAtLocation
struct UConstructablePartMixinLibrary_AddPartForceAtLocation_Params
{
	struct FConstructablePart                          ConstructablePart;                                        // (Parm, OutParm)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Force;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartListMixinLibrary.IsEmpty
struct UConstructablePartListMixinLibrary_IsEmpty_Params
{
	struct FConstructablePartList                      ConstructablePartList;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartListMixinLibrary.GetPartList
struct UConstructablePartListMixinLibrary_GetPartList_Params
{
	struct FConstructablePartList                      ConstructablePartList;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FConstructablePart>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkConstructable.ConstructablePartListMixinLibrary.GetPartIDs
struct UConstructablePartListMixinLibrary_GetPartIDs_Params
{
	struct FConstructablePartList                      ConstructablePartList;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkConstructable.ConstructablePartListMixinLibrary.GetFirstPartID
struct UConstructablePartListMixinLibrary_GetFirstPartID_Params
{
	struct FConstructablePartList                      ConstructablePartList;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartListMixinLibrary.ContainsPartID
struct UConstructablePartListMixinLibrary_ContainsPartID_Params
{
	struct FConstructablePartList                      ConstructablePartList;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartSelectionMixinLibrary.IsValidPartID
struct UConstructablePartSelectionMixinLibrary_IsValidPartID_Params
{
	struct FConstructablePartSelection                 PartSelection;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartSelectionMixinLibrary.GetConstructablePart
struct UConstructablePartSelectionMixinLibrary_GetConstructablePart_Params
{
	struct FConstructablePartSelection                 PartSelection;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FConstructablePart                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.IsValid
struct UConstructablePartTransformMixinLibrary_IsValid_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetWorldTransform
struct UConstructablePartTransformMixinLibrary_GetWorldTransform_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetWorldRotationQuat
struct UConstructablePartTransformMixinLibrary_GetWorldRotationQuat_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetWorldRotation
struct UConstructablePartTransformMixinLibrary_GetWorldRotation_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetWorldLocation
struct UConstructablePartTransformMixinLibrary_GetWorldLocation_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetSocketName
struct UConstructablePartTransformMixinLibrary_GetSocketName_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeTransformByParam
struct UConstructablePartTransformMixinLibrary_GetRelativeTransformByParam_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EConstructablePartRelativeTransformSpace TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeTransform
struct UConstructablePartTransformMixinLibrary_GetRelativeTransform_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeRotationQuatByParam
struct UConstructablePartTransformMixinLibrary_GetRelativeRotationQuatByParam_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EConstructablePartRelativeTransformSpace TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeRotationQuat
struct UConstructablePartTransformMixinLibrary_GetRelativeRotationQuat_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeRotationByParam
struct UConstructablePartTransformMixinLibrary_GetRelativeRotationByParam_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EConstructablePartRelativeTransformSpace TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeRotation
struct UConstructablePartTransformMixinLibrary_GetRelativeRotation_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeLocationByParam
struct UConstructablePartTransformMixinLibrary_GetRelativeLocationByParam_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EConstructablePartRelativeTransformSpace TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeLocation
struct UConstructablePartTransformMixinLibrary_GetRelativeLocation_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetPartName
struct UConstructablePartTransformMixinLibrary_GetPartName_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetPartID
struct UConstructablePartTransformMixinLibrary_GetPartID_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetComponent
struct UConstructablePartTransformMixinLibrary_GetComponent_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.AttachComponentToPart
struct UConstructablePartTransformMixinLibrary_AttachComponentToPart_Params
{
	struct FConstructablePartTransform                 ConstructablePartTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             OtherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartSelectionContainerMixinLibrary.Setup
struct UConstructablePartSelectionContainerMixinLibrary_Setup_Params
{
	struct FConstructablePartTransformSelection        PartSelectionContainer;                                   // (Parm, OutParm)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartSelectionContainerMixinLibrary.GetPart
struct UConstructablePartSelectionContainerMixinLibrary_GetPart_Params
{
	struct FConstructablePartTransformSelection        PartSelectionContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FConstructablePart                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.ConstructablePartSelectionContainerMixinLibrary.GetAsPartTransform
struct UConstructablePartSelectionContainerMixinLibrary_GetAsPartTransform_Params
{
	struct FConstructablePartTransformSelection        PartSelectionContainer;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FConstructablePartTransform                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.ConstructablePerceptionServiceComponent.OnPartDestroyed
struct UConstructablePerceptionServiceComponent_OnPartDestroyed_Params
{
	class UConstructableHealthServiceComponent*        HealthServiceComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         OwnerStyle;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FConstructableDamageData                    LatestData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.WeldAllKinematics
struct UConstructableSkeletalMeshStyleComponent_WeldAllKinematics_Params
{
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.UnWeldBody
struct UConstructableSkeletalMeshStyleComponent_UnWeldBody_Params
{
	int                                                BodyInstanceIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.TermBody
struct UConstructableSkeletalMeshStyleComponent_TermBody_Params
{
	int                                                BodyInstanceIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPhysicsLinearConstraintLimit
struct UConstructableSkeletalMeshStyleComponent_SetPhysicsLinearConstraintLimit_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewLimit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPhysicsConstraintLimits
struct UConstructableSkeletalMeshStyleComponent_SetPhysicsConstraintLimits_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAngularConstraintData                      NewLimits;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPartSimulatePhysics
struct UConstructableSkeletalMeshStyleComponent_SetPartSimulatePhysics_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulatePhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPartLocalTransform
struct UConstructableSkeletalMeshStyleComponent_SetPartLocalTransform_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPartInComponentSpace
struct UConstructableSkeletalMeshStyleComponent_SetPartInComponentSpace_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsComponentSpace;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPartCollisionProfileName
struct UConstructableSkeletalMeshStyleComponent_SetPartCollisionProfileName_Params
{
	int                                                ParID;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InCollisionProfileName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetDampingProperties
struct UConstructableSkeletalMeshStyleComponent_SetDampingProperties_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LinearDamping;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngularDamping;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintLinearVelocityTarget
struct UConstructableSkeletalMeshStyleComponent_SetConstraintLinearVelocityTarget_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewVelocityTarget;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintLinearPositionTarget
struct UConstructableSkeletalMeshStyleComponent_SetConstraintLinearPositionTarget_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewPositionTarget;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintLinearDriveParams
struct UConstructableSkeletalMeshStyleComponent_SetConstraintLinearDriveParams_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Spring;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damper;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintAngularVelocityTarget
struct UConstructableSkeletalMeshStyleComponent_SetConstraintAngularVelocityTarget_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewVelocityTarget;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintAngularOrientationTarget
struct UConstructableSkeletalMeshStyleComponent_SetConstraintAngularOrientationTarget_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewOrientationTarget;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintAngularDriveParams
struct UConstructableSkeletalMeshStyleComponent_SetConstraintAngularDriveParams_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PositionStrength;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityStrength;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationStrength;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetBoneTransformByName
struct UConstructableSkeletalMeshStyleComponent_SetBoneTransformByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetBodySolverIterations
struct UConstructableSkeletalMeshStyleComponent_SetBodySolverIterations_Params
{
	int                                                Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetBodyCollisionProfileName
struct UConstructableSkeletalMeshStyleComponent_SetBodyCollisionProfileName_Params
{
	int                                                BodyInstanceIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InCollisionProfileName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SeparateDrivenConstraints
struct UConstructableSkeletalMeshStyleComponent_SeparateDrivenConstraints_Params
{
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.ResetBoneTransformByName
struct UConstructableSkeletalMeshStyleComponent_ResetBoneTransformByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.RefreshPartsAllowedToOverlap
struct UConstructableSkeletalMeshStyleComponent_RefreshPartsAllowedToOverlap_Params
{
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PhysicsBodyIndexToPartID
struct UConstructableSkeletalMeshStyleComponent_PhysicsBodyIndexToPartID_Params
{
	int                                                PhysicsBodyIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PhysicsBodyIndexToBoneName
struct UConstructableSkeletalMeshStyleComponent_PhysicsBodyIndexToBoneName_Params
{
	int                                                PhysicsBodyIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PartIDToPhysicsBodyIndex
struct UConstructableSkeletalMeshStyleComponent_PartIDToPhysicsBodyIndex_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PartIDToBoneName
struct UConstructableSkeletalMeshStyleComponent_PartIDToBoneName_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PartIDToBoneIndex
struct UConstructableSkeletalMeshStyleComponent_PartIDToBoneIndex_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.OnPartHealthChanged
struct UConstructableSkeletalMeshStyleComponent_OnPartHealthChanged_Params
{
	struct FConstructableDamageData                    LatestHealthData;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.OnPartDestroyed
struct UConstructableSkeletalMeshStyleComponent_OnPartDestroyed_Params
{
	struct FConstructableDamageData                    DestructionData;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.OnFullyConstructed
struct UConstructableSkeletalMeshStyleComponent_OnFullyConstructed_Params
{
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.InitializeTSSConstraint
struct UConstructableSkeletalMeshStyleComponent_InitializeTSSConstraint_Params
{
	struct FTSSDriveParams                             Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.InitializeSLERPConstraint
struct UConstructableSkeletalMeshStyleComponent_InitializeSLERPConstraint_Params
{
	struct FSLERPDriveParams                           Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.InitializeLinearConstraint
struct UConstructableSkeletalMeshStyleComponent_InitializeLinearConstraint_Params
{
	struct FLinearDriveParams                          Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetSkeletalBodySetups
struct UConstructableSkeletalMeshStyleComponent_GetSkeletalBodySetups_Params
{
	TArray<class USkeletalBodySetup*>                  OutSkeletalBodySetups;                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetRootBodyIndex
struct UConstructableSkeletalMeshStyleComponent_GetRootBodyIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsLinearConstraint
struct UConstructableSkeletalMeshStyleComponent_GetPhysicsLinearConstraint_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearConstraintData                       OutConstraint;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsConstraintTwistSwing1Swing2
struct UConstructableSkeletalMeshStyleComponent_GetPhysicsConstraintTwistSwing1Swing2_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsConstraintsForBody
struct UConstructableSkeletalMeshStyleComponent_GetPhysicsConstraintsForBody_Params
{
	int                                                PhysicsBodyIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutConstraintIndices;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsConstraintName
struct UConstructableSkeletalMeshStyleComponent_GetPhysicsConstraintName_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsConstraintLimits
struct UConstructableSkeletalMeshStyleComponent_GetPhysicsConstraintLimits_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAngularConstraintData                      OutLimits;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPartMass
struct UConstructableSkeletalMeshStyleComponent_GetPartMass_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutMass;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPartLocalTransform
struct UConstructableSkeletalMeshStyleComponent_GetPartLocalTransform_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPartIDRange
struct UConstructableSkeletalMeshStyleComponent_GetPartIDRange_Params
{
	struct FConstructablePartIDRange                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPartBounds
struct UConstructableSkeletalMeshStyleComponent_GetPartBounds_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        OutBounds;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetParentPhysicsBodyIndexFromConstraint
struct UConstructableSkeletalMeshStyleComponent_GetParentPhysicsBodyIndexFromConstraint_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetNumConstraintInstances
struct UConstructableSkeletalMeshStyleComponent_GetNumConstraintInstances_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetNumBodyInstances
struct UConstructableSkeletalMeshStyleComponent_GetNumBodyInstances_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetConstraintFrame
struct UConstructableSkeletalMeshStyleComponent_GetConstraintFrame_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EConstraintFrame>                      Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetConstraintForce
struct UConstructableSkeletalMeshStyleComponent_GetConstraintForce_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLinearForce;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutAngularForce;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetConstraintDrive
struct UConstructableSkeletalMeshStyleComponent_GetConstraintDrive_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularDriveMode>                     OutDriveMode;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetComponentSpaceRefPose
struct UConstructableSkeletalMeshStyleComponent_GetComponentSpaceRefPose_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetChildPhysicsBodyIndexFromConstraint
struct UConstructableSkeletalMeshStyleComponent_GetChildPhysicsBodyIndexFromConstraint_Params
{
	int                                                ConstraintIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBoneTransformByName
struct UConstructableSkeletalMeshStyleComponent_GetBoneTransformByName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBoneSpaceRefPose
struct UConstructableSkeletalMeshStyleComponent_GetBoneSpaceRefPose_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBodyTransformFromIndex
struct UConstructableSkeletalMeshStyleComponent_GetBodyTransformFromIndex_Params
{
	int                                                BodyInstanceIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBodyInstanceFromIndex
struct UConstructableSkeletalMeshStyleComponent_GetBodyInstanceFromIndex_Params
{
	int                                                BodyInstanceIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBodyInstance                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBodyCollisionProfileName
struct UConstructableSkeletalMeshStyleComponent_GetBodyCollisionProfileName_Params
{
	int                                                BodyInstanceIndex;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetActivePhysicsAsset
struct UConstructableSkeletalMeshStyleComponent_GetActivePhysicsAsset_Params
{
	class UPhysicsAsset*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.CopyPoseFromSkeletalComponent
struct UConstructableSkeletalMeshStyleComponent_CopyPoseFromSkeletalComponent_Params
{
	class USkinnedMeshComponent*                       InComponentToCopy;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.BreakPhysicsConstraint
struct UConstructableSkeletalMeshStyleComponent_BreakPhysicsConstraint_Params
{
	int                                                PhysicsConstraintIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.BoneNameToPhysicsBodyIndex
struct UConstructableSkeletalMeshStyleComponent_BoneNameToPhysicsBodyIndex_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.BoneNameToPartID
struct UConstructableSkeletalMeshStyleComponent_BoneNameToPartID_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.BoneIndexToPartID
struct UConstructableSkeletalMeshStyleComponent_BoneIndexToPartID_Params
{
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.AddPartImpulseAtLocation
struct UConstructableSkeletalMeshStyleComponent_AddPartImpulseAtLocation_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSkeletalReplicationServiceComponent.SetReplicationType
struct UConstructableSkeletalReplicationServiceComponent_SetReplicationType_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EConstructableReplicationType>         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSpawnSizeComponentBase.GetCollisionRadius
struct UConstructableSpawnSizeComponentBase_GetCollisionRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableSpawnSizeComponentBase.GetAutoAcquiredExtent
struct UConstructableSpawnSizeComponentBase_GetAutoAcquiredExtent_Params
{
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.OnPartHealthChanged
struct UConstructableStaticMeshStyleComponent_OnPartHealthChanged_Params
{
	struct FConstructableDamageData                    LatestHealthData;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.OnPartDestroyed
struct UConstructableStaticMeshStyleComponent_OnPartDestroyed_Params
{
	struct FConstructableDamageData                    DestructionData;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.OnFullyConstructed
struct UConstructableStaticMeshStyleComponent_OnFullyConstructed_Params
{
};

// Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.GetPartIDRange
struct UConstructableStaticMeshStyleComponent_GetPartIDRange_Params
{
	struct FConstructablePartIDRange                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.GetPartBounds
struct UConstructableStaticMeshStyleComponent_GetPartBounds_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        OutBounds;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleAssemblyBase.GetStyleComponentFromPartID
struct AConstructableStyleAssemblyBase_GetStyleComponentFromPartID_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleAssemblyBase.GetAllStyles
struct AConstructableStyleAssemblyBase_GetAllStyles_Params
{
	class AConstructableStyleAssemblyBase*             AssemblyToGetFrom;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimitiveComponent*>                 OutAllStyles;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkConstructable.ConstructableStyleDriverComponent.OnConstructableDestroyed
struct UConstructableStyleDriverComponent_OnConstructableDestroyed_Params
{
	class AActor*                                      DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleDriverComponent.Handle_ConstructableDestroyed
struct UConstructableStyleDriverComponent_Handle_ConstructableDestroyed_Params
{
	class AConstructableBase*                          InConstructable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InDamageInstigator;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleDriverComponent.GetConstructable
struct UConstructableStyleDriverComponent_GetConstructable_Params
{
	class AConstructableBase*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleDriverComponent.BP_OnFullyConstructed
struct UConstructableStyleDriverComponent_BP_OnFullyConstructed_Params
{
};

// Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.Setup
struct UConstructableStylePartListMixinLibrary_Setup_Params
{
	struct FConstructableStylePartList                 ConstructableStylePartList;                               // (Parm, OutParm)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetPartTransforms
struct UConstructableStylePartListMixinLibrary_GetPartTransforms_Params
{
	struct FConstructableStylePartList                 ConstructableStylePartList;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FConstructablePartTransform>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetPartTransformByID
struct UConstructableStylePartListMixinLibrary_GetPartTransformByID_Params
{
	struct FConstructableStylePartList                 ConstructableStylePartList;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConstructablePartTransform                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetParts
struct UConstructableStylePartListMixinLibrary_GetParts_Params
{
	struct FConstructableStylePartList                 ConstructableStylePartList;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FConstructablePart>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetPartIDs
struct UConstructableStylePartListMixinLibrary_GetPartIDs_Params
{
	struct FConstructableStylePartList                 ConstructableStylePartList;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetPartByID
struct UConstructableStylePartListMixinLibrary_GetPartByID_Params
{
	struct FConstructableStylePartList                 ConstructableStylePartList;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConstructablePart                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.ContainsPartID
struct UConstructableStylePartListMixinLibrary_ContainsPartID_Params
{
	struct FConstructableStylePartList                 ConstructableStylePartList;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.SetupWithAssembly
struct UConstructableStyleProxyMixinLibrary_SetupWithAssembly_Params
{
	struct FConstructableStyleProxy                    StyleProxy;                                               // (Parm, OutParm)
	class AConstructableStyleAssemblyBase*             Assembly;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.Setup
struct UConstructableStyleProxyMixinLibrary_Setup_Params
{
	struct FConstructableStyleProxy                    StyleProxy;                                               // (Parm, OutParm)
	class AConstructableBase*                          Constructable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetWorldTransform
struct UConstructableStyleProxyMixinLibrary_GetWorldTransform_Params
{
	struct FConstructableStyleProxy                    StyleProxy;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetWorldRotationQuat
struct UConstructableStyleProxyMixinLibrary_GetWorldRotationQuat_Params
{
	struct FConstructableStyleProxy                    StyleProxy;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetWorldRotation
struct UConstructableStyleProxyMixinLibrary_GetWorldRotation_Params
{
	struct FConstructableStyleProxy                    StyleProxy;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetWorldLocation
struct UConstructableStyleProxyMixinLibrary_GetWorldLocation_Params
{
	struct FConstructableStyleProxy                    StyleProxy;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetRelativeTransform
struct UConstructableStyleProxyMixinLibrary_GetRelativeTransform_Params
{
	struct FConstructableStyleProxy                    StyleProxy;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EConstructablePartRelativeTransformSpace TransformSpace;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetRelativeRotationQuat
struct UConstructableStyleProxyMixinLibrary_GetRelativeRotationQuat_Params
{
	struct FConstructableStyleProxy                    StyleProxy;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EConstructablePartRelativeTransformSpace TransformSpace;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetRelativeRotation
struct UConstructableStyleProxyMixinLibrary_GetRelativeRotation_Params
{
	struct FConstructableStyleProxy                    StyleProxy;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EConstructablePartRelativeTransformSpace TransformSpace;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetRelativeLocation
struct UConstructableStyleProxyMixinLibrary_GetRelativeLocation_Params
{
	struct FConstructableStyleProxy                    StyleProxy;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EConstructablePartRelativeTransformSpace TransformSpace;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleShapeComponent.OnPartHealthChanged
struct UConstructableStyleShapeComponent_OnPartHealthChanged_Params
{
	struct FConstructableDamageData                    LatestHealthData;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructablePartTargetingDataArraySimState.InitForActor
struct UConstructablePartTargetingDataArraySimState_InitForActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.TargetPartRelativeRotation_Server_Quat
struct UConstructableTargetingServiceComponent_TargetPartRelativeRotation_Server_Quat_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       RelativeRotation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTargetingServiceParams                     Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.TargetPartRelativeRotation_Server_NoParams_Quat
struct UConstructableTargetingServiceComponent_TargetPartRelativeRotation_Server_NoParams_Quat_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       RelativeRotation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.TargetPartRelativeRotation_Server_NoParams
struct UConstructableTargetingServiceComponent_TargetPartRelativeRotation_Server_NoParams_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.TargetPartRelativeRotation_Server
struct UConstructableTargetingServiceComponent_TargetPartRelativeRotation_Server_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTargetingServiceParams                     Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.PollInterpolatedTrackingData
struct UConstructableTargetingServiceComponent_PollInterpolatedTrackingData_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FConstructablePartTargetingEventData        OutData;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackWorldOrientation_Server_NoParams
struct UConstructableTargetingServiceComponent_MakePartTrackWorldOrientation_Server_NoParams_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetOrientation;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackWorldOrientation_Server
struct UConstructableTargetingServiceComponent_MakePartTrackWorldOrientation_Server_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetOrientation;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTargetingServiceParams                     Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackWorldLocation_Server_NoParams
struct UConstructableTargetingServiceComponent_MakePartTrackWorldLocation_Server_NoParams_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackWorldLocation_Server
struct UConstructableTargetingServiceComponent_MakePartTrackWorldLocation_Server_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTargetingServiceParams                     Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackConstructablePart_Server_NoParams
struct UConstructableTargetingServiceComponent_MakePartTrackConstructablePart_Server_NoParams_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AConstructableBase*                          ConstructableToTrack;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartIDToTrack;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackConstructablePart_Server
struct UConstructableTargetingServiceComponent_MakePartTrackConstructablePart_Server_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AConstructableBase*                          ConstructableToTrack;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PartIDToTrack;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTargetingServiceParams                     Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackComponent_Server_NoParams
struct UConstructableTargetingServiceComponent_MakePartTrackComponent_Server_NoParams_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ComponentToTrack;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackComponent_Server
struct UConstructableTargetingServiceComponent_MakePartTrackComponent_Server_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ComponentToTrack;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTargetingServiceParams                     Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackActor_Server_NoParams
struct UConstructableTargetingServiceComponent_MakePartTrackActor_Server_NoParams_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToTrack;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackActor_Server
struct UConstructableTargetingServiceComponent_MakePartTrackActor_Server_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToTrack;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTargetingServiceParams                     Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartStopTracking_Server_NoParams
struct UConstructableTargetingServiceComponent_MakePartStopTracking_Server_NoParams_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartStopTracking_Server
struct UConstructableTargetingServiceComponent_MakePartStopTracking_Server_Params
{
	int                                                AffectedPartID;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTargetingServiceParams                     Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableTargetingServiceComponent.GetMutablePartConfig
struct UConstructableTargetingServiceComponent_GetMutablePartConfig_Params
{
	int                                                PartID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FConstructablePartTargetingConfig           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkConstructable.ConstructableTrainingComponent.ConstructShapes
struct UConstructableTrainingComponent_ConstructShapes_Params
{
};

// Function EmbarkConstructable.ConstructableUtilsStatics.SortStyleComponentsByName
struct UConstructableUtilsStatics_SortStyleComponentsByName_Params
{
	TArray<class USceneComponent*>                     OutStyleComponent;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkConstructable.ConstructableUtilsStatics.IsStyleComponent
struct UConstructableUtilsStatics_IsStyleComponent_Params
{
	class UActorComponent*                             MaybeStyleComponent;                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableUtilsStatics.IsPartIDValid
struct UConstructableUtilsStatics_IsPartIDValid_Params
{
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableUtilsStatics.IsPartDestroyed
struct UConstructableUtilsStatics_IsPartDestroyed_Params
{
	class UPrimitiveComponent*                         MaybeStyle;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableUtilsStatics.GetStyleComponentFromPartID
struct UConstructableUtilsStatics_GetStyleComponentFromPartID_Params
{
	TArray<class UPrimitiveComponent*>                 Styles;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableUtilsStatics.GetPartsIntersectingSphere
struct UConstructableUtilsStatics_GetPartsIntersectingSphere_Params
{
	class UPrimitiveComponent*                         MaybeStyleComponent;                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     SphereOrigin;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              SphereRadius;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutPartIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkConstructable.ConstructableUtilsStatics.GetPartIDsMatchingTagQuery
struct UConstructableUtilsStatics_GetPartIDsMatchingTagQuery_Params
{
	class UPrimitiveComponent*                         MaybeStyleComponent;                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagQuery                           TagQuery;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableUtilsStatics.GetPartIDRange
struct UConstructableUtilsStatics_GetPartIDRange_Params
{
	class UPrimitiveComponent*                         MaybeStyleComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FConstructablePartIDRange                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkConstructable.ConstructableUtilsStatics.GetPartIDFromHitResult
struct UConstructableUtilsStatics_GetPartIDFromHitResult_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableUtilsStatics.GetNextAttackEventID
struct UConstructableUtilsStatics_GetNextAttackEventID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableUtilsStatics.AddSocketData
struct UConstructableUtilsStatics_AddSocketData_Params
{
	class USceneComponent*                             MaybeStyle;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableUtils.GetNextAttackEventID
struct UConstructableUtils_GetNextAttackEventID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStyleComponentMixinLibrary.IsStyleComponent
struct UConstructableStyleComponentMixinLibrary_IsStyleComponent_Params
{
	class UActorComponent*                             Style;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStylePartIDRangeMixinLibrary.IsValid
struct UConstructableStylePartIDRangeMixinLibrary_IsValid_Params
{
	struct FConstructablePartIDRange                   PartIDRange;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStylePartIDRangeMixinLibrary.IsPartIDInRange
struct UConstructableStylePartIDRangeMixinLibrary_IsPartIDInRange_Params
{
	struct FConstructablePartIDRange                   PartIDRange;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructableStylePartIDRangeMixinLibrary.GetLastID
struct UConstructableStylePartIDRangeMixinLibrary_GetLastID_Params
{
	struct FConstructablePartIDRange                   PartIDRange;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.ConstructablePartParentInfoMixinLibrary.IsValid
struct UConstructablePartParentInfoMixinLibrary_IsValid_Params
{
	struct FConstructablePartParentInfo                PartParentInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkConstructable.EmbarkAbilityTask_ClientSendInteractionTargetData.ClientSendInteractionTargetData
struct UEmbarkAbilityTask_ClientSendInteractionTargetData_ClientSendInteractionTargetData_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InteractionIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionSourcePoint;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHandleInteraction;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FComponentOrStyle                           PrimitiveInteractedWith;                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UEmbarkAbilityTask_ClientSendInteractionTargetData* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
