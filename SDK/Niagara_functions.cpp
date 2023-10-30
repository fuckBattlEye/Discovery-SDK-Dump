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

// Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldDestroyOnSystemFinish   (Parm, ZeroConstructor, IsPlainOldData)

void ANiagaraActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraActor.SetDestroyOnSystemFinish"));

	ANiagaraActor_SetDestroyOnSystemFinish_Params params;
	params.bShouldDestroyOnSystemFinish = bShouldDestroyOnSystemFinish;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraActor.OnNiagaraSystemFinished
// (Final, Native, Private)
// Parameters:
// class UNiagaraComponent*       FinishedComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ANiagaraActor::OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraActor.OnNiagaraSystemFinished"));

	ANiagaraActor_OnNiagaraSystemFinished_Params params;
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableVec4
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UNiagaraComponent::SetVariableVec4(const struct FName& InVariableName, const struct FVector4& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariableVec4"));

	UNiagaraComponent_SetVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetVariableVec3(const struct FName& InVariableName, const struct FVector& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariableVec3"));

	UNiagaraComponent_SetVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetVariableVec2(const struct FName& InVariableName, const struct FVector2D& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariableVec2"));

	UNiagaraComponent_SetVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget*    TextureRenderTarget            (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetVariableTextureRenderTarget(const struct FName& InVariableName, class UTextureRenderTarget* TextureRenderTarget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget"));

	UNiagaraComponent_SetVariableTextureRenderTarget_Params params;
	params.InVariableName = InVariableName;
	params.TextureRenderTarget = TextureRenderTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetVariableTexture(const struct FName& InVariableName, class UTexture* Texture)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariableTexture"));

	UNiagaraComponent_SetVariableTexture_Params params;
	params.InVariableName = InVariableName;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableStaticMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetVariableStaticMesh(const struct FName& InVariableName, class UStaticMesh* InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariableStaticMesh"));

	UNiagaraComponent_SetVariableStaticMesh_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableQuat
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNiagaraComponent::SetVariableQuat(const struct FName& InVariableName, const struct FQuat& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariableQuat"));

	UNiagaraComponent_SetVariableQuat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariablePosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetVariablePosition(const struct FName& InVariableName, const struct FVector& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariablePosition"));

	UNiagaraComponent_SetVariablePosition_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetVariableObject(const struct FName& InVariableName, class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariableObject"));

	UNiagaraComponent_SetVariableObject_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetVariableMaterial(const struct FName& InVariableName, class UMaterialInterface* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariableMaterial"));

	UNiagaraComponent_SetVariableMaterial_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableLinearColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UNiagaraComponent::SetVariableLinearColor(const struct FName& InVariableName, const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariableLinearColor"));

	UNiagaraComponent_SetVariableLinearColor_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetVariableInt(const struct FName& InVariableName, int InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariableInt"));

	UNiagaraComponent_SetVariableInt_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetVariableFloat(const struct FName& InVariableName, float InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariableFloat"));

	UNiagaraComponent_SetVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetVariableBool(const struct FName& InVariableName, bool InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariableBool"));

	UNiagaraComponent_SetVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetVariableActor(const struct FName& InVariableName, class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetVariableActor"));

	UNiagaraComponent_SetVariableActor_Params params;
	params.InVariableName = InVariableName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetTickBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ENiagaraTickBehavior NewTickBehavior                (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetTickBehavior(enum class ENiagaraTickBehavior NewTickBehavior)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetTickBehavior"));

	UNiagaraComponent_SetTickBehavior_Params params;
	params.NewTickBehavior = NewTickBehavior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetSystemFixedBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                    LocalBounds                    (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetSystemFixedBounds(const struct FBox& LocalBounds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetSystemFixedBounds"));

	UNiagaraComponent_SetSystemFixedBounds_Params params;
	params.LocalBounds = LocalBounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetSeekDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InSeekDelta                    (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetSeekDelta(float InSeekDelta)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetSeekDelta"));

	UNiagaraComponent_SetSeekDelta_Params params;
	params.InSeekDelta = InSeekDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetRenderingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInRenderingEnabled            (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetRenderingEnabled"));

	UNiagaraComponent_SetRenderingEnabled_Params params;
	params.bInRenderingEnabled = bInRenderingEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetRandomSeedOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewRandomSeedOffset            (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetRandomSeedOffset(int NewRandomSeedOffset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetRandomSeedOffset"));

	UNiagaraComponent_SetRandomSeedOffset_Params params;
	params.NewRandomSeedOffset = NewRandomSeedOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetPreviewLODDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnablePreviewLODDistance      (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviewLODDistance             (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviewMaxDistance             (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetPreviewLODDistance"));

	UNiagaraComponent_SetPreviewLODDistance_Params params;
	params.bEnablePreviewLODDistance = bEnablePreviewLODDistance;
	params.PreviewLODDistance = PreviewLODDistance;
	params.PreviewMaxDistance = PreviewMaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInPaused                      (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetPaused(bool bInPaused)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetPaused"));

	UNiagaraComponent_SetPaused_Params params;
	params.bInPaused = bInPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetNiagaraVariableVec4"));

	UNiagaraComponent_SetNiagaraVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetNiagaraVariableVec3"));

	UNiagaraComponent_SetNiagaraVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetNiagaraVariableVec2"));

	UNiagaraComponent_SetNiagaraVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableQuat(const struct FString& InVariableName, const struct FQuat& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetNiagaraVariableQuat"));

	UNiagaraComponent_SetNiagaraVariableQuat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariablePosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariablePosition(const struct FString& InVariableName, const struct FVector& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetNiagaraVariablePosition"));

	UNiagaraComponent_SetNiagaraVariablePosition_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableObject(const struct FString& InVariableName, class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetNiagaraVariableObject"));

	UNiagaraComponent_SetNiagaraVariableObject_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FLinearColor            InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableLinearColor(const struct FString& InVariableName, const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor"));

	UNiagaraComponent_SetNiagaraVariableLinearColor_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableInt(const struct FString& InVariableName, int InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetNiagaraVariableInt"));

	UNiagaraComponent_SetNiagaraVariableInt_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetNiagaraVariableFloat"));

	UNiagaraComponent_SetNiagaraVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetNiagaraVariableBool"));

	UNiagaraComponent_SetNiagaraVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableActor(const struct FString& InVariableName, class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetNiagaraVariableActor"));

	UNiagaraComponent_SetNiagaraVariableActor_Params params;
	params.InVariableName = InVariableName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetMaxSimTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMaxTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetMaxSimTime(float InMaxTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetMaxSimTime"));

	UNiagaraComponent_SetMaxSimTime_Params params;
	params.InMaxTime = InMaxTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bLock                          (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta"));

	UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Params params;
	params.bLock = bLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetGpuComputeDebug
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnableDebug                   (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetGpuComputeDebug(bool bEnableDebug)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetGpuComputeDebug"));

	UNiagaraComponent_SetGpuComputeDebug_Params params;
	params.bEnableDebug = bEnableDebug;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetForceSolo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInForceSolo                   (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetForceSolo(bool bInForceSolo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetForceSolo"));

	UNiagaraComponent_SetForceSolo_Params params;
	params.bInForceSolo = bInForceSolo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetForceLocalPlayerEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsPlayerEffect                (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetForceLocalPlayerEffect(bool bIsPlayerEffect)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetForceLocalPlayerEffect"));

	UNiagaraComponent_SetForceLocalPlayerEffect_Params params;
	params.bIsPlayerEffect = bIsPlayerEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetEmitterFixedBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   EmitterName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBox                    LocalBounds                    (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetEmitterFixedBounds(const struct FName& EmitterName, const struct FBox& LocalBounds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetEmitterFixedBounds"));

	UNiagaraComponent_SetEmitterFixedBounds_Params params;
	params.EmitterName = EmitterName;
	params.LocalBounds = LocalBounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDesiredAge                   (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetDesiredAge(float InDesiredAge)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetDesiredAge"));

	UNiagaraComponent_SetDesiredAge_Params params;
	params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetCustomTimeDilation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Dilation                       (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetCustomTimeDilation(float Dilation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetCustomTimeDilation"));

	UNiagaraComponent_SetCustomTimeDilation_Params params;
	params.Dilation = Dilation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInCanRenderWhileSeeking       (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking"));

	UNiagaraComponent_SetCanRenderWhileSeeking_Params params;
	params.bInCanRenderWhileSeeking = bInCanRenderWhileSeeking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetAutoDestroy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAutoDestroy                 (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetAutoDestroy"));

	UNiagaraComponent_SetAutoDestroy_Params params;
	params.bInAutoDestroy = bInAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*          InAsset                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResetExistingOverrideParameters (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetAsset"));

	UNiagaraComponent_SetAsset_Params params;
	params.InAsset = InAsset;
	params.bResetExistingOverrideParameters = bResetExistingOverrideParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetAllowScalability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllow                         (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetAllowScalability(bool bAllow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetAllowScalability"));

	UNiagaraComponent_SetAllowScalability_Params params;
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ENiagaraAgeUpdateMode InAgeUpdateMode                (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SetAgeUpdateMode"));

	UNiagaraComponent_SetAgeUpdateMode_Params params;
	params.InAgeUpdateMode = InAgeUpdateMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SeekToDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDesiredAge                   (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.SeekToDesiredAge"));

	UNiagaraComponent_SeekToDesiredAge_Params params;
	params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.ResetSystem
// (Final, Native, Public, BlueprintCallable)

void UNiagaraComponent::ResetSystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.ResetSystem"));

	UNiagaraComponent_ResetSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.ReinitializeSystem
// (Final, Native, Public, BlueprintCallable)

void UNiagaraComponent::ReinitializeSystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.ReinitializeSystem"));

	UNiagaraComponent_ReinitializeSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraComponent::IsPaused()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.IsPaused"));

	UNiagaraComponent_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.InitForPerformanceBaseline
// (Final, Native, Public, BlueprintCallable)

void UNiagaraComponent::InitForPerformanceBaseline()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.InitForPerformanceBaseline"));

	UNiagaraComponent_InitForPerformanceBaseline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.GetTickBehavior
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ENiagaraTickBehavior ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class ENiagaraTickBehavior UNiagaraComponent::GetTickBehavior()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetTickBehavior"));

	UNiagaraComponent_GetTickBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetSystemFixedBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FBox UNiagaraComponent::GetSystemFixedBounds()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetSystemFixedBounds"));

	UNiagaraComponent_GetSystemFixedBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetSeekDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNiagaraComponent::GetSeekDelta()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetSeekDelta"));

	UNiagaraComponent_GetSeekDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetRandomSeedOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNiagaraComponent::GetRandomSeedOffset()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetRandomSeedOffset"));

	UNiagaraComponent_GetRandomSeedOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraComponent::GetPreviewLODDistanceEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled"));

	UNiagaraComponent_GetPreviewLODDistanceEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetPreviewLODDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNiagaraComponent::GetPreviewLODDistance()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetPreviewLODDistance"));

	UNiagaraComponent_GetPreviewLODDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor)
// struct FString                 InValueName                    (Parm, ZeroConstructor)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly"));

	UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;
	params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor)
// struct FString                 InValueName                    (Parm, ZeroConstructor)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly"));

	UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;
	params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(const struct FString& InEmitterName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly"));

	UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetMaxSimTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNiagaraComponent::GetMaxSimTime()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetMaxSimTime"));

	UNiagaraComponent_GetMaxSimTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraComponent::GetLockDesiredAgeDeltaTimeToSeekDelta()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta"));

	UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetForceSolo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraComponent::GetForceSolo()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetForceSolo"));

	UNiagaraComponent_GetForceSolo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetForceLocalPlayerEffect
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraComponent::GetForceLocalPlayerEffect()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetForceLocalPlayerEffect"));

	UNiagaraComponent_GetForceLocalPlayerEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetEmitterFixedBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   EmitterName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBox                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FBox UNiagaraComponent::GetEmitterFixedBounds(const struct FName& EmitterName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetEmitterFixedBounds"));

	UNiagaraComponent_GetEmitterFixedBounds_Params params;
	params.EmitterName = EmitterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetDesiredAge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNiagaraComponent::GetDesiredAge()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetDesiredAge"));

	UNiagaraComponent_GetDesiredAge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetDataInterface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UNiagaraDataInterface*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNiagaraDataInterface* UNiagaraComponent::GetDataInterface(const struct FString& Name)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetDataInterface"));

	UNiagaraComponent_GetDataInterface_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetCustomTimeDilation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNiagaraComponent::GetCustomTimeDilation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetCustomTimeDilation"));

	UNiagaraComponent_GetCustomTimeDilation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNiagaraSystem*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNiagaraSystem* UNiagaraComponent::GetAsset()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetAsset"));

	UNiagaraComponent_GetAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetAllowScalability
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraComponent::GetAllowScalability()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetAllowScalability"));

	UNiagaraComponent_GetAllowScalability_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ENiagaraAgeUpdateMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.GetAgeUpdateMode"));

	UNiagaraComponent_GetAgeUpdateMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.ClearSystemFixedBounds
// (Final, Native, Public, BlueprintCallable)

void UNiagaraComponent::ClearSystemFixedBounds()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.ClearSystemFixedBounds"));

	UNiagaraComponent_ClearSystemFixedBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.ClearEmitterFixedBounds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   EmitterName                    (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::ClearEmitterFixedBounds(const struct FName& EmitterName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.ClearEmitterFixedBounds"));

	UNiagaraComponent_ClearEmitterFixedBounds_Params params;
	params.EmitterName = EmitterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SimulateTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          TickDeltaSeconds               (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.AdvanceSimulationByTime"));

	UNiagaraComponent_AdvanceSimulationByTime_Params params;
	params.SimulateTime = SimulateTime;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.AdvanceSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TickCount                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          TickDeltaSeconds               (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraComponent::AdvanceSimulation(int TickCount, float TickDeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraComponent.AdvanceSimulation"));

	UNiagaraComponent_AdvanceSimulation_Params params;
	params.TickCount = TickCount;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bSizeToFit                     (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, const struct FVector& Value, bool bSizeToFit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;
	params.Value = Value;
	params.bSizeToFit = bSizeToFit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector4                Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bSizeToFit                     (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, const struct FVector4& Value, bool bSizeToFit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;
	params.Value = Value;
	params.bSizeToFit = bSizeToFit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector4>        ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector4> ArrayData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bSizeToFit                     (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, const struct FVector2D& Value, bool bSizeToFit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;
	params.Value = Value;
	params.bSizeToFit = bSizeToFit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector2D>       ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector2D> ArrayData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector> ArrayData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Value                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSizeToFit                     (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, const struct FQuat& Value, bool bSizeToFit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;
	params.Value = Value;
	params.bSizeToFit = bSizeToFit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FQuat>           ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FQuat> ArrayData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bSizeToFit                     (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, const struct FVector& Value, bool bSizeToFit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;
	params.Value = Value;
	params.bSizeToFit = bSizeToFit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FVector> ArrayData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSizeToFit                     (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, int Value, bool bSizeToFit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;
	params.Value = Value;
	params.bSizeToFit = bSizeToFit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<int> ArrayData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSizeToFit                     (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, float Value, bool bSizeToFit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;
	params.Value = Value;
	params.bSizeToFit = bSizeToFit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<float> ArrayData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bSizeToFit                     (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, const struct FLinearColor& Value, bool bSizeToFit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;
	params.Value = Value;
	params.bSizeToFit = bSizeToFit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLinearColor>    ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<struct FLinearColor> ArrayData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bSizeToFit                     (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index, bool Value, bool bSizeToFit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;
	params.Value = Value;
	params.bSizeToFit = bSizeToFit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   ArrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, TArray<bool> ArrayData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool"));

	UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.ArrayData = ArrayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector4                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector4 UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector4>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector4> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector2D>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector2D> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FQuat>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FQuat> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<float> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLinearColor>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FLinearColor> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverrideName                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<bool> UNiagaraDataInterfaceArrayFunctionLibrary::STATIC_GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const struct FName& OverrideName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool"));

	UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBasicParticleData> Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UNiagaraSystem*          NiagaraSystem                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SimulationPositionOffset       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UNiagaraParticleCallbackHandler::ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData"));

	UNiagaraParticleCallbackHandler_ReceiveParticleData_Params params;
	params.Data = Data;
	params.NiagaraSystem = NiagaraSystem;
	params.SimulationPositionOffset = SimulationPositionOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNiagaraDataInterfaceGrid2DCollection::GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize"));

	UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;
}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNiagaraDataInterfaceGrid2DCollection::GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize"));

	UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;
}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
// (Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextureRenderTarget2D*  Dest                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            AttributeIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraDataInterfaceGrid2DCollection::FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int AttributeIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D"));

	UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params params;
	params.Component = Component;
	params.Dest = Dest;
	params.AttributeIndex = AttributeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextureRenderTarget2D*  Dest                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            TilesX                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TilesY                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int* TilesX, int* TilesY)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D"));

	UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params params;
	params.Component = Component;
	params.Dest = Dest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TilesX != nullptr)
		*TilesX = params.TilesX;
	if (TilesY != nullptr)
		*TilesY = params.TilesY;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SizeZ                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNiagaraDataInterfaceGrid3DCollection::GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY, int* SizeZ)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize"));

	UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;
	if (SizeZ != nullptr)
		*SizeZ = params.SizeZ;
}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SizeZ                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNiagaraDataInterfaceGrid3DCollection::GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY, int* SizeZ)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize"));

	UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;
	if (SizeZ != nullptr)
		*SizeZ = params.SizeZ;
}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UVolumeTexture*          Dest                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            AttributeIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraDataInterfaceGrid3DCollection::FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int AttributeIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture"));

	UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Params params;
	params.Component = Component;
	params.Dest = Dest;
	params.AttributeIndex = AttributeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UVolumeTexture*          Dest                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            TilesX                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TilesY                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TileZ                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraDataInterfaceGrid3DCollection::FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int* TilesX, int* TilesY, int* TileZ)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture"));

	UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Params params;
	params.Component = Component;
	params.Dest = Dest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TilesX != nullptr)
		*TilesX = params.TilesX;
	if (TilesY != nullptr)
		*TilesY = params.TilesY;
	if (TileZ != nullptr)
		*TileZ = params.TileZ;

	return params.ReturnValue;
}


// Function Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   UserParameterName              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   GraphName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RemapName                      (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraDataInterfaceUObjectPropertyReader::STATIC_SetUObjectReaderPropertyRemap(class UNiagaraComponent* NiagaraComponent, const struct FName& UserParameterName, const struct FName& GraphName, const struct FName& RemapName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap"));

	UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Params params;
	params.NiagaraComponent = NiagaraComponent;
	params.UserParameterName = UserParameterName;
	params.GraphName = GraphName;
	params.RemapName = RemapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFXSystemSpawnParameters SpawnParams                    (Parm, OutParm)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnSystemAttachedWithParams(struct FFXSystemSpawnParameters* SpawnParams)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams"));

	UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnParams != nullptr)
		*SpawnParams = params.SpawnParams;

	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*          SystemTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData)
// enum class ENCPoolMethod       PoolingMethod                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreCullCheck                  (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached"));

	UNiagaraFunctionLibrary_SpawnSystemAttached_Params params;
	params.SystemTemplate = SystemTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;
	params.bAutoActivate = bAutoActivate;
	params.PoolingMethod = PoolingMethod;
	params.bPreCullCheck = bPreCullCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFXSystemSpawnParameters SpawnParams                    (Parm, OutParm)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnSystemAtLocationWithParams(struct FFXSystemSpawnParameters* SpawnParams)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams"));

	UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnParams != nullptr)
		*SpawnParams = params.SpawnParams;

	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraSystem*          SystemTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData)
// enum class ENCPoolMethod       PoolingMethod                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreCullCheck                  (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation"));

	UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SystemTemplate = SystemTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.bAutoDestroy = bAutoDestroy;
	params.bAutoActivate = bAutoActivate;
	params.PoolingMethod = PoolingMethod;
	params.bPreCullCheck = bPreCullCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 OverrideName                   (Parm, ZeroConstructor)
// class UVolumeTexture*          Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraFunctionLibrary::STATIC_SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UVolumeTexture* Texture)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject"));

	UNiagaraFunctionLibrary_SetVolumeTextureObject_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.SetTextureObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 OverrideName                   (Parm, ZeroConstructor)
// class UTexture*                Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraFunctionLibrary::STATIC_SetTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UTexture* Texture)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.SetTextureObject"));

	UNiagaraFunctionLibrary_SetTextureObject_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 OverrideName                   (Parm, ZeroConstructor)
// class UTexture2DArray*         Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraFunctionLibrary::STATIC_SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UTexture2DArray* Texture)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject"));

	UNiagaraFunctionLibrary_SetTexture2DArrayObject_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 OverrideName                   (Parm, ZeroConstructor)
// TArray<struct FName>           SamplingRegions                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UNiagaraFunctionLibrary::STATIC_SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, TArray<struct FName> SamplingRegions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions"));

	UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.SamplingRegions = SamplingRegions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Primitive                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CollisionGroup                 (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraFunctionLibrary::STATIC_SetComponentNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class UPrimitiveComponent* Primitive, int CollisionGroup)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup"));

	UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Primitive = Primitive;
	params.CollisionGroup = CollisionGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            CollisionGroup                 (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraFunctionLibrary::STATIC_SetActorNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class AActor* Actor, int CollisionGroup)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup"));

	UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Actor = Actor;
	params.CollisionGroup = CollisionGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            CollisionGroup                 (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraFunctionLibrary::STATIC_ReleaseNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, int CollisionGroup)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup"));

	UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CollisionGroup = CollisionGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 OverrideName                   (Parm, ZeroConstructor)
// class UStaticMeshComponent*    StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNiagaraFunctionLibrary::STATIC_OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent"));

	UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.StaticMeshComponent = StaticMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 OverrideName                   (Parm, ZeroConstructor)
// class UStaticMesh*             StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraFunctionLibrary::STATIC_OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMesh* StaticMesh)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh"));

	UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.StaticMesh = StaticMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 OverrideName                   (Parm, ZeroConstructor)
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNiagaraFunctionLibrary::STATIC_OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent"));

	UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraParameterCollection* Collection                     (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraParameterCollectionInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::STATIC_GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection"));

	UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Collection = Collection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNiagaraFunctionLibrary::STATIC_AcquireNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup"));

	UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraParameterCollectionInstance::SetVectorParameter(const struct FString& InVariableName, const struct FVector& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter"));

	UNiagaraParameterCollectionInstance_SetVectorParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UNiagaraParameterCollectionInstance::SetVector4Parameter(const struct FString& InVariableName, const struct FVector4& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter"));

	UNiagaraParameterCollectionInstance_SetVector4Parameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraParameterCollectionInstance::SetVector2DParameter(const struct FString& InVariableName, const struct FVector2D& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter"));

	UNiagaraParameterCollectionInstance_SetVector2DParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNiagaraParameterCollectionInstance::SetQuatParameter(const struct FString& InVariableName, const struct FQuat& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter"));

	UNiagaraParameterCollectionInstance_SetQuatParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraParameterCollectionInstance::SetIntParameter(const struct FString& InVariableName, int InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter"));

	UNiagaraParameterCollectionInstance_SetIntParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraParameterCollectionInstance::SetFloatParameter(const struct FString& InVariableName, float InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter"));

	UNiagaraParameterCollectionInstance_SetFloatParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraParameterCollectionInstance::SetColorParameter(const struct FString& InVariableName, const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter"));

	UNiagaraParameterCollectionInstance_SetColorParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraParameterCollectionInstance::SetBoolParameter(const struct FString& InVariableName, bool InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter"));

	UNiagaraParameterCollectionInstance_SetBoolParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter(const struct FString& InVariableName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter"));

	UNiagaraParameterCollectionInstance_GetVectorParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector4                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(const struct FString& InVariableName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter"));

	UNiagaraParameterCollectionInstance_GetVector4Parameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(const struct FString& InVariableName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter"));

	UNiagaraParameterCollectionInstance_GetVector2DParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(const struct FString& InVariableName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter"));

	UNiagaraParameterCollectionInstance_GetQuatParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNiagaraParameterCollectionInstance::GetIntParameter(const struct FString& InVariableName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter"));

	UNiagaraParameterCollectionInstance_GetIntParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNiagaraParameterCollectionInstance::GetFloatParameter(const struct FString& InVariableName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter"));

	UNiagaraParameterCollectionInstance_GetFloatParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(const struct FString& InVariableName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter"));

	UNiagaraParameterCollectionInstance_GetColorParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraParameterCollectionInstance::GetBoolParameter(const struct FString& InVariableName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter"));

	UNiagaraParameterCollectionInstance_GetBoolParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraBaselineController.OnTickTest
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNiagaraBaselineController::OnTickTest()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraBaselineController.OnTickTest"));

	UNiagaraBaselineController_OnTickTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraBaselineController.OnOwnerTick
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraBaselineController::OnOwnerTick(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraBaselineController.OnOwnerTick"));

	UNiagaraBaselineController_OnOwnerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraBaselineController.OnEndTest
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FNiagaraPerfBaselineStats Stats                          (Parm)

void UNiagaraBaselineController::OnEndTest(const struct FNiagaraPerfBaselineStats& Stats)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraBaselineController.OnEndTest"));

	UNiagaraBaselineController_OnEndTest_Params params;
	params.Stats = Stats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraBaselineController.OnBeginTest
// (Native, Event, Public, BlueprintEvent)

void UNiagaraBaselineController::OnBeginTest()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraBaselineController.OnBeginTest"));

	UNiagaraBaselineController_OnBeginTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraBaselineController.GetSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNiagaraSystem* UNiagaraBaselineController::GetSystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraBaselineController.GetSystem"));

	UNiagaraBaselineController_GetSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraPreviewBase.SetSystem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*          InSystem                       (Parm, ZeroConstructor, IsPlainOldData)

void ANiagaraPreviewBase::SetSystem(class UNiagaraSystem* InSystem)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraPreviewBase.SetSystem"));

	ANiagaraPreviewBase_SetSystem_Params params;
	params.InSystem = InSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraPreviewBase.SetLabelText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InXAxisText                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   InYAxisText                    (ConstParm, Parm, OutParm, ReferenceParm)

void ANiagaraPreviewBase::SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraPreviewBase.SetLabelText"));

	ANiagaraPreviewBase_SetLabelText_Params params;
	params.InXAxisText = InXAxisText;
	params.InYAxisText = InYAxisText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraPreviewAxis.Num
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNiagaraPreviewAxis::Num()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraPreviewAxis.Num"));

	UNiagaraPreviewAxis_Num_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*       PreviewComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            PreviewIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsXAxis                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutLabelText                   (Parm, OutParm, ZeroConstructor)

void UNiagaraPreviewAxis::ApplyToPreview(class UNiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraPreviewAxis.ApplyToPreview"));

	UNiagaraPreviewAxis_ApplyToPreview_Params params;
	params.PreviewComponent = PreviewComponent;
	params.PreviewIndex = PreviewIndex;
	params.bIsXAxis = bIsXAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLabelText != nullptr)
		*OutLabelText = params.OutLabelText;
}


// Function Niagara.NiagaraPreviewGrid.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPaused                        (Parm, ZeroConstructor, IsPlainOldData)

void ANiagaraPreviewGrid::SetPaused(bool bPaused)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraPreviewGrid.SetPaused"));

	ANiagaraPreviewGrid_SetPaused_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraPreviewGrid.GetPreviews
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UNiagaraComponent*> OutPreviews                    (Parm, OutParm, ZeroConstructor)

void ANiagaraPreviewGrid::GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraPreviewGrid.GetPreviews"));

	ANiagaraPreviewGrid_GetPreviews_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPreviews != nullptr)
		*OutPreviews = params.OutPreviews;
}


// Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
// (Final, Native, Public, BlueprintCallable)

void ANiagaraPreviewGrid::DeactivatePreviews()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraPreviewGrid.DeactivatePreviews"));

	ANiagaraPreviewGrid_DeactivatePreviews_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void ANiagaraPreviewGrid::ActivatePreviews(bool bReset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraPreviewGrid.ActivatePreviews"));

	ANiagaraPreviewGrid_ActivatePreviews_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
// (Final, Native, Public)

void UNiagaraScript::RaiseOnGPUCompilationComplete()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete"));

	UNiagaraScript_RaiseOnGPUCompilationComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
