//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function EmbarkFracturedDestructible.EmbarkDestructionCollectorSubsystem.RegisterListener
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEmbarkDestructionListenerVolumeComponent* Listener                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkDestructionCollectorSubsystem::RegisterListener(class UEmbarkDestructionListenerVolumeComponent* Listener)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionCollectorSubsystem.RegisterListener"));

	UEmbarkDestructionCollectorSubsystem_RegisterListener_Params params;
	params.Listener = Listener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFracturedDestructible.EmbarkDestructionCollectorSubsystem.AddDestructionEvent
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Extents                        (Parm, ZeroConstructor, IsPlainOldData)
// enum class EDestructionEventType EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDestructionCollectorSubsystem::AddDestructionEvent(const struct FVector& Location, const struct FVector& Extents, enum class EDestructionEventType EventType, class UPrimitiveComponent* Component, int BoneIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionCollectorSubsystem.AddDestructionEvent"));

	UEmbarkDestructionCollectorSubsystem_AddDestructionEvent_Params params;
	params.Location = Location;
	params.Extents = Extents;
	params.EventType = EventType;
	params.Component = Component;
	params.BoneIndex = BoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.TryGetBoneHandle
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEmbarkFracturedDestructibleMeshComponent* InFracturedDestructibleMeshComponent (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InBoneIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDestructibleBoneHandle OutBoneHandle                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkDestructionGraphActor::TryGetBoneHandle(class UEmbarkFracturedDestructibleMeshComponent* InFracturedDestructibleMeshComponent, int InBoneIndex, struct FDestructibleBoneHandle* OutBoneHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.TryGetBoneHandle"));

	AEmbarkDestructionGraphActor_TryGetBoneHandle_Params params;
	params.InFracturedDestructibleMeshComponent = InFracturedDestructibleMeshComponent;
	params.InBoneIndex = InBoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBoneHandle != nullptr)
		*OutBoneHandle = params.OutBoneHandle;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.OnRep_DestructionGraphHash
// (Final, Native, Private)

void AEmbarkDestructionGraphActor::OnRep_DestructionGraphHash()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.OnRep_DestructionGraphHash"));

	AEmbarkDestructionGraphActor_OnRep_DestructionGraphHash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.OnRep_BlackBoardReplicationPtr
// (Final, Native, Private)

void AEmbarkDestructionGraphActor::OnRep_BlackBoardReplicationPtr()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.OnRep_BlackBoardReplicationPtr"));

	AEmbarkDestructionGraphActor_OnRep_BlackBoardReplicationPtr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.IsValidBoneLink
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDestructibleBoneHandle InBoneHandle                   (Parm)
// int                            LinkIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkDestructionGraphActor::IsValidBoneLink(const struct FDestructibleBoneHandle& InBoneHandle, int LinkIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.IsValidBoneLink"));

	AEmbarkDestructionGraphActor_IsValidBoneLink_Params params;
	params.InBoneHandle = InBoneHandle;
	params.LinkIndex = LinkIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetStrainBonesLevelData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FFracturedDestructibleStrainBone> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FFracturedDestructibleStrainBone> AEmbarkDestructionGraphActor::GetStrainBonesLevelData()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetStrainBonesLevelData"));

	AEmbarkDestructionGraphActor_GetStrainBonesLevelData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetFromComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActorComponent*         InComponentContext             (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AEmbarkDestructionGraphActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AEmbarkDestructionGraphActor* AEmbarkDestructionGraphActor::STATIC_GetFromComponent(class UActorComponent* InComponentContext)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetFromComponent"));

	AEmbarkDestructionGraphActor_GetFromComponent_Params params;
	params.InComponentContext = InComponentContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetFromActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  InActorContext                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AEmbarkDestructionGraphActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AEmbarkDestructionGraphActor* AEmbarkDestructionGraphActor::STATIC_GetFromActor(class AActor* InActorContext)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetFromActor"));

	AEmbarkDestructionGraphActor_GetFromActor_Params params;
	params.InActorContext = InActorContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetBonesLevelData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FFracturedDestructibleBoneLevelData> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FFracturedDestructibleBoneLevelData> AEmbarkDestructionGraphActor::GetBonesLevelData()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetBonesLevelData"));

	AEmbarkDestructionGraphActor_GetBonesLevelData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetBoneHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDestructibleBoneHandle InBoneHandle                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEmbarkDestructionGraphActor::GetBoneHealth(const struct FDestructibleBoneHandle& InBoneHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetBoneHealth"));

	AEmbarkDestructionGraphActor_GetBoneHealth_Params params;
	params.InBoneHandle = InBoneHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetBoneFracturedDestructibleComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDestructibleBoneHandle InBoneHandle                   (Parm)
// class UEmbarkFracturedDestructibleMeshComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UEmbarkFracturedDestructibleMeshComponent* AEmbarkDestructionGraphActor::GetBoneFracturedDestructibleComponent(const struct FDestructibleBoneHandle& InBoneHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.GetBoneFracturedDestructibleComponent"));

	AEmbarkDestructionGraphActor_GetBoneFracturedDestructibleComponent_Params params;
	params.InBoneHandle = InBoneHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.FindAllConnectedBones
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDestructibleBoneHandle InBoneHandle                   (Parm)
// bool                           bIncludeBrokenConnections      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDestroyedBones         (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkDestructionGraphActor::FindAllConnectedBones(const struct FDestructibleBoneHandle& InBoneHandle, bool bIncludeBrokenConnections, bool bIncludeDestroyedBones)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.FindAllConnectedBones"));

	AEmbarkDestructionGraphActor_FindAllConnectedBones_Params params;
	params.InBoneHandle = InBoneHandle;
	params.bIncludeBrokenConnections = bIncludeBrokenConnections;
	params.bIncludeDestroyedBones = bIncludeDestroyedBones;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.DamageBone
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDestructibleBoneHandle InBoneHandle                   (Parm)
// struct FBoneDamage             Damage                         (ConstParm, Parm, OutParm, ReferenceParm)

void AEmbarkDestructionGraphActor::DamageBone(const struct FDestructibleBoneHandle& InBoneHandle, const struct FBoneDamage& Damage)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.DamageBone"));

	AEmbarkDestructionGraphActor_DamageBone_Params params;
	params.InBoneHandle = InBoneHandle;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.BoneHasAnyValidConnections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDestructibleBoneHandle InBoneHandle                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkDestructionGraphActor::BoneHasAnyValidConnections(const struct FDestructibleBoneHandle& InBoneHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkDestructionGraphActor.BoneHasAnyValidConnections"));

	AEmbarkDestructionGraphActor_BoneHasAnyValidConnections_Params params;
	params.InBoneHandle = InBoneHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.FracturedMaterialsSettings.GetDefaultMapping
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFracturedMaterialMapping* ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFracturedMaterialMapping* UFracturedMaterialsSettings::STATIC_GetDefaultMapping()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.FracturedMaterialsSettings.GetDefaultMapping"));

	UFracturedMaterialsSettings_GetDefaultMapping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.FracturedMaterialSubsystem.OnMappingLoaded
// (Final, Native, Public)

void UFracturedMaterialSubsystem::OnMappingLoaded()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.FracturedMaterialSubsystem.OnMappingLoaded"));

	UFracturedMaterialSubsystem_OnMappingLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFracturedDestructible.FracturedStrainSettings.GetDefaultStrainSettingsAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStrainSettingsAsset*    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStrainSettingsAsset* UFracturedStrainSettings::STATIC_GetDefaultStrainSettingsAsset()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.FracturedStrainSettings.GetDefaultStrainSettingsAsset"));

	UFracturedStrainSettings_GetDefaultStrainSettingsAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.StartSimulateFractured
// (Final, Native, Public, BlueprintCallable)

void UEmbarkFracturedDestructibleMeshComponent::StartSimulateFractured()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.StartSimulateFractured"));

	UEmbarkFracturedDestructibleMeshComponent_StartSimulateFractured_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.OnHitCallback
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UEmbarkFracturedDestructibleMeshComponent::OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.OnHitCallback"));

	UEmbarkFracturedDestructibleMeshComponent_OnHitCallback_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.OnFireObjectStateChanged
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FEmbarkFireOnStateChangedData ChangedData                    (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFracturedDestructibleMeshComponent::OnFireObjectStateChanged(const struct FEmbarkFireOnStateChangedData& ChangedData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.OnFireObjectStateChanged"));

	UEmbarkFracturedDestructibleMeshComponent_OnFireObjectStateChanged_Params params;
	params.ChangedData = ChangedData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.OnBoneDamagedCallback
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FBoneDamageEventType    Damage                         (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFracturedDestructibleMeshComponent::OnBoneDamagedCallback(const struct FBoneDamageEventType& Damage)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.OnBoneDamagedCallback"));

	UEmbarkFracturedDestructibleMeshComponent_OnBoneDamagedCallback_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.IsBoneDestroyed
// (Final, Native, Public, Const)
// Parameters:
// int                            InBoneIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFracturedDestructibleMeshComponent::IsBoneDestroyed(int InBoneIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.IsBoneDestroyed"));

	UEmbarkFracturedDestructibleMeshComponent_IsBoneDestroyed_Params params;
	params.InBoneIndex = InBoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetWeldedBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UEmbarkFracturedDestructibleMeshComponent::GetWeldedBoneTransform(const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetWeldedBoneTransform"));

	UEmbarkFracturedDestructibleMeshComponent_GetWeldedBoneTransform_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetNumBones
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkFracturedDestructibleMeshComponent::GetNumBones()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetNumBones"));

	UEmbarkFracturedDestructibleMeshComponent_GetNumBones_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetMaterialSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Material                       (Parm, ZeroConstructor, IsPlainOldData)
// class UFracturedMaterialAsset* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFracturedMaterialAsset* UEmbarkFracturedDestructibleMeshComponent::GetMaterialSettings(const struct FName& Material)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetMaterialSettings"));

	UEmbarkFracturedDestructibleMeshComponent_GetMaterialSettings_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetDestructibleMeshAssetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEmbarkFracturedDestructibleMeshAssetUserData* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UEmbarkFracturedDestructibleMeshAssetUserData* UEmbarkFracturedDestructibleMeshComponent::GetDestructibleMeshAssetData()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetDestructibleMeshAssetData"));

	UEmbarkFracturedDestructibleMeshComponent_GetDestructibleMeshAssetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UEmbarkFracturedDestructibleMeshComponent::GetBoneTransform(int BoneIndex, TEnumAsByte<ERelativeTransformSpace> TransformSpace)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneTransform"));

	UEmbarkFracturedDestructibleMeshComponent_GetBoneTransform_Params params;
	params.BoneIndex = BoneIndex;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneSimulatePhysics
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFracturedDestructibleMeshComponent::GetBoneSimulatePhysics(int BoneIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneSimulatePhysics"));

	UEmbarkFracturedDestructibleMeshComponent_GetBoneSimulatePhysics_Params params;
	params.BoneIndex = BoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneNameSimulatePhysics
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFracturedDestructibleMeshComponent::GetBoneNameSimulatePhysics(const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneNameSimulatePhysics"));

	UEmbarkFracturedDestructibleMeshComponent_GetBoneNameSimulatePhysics_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InBoneIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEmbarkFracturedDestructibleMeshComponent::GetBoneName(int InBoneIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneName"));

	UEmbarkFracturedDestructibleMeshComponent_GetBoneName_Params params;
	params.InBoneIndex = InBoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneMaterialSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UFracturedMaterialAsset* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFracturedMaterialAsset* UEmbarkFracturedDestructibleMeshComponent::GetBoneMaterialSettings(int BoneIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneMaterialSettings"));

	UEmbarkFracturedDestructibleMeshComponent_GetBoneMaterialSettings_Params params;
	params.BoneIndex = BoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneMass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bGetWelded                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkFracturedDestructibleMeshComponent::GetBoneMass(int BoneIndex, bool bGetWelded)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneMass"));

	UEmbarkFracturedDestructibleMeshComponent_GetBoneMass_Params params;
	params.BoneIndex = BoneIndex;
	params.bGetWelded = bGetWelded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkFracturedDestructibleMeshComponent::GetBoneIndex(const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneIndex"));

	UEmbarkFracturedDestructibleMeshComponent_GetBoneIndex_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkFracturedDestructibleMeshComponent::GetBoneHealth(int BoneIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneHealth"));

	UEmbarkFracturedDestructibleMeshComponent_GetBoneHealth_Params params;
	params.BoneIndex = BoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneGameplayTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UEmbarkFracturedDestructibleMeshComponent::GetBoneGameplayTag(const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneGameplayTag"));

	UEmbarkFracturedDestructibleMeshComponent_GetBoneGameplayTag_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneGameplayMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UFracturedMaterialGameplay* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFracturedMaterialGameplay* UEmbarkFracturedDestructibleMeshComponent::GetBoneGameplayMaterial(int BoneIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneGameplayMaterial"));

	UEmbarkFracturedDestructibleMeshComponent_GetBoneGameplayMaterial_Params params;
	params.BoneIndex = BoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneBreakMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UFracturedMaterialEffects* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFracturedMaterialEffects* UEmbarkFracturedDestructibleMeshComponent::GetBoneBreakMaterial(int BoneIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneBreakMaterial"));

	UEmbarkFracturedDestructibleMeshComponent_GetBoneBreakMaterial_Params params;
	params.BoneIndex = BoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBoxSphereBounds        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FBoxSphereBounds UEmbarkFracturedDestructibleMeshComponent::GetBoneBounds(int BoneIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.GetBoneBounds"));

	UEmbarkFracturedDestructibleMeshComponent_GetBoneBounds_Params params;
	params.BoneIndex = BoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.DamageBone
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBoneDamage             InDamage                       (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFracturedDestructibleMeshComponent::DamageBone(int BoneIndex, const struct FBoneDamage& InDamage)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.DamageBone"));

	UEmbarkFracturedDestructibleMeshComponent_DamageBone_Params params;
	params.BoneIndex = BoneIndex;
	params.InDamage = InDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.CalcBoneBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              LocalToWorld                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FBoxSphereBounds        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FBoxSphereBounds UEmbarkFracturedDestructibleMeshComponent::CalcBoneBounds(int BoneIndex, const struct FTransform& LocalToWorld)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.CalcBoneBounds"));

	UEmbarkFracturedDestructibleMeshComponent_CalcBoneBounds_Params params;
	params.BoneIndex = BoneIndex;
	params.LocalToWorld = LocalToWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.BoneFireDamageTimer
// (Final, Native, Private)

void UEmbarkFracturedDestructibleMeshComponent::BoneFireDamageTimer()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent.BoneFireDamageTimer"));

	UEmbarkFracturedDestructibleMeshComponent_BoneFireDamageTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFracturedDestructible.DestructibleBoneHandleLibrary.IsSet
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDestructibleBoneHandle InBoneHandle                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDestructibleBoneHandleLibrary::STATIC_IsSet(const struct FDestructibleBoneHandle& InBoneHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.DestructibleBoneHandleLibrary.IsSet"));

	UDestructibleBoneHandleLibrary_IsSet_Params params;
	params.InBoneHandle = InBoneHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.DestructibleBoneHandleLibrary.GetRootBoneGraphIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDestructibleBoneHandle InBoneHandle                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDestructibleBoneHandleLibrary::STATIC_GetRootBoneGraphIndex(const struct FDestructibleBoneHandle& InBoneHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.DestructibleBoneHandleLibrary.GetRootBoneGraphIndex"));

	UDestructibleBoneHandleLibrary_GetRootBoneGraphIndex_Params params;
	params.InBoneHandle = InBoneHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.DestructibleBoneHandleLibrary.GetBoneIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDestructibleBoneHandle InBoneHandle                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDestructibleBoneHandleLibrary::STATIC_GetBoneIndex(const struct FDestructibleBoneHandle& InBoneHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.DestructibleBoneHandleLibrary.GetBoneIndex"));

	UDestructibleBoneHandleLibrary_GetBoneIndex_Params params;
	params.InBoneHandle = InBoneHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.DestructibleBoneHandleLibrary.GetBoneGraphIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDestructibleBoneHandle InBoneHandle                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDestructibleBoneHandleLibrary::STATIC_GetBoneGraphIndex(const struct FDestructibleBoneHandle& InBoneHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.DestructibleBoneHandleLibrary.GetBoneGraphIndex"));

	UDestructibleBoneHandleLibrary_GetBoneGraphIndex_Params params;
	params.InBoneHandle = InBoneHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructionListenerComponent.DebugDrawBoundsOverlap
// (Final, Native, Public)

void UEmbarkFracturedDestructionListenerComponent::DebugDrawBoundsOverlap()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructionListenerComponent.DebugDrawBoundsOverlap"));

	UEmbarkFracturedDestructionListenerComponent_DebugDrawBoundsOverlap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFracturedDestructible.EmbarkFracturedDestructionListenerComponent.CalcDestructionListenerBounds
// (Final, Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector                 OutBoundsLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   OutBoundsRotation              (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutBoundsExtent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEmbarkFracturedDestructionListenerComponent::CalcDestructionListenerBounds(struct FVector* OutBoundsLocation, struct FQuat* OutBoundsRotation, struct FVector* OutBoundsExtent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFracturedDestructible.EmbarkFracturedDestructionListenerComponent.CalcDestructionListenerBounds"));

	UEmbarkFracturedDestructionListenerComponent_CalcDestructionListenerBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBoundsLocation != nullptr)
		*OutBoundsLocation = params.OutBoundsLocation;
	if (OutBoundsRotation != nullptr)
		*OutBoundsRotation = params.OutBoundsRotation;
	if (OutBoundsExtent != nullptr)
		*OutBoundsExtent = params.OutBoundsExtent;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
