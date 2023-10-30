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

// Function EmbarkFracturedDestructible.EmbarkDestructionCollectorSubsystem.RegisterListener
struct UEmbarkDestructionCollectorSubsystem_RegisterListener_Params
{
	class UEmbarkDestructionListenerVolumeComponent*   Listener;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkDestructionCollectorSubsystem.AddDestructionEvent
struct UEmbarkDestructionCollectorSubsystem_AddDestructionEvent_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extents;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EDestructionEventType                   EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.TryGetBoneHandle
struct AEmbarkDestructionGraphActor_TryGetBoneHandle_Params
{
	class UEmbarkFracturedDestructibleMeshComponent*   InFracturedDestructibleMeshComponent;                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InBoneIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDestructibleBoneHandle                     OutBoneHandle;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.OnRep_DestructionGraphHash
struct AEmbarkDestructionGraphActor_OnRep_DestructionGraphHash_Params
{
};

// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.OnRep_BlackBoardReplicationPtr
struct AEmbarkDestructionGraphActor_OnRep_BlackBoardReplicationPtr_Params
{
};

// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.IsValidBoneLink
struct AEmbarkDestructionGraphActor_IsValidBoneLink_Params
{
	struct FDestructibleBoneHandle                     InBoneHandle;                                             // (Parm)
	int                                                LinkIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetStrainBonesLevelData
struct AEmbarkDestructionGraphActor_GetStrainBonesLevelData_Params
{
	TArray<struct FFracturedDestructibleStrainBone>    ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetFromComponent
struct AEmbarkDestructionGraphActor_GetFromComponent_Params
{
	class UActorComponent*                             InComponentContext;                                       // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AEmbarkDestructionGraphActor*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetFromActor
struct AEmbarkDestructionGraphActor_GetFromActor_Params
{
	class AActor*                                      InActorContext;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AEmbarkDestructionGraphActor*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetBonesLevelData
struct AEmbarkDestructionGraphActor_GetBonesLevelData_Params
{
	TArray<struct FFracturedDestructibleBoneLevelData> ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetBoneHealth
struct AEmbarkDestructionGraphActor_GetBoneHealth_Params
{
	struct FDestructibleBoneHandle                     InBoneHandle;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetBoneFracturedDestructibleComponent
struct AEmbarkDestructionGraphActor_GetBoneFracturedDestructibleComponent_Params
{
	struct FDestructibleBoneHandle                     InBoneHandle;                                             // (Parm)
	class UEmbarkFracturedDestructibleMeshComponent*   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.FindAllConnectedBones
struct AEmbarkDestructionGraphActor_FindAllConnectedBones_Params
{
	struct FDestructibleBoneHandle                     InBoneHandle;                                             // (Parm)
	bool                                               bIncludeBrokenConnections;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDestroyedBones;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.DamageBone
struct AEmbarkDestructionGraphActor_DamageBone_Params
{
	struct FDestructibleBoneHandle                     InBoneHandle;                                             // (Parm)
	struct FBoneDamage                                 Damage;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.BoneHasAnyValidConnections
struct AEmbarkDestructionGraphActor_BoneHasAnyValidConnections_Params
{
	struct FDestructibleBoneHandle                     InBoneHandle;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.FracturedMaterialsSettings.GetDefaultMapping
struct UFracturedMaterialsSettings_GetDefaultMapping_Params
{
	class UFracturedMaterialMapping*                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.FracturedMaterialSubsystem.OnMappingLoaded
struct UFracturedMaterialSubsystem_OnMappingLoaded_Params
{
};

// Function EmbarkFracturedDestructible.FracturedStrainSettings.GetDefaultStrainSettingsAsset
struct UFracturedStrainSettings_GetDefaultStrainSettingsAsset_Params
{
	class UStrainSettingsAsset*                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.StartSimulateFractured
struct UEmbarkFracturedDestructibleMeshComponent_StartSimulateFractured_Params
{
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.OnHitCallback
struct UEmbarkFracturedDestructibleMeshComponent_OnHitCallback_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.OnFireObjectStateChanged
struct UEmbarkFracturedDestructibleMeshComponent_OnFireObjectStateChanged_Params
{
	struct FEmbarkFireOnStateChangedData               ChangedData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.OnBoneDamagedCallback
struct UEmbarkFracturedDestructibleMeshComponent_OnBoneDamagedCallback_Params
{
	struct FBoneDamageEventType                        Damage;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.IsBoneDestroyed
struct UEmbarkFracturedDestructibleMeshComponent_IsBoneDestroyed_Params
{
	int                                                InBoneIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetWeldedBoneTransform
struct UEmbarkFracturedDestructibleMeshComponent_GetWeldedBoneTransform_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetNumBones
struct UEmbarkFracturedDestructibleMeshComponent_GetNumBones_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetMaterialSettings
struct UEmbarkFracturedDestructibleMeshComponent_GetMaterialSettings_Params
{
	struct FName                                       Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UFracturedMaterialAsset*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetDestructibleMeshAssetData
struct UEmbarkFracturedDestructibleMeshComponent_GetDestructibleMeshAssetData_Params
{
	class UEmbarkFracturedDestructibleMeshAssetUserData* ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneTransform
struct UEmbarkFracturedDestructibleMeshComponent_GetBoneTransform_Params
{
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneSimulatePhysics
struct UEmbarkFracturedDestructibleMeshComponent_GetBoneSimulatePhysics_Params
{
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneNameSimulatePhysics
struct UEmbarkFracturedDestructibleMeshComponent_GetBoneNameSimulatePhysics_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneName
struct UEmbarkFracturedDestructibleMeshComponent_GetBoneName_Params
{
	int                                                InBoneIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneMaterialSettings
struct UEmbarkFracturedDestructibleMeshComponent_GetBoneMaterialSettings_Params
{
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFracturedMaterialAsset*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneMass
struct UEmbarkFracturedDestructibleMeshComponent_GetBoneMass_Params
{
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGetWelded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneIndex
struct UEmbarkFracturedDestructibleMeshComponent_GetBoneIndex_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneHealth
struct UEmbarkFracturedDestructibleMeshComponent_GetBoneHealth_Params
{
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneGameplayTag
struct UEmbarkFracturedDestructibleMeshComponent_GetBoneGameplayTag_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneGameplayMaterial
struct UEmbarkFracturedDestructibleMeshComponent_GetBoneGameplayMaterial_Params
{
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFracturedMaterialGameplay*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneBreakMaterial
struct UEmbarkFracturedDestructibleMeshComponent_GetBoneBreakMaterial_Params
{
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFracturedMaterialEffects*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneBounds
struct UEmbarkFracturedDestructibleMeshComponent_GetBoneBounds_Params
{
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.DamageBone
struct UEmbarkFracturedDestructibleMeshComponent_DamageBone_Params
{
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBoneDamage                                 InDamage;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.CalcBoneBounds
struct UEmbarkFracturedDestructibleMeshComponent_CalcBoneBounds_Params
{
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LocalToWorld;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FBoxSphereBounds                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.BoneFireDamageTimer
struct UEmbarkFracturedDestructibleMeshComponent_BoneFireDamageTimer_Params
{
};

// Function EmbarkFracturedDestructible.DestructibleBoneHandleLibrary.IsSet
struct UDestructibleBoneHandleLibrary_IsSet_Params
{
	struct FDestructibleBoneHandle                     InBoneHandle;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.DestructibleBoneHandleLibrary.GetRootBoneGraphIndex
struct UDestructibleBoneHandleLibrary_GetRootBoneGraphIndex_Params
{
	struct FDestructibleBoneHandle                     InBoneHandle;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.DestructibleBoneHandleLibrary.GetBoneIndex
struct UDestructibleBoneHandleLibrary_GetBoneIndex_Params
{
	struct FDestructibleBoneHandle                     InBoneHandle;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.DestructibleBoneHandleLibrary.GetBoneGraphIndex
struct UDestructibleBoneHandleLibrary_GetBoneGraphIndex_Params
{
	struct FDestructibleBoneHandle                     InBoneHandle;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructionListenerComponent.DebugDrawBoundsOverlap
struct UEmbarkFracturedDestructionListenerComponent_DebugDrawBoundsOverlap_Params
{
};

// Function EmbarkFracturedDestructible.EmbarkFracturedDestructionListenerComponent.CalcDestructionListenerBounds
struct UEmbarkFracturedDestructionListenerComponent_CalcDestructionListenerBounds_Params
{
	struct FVector                                     OutBoundsLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       OutBoundsRotation;                                        // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutBoundsExtent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
