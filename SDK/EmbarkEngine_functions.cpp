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

// Function EmbarkEngine.EmbarkGlobalSubsystem.OnInitialized
// (Event, Public, BlueprintEvent)

void UEmbarkGlobalSubsystem::OnInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkGlobalSubsystem.OnInitialized"));

	UEmbarkGlobalSubsystem_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.EmbarkGlobalSubsystem.OnDeinitialized
// (Event, Public, BlueprintEvent)

void UEmbarkGlobalSubsystem::OnDeinitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkGlobalSubsystem.OnDeinitialized"));

	UEmbarkGlobalSubsystem_OnDeinitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.SimulatedSkinnedMeshComponent.TermBodiesBelow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ParentBoneName                 (Parm, ZeroConstructor, IsPlainOldData)

void USimulatedSkinnedMeshComponent::TermBodiesBelow(const struct FName& ParentBoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.SimulatedSkinnedMeshComponent.TermBodiesBelow"));

	USimulatedSkinnedMeshComponent_TermBodiesBelow_Params params;
	params.ParentBoneName = ParentBoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.SimulatedSkinnedMeshComponent.SetBoneCollisionProfileName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InCollisionProfileName         (Parm, ZeroConstructor, IsPlainOldData)

void USimulatedSkinnedMeshComponent::SetBoneCollisionProfileName(const struct FName& BoneName, const struct FName& InCollisionProfileName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.SimulatedSkinnedMeshComponent.SetBoneCollisionProfileName"));

	USimulatedSkinnedMeshComponent_SetBoneCollisionProfileName_Params params;
	params.BoneName = BoneName;
	params.InCollisionProfileName = InCollisionProfileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.SimulatedSkinnedMeshComponent.SetBodyTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USimulatedSkinnedMeshComponent::SetBodyTransform(const struct FName& BoneName, const struct FTransform& Transform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.SimulatedSkinnedMeshComponent.SetBodyTransform"));

	USimulatedSkinnedMeshComponent_SetBodyTransform_Params params;
	params.BoneName = BoneName;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.SimulatedSkinnedMeshComponent.SetBodySimulatePhysics
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInSimulate                    (Parm, ZeroConstructor, IsPlainOldData)

void USimulatedSkinnedMeshComponent::SetBodySimulatePhysics(const struct FName& BoneName, bool bInSimulate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.SimulatedSkinnedMeshComponent.SetBodySimulatePhysics"));

	USimulatedSkinnedMeshComponent_SetBodySimulatePhysics_Params params;
	params.BoneName = BoneName;
	params.bInSimulate = bInSimulate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.SimulatedSkinnedMeshComponent.SetAllBodiesBelowSimulatePhysics
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InBoneName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bNewSimulate                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeSelf                   (Parm, ZeroConstructor, IsPlainOldData)

void USimulatedSkinnedMeshComponent::SetAllBodiesBelowSimulatePhysics(const struct FName& InBoneName, bool bNewSimulate, bool bIncludeSelf)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.SimulatedSkinnedMeshComponent.SetAllBodiesBelowSimulatePhysics"));

	USimulatedSkinnedMeshComponent_SetAllBodiesBelowSimulatePhysics_Params params;
	params.InBoneName = InBoneName;
	params.bNewSimulate = bNewSimulate;
	params.bIncludeSelf = bIncludeSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.SimulatedSkinnedMeshComponent.OnPhysicsBodySleep
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*     SleepingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void USimulatedSkinnedMeshComponent::OnPhysicsBodySleep(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.SimulatedSkinnedMeshComponent.OnPhysicsBodySleep"));

	USimulatedSkinnedMeshComponent_OnPhysicsBodySleep_Params params;
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.SimulatedSkinnedMeshComponent.OnPhysicsBodyAwake
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*     WakingComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void USimulatedSkinnedMeshComponent::OnPhysicsBodyAwake(class UPrimitiveComponent* WakingComponent, const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.SimulatedSkinnedMeshComponent.OnPhysicsBodyAwake"));

	USimulatedSkinnedMeshComponent_OnPhysicsBodyAwake_Params params;
	params.WakingComponent = WakingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.SimulatedSkinnedMeshComponent.K2_GetClosestPointOnPhysicsAsset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldPosition                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ClosestWorldPosition           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USimulatedSkinnedMeshComponent::K2_GetClosestPointOnPhysicsAsset(const struct FVector& WorldPosition, struct FVector* ClosestWorldPosition, struct FVector* Normal, struct FName* BoneName, float* Distance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.SimulatedSkinnedMeshComponent.K2_GetClosestPointOnPhysicsAsset"));

	USimulatedSkinnedMeshComponent_K2_GetClosestPointOnPhysicsAsset_Params params;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestWorldPosition != nullptr)
		*ClosestWorldPosition = params.ClosestWorldPosition;
	if (Normal != nullptr)
		*Normal = params.Normal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (Distance != nullptr)
		*Distance = params.Distance;

	return params.ReturnValue;
}


// Function EmbarkEngine.SimulatedSkinnedMeshComponent.GetBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform USimulatedSkinnedMeshComponent::GetBoneTransform(const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.SimulatedSkinnedMeshComponent.GetBoneTransform"));

	USimulatedSkinnedMeshComponent_GetBoneTransform_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkEngine.SimulatedSkinnedMeshComponent.FindConstraintBoneName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ConstraintIndex                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName USimulatedSkinnedMeshComponent::FindConstraintBoneName(int ConstraintIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.SimulatedSkinnedMeshComponent.FindConstraintBoneName"));

	USimulatedSkinnedMeshComponent_FindConstraintBoneName_Params params;
	params.ConstraintIndex = ConstraintIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkEngine.ActorWithEditorTick.EditorTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AActorWithEditorTick::EditorTick(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.ActorWithEditorTick.EditorTick"));

	AActorWithEditorTick_EditorTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.CurveTranslateRotate.UpdateOrAddKeys
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bUnwindRotation                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCurveTranslateRotate::UpdateOrAddKeys(float Time, const struct FTransform& Transform, bool bUnwindRotation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.CurveTranslateRotate.UpdateOrAddKeys"));

	UCurveTranslateRotate_UpdateOrAddKeys_Params params;
	params.Time = Time;
	params.Transform = Transform;
	params.bUnwindRotation = bUnwindRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.CurveTranslateRotate.UpdateOrAddKey
// (Final, Native, Public)
// Parameters:
// enum class ECurveTRTrack       Track                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUnwindRotation                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          KeyTimeTolerance               (Parm, ZeroConstructor, IsPlainOldData)

void UCurveTranslateRotate::UpdateOrAddKey(enum class ECurveTRTrack Track, float Time, float Value, bool bUnwindRotation, float KeyTimeTolerance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.CurveTranslateRotate.UpdateOrAddKey"));

	UCurveTranslateRotate_UpdateOrAddKey_Params params;
	params.Track = Track;
	params.Time = Time;
	params.Value = Value;
	params.bUnwindRotation = bUnwindRotation;
	params.KeyTimeTolerance = KeyTimeTolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.CurveTranslateRotate.GetTrackValue
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InTime                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutTranslation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCurveTranslateRotate::GetTrackValue(float InTime, struct FVector* OutTranslation, struct FVector* OutRotation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.CurveTranslateRotate.GetTrackValue"));

	UCurveTranslateRotate_GetTrackValue_Params params;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTranslation != nullptr)
		*OutTranslation = params.OutTranslation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function EmbarkEngine.DDGICascadesComponent.UpdateVolumes
// (Final, Native, Public, BlueprintCallable)

void UDDGICascadesComponent::UpdateVolumes()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.DDGICascadesComponent.UpdateVolumes"));

	UDDGICascadesComponent_UpdateVolumes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.EmbarkDataAsset.ReceivePreSave
// (Event, Protected, BlueprintEvent)

void UEmbarkDataAsset::ReceivePreSave()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkDataAsset.ReceivePreSave"));

	UEmbarkDataAsset_ReceivePreSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.EmbarkEngineBlueprintLibrary.GetNumPrecompilingPSOsRemaining
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkEngineBlueprintLibrary::STATIC_GetNumPrecompilingPSOsRemaining()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkEngineBlueprintLibrary.GetNumPrecompilingPSOsRemaining"));

	UEmbarkEngineBlueprintLibrary_GetNumPrecompilingPSOsRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.WriteSDFSphereToVolumeTexture
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkSDFVolumeTexture* Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// double                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkSDFVolumeTextureLibrary::STATIC_WriteSDFSphereToVolumeTexture(class UObject* WorldContextObject, class UEmbarkSDFVolumeTexture* Texture, const struct FVector& Origin, double Radius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.WriteSDFSphereToVolumeTexture"));

	UEmbarkSDFVolumeTextureLibrary_WriteSDFSphereToVolumeTexture_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Texture = Texture;
	params.Origin = Origin;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.WriteBoxToVolumeTexture
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkSDFVolumeTexture* Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// double                         Extent                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         Intensity                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkSDFVolumeTextureLibrary::STATIC_WriteBoxToVolumeTexture(class UObject* WorldContextObject, class UEmbarkSDFVolumeTexture* Texture, const struct FVector& Origin, double Extent, double Intensity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.WriteBoxToVolumeTexture"));

	UEmbarkSDFVolumeTextureLibrary_WriteBoxToVolumeTexture_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Texture = Texture;
	params.Origin = Origin;
	params.Extent = Extent;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.ReleaseSDFVolumeTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEmbarkSDFVolumeTexture* Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkSDFVolumeTextureLibrary::STATIC_ReleaseSDFVolumeTexture(class UEmbarkSDFVolumeTexture* Texture)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.ReleaseSDFVolumeTexture"));

	UEmbarkSDFVolumeTextureLibrary_ReleaseSDFVolumeTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.CreateSDFVolumeTexture
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FIntVector              Size                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBox                    Bounds                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UEmbarkSDFVolumeTexture* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkSDFVolumeTexture* UEmbarkSDFVolumeTextureLibrary::STATIC_CreateSDFVolumeTexture(class UObject* WorldContextObject, const struct FIntVector& Size, const struct FBox& Bounds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.CreateSDFVolumeTexture"));

	UEmbarkSDFVolumeTextureLibrary_CreateSDFVolumeTexture_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Size = Size;
	params.Bounds = Bounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.ClearSDFVolumeTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkSDFVolumeTexture* Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkSDFVolumeTextureLibrary::STATIC_ClearSDFVolumeTexture(class UObject* WorldContextObject, class UEmbarkSDFVolumeTexture* Texture, float MaxDistance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.ClearSDFVolumeTexture"));

	UEmbarkSDFVolumeTextureLibrary_ClearSDFVolumeTexture_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Texture = Texture;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.EmbarkHttpRequestContainer.SetVerb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewVerb                        (Parm, ZeroConstructor)

void UEmbarkHttpRequestContainer::SetVerb(const struct FString& NewVerb)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkHttpRequestContainer.SetVerb"));

	UEmbarkHttpRequestContainer_SetVerb_Params params;
	params.NewVerb = NewVerb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.EmbarkHttpRequestContainer.SetURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewURL                         (Parm, ZeroConstructor)

void UEmbarkHttpRequestContainer::SetURL(const struct FString& NewURL)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkHttpRequestContainer.SetURL"));

	UEmbarkHttpRequestContainer_SetURL_Params params;
	params.NewURL = NewURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.EmbarkHttpRequestContainer.SetPayload
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Payload                        (Parm, ZeroConstructor)

void UEmbarkHttpRequestContainer::SetPayload(const struct FString& Payload)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkHttpRequestContainer.SetPayload"));

	UEmbarkHttpRequestContainer_SetPayload_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.EmbarkHttpRequestContainer.SetHeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeaderName                     (Parm, ZeroConstructor)
// struct FString                 HeaderValue                    (Parm, ZeroConstructor)

void UEmbarkHttpRequestContainer::SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkHttpRequestContainer.SetHeader"));

	UEmbarkHttpRequestContainer_SetHeader_Params params;
	params.HeaderName = HeaderName;
	params.HeaderValue = HeaderValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.EmbarkHttpRequestContainer.ProcessRequest
// (Final, Native, Public, BlueprintCallable)

void UEmbarkHttpRequestContainer::ProcessRequest()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkHttpRequestContainer.ProcessRequest"));

	UEmbarkHttpRequestContainer_ProcessRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkEngine.EmbarkHttpRequestContainer.GetVerb
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkHttpRequestContainer::GetVerb()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkHttpRequestContainer.GetVerb"));

	UEmbarkHttpRequestContainer_GetVerb_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkEngine.EmbarkHttpRequestContainer.GetURL
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkHttpRequestContainer::GetURL()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkHttpRequestContainer.GetURL"));

	UEmbarkHttpRequestContainer_GetURL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkEngine.EmbarkHttpRequestContainer.GetHeaders
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UEmbarkHttpRequestContainer::GetHeaders()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkHttpRequestContainer.GetHeaders"));

	UEmbarkHttpRequestContainer_GetHeaders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkEngine.EmbarkHttpRequestContainer.GetHeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 HeaderName                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkHttpRequestContainer::GetHeader(const struct FString& HeaderName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkHttpRequestContainer.GetHeader"));

	UEmbarkHttpRequestContainer_GetHeader_Params params;
	params.HeaderName = HeaderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkEngine.EmbarkHttpRequestContainer.GetElapsedTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkHttpRequestContainer::GetElapsedTime()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.EmbarkHttpRequestContainer.GetElapsedTime"));

	UEmbarkHttpRequestContainer_GetElapsedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkEngine.HttpFunctionLibrary.MakeHttpParameter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InParameterKey                 (Parm, ZeroConstructor)
// struct FString                 InParameterValue               (Parm, ZeroConstructor)
// struct FEmbarkHttpParameter    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkHttpParameter UHttpFunctionLibrary::STATIC_MakeHttpParameter(const struct FString& InParameterKey, const struct FString& InParameterValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.HttpFunctionLibrary.MakeHttpParameter"));

	UHttpFunctionLibrary_MakeHttpParameter_Params params;
	params.InParameterKey = InParameterKey;
	params.InParameterValue = InParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkEngine.HttpFunctionLibrary.CreateSimpleHttpRequest
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Verb                           (Parm, ZeroConstructor)
// struct FString                 URL                            (Parm, ZeroConstructor)
// TArray<struct FEmbarkHttpParameter> Parameters                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UEmbarkHttpRequestContainer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkHttpRequestContainer* UHttpFunctionLibrary::STATIC_CreateSimpleHttpRequest(const struct FString& Verb, const struct FString& URL, TArray<struct FEmbarkHttpParameter> Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.HttpFunctionLibrary.CreateSimpleHttpRequest"));

	UHttpFunctionLibrary_CreateSimpleHttpRequest_Params params;
	params.Verb = Verb;
	params.URL = URL;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkEngine.HttpFunctionLibrary.CreateHttpRequest
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 AuthorizationToken             (Parm, ZeroConstructor)
// struct FString                 Verb                           (Parm, ZeroConstructor)
// struct FString                 URL                            (Parm, ZeroConstructor)
// TArray<struct FEmbarkHttpParameter> Parameters                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UEmbarkHttpRequestContainer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkHttpRequestContainer* UHttpFunctionLibrary::STATIC_CreateHttpRequest(const struct FString& AuthorizationToken, const struct FString& Verb, const struct FString& URL, TArray<struct FEmbarkHttpParameter> Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkEngine.HttpFunctionLibrary.CreateHttpRequest"));

	UHttpFunctionLibrary_CreateHttpRequest_Params params;
	params.AuthorizationToken = AuthorizationToken;
	params.Verb = Verb;
	params.URL = URL;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
