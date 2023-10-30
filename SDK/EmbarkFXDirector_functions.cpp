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

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.UpdateCue_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXHandle         Handle                         (Parm)
// struct FEmbarkFXCue            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXCue UEmbarkFXDirectorStatics::STATIC_UpdateCue_GetRef(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.UpdateCue_GetRef"));

	UEmbarkFXDirectorStatics_UpdateCue_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.StopFX
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         Handle                         (Parm, OutParm, ReferenceParm)
// float                          FadeOutSeconds                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_StopFX(class UObject* ContextObject, float FadeOutSeconds, bool bImmediate, struct FEmbarkFXHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.StopFX"));

	UEmbarkFXDirectorStatics_StopFX_Params params;
	params.ContextObject = ContextObject;
	params.FadeOutSeconds = FadeOutSeconds;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetInstanceTag
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// class UObject*                 Instantiator                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            MinCondition                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_SetInstanceTag(class UObject* ContextObject, class UObject* Instantiator, unsigned char Specifier, int MinCondition, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetInstanceTag"));

	UEmbarkFXDirectorStatics_SetInstanceTag_Params params;
	params.ContextObject = ContextObject;
	params.Instantiator = Instantiator;
	params.Specifier = Specifier;
	params.MinCondition = MinCondition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetForegroundFlags
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// enum class EEmbarkFXForegroundFlags Flags                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_SetForegroundFlags(class UObject* ContextObject, enum class EEmbarkFXForegroundFlags Flags, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetForegroundFlags"));

	UEmbarkFXDirectorStatics_SetForegroundFlags_Params params;
	params.ContextObject = ContextObject;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetFieldOfView
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// float                          FieldOfView                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_SetFieldOfView(class UObject* ContextObject, float FieldOfView, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetFieldOfView"));

	UEmbarkFXDirectorStatics_SetFieldOfView_Params params;
	params.ContextObject = ContextObject;
	params.FieldOfView = FieldOfView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetBinding
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// enum class EEmbarkFXBinding    Binding                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_SetBinding(class UObject* ContextObject, enum class EEmbarkFXBinding Binding, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetBinding"));

	UEmbarkFXDirectorStatics_SetBinding_Params params;
	params.ContextObject = ContextObject;
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetAutoRemove
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// bool                           bAutoRemove                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_SetAutoRemove(class UObject* ContextObject, bool bAutoRemove, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetAutoRemove"));

	UEmbarkFXDirectorStatics_SetAutoRemove_Params params;
	params.ContextObject = ContextObject;
	params.bAutoRemove = bAutoRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetAutoPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// enum class EEmbarkFXAutoPosition AutoPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkFXAutoPositionFunc AutoPositionFunc               (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_SetAutoPosition(class UObject* ContextObject, enum class EEmbarkFXAutoPosition AutoPosition, enum class EEmbarkFXAutoPositionFunc AutoPositionFunc, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetAutoPosition"));

	UEmbarkFXDirectorStatics_SetAutoPosition_Params params;
	params.ContextObject = ContextObject;
	params.AutoPosition = AutoPosition;
	params.AutoPositionFunc = AutoPositionFunc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.RemoveTickPrerequisiteComponent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_RemoveTickPrerequisiteComponent(class UObject* ContextObject, class UActorComponent* PrerequisiteComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.RemoveTickPrerequisiteComponent"));

	UEmbarkFXDirectorStatics_RemoveTickPrerequisiteComponent_Params params;
	params.ContextObject = ContextObject;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.RemoveTickPrerequisiteActor
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_RemoveTickPrerequisiteActor(class UObject* ContextObject, class AActor* PrerequisiteActor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.RemoveTickPrerequisiteActor"));

	UEmbarkFXDirectorStatics_RemoveTickPrerequisiteActor_Params params;
	params.ContextObject = ContextObject;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.RemoveCue
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXHandle         Handle                         (Parm, OutParm, ReferenceParm)
// float                          FadeOutSeconds                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_RemoveCue(class UObject* ContextObject, float FadeOutSeconds, bool bImmediate, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.RemoveCue"));

	UEmbarkFXDirectorStatics_RemoveCue_Params params;
	params.ContextObject = ContextObject;
	params.FadeOutSeconds = FadeOutSeconds;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.PoolDynamicMaterialInstance
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* DynamicMaterialInstance        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_PoolDynamicMaterialInstance(class UObject* ContextObject, class UMaterialInstanceDynamic* DynamicMaterialInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.PoolDynamicMaterialInstance"));

	UEmbarkFXDirectorStatics_PoolDynamicMaterialInstance_Params params;
	params.ContextObject = ContextObject;
	params.DynamicMaterialInstance = DynamicMaterialInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.NextOrCreateDynamicMaterialInstance
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UEmbarkFXDirectorStatics::STATIC_NextOrCreateDynamicMaterialInstance(class UObject* ContextObject, class UMaterialInterface* Material)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.NextOrCreateDynamicMaterialInstance"));

	UEmbarkFXDirectorStatics_NextOrCreateDynamicMaterialInstance_Params params;
	params.ContextObject = ContextObject;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.IsValidHandle
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FEmbarkFXHandle         Handle                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFXDirectorStatics::STATIC_IsValidHandle(const struct FEmbarkFXHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.IsValidHandle"));

	UEmbarkFXDirectorStatics_IsValidHandle_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.IsEnabled
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFXDirectorStatics::STATIC_IsEnabled(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.IsEnabled"));

	UEmbarkFXDirectorStatics_IsEnabled_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.IsCuePendingOrActive
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FEmbarkFXHandle         Handle                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFXDirectorStatics::STATIC_IsCuePendingOrActive(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.IsCuePendingOrActive"));

	UEmbarkFXDirectorStatics_IsCuePendingOrActive_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.IsAudible
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFXDirectorStatics::STATIC_IsAudible(class UObject* ContextObject, const struct FVector& Location, float MaxDistance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.IsAudible"));

	UEmbarkFXDirectorStatics_IsAudible_Params params;
	params.ContextObject = ContextObject;
	params.Location = Location;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.InvalidateHandle
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkFXHandle         Handle                         (Parm, OutParm, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_InvalidateHandle(struct FEmbarkFXHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.InvalidateHandle"));

	UEmbarkFXDirectorStatics_InvalidateHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.GetComponent
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXHandle         Handle                         (Parm)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UEmbarkFXDirectorStatics::STATIC_GetComponent(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, class UClass* Class, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.GetComponent"));

	UEmbarkFXDirectorStatics_GetComponent_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.EqualHandles
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FEmbarkFXHandle         Handle1                        (Parm)
// struct FEmbarkFXHandle         Handle2                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFXDirectorStatics::STATIC_EqualHandles(const struct FEmbarkFXHandle& Handle1, const struct FEmbarkFXHandle& Handle2)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.EqualHandles"));

	UEmbarkFXDirectorStatics_EqualHandles_Params params;
	params.Handle1 = Handle1;
	params.Handle2 = Handle2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.EndContext
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_EndContext(class UObject* ContextObject, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.EndContext"));

	UEmbarkFXDirectorStatics_EndContext_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.DetachFX
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         Handle                         (Parm)

void UEmbarkFXDirectorStatics::STATIC_DetachFX(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.DetachFX"));

	UEmbarkFXDirectorStatics_DetachFX_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.DetachCue
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXHandle         Handle                         (Parm)

void UEmbarkFXDirectorStatics::STATIC_DetachCue(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.DetachCue"));

	UEmbarkFXDirectorStatics_DetachCue_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueUISound
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXHandle UEmbarkFXDirectorStatics::STATIC_CueUISound(class UObject* ContextObject, class USoundBase* Sound, float VolumeMultiplier, float FadeInSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueUISound"));

	UEmbarkFXDirectorStatics_CueUISound_Params params;
	params.ContextObject = ContextObject;
	params.Sound = Sound;
	params.VolumeMultiplier = VolumeMultiplier;
	params.FadeInSeconds = FadeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXVector
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         Handle                         (Parm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkFXBinding    Binding                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetInstanceTag                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_CueFXVector(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, const struct FVector& Value, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXVector"));

	UEmbarkFXDirectorStatics_CueFXVector_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;
	params.Name = Name;
	params.Value = Value;
	params.Binding = Binding;
	params.bSetInstanceTag = bSetInstanceTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXTrigger
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         Handle                         (Parm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkFXBinding    Binding                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetInstanceTag                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_CueFXTrigger(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXTrigger"));

	UEmbarkFXDirectorStatics_CueFXTrigger_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;
	params.Name = Name;
	params.Binding = Binding;
	params.bSetInstanceTag = bSetInstanceTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXTransform
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         Handle                         (Parm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Value                          (Parm, IsPlainOldData)
// enum class EEmbarkFXBinding    Binding                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetInstanceTag                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_CueFXTransform(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, const struct FTransform& Value, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXTransform"));

	UEmbarkFXDirectorStatics_CueFXTransform_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;
	params.Name = Name;
	params.Value = Value;
	params.Binding = Binding;
	params.bSetInstanceTag = bSetInstanceTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXQuat
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         Handle                         (Parm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Value                          (Parm, IsPlainOldData)
// enum class EEmbarkFXBinding    Binding                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetInstanceTag                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_CueFXQuat(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, const struct FQuat& Value, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXQuat"));

	UEmbarkFXDirectorStatics_CueFXQuat_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;
	params.Name = Name;
	params.Value = Value;
	params.Binding = Binding;
	params.bSetInstanceTag = bSetInstanceTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         Handle                         (Parm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkFXBinding    Binding                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetInstanceTag                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_CueFXPosition(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, const struct FVector& Value, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXPosition"));

	UEmbarkFXDirectorStatics_CueFXPosition_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;
	params.Name = Name;
	params.Value = Value;
	params.Binding = Binding;
	params.bSetInstanceTag = bSetInstanceTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXInt
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         Handle                         (Parm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkFXBinding    Binding                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetInstanceTag                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_CueFXInt(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, int Value, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXInt"));

	UEmbarkFXDirectorStatics_CueFXInt_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;
	params.Name = Name;
	params.Value = Value;
	params.Binding = Binding;
	params.bSetInstanceTag = bSetInstanceTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXFloat
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         Handle                         (Parm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkFXBinding    Binding                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetInstanceTag                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_CueFXFloat(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, float Value, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXFloat"));

	UEmbarkFXDirectorStatics_CueFXFloat_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;
	params.Name = Name;
	params.Value = Value;
	params.Binding = Binding;
	params.bSetInstanceTag = bSetInstanceTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXColor
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         Handle                         (Parm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkFXBinding    Binding                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetInstanceTag                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_CueFXColor(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, const struct FLinearColor& Value, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXColor"));

	UEmbarkFXDirectorStatics_CueFXColor_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;
	params.Name = Name;
	params.Value = Value;
	params.Binding = Binding;
	params.bSetInstanceTag = bSetInstanceTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXCallbackAsync
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DelaySeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        UserData                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXHandle UEmbarkFXDirectorStatics::STATIC_CueFXCallbackAsync(class UObject* ContextObject, class UObject* Object, const struct FName& FunctionName, float DelaySeconds, int64_t UserData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXCallbackAsync"));

	UEmbarkFXDirectorStatics_CueFXCallbackAsync_Params params;
	params.ContextObject = ContextObject;
	params.Object = Object;
	params.FunctionName = FunctionName;
	params.DelaySeconds = DelaySeconds;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXCallback
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DelaySeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        UserData                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXHandle UEmbarkFXDirectorStatics::STATIC_CueFXCallback(class UObject* ContextObject, class UObject* Object, const struct FName& FunctionName, float DelaySeconds, int64_t UserData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXCallback"));

	UEmbarkFXDirectorStatics_CueFXCallback_Params params;
	params.ContextObject = ContextObject;
	params.Object = Object;
	params.FunctionName = FunctionName;
	params.DelaySeconds = DelaySeconds;
	params.UserData = UserData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXBool
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         Handle                         (Parm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkFXBinding    Binding                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetInstanceTag                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_CueFXBool(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FName& Name, bool bValue, enum class EEmbarkFXBinding Binding, bool bSetInstanceTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXBool"));

	UEmbarkFXDirectorStatics_CueFXBool_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;
	params.Name = Name;
	params.bValue = bValue;
	params.Binding = Binding;
	params.bSetInstanceTag = bSetInstanceTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXAutoPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         Handle                         (Parm)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkFXAutoPosition AutoPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkFXAutoPositionFunc AutoPositionFunc               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetInstanceTag                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_CueFXAutoPosition(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, const struct FVector& Location, enum class EEmbarkFXAutoPosition AutoPosition, enum class EEmbarkFXAutoPositionFunc AutoPositionFunc, bool bSetInstanceTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXAutoPosition"));

	UEmbarkFXDirectorStatics_CueFXAutoPosition_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;
	params.Location = Location;
	params.AutoPosition = AutoPosition;
	params.AutoPositionFunc = AutoPositionFunc;
	params.bSetInstanceTag = bSetInstanceTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXAttached
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraSystem*          System                         (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      DecalMaterial                  (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachToName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   AttachLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DecalSize                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DecalLifeTimeSeconds           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRandomDecalRotation           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetInstanceTag                (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXHandle UEmbarkFXDirectorStatics::STATIC_CueFXAttached(class UObject* ContextObject, class UNiagaraSystem* System, class USoundBase* Sound, class UMaterialInterface* DecalMaterial, class USceneComponent* AttachToComponent, const struct FName& AttachToName, TEnumAsByte<EAttachLocation> AttachLocation, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float FadeInSeconds, const struct FVector& DecalSize, float DecalLifeTimeSeconds, bool bRandomDecalRotation, bool bSetInstanceTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXAttached"));

	UEmbarkFXDirectorStatics_CueFXAttached_Params params;
	params.ContextObject = ContextObject;
	params.System = System;
	params.Sound = Sound;
	params.DecalMaterial = DecalMaterial;
	params.AttachToComponent = AttachToComponent;
	params.AttachToName = AttachToName;
	params.AttachLocation = AttachLocation;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.FadeInSeconds = FadeInSeconds;
	params.DecalSize = DecalSize;
	params.DecalLifeTimeSeconds = DecalLifeTimeSeconds;
	params.bRandomDecalRotation = bRandomDecalRotation;
	params.bSetInstanceTag = bSetInstanceTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraSystem*          System                         (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      DecalMaterial                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DecalSize                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DecalLifeTimeSeconds           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRandomDecalRotation           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetInstanceTag                (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXHandle UEmbarkFXDirectorStatics::STATIC_CueFXAtLocation(class UObject* ContextObject, class UNiagaraSystem* System, class USoundBase* Sound, class UMaterialInterface* DecalMaterial, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float FadeInSeconds, const struct FVector& DecalSize, float DecalLifeTimeSeconds, bool bRandomDecalRotation, bool bSetInstanceTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXAtLocation"));

	UEmbarkFXDirectorStatics_CueFXAtLocation_Params params;
	params.ContextObject = ContextObject;
	params.System = System;
	params.Sound = Sound;
	params.DecalMaterial = DecalMaterial;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.FadeInSeconds = FadeInSeconds;
	params.DecalSize = DecalSize;
	params.DecalLifeTimeSeconds = DecalLifeTimeSeconds;
	params.bRandomDecalRotation = bRandomDecalRotation;
	params.bSetInstanceTag = bSetInstanceTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CheckCueInvariants
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FEmbarkFXHandle         Handle                         (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkFXDirectorStatics::STATIC_CheckCueInvariants(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.CheckCueInvariants"));

	UEmbarkFXDirectorStatics_CheckCueInvariants_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.BeginContext
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_BeginContext(class UObject* ContextObject, const struct FName& Name, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.BeginContext"));

	UEmbarkFXDirectorStatics_BeginContext_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddVectorArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UEmbarkFXDirectorStatics::STATIC_AddVectorArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddVectorArray_GetRef"));

	UEmbarkFXDirectorStatics_AddVectorArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddVectorArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_AddVectorArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FVector> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddVectorArray"));

	UEmbarkFXDirectorStatics_AddVectorArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddVector
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_AddVector(class UObject* ContextObject, const struct FName& Name, const struct FVector& Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddVector"));

	UEmbarkFXDirectorStatics_AddVector_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTrigger
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_AddTrigger(class UObject* ContextObject, const struct FName& Name, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTrigger"));

	UEmbarkFXDirectorStatics_AddTrigger_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTransformArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTransform>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FTransform> UEmbarkFXDirectorStatics::STATIC_AddTransformArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTransformArray_GetRef"));

	UEmbarkFXDirectorStatics_AddTransformArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTransformArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTransform>      Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_AddTransformArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FTransform> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTransformArray"));

	UEmbarkFXDirectorStatics_AddTransformArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTransform
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Value                          (Parm, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_AddTransform(class UObject* ContextObject, const struct FName& Name, const struct FTransform& Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTransform"));

	UEmbarkFXDirectorStatics_AddTransform_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTickPrerequisiteComponent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_AddTickPrerequisiteComponent(class UObject* ContextObject, class UActorComponent* PrerequisiteComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTickPrerequisiteComponent"));

	UEmbarkFXDirectorStatics_AddTickPrerequisiteComponent_Params params;
	params.ContextObject = ContextObject;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTickPrerequisiteActor
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_AddTickPrerequisiteActor(class UObject* ContextObject, class AActor* PrerequisiteActor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTickPrerequisiteActor"));

	UEmbarkFXDirectorStatics_AddTickPrerequisiteActor_Params params;
	params.ContextObject = ContextObject;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddQuatArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FQuat>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FQuat> UEmbarkFXDirectorStatics::STATIC_AddQuatArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddQuatArray_GetRef"));

	UEmbarkFXDirectorStatics_AddQuatArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddQuatArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FQuat>           Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_AddQuatArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FQuat> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddQuatArray"));

	UEmbarkFXDirectorStatics_AddQuatArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddQuat
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Value                          (Parm, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_AddQuat(class UObject* ContextObject, const struct FName& Name, const struct FQuat& Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddQuat"));

	UEmbarkFXDirectorStatics_AddQuat_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddPositionArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UEmbarkFXDirectorStatics::STATIC_AddPositionArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddPositionArray_GetRef"));

	UEmbarkFXDirectorStatics_AddPositionArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddPositionArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_AddPositionArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FVector> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddPositionArray"));

	UEmbarkFXDirectorStatics_AddPositionArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_AddPosition(class UObject* ContextObject, const struct FName& Name, const struct FVector& Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddPosition"));

	UEmbarkFXDirectorStatics_AddPosition_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddParticleParams_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// class UNiagaraSystem*          NiagaraSystem                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXParticleParams ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXParticleParams UEmbarkFXDirectorStatics::STATIC_AddParticleParams_GetRef(class UObject* ContextObject, class UNiagaraSystem* NiagaraSystem, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddParticleParams_GetRef"));

	UEmbarkFXDirectorStatics_AddParticleParams_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.NiagaraSystem = NiagaraSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddParticleParams
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXParticleParams ParticleParams                 (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_AddParticleParams(class UObject* ContextObject, const struct FEmbarkFXParticleParams& ParticleParams, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddParticleParams"));

	UEmbarkFXDirectorStatics_AddParticleParams_Params params;
	params.ContextObject = ContextObject;
	params.ParticleParams = ParticleParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddObjectArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UEmbarkFXDirectorStatics::STATIC_AddObjectArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddObjectArray_GetRef"));

	UEmbarkFXDirectorStatics_AddObjectArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddObjectArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_AddObjectArray(class UObject* ContextObject, const struct FName& Name, TArray<class UObject*> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddObjectArray"));

	UEmbarkFXDirectorStatics_AddObjectArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddObject
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_AddObject(class UObject* ContextObject, const struct FName& Name, class UObject* Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddObject"));

	UEmbarkFXDirectorStatics_AddObject_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddIntArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UEmbarkFXDirectorStatics::STATIC_AddIntArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddIntArray_GetRef"));

	UEmbarkFXDirectorStatics_AddIntArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddIntArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_AddIntArray(class UObject* ContextObject, const struct FName& Name, TArray<int> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddIntArray"));

	UEmbarkFXDirectorStatics_AddIntArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddInt
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_AddInt(class UObject* ContextObject, const struct FName& Name, int Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddInt"));

	UEmbarkFXDirectorStatics_AddInt_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddFloatArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<float> UEmbarkFXDirectorStatics::STATIC_AddFloatArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddFloatArray_GetRef"));

	UEmbarkFXDirectorStatics_AddFloatArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddFloatArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_AddFloatArray(class UObject* ContextObject, const struct FName& Name, TArray<float> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddFloatArray"));

	UEmbarkFXDirectorStatics_AddFloatArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddFloat
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_AddFloat(class UObject* ContextObject, const struct FName& Name, float Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddFloat"));

	UEmbarkFXDirectorStatics_AddFloat_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddExternalFXCost
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_AddExternalFXCost(class UObject* ContextObject, int Cost)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddExternalFXCost"));

	UEmbarkFXDirectorStatics_AddExternalFXCost_Params params;
	params.ContextObject = ContextObject;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddDecalParams_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDecalParams    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXDecalParams UEmbarkFXDirectorStatics::STATIC_AddDecalParams_GetRef(class UObject* ContextObject, class UMaterialInterface* Material, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddDecalParams_GetRef"));

	UEmbarkFXDirectorStatics_AddDecalParams_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddDecalParams
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXDecalParams    DecalParams                    (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_AddDecalParams(class UObject* ContextObject, const struct FEmbarkFXDecalParams& DecalParams, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddDecalParams"));

	UEmbarkFXDirectorStatics_AddDecalParams_Params params;
	params.ContextObject = ContextObject;
	params.DecalParams = DecalParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddCue_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXCue UEmbarkFXDirectorStatics::STATIC_AddCue_GetRef(class UObject* ContextObject, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddCue_GetRef"));

	UEmbarkFXDirectorStatics_AddCue_GetRef_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddColorArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLinearColor>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FLinearColor> UEmbarkFXDirectorStatics::STATIC_AddColorArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddColorArray_GetRef"));

	UEmbarkFXDirectorStatics_AddColorArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddColorArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLinearColor>    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_AddColorArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FLinearColor> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddColorArray"));

	UEmbarkFXDirectorStatics_AddColorArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddColor
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_AddColor(class UObject* ContextObject, const struct FName& Name, const struct FLinearColor& Value, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddColor"));

	UEmbarkFXDirectorStatics_AddColor_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddCallbackParams_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FEmbarkFXCallbackParams ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXCallbackParams UEmbarkFXDirectorStatics::STATIC_AddCallbackParams_GetRef(class UObject* ContextObject, class UObject* Object, const struct FName& FunctionName, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddCallbackParams_GetRef"));

	UEmbarkFXDirectorStatics_AddCallbackParams_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddCallbackParams
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCallbackParams CallbackParams                 (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_AddCallbackParams(class UObject* ContextObject, const struct FEmbarkFXCallbackParams& CallbackParams, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddCallbackParams"));

	UEmbarkFXDirectorStatics_AddCallbackParams_Params params;
	params.ContextObject = ContextObject;
	params.CallbackParams = CallbackParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddBoolArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<bool> UEmbarkFXDirectorStatics::STATIC_AddBoolArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddBoolArray_GetRef"));

	UEmbarkFXDirectorStatics_AddBoolArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddBoolArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_AddBoolArray(class UObject* ContextObject, const struct FName& Name, TArray<bool> Array, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddBoolArray"));

	UEmbarkFXDirectorStatics_AddBoolArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddBool
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorStatics::STATIC_AddBool(class UObject* ContextObject, const struct FName& Name, bool bValue, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddBool"));

	UEmbarkFXDirectorStatics_AddBool_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddAudioParams_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXAudioParams    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXAudioParams UEmbarkFXDirectorStatics::STATIC_AddAudioParams_GetRef(class UObject* ContextObject, class USoundBase* Sound, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddAudioParams_GetRef"));

	UEmbarkFXDirectorStatics_AddAudioParams_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddAudioParams
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXAudioParams    AudioParams                    (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_AddAudioParams(class UObject* ContextObject, const struct FEmbarkFXAudioParams& AudioParams, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddAudioParams"));

	UEmbarkFXDirectorStatics_AddAudioParams_Params params;
	params.ContextObject = ContextObject;
	params.AudioParams = AudioParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddAttachmentParams_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FEmbarkFXAttachmentParams ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXAttachmentParams UEmbarkFXDirectorStatics::STATIC_AddAttachmentParams_GetRef(class UObject* ContextObject, class USceneComponent* AttachToComponent, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddAttachmentParams_GetRef"));

	UEmbarkFXDirectorStatics_AddAttachmentParams_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.AttachToComponent = AttachToComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddAttachmentParams
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm, ReferenceParm)
// struct FEmbarkFXAttachmentParams AttachmentParams               (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFXDirectorStatics::STATIC_AddAttachmentParams(class UObject* ContextObject, const struct FEmbarkFXAttachmentParams& AttachmentParams, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddAttachmentParams"));

	UEmbarkFXDirectorStatics_AddAttachmentParams_Params params;
	params.ContextObject = ContextObject;
	params.AttachmentParams = AttachmentParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorContextMixins.UpdateCue_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXHandle         Handle                         (Parm)
// struct FEmbarkFXCue            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXCue UEmbarkFXDirectorContextMixins::STATIC_UpdateCue_GetRef(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorContextMixins.UpdateCue_GetRef"));

	UEmbarkFXDirectorContextMixins_UpdateCue_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXDirectorContextMixins.SetBinding
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkFXBinding    Binding                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXDirectorContextMixins::STATIC_SetBinding(class UObject* ContextObject, enum class EEmbarkFXBinding Binding, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorContextMixins.SetBinding"));

	UEmbarkFXDirectorContextMixins_SetBinding_Params params;
	params.ContextObject = ContextObject;
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXDirectorContextMixins.AddCue_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXCue            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXCue UEmbarkFXDirectorContextMixins::STATIC_AddCue_GetRef(class UObject* ContextObject, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXDirectorContextMixins.AddCue_GetRef"));

	UEmbarkFXDirectorContextMixins_AddCue_GetRef_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXHandleMixins.Unpack
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXHandle         Handle                         (Parm, OutParm)
// int64_t                        Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXHandleMixins::STATIC_Unpack(int64_t Value, struct FEmbarkFXHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXHandleMixins.Unpack"));

	UEmbarkFXHandleMixins_Unpack_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function EmbarkFXDirector.EmbarkFXHandleMixins.RemoveCue
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXHandle         Handle                         (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// float                          FadeOutSeconds                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXHandleMixins::STATIC_RemoveCue(class UObject* ContextObject, float FadeOutSeconds, bool bImmediate, struct FEmbarkFXHandle* Handle, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXHandleMixins.RemoveCue"));

	UEmbarkFXHandleMixins_RemoveCue_Params params;
	params.ContextObject = ContextObject;
	params.FadeOutSeconds = FadeOutSeconds;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXHandleMixins.Pack
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXHandle         Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UEmbarkFXHandleMixins::STATIC_Pack(const struct FEmbarkFXHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXHandleMixins.Pack"));

	UEmbarkFXHandleMixins_Pack_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXHandleMixins.IsValidHandle
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXHandle         Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFXHandleMixins::STATIC_IsValidHandle(const struct FEmbarkFXHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXHandleMixins.IsValidHandle"));

	UEmbarkFXHandleMixins_IsValidHandle_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXHandleMixins.IsCuePendingOrActive
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXHandle         Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFXHandleMixins::STATIC_IsCuePendingOrActive(const struct FEmbarkFXHandle& Handle, class UObject* ContextObject, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXHandleMixins.IsCuePendingOrActive"));

	UEmbarkFXHandleMixins_IsCuePendingOrActive_Params params;
	params.Handle = Handle;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXHandleMixins.InvalidateHandle
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXHandle         Handle                         (Parm, OutParm)

void UEmbarkFXHandleMixins::STATIC_InvalidateHandle(struct FEmbarkFXHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXHandleMixins.InvalidateHandle"));

	UEmbarkFXHandleMixins_InvalidateHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function EmbarkFXDirector.EmbarkFXHandleMixins.DetachCue
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXHandle         Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)

void UEmbarkFXHandleMixins::STATIC_DetachCue(const struct FEmbarkFXHandle& Handle, class UObject* ContextObject, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXHandleMixins.DetachCue"));

	UEmbarkFXHandleMixins_DetachCue_Params params;
	params.Handle = Handle;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXHandleMixins.CheckCueInvariants
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FEmbarkFXHandle         Handle                         (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkFXHandleMixins::STATIC_CheckCueInvariants(class UObject* ContextObject, const struct FEmbarkFXHandle& Handle, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXHandleMixins.CheckCueInvariants"));

	UEmbarkFXHandleMixins_CheckCueInvariants_Params params;
	params.ContextObject = ContextObject;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.SetInstanceTag
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// class UObject*                 Instantiator                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            MinCondition                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_SetInstanceTag(class UObject* ContextObject, class UObject* Instantiator, unsigned char Specifier, int MinCondition, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.SetInstanceTag"));

	UEmbarkFXCueMixins_SetInstanceTag_Params params;
	params.ContextObject = ContextObject;
	params.Instantiator = Instantiator;
	params.Specifier = Specifier;
	params.MinCondition = MinCondition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.SetForegroundFlags
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// enum class EEmbarkFXForegroundFlags Flags                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_SetForegroundFlags(class UObject* ContextObject, enum class EEmbarkFXForegroundFlags Flags, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.SetForegroundFlags"));

	UEmbarkFXCueMixins_SetForegroundFlags_Params params;
	params.ContextObject = ContextObject;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.SetFieldOfView
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// float                          FieldOfView                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_SetFieldOfView(class UObject* ContextObject, float FieldOfView, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.SetFieldOfView"));

	UEmbarkFXCueMixins_SetFieldOfView_Params params;
	params.ContextObject = ContextObject;
	params.FieldOfView = FieldOfView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.SetAutoRemove
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// bool                           bAutoRemove                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_SetAutoRemove(class UObject* ContextObject, bool bAutoRemove, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.SetAutoRemove"));

	UEmbarkFXCueMixins_SetAutoRemove_Params params;
	params.ContextObject = ContextObject;
	params.bAutoRemove = bAutoRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.SetAutoPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// enum class EEmbarkFXAutoPosition AutoPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkFXAutoPositionFunc AutoPositionFunc               (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_SetAutoPosition(class UObject* ContextObject, enum class EEmbarkFXAutoPosition AutoPosition, enum class EEmbarkFXAutoPositionFunc AutoPositionFunc, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.SetAutoPosition"));

	UEmbarkFXCueMixins_SetAutoPosition_Params params;
	params.ContextObject = ContextObject;
	params.AutoPosition = AutoPosition;
	params.AutoPositionFunc = AutoPositionFunc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddVectorArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UEmbarkFXCueMixins::STATIC_AddVectorArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddVectorArray_GetRef"));

	UEmbarkFXCueMixins_AddVectorArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddVectorArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXCueMixins::STATIC_AddVectorArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FVector> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddVectorArray"));

	UEmbarkFXCueMixins_AddVectorArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddVector
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_AddVector(class UObject* ContextObject, const struct FName& Name, const struct FVector& Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddVector"));

	UEmbarkFXCueMixins_AddVector_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddTrigger
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_AddTrigger(class UObject* ContextObject, const struct FName& Name, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddTrigger"));

	UEmbarkFXCueMixins_AddTrigger_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddTransformArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTransform>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FTransform> UEmbarkFXCueMixins::STATIC_AddTransformArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddTransformArray_GetRef"));

	UEmbarkFXCueMixins_AddTransformArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddTransformArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTransform>      Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXCueMixins::STATIC_AddTransformArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FTransform> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddTransformArray"));

	UEmbarkFXCueMixins_AddTransformArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddTransform
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Value                          (Parm, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_AddTransform(class UObject* ContextObject, const struct FName& Name, const struct FTransform& Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddTransform"));

	UEmbarkFXCueMixins_AddTransform_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddQuatArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FQuat>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FQuat> UEmbarkFXCueMixins::STATIC_AddQuatArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddQuatArray_GetRef"));

	UEmbarkFXCueMixins_AddQuatArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddQuatArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FQuat>           Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXCueMixins::STATIC_AddQuatArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FQuat> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddQuatArray"));

	UEmbarkFXCueMixins_AddQuatArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddQuat
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Value                          (Parm, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_AddQuat(class UObject* ContextObject, const struct FName& Name, const struct FQuat& Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddQuat"));

	UEmbarkFXCueMixins_AddQuat_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddPositionArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UEmbarkFXCueMixins::STATIC_AddPositionArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddPositionArray_GetRef"));

	UEmbarkFXCueMixins_AddPositionArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddPositionArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXCueMixins::STATIC_AddPositionArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FVector> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddPositionArray"));

	UEmbarkFXCueMixins_AddPositionArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_AddPosition(class UObject* ContextObject, const struct FName& Name, const struct FVector& Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddPosition"));

	UEmbarkFXCueMixins_AddPosition_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddParticleParams_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// class UNiagaraSystem*          NiagaraSystem                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXParticleParams ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXParticleParams UEmbarkFXCueMixins::STATIC_AddParticleParams_GetRef(class UObject* ContextObject, class UNiagaraSystem* NiagaraSystem, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddParticleParams_GetRef"));

	UEmbarkFXCueMixins_AddParticleParams_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.NiagaraSystem = NiagaraSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddParticleParams
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FEmbarkFXParticleParams ParticleParams                 (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFXCueMixins::STATIC_AddParticleParams(class UObject* ContextObject, const struct FEmbarkFXParticleParams& ParticleParams, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddParticleParams"));

	UEmbarkFXCueMixins_AddParticleParams_Params params;
	params.ContextObject = ContextObject;
	params.ParticleParams = ParticleParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddObjectArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UEmbarkFXCueMixins::STATIC_AddObjectArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddObjectArray_GetRef"));

	UEmbarkFXCueMixins_AddObjectArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddObjectArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXCueMixins::STATIC_AddObjectArray(class UObject* ContextObject, const struct FName& Name, TArray<class UObject*> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddObjectArray"));

	UEmbarkFXCueMixins_AddObjectArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddObject
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_AddObject(class UObject* ContextObject, const struct FName& Name, class UObject* Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddObject"));

	UEmbarkFXCueMixins_AddObject_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddIntArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UEmbarkFXCueMixins::STATIC_AddIntArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddIntArray_GetRef"));

	UEmbarkFXCueMixins_AddIntArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddIntArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXCueMixins::STATIC_AddIntArray(class UObject* ContextObject, const struct FName& Name, TArray<int> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddIntArray"));

	UEmbarkFXCueMixins_AddIntArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddInt
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_AddInt(class UObject* ContextObject, const struct FName& Name, int Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddInt"));

	UEmbarkFXCueMixins_AddInt_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddFloatArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<float> UEmbarkFXCueMixins::STATIC_AddFloatArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddFloatArray_GetRef"));

	UEmbarkFXCueMixins_AddFloatArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddFloatArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXCueMixins::STATIC_AddFloatArray(class UObject* ContextObject, const struct FName& Name, TArray<float> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddFloatArray"));

	UEmbarkFXCueMixins_AddFloatArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddFloat
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_AddFloat(class UObject* ContextObject, const struct FName& Name, float Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddFloat"));

	UEmbarkFXCueMixins_AddFloat_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddDecalParams_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDecalParams    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXDecalParams UEmbarkFXCueMixins::STATIC_AddDecalParams_GetRef(class UObject* ContextObject, class UMaterialInterface* Material, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddDecalParams_GetRef"));

	UEmbarkFXCueMixins_AddDecalParams_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddDecalParams
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FEmbarkFXDecalParams    DecalParams                    (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFXCueMixins::STATIC_AddDecalParams(class UObject* ContextObject, const struct FEmbarkFXDecalParams& DecalParams, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddDecalParams"));

	UEmbarkFXCueMixins_AddDecalParams_Params params;
	params.ContextObject = ContextObject;
	params.DecalParams = DecalParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddColorArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLinearColor>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FLinearColor> UEmbarkFXCueMixins::STATIC_AddColorArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddColorArray_GetRef"));

	UEmbarkFXCueMixins_AddColorArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddColorArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLinearColor>    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXCueMixins::STATIC_AddColorArray(class UObject* ContextObject, const struct FName& Name, TArray<struct FLinearColor> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddColorArray"));

	UEmbarkFXCueMixins_AddColorArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddColor
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_AddColor(class UObject* ContextObject, const struct FName& Name, const struct FLinearColor& Value, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddColor"));

	UEmbarkFXCueMixins_AddColor_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddCallbackParams_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FEmbarkFXCallbackParams ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXCallbackParams UEmbarkFXCueMixins::STATIC_AddCallbackParams_GetRef(class UObject* ContextObject, class UObject* Object, const struct FName& FunctionName, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddCallbackParams_GetRef"));

	UEmbarkFXCueMixins_AddCallbackParams_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddCallbackParams
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// struct FEmbarkFXCallbackParams CallbackParams                 (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFXCueMixins::STATIC_AddCallbackParams(class UObject* ContextObject, const struct FEmbarkFXCallbackParams& CallbackParams, struct FEmbarkFXDirectorContext* Context, struct FEmbarkFXCue* Cue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddCallbackParams"));

	UEmbarkFXCueMixins_AddCallbackParams_Params params;
	params.ContextObject = ContextObject;
	params.CallbackParams = CallbackParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
	if (Cue != nullptr)
		*Cue = params.Cue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddBoolArray_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<bool> UEmbarkFXCueMixins::STATIC_AddBoolArray_GetRef(class UObject* ContextObject, const struct FName& Name, int Length, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context, int* OutIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddBoolArray_GetRef"));

	UEmbarkFXCueMixins_AddBoolArray_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddBoolArray
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkFXCueMixins::STATIC_AddBoolArray(class UObject* ContextObject, const struct FName& Name, TArray<bool> Array, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddBoolArray"));

	UEmbarkFXCueMixins_AddBoolArray_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddBool
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFXCueMixins::STATIC_AddBool(class UObject* ContextObject, const struct FName& Name, bool bValue, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddBool"));

	UEmbarkFXCueMixins_AddBool_Params params;
	params.ContextObject = ContextObject;
	params.Name = Name;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddAudioParams_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXAudioParams    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXAudioParams UEmbarkFXCueMixins::STATIC_AddAudioParams_GetRef(class UObject* ContextObject, class USoundBase* Sound, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddAudioParams_GetRef"));

	UEmbarkFXCueMixins_AddAudioParams_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddAudioParams
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FEmbarkFXAudioParams    AudioParams                    (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFXCueMixins::STATIC_AddAudioParams(class UObject* ContextObject, const struct FEmbarkFXAudioParams& AudioParams, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddAudioParams"));

	UEmbarkFXCueMixins_AddAudioParams_Params params;
	params.ContextObject = ContextObject;
	params.AudioParams = AudioParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddAttachmentParams_GetRef
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FEmbarkFXAttachmentParams ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFXAttachmentParams UEmbarkFXCueMixins::STATIC_AddAttachmentParams_GetRef(class UObject* ContextObject, class USceneComponent* AttachToComponent, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddAttachmentParams_GetRef"));

	UEmbarkFXCueMixins_AddAttachmentParams_GetRef_Params params;
	params.ContextObject = ContextObject;
	params.AttachToComponent = AttachToComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;

	return params.ReturnValue;
}


// Function EmbarkFXDirector.EmbarkFXCueMixins.AddAttachmentParams
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFXCue            Cue                            (Parm, OutParm)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFXDirectorContext Context                        (Parm, OutParm)
// struct FEmbarkFXAttachmentParams AttachmentParams               (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFXCueMixins::STATIC_AddAttachmentParams(class UObject* ContextObject, const struct FEmbarkFXAttachmentParams& AttachmentParams, struct FEmbarkFXCue* Cue, struct FEmbarkFXDirectorContext* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFXDirector.EmbarkFXCueMixins.AddAttachmentParams"));

	UEmbarkFXCueMixins_AddAttachmentParams_Params params;
	params.ContextObject = ContextObject;
	params.AttachmentParams = AttachmentParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cue != nullptr)
		*Cue = params.Cue;
	if (Context != nullptr)
		*Context = params.Context;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
