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

// Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromSceneComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FComponentOrStyle       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FComponentOrStyle UFComponentOrStyleLibrary::STATIC_MakeFromSceneComponent(class USceneComponent* Component)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromSceneComponent"));

	UFComponentOrStyleLibrary_MakeFromSceneComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromPrimitiveComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FComponentOrStyle       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FComponentOrStyle UFComponentOrStyleLibrary::STATIC_MakeFromPrimitiveComponent(class UPrimitiveComponent* Component)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromPrimitiveComponent"));

	UFComponentOrStyleLibrary_MakeFromPrimitiveComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromPhysicsBodyIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            BodyIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FComponentOrStyle       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FComponentOrStyle UFComponentOrStyleLibrary::STATIC_MakeFromPhysicsBodyIndex(class UPrimitiveComponent* Component, int BodyIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromPhysicsBodyIndex"));

	UFComponentOrStyleLibrary_MakeFromPhysicsBodyIndex_Params params;
	params.Component = Component;
	params.BodyIndex = BodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromPart
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AConstructableBase*      PartOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FComponentOrStyle       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FComponentOrStyle UFComponentOrStyleLibrary::STATIC_MakeFromPart(class AConstructableBase* PartOwner, int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromPart"));

	UFComponentOrStyleLibrary_MakeFromPart_Params params;
	params.PartOwner = PartOwner;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromHitResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FComponentOrStyle       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FComponentOrStyle UFComponentOrStyleLibrary::STATIC_MakeFromHitResult(const struct FHitResult& HitResult)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.MakeFromHitResult"));

	UFComponentOrStyleLibrary_MakeFromHitResult_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FComponentOrStyle       ComponentOrStyle               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFComponentOrStyleLibrary::STATIC_IsValid(const struct FComponentOrStyle& ComponentOrStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.IsValid"));

	UFComponentOrStyleLibrary_IsValid_Params params;
	params.ComponentOrStyle = ComponentOrStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.IsPartReference
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FComponentOrStyle       ComponentOrStyle               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFComponentOrStyleLibrary::STATIC_IsPartReference(const struct FComponentOrStyle& ComponentOrStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.IsPartReference"));

	UFComponentOrStyleLibrary_IsPartReference_Params params;
	params.ComponentOrStyle = ComponentOrStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.IsPartAndDestroyed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FComponentOrStyle       ComponentOrStyle               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFComponentOrStyleLibrary::STATIC_IsPartAndDestroyed(const struct FComponentOrStyle& ComponentOrStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.IsPartAndDestroyed"));

	UFComponentOrStyleLibrary_IsPartAndDestroyed_Params params;
	params.ComponentOrStyle = ComponentOrStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.IsPartAndAlive
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FComponentOrStyle       ComponentOrStyle               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFComponentOrStyleLibrary::STATIC_IsPartAndAlive(const struct FComponentOrStyle& ComponentOrStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.IsPartAndAlive"));

	UFComponentOrStyleLibrary_IsPartAndAlive_Params params;
	params.ComponentOrStyle = ComponentOrStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.GetWorldTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FComponentOrStyle       ComponentOrStyle               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UFComponentOrStyleLibrary::STATIC_GetWorldTransform(const struct FComponentOrStyle& ComponentOrStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.GetWorldTransform"));

	UFComponentOrStyleLibrary_GetWorldTransform_Params params;
	params.ComponentOrStyle = ComponentOrStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.GetTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FComponentOrStyle       ComponentOrStyle               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           bWorldTransform                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFComponentOrStyleLibrary::STATIC_GetTransform(const struct FComponentOrStyle& ComponentOrStyle, bool bWorldTransform, struct FTransform* OutTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.GetTransform"));

	UFComponentOrStyleLibrary_GetTransform_Params params;
	params.ComponentOrStyle = ComponentOrStyle;
	params.bWorldTransform = bWorldTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.GetOwner
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FComponentOrStyle       ComponentOrStyle               (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UFComponentOrStyleLibrary::STATIC_GetOwner(const struct FComponentOrStyle& ComponentOrStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.GetOwner"));

	UFComponentOrStyleLibrary_GetOwner_Params params;
	params.ComponentOrStyle = ComponentOrStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.GetClosestPointOnCollision
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FComponentOrStyle       ComponentOrStyle               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OutPointOnBody                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFComponentOrStyleLibrary::STATIC_GetClosestPointOnCollision(const struct FComponentOrStyle& ComponentOrStyle, const struct FVector& Point, struct FVector* OutPointOnBody)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.GetClosestPointOnCollision"));

	UFComponentOrStyleLibrary_GetClosestPointOnCollision_Params params;
	params.ComponentOrStyle = ComponentOrStyle;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPointOnBody != nullptr)
		*OutPointOnBody = params.OutPointOnBody;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.GetCenterBounds
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FComponentOrStyle       ComponentOrStyle               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UFComponentOrStyleLibrary::STATIC_GetCenterBounds(const struct FComponentOrStyle& ComponentOrStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.GetCenterBounds"));

	UFComponentOrStyleLibrary_GetCenterBounds_Params params;
	params.ComponentOrStyle = ComponentOrStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.GetBounds
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FComponentOrStyle       ComponentOrStyle               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBox                    Bounds                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFComponentOrStyleLibrary::STATIC_GetBounds(const struct FComponentOrStyle& ComponentOrStyle, struct FBox* Bounds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.GetBounds"));

	UFComponentOrStyleLibrary_GetBounds_Params params;
	params.ComponentOrStyle = ComponentOrStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bounds != nullptr)
		*Bounds = params.Bounds;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.GetActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FComponentOrStyle       ComponentOrStyle               (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UFComponentOrStyleLibrary::STATIC_GetActor(const struct FComponentOrStyle& ComponentOrStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.GetActor"));

	UFComponentOrStyleLibrary_GetActor_Params params;
	params.ComponentOrStyle = ComponentOrStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.AdvancedAPI_GetPartReference
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FComponentOrStyle       ComponentOrStyle               (ConstParm, Parm, OutParm, ReferenceParm)
// int                            OutPartId                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UFComponentOrStyleLibrary::STATIC_AdvancedAPI_GetPartReference(const struct FComponentOrStyle& ComponentOrStyle, int* OutPartId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.AdvancedAPI_GetPartReference"));

	UFComponentOrStyleLibrary_AdvancedAPI_GetPartReference_Params params;
	params.ComponentOrStyle = ComponentOrStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartId != nullptr)
		*OutPartId = params.OutPartId;

	return params.ReturnValue;
}


// Function EmbarkConstructable.FComponentOrStyleLibrary.AdvancedAPI_GetComponent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FComponentOrStyle       ComponentOrStyle               (ConstParm, Parm, OutParm, ReferenceParm)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UFComponentOrStyleLibrary::STATIC_AdvancedAPI_GetComponent(const struct FComponentOrStyle& ComponentOrStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.FComponentOrStyleLibrary.AdvancedAPI_GetComponent"));

	UFComponentOrStyleLibrary_AdvancedAPI_GetComponent_Params params;
	params.ComponentOrStyle = ComponentOrStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ComponentOrStyleTargetHandleMixinLibrary.GetFirstValidComponentOrStyleTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Handle                         (Parm, OutParm)
// struct FComponentOrStyle       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FComponentOrStyle UComponentOrStyleTargetHandleMixinLibrary::STATIC_GetFirstValidComponentOrStyleTarget(struct FGameplayAbilityTargetDataHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ComponentOrStyleTargetHandleMixinLibrary.GetFirstValidComponentOrStyleTarget"));

	UComponentOrStyleTargetHandleMixinLibrary_GetFirstValidComponentOrStyleTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ComponentOrStyleTargetHandleMixinLibrary.GetComponentOrStyleTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Handle                         (Parm, OutParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FComponentOrStyle       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FComponentOrStyle UComponentOrStyleTargetHandleMixinLibrary::STATIC_GetComponentOrStyleTarget(int Index, struct FGameplayAbilityTargetDataHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ComponentOrStyleTargetHandleMixinLibrary.GetComponentOrStyleTarget"));

	UComponentOrStyleTargetHandleMixinLibrary_GetComponentOrStyleTarget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ComponentOrStyleTargetHandleMixinLibrary.GetAllValidComponentOrStyleTargets
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Handle                         (Parm, OutParm)
// TArray<struct FComponentOrStyle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FComponentOrStyle> UComponentOrStyleTargetHandleMixinLibrary::STATIC_GetAllValidComponentOrStyleTargets(struct FGameplayAbilityTargetDataHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ComponentOrStyleTargetHandleMixinLibrary.GetAllValidComponentOrStyleTargets"));

	UComponentOrStyleTargetHandleMixinLibrary_GetAllValidComponentOrStyleTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ComponentOrStyleTargetHandleMixinLibrary.AddComponentOrStyleTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Handle                         (Parm, OutParm)
// struct FComponentOrStyle       Target                         (ConstParm, Parm, OutParm, ReferenceParm)

void UComponentOrStyleTargetHandleMixinLibrary::STATIC_AddComponentOrStyleTarget(const struct FComponentOrStyle& Target, struct FGameplayAbilityTargetDataHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ComponentOrStyleTargetHandleMixinLibrary.AddComponentOrStyleTarget"));

	UComponentOrStyleTargetHandleMixinLibrary_AddComponentOrStyleTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.TrySetPartAttributeBaseValue_Server
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableAbilitySystemComponent::TrySetPartAttributeBaseValue_Server(class UClass* AttributeSetClass, const struct FName& AttributeName, int PartID, float NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.TrySetPartAttributeBaseValue_Server"));

	UConstructableAbilitySystemComponent_TrySetPartAttributeBaseValue_Server_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;
	params.PartID = PartID;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.TryGetPartAttributeCurrentValue_Server
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutCurrentValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableAbilitySystemComponent::TryGetPartAttributeCurrentValue_Server(class UClass* AttributeSetClass, const struct FName& AttributeName, int PartID, float* OutCurrentValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.TryGetPartAttributeCurrentValue_Server"));

	UConstructableAbilitySystemComponent_TryGetPartAttributeCurrentValue_Server_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCurrentValue != nullptr)
		*OutCurrentValue = params.OutCurrentValue;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.TryGetPartAttributeBaseValue_Server
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutBaseValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableAbilitySystemComponent::TryGetPartAttributeBaseValue_Server(class UClass* AttributeSetClass, const struct FName& AttributeName, int PartID, float* OutBaseValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.TryGetPartAttributeBaseValue_Server"));

	UConstructableAbilitySystemComponent_TryGetPartAttributeBaseValue_Server_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBaseValue != nullptr)
		*OutBaseValue = params.OutBaseValue;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.TryGetPartAttribute_Server
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAttribute      OutGameplayAttribute           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableAbilitySystemComponent::TryGetPartAttribute_Server(class UClass* AttributeSetClass, const struct FName& AttributeName, int PartID, struct FGameplayAttribute* OutGameplayAttribute)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.TryGetPartAttribute_Server"));

	UConstructableAbilitySystemComponent_TryGetPartAttribute_Server_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGameplayAttribute != nullptr)
		*OutGameplayAttribute = params.OutGameplayAttribute;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.RemovePartTags
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   TagsToRemove                   (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableAbilitySystemComponent::RemovePartTags(int PartID, const struct FGameplayTagContainer& TagsToRemove)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.RemovePartTags"));

	UConstructableAbilitySystemComponent_RemovePartTags_Params params;
	params.PartID = PartID;
	params.TagsToRemove = TagsToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.RemovePartTag
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            TagToRemove                    (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableAbilitySystemComponent::RemovePartTag(int PartID, const struct FGameplayTag& TagToRemove)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.RemovePartTag"));

	UConstructableAbilitySystemComponent_RemovePartTag_Params params;
	params.PartID = PartID;
	params.TagToRemove = TagToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.RegisterPartAttributeChangedCallbackForAllParts_Server
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 CallbackObject                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CallbackFunctionName_FOnAttributeChangeData (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableAbilitySystemComponent::RegisterPartAttributeChangedCallbackForAllParts_Server(class UClass* AttributeSetClass, const struct FName& AttributeName, class UObject* CallbackObject, const struct FName& CallbackFunctionName_FOnAttributeChangeData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.RegisterPartAttributeChangedCallbackForAllParts_Server"));

	UConstructableAbilitySystemComponent_RegisterPartAttributeChangedCallbackForAllParts_Server_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;
	params.CallbackObject = CallbackObject;
	params.CallbackFunctionName_FOnAttributeChangeData = CallbackFunctionName_FOnAttributeChangeData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.RegisterPartAttributeChangedCallback_Server
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 CallbackObject                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CallbackFunctionName_FOnAttributeChangeData (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableAbilitySystemComponent::RegisterPartAttributeChangedCallback_Server(class UClass* AttributeSetClass, const struct FName& AttributeName, int PartID, class UObject* CallbackObject, const struct FName& CallbackFunctionName_FOnAttributeChangeData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.RegisterPartAttributeChangedCallback_Server"));

	UConstructableAbilitySystemComponent_RegisterPartAttributeChangedCallback_Server_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;
	params.PartID = PartID;
	params.CallbackObject = CallbackObject;
	params.CallbackFunctionName_FOnAttributeChangeData = CallbackFunctionName_FOnAttributeChangeData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.QueryPartTags
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FConstructablePartTagData OutPartTagData                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableAbilitySystemComponent::QueryPartTags(int PartID, struct FConstructablePartTagData* OutPartTagData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.QueryPartTags"));

	UConstructableAbilitySystemComponent_QueryPartTags_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartTagData != nullptr)
		*OutPartTagData = params.OutPartTagData;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartHasTag
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            RequiredTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableAbilitySystemComponent::PartHasTag(int PartID, const struct FGameplayTag& RequiredTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartHasTag"));

	UConstructableAbilitySystemComponent_PartHasTag_Params params;
	params.PartID = PartID;
	params.RequiredTag = RequiredTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartHasAnyTags
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   RequiredTags                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableAbilitySystemComponent::PartHasAnyTags(int PartID, const struct FGameplayTagContainer& RequiredTags)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartHasAnyTags"));

	UConstructableAbilitySystemComponent_PartHasAnyTags_Params params;
	params.PartID = PartID;
	params.RequiredTags = RequiredTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartHasAllTags
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   RequiredTags                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableAbilitySystemComponent::PartHasAllTags(int PartID, const struct FGameplayTagContainer& RequiredTags)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartHasAllTags"));

	UConstructableAbilitySystemComponent_PartHasAllTags_Params params;
	params.PartID = PartID;
	params.RequiredTags = RequiredTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartAttributeToPartID
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FGameplayAttribute      PartGameplayAttribute          (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableAbilitySystemComponent::PartAttributeToPartID(const struct FGameplayAttribute& PartGameplayAttribute)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartAttributeToPartID"));

	UConstructableAbilitySystemComponent_PartAttributeToPartID_Params params;
	params.PartGameplayAttribute = PartGameplayAttribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartAttributeToBaseData
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FGameplayAttribute      PartGameplayAttribute          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FConstructablePartAttributeBaseData OutBaseData                    (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableAbilitySystemComponent::PartAttributeToBaseData(const struct FGameplayAttribute& PartGameplayAttribute, struct FConstructablePartAttributeBaseData* OutBaseData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.PartAttributeToBaseData"));

	UConstructableAbilitySystemComponent_PartAttributeToBaseData_Params params;
	params.PartGameplayAttribute = PartGameplayAttribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBaseData != nullptr)
		*OutBaseData = params.OutBaseData;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.GiveAbilityToPart_Server
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  InAbilityClass                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilitySpecHandle OutHandle                      (Parm, OutParm)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 OptionalSourceObject           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableAbilitySystemComponent::GiveAbilityToPart_Server(int PartID, class UClass* InAbilityClass, int Level, class UObject* OptionalSourceObject, struct FGameplayAbilitySpecHandle* OutHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.GiveAbilityToPart_Server"));

	UConstructableAbilitySystemComponent_GiveAbilityToPart_Server_Params params;
	params.PartID = PartID;
	params.InAbilityClass = InAbilityClass;
	params.Level = Level;
	params.OptionalSourceObject = OptionalSourceObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHandle != nullptr)
		*OutHandle = params.OutHandle;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.GetPartTagCount
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            TagToQuery                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableAbilitySystemComponent::GetPartTagCount(int PartID, const struct FGameplayTag& TagToQuery)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.GetPartTagCount"));

	UConstructableAbilitySystemComponent_GetPartTagCount_Params params;
	params.PartID = PartID;
	params.TagToQuery = TagToQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.GetPartAbilityData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilitySpecHandle PartAbilitySpecHandle          (Parm)
// struct FConstructablePartAbilityData OutData                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableAbilitySystemComponent::GetPartAbilityData(const struct FGameplayAbilitySpecHandle& PartAbilitySpecHandle, struct FConstructablePartAbilityData* OutData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.GetPartAbilityData"));

	UConstructableAbilitySystemComponent_GetPartAbilityData_Params params;
	params.PartAbilitySpecHandle = PartAbilitySpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.GetOwnerConstructable
// (Final, Native, Public, Const)
// Parameters:
// class AConstructableBase*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AConstructableBase* UConstructableAbilitySystemComponent::GetOwnerConstructable()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.GetOwnerConstructable"));

	UConstructableAbilitySystemComponent_GetOwnerConstructable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.GetAndRegisterPartAttributeChangedCallback_Server
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 CallbackObject                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CallbackFunctionName_FOnAttributeChangeData (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutCurrentValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConstructableAbilitySystemComponent::GetAndRegisterPartAttributeChangedCallback_Server(class UClass* AttributeSetClass, const struct FName& AttributeName, int PartID, class UObject* CallbackObject, const struct FName& CallbackFunctionName_FOnAttributeChangeData, float* OutCurrentValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.GetAndRegisterPartAttributeChangedCallback_Server"));

	UConstructableAbilitySystemComponent_GetAndRegisterPartAttributeChangedCallback_Server_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;
	params.PartID = PartID;
	params.CallbackObject = CallbackObject;
	params.CallbackFunctionName_FOnAttributeChangeData = CallbackFunctionName_FOnAttributeChangeData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCurrentValue != nullptr)
		*OutCurrentValue = params.OutCurrentValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.CalcUtility
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilitySpecHandle              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UConstructableAbilitySystemComponent::CalcUtility(const struct FGameplayAbilitySpecHandle& AbilitySpecHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.CalcUtility"));

	UConstructableAbilitySystemComponent_CalcUtility_Params params;
	params.AbilitySpecHandle = AbilitySpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.AllocateAttributesForPart_Server
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableAbilitySystemComponent::AllocateAttributesForPart_Server(class UClass* AttributeSetClass, int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.AllocateAttributesForPart_Server"));

	UConstructableAbilitySystemComponent_AllocateAttributesForPart_Server_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.AddPartTags
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   TagsToAdd                      (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableAbilitySystemComponent::AddPartTags(int PartID, const struct FGameplayTagContainer& TagsToAdd)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.AddPartTags"));

	UConstructableAbilitySystemComponent_AddPartTags_Params params;
	params.PartID = PartID;
	params.TagsToAdd = TagsToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableAbilitySystemComponent.AddPartTag
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            TagToAdd                       (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableAbilitySystemComponent::AddPartTag(int PartID, const struct FGameplayTag& TagToAdd)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAbilitySystemComponent.AddPartTag"));

	UConstructableAbilitySystemComponent_AddPartTag_Params params;
	params.PartID = PartID;
	params.TagToAdd = TagToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.GetTargetActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGameplayAbilityTargetDataHandleMixinLibrary::STATIC_GetTargetActor(const struct FGameplayAbilityTargetDataHandle& Handle, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.GetTargetActor"));

	UGameplayAbilityTargetDataHandleMixinLibrary_GetTargetActor_Params params;
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.GetNum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Handle                         (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayAbilityTargetDataHandleMixinLibrary::STATIC_GetNum(struct FGameplayAbilityTargetDataHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.GetNum"));

	UGameplayAbilityTargetDataHandleMixinLibrary_GetNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.GetFirstReplicatedSubobject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Handle                         (Parm, OutParm)
// class UReplicatedSubobject*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UReplicatedSubobject* UGameplayAbilityTargetDataHandleMixinLibrary::STATIC_GetFirstReplicatedSubobject(struct FGameplayAbilityTargetDataHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.GetFirstReplicatedSubobject"));

	UGameplayAbilityTargetDataHandleMixinLibrary_GetFirstReplicatedSubobject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.ApplyGameplayEffectSpec
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Handle                         (Parm, OutParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpec     Spec                           (Parm, OutParm)

void UGameplayAbilityTargetDataHandleMixinLibrary::STATIC_ApplyGameplayEffectSpec(int Index, struct FGameplayAbilityTargetDataHandle* Handle, struct FGameplayEffectSpec* Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.ApplyGameplayEffectSpec"));

	UGameplayAbilityTargetDataHandleMixinLibrary_ApplyGameplayEffectSpec_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
	if (Spec != nullptr)
		*Spec = params.Spec;
}


// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.ApplyEffectToTargets
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Handle                         (Parm, OutParm)
// struct FGameplayEffectSpec     Spec                           (Parm, OutParm)
// TArray<struct FActiveGameplayEffectHandle> OutAppliedHandles              (Parm, OutParm, ZeroConstructor)
// bool                           bApplyAffectedUNormAsEffectLevel (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbilityTargetDataHandleMixinLibrary::STATIC_ApplyEffectToTargets(bool bApplyAffectedUNormAsEffectLevel, struct FGameplayAbilityTargetDataHandle* Handle, struct FGameplayEffectSpec* Spec, TArray<struct FActiveGameplayEffectHandle>* OutAppliedHandles)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.ApplyEffectToTargets"));

	UGameplayAbilityTargetDataHandleMixinLibrary_ApplyEffectToTargets_Params params;
	params.bApplyAffectedUNormAsEffectLevel = bApplyAffectedUNormAsEffectLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
	if (Spec != nullptr)
		*Spec = params.Spec;
	if (OutAppliedHandles != nullptr)
		*OutAppliedHandles = params.OutAppliedHandles;
}


// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.AddReplicatedSubobjectTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Handle                         (Parm, OutParm)
// class UReplicatedSubobject*    TargetedObject                 (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbilityTargetDataHandleMixinLibrary::STATIC_AddReplicatedSubobjectTarget(class UReplicatedSubobject* TargetedObject, struct FGameplayAbilityTargetDataHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.AddReplicatedSubobjectTarget"));

	UGameplayAbilityTargetDataHandleMixinLibrary_AddReplicatedSubobjectTarget_Params params;
	params.TargetedObject = TargetedObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.AddConstructableTargetData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Handle                         (Parm, OutParm)
// class AActor*                  TargetedActor                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FConstructablePartDamageModelData> TargetedParts                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            PrimaryTargetPartId            (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbilityTargetDataHandleMixinLibrary::STATIC_AddConstructableTargetData(class AActor* TargetedActor, TArray<struct FConstructablePartDamageModelData> TargetedParts, int PrimaryTargetPartId, struct FGameplayAbilityTargetDataHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.AddConstructableTargetData"));

	UGameplayAbilityTargetDataHandleMixinLibrary_AddConstructableTargetData_Params params;
	params.TargetedActor = TargetedActor;
	params.TargetedParts = TargetedParts;
	params.PrimaryTargetPartId = PrimaryTargetPartId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.AddActorTargetData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Handle                         (Parm, OutParm)
// class AActor*                  TargetedActor                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetedActorAffectedDegreeUNorm (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbilityTargetDataHandleMixinLibrary::STATIC_AddActorTargetData(class AActor* TargetedActor, float TargetedActorAffectedDegreeUNorm, struct FGameplayAbilityTargetDataHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayAbilityTargetDataHandleMixinLibrary.AddActorTargetData"));

	UGameplayAbilityTargetDataHandleMixinLibrary_AddActorTargetData_Params params;
	params.TargetedActor = TargetedActor;
	params.TargetedActorAffectedDegreeUNorm = TargetedActorAffectedDegreeUNorm;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetReplicateAffectedPartIDs
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextMixinLibrary::STATIC_SetReplicateAffectedPartIDs(const struct FGameplayEffectContextHandle& Handle, bool bReplicate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetReplicateAffectedPartIDs"));

	UGameplayEffectContextMixinLibrary_SetReplicateAffectedPartIDs_Params params;
	params.Handle = Handle;
	params.bReplicate = bReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetRawDamage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// float                          RawDamage                      (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextMixinLibrary::STATIC_SetRawDamage(const struct FGameplayEffectContextHandle& Handle, float RawDamage)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetRawDamage"));

	UGameplayEffectContextMixinLibrary_SetRawDamage_Params params;
	params.Handle = Handle;
	params.RawDamage = RawDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetPrimaryTargetPartId
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            PrimaryAffectedPart            (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextMixinLibrary::STATIC_SetPrimaryTargetPartId(const struct FGameplayEffectContextHandle& Handle, int PrimaryAffectedPart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetPrimaryTargetPartId"));

	UGameplayEffectContextMixinLibrary_SetPrimaryTargetPartId_Params params;
	params.Handle = Handle;
	params.PrimaryAffectedPart = PrimaryAffectedPart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetOriginatorObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Originator                     (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextMixinLibrary::STATIC_SetOriginatorObject(const struct FGameplayEffectContextHandle& Handle, class UObject* Originator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetOriginatorObject"));

	UGameplayEffectContextMixinLibrary_SetOriginatorObject_Params params;
	params.Handle = Handle;
	params.Originator = Originator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetEventID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (Parm, OutParm)
// int                            InEventID                      (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextMixinLibrary::STATIC_SetEventID(int InEventID, struct FGameplayEffectContextHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetEventID"));

	UGameplayEffectContextMixinLibrary_SetEventID_Params params;
	params.InEventID = InEventID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetDamageType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (Parm, OutParm)
// unsigned char                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextMixinLibrary::STATIC_SetDamageType(unsigned char DamageType, struct FGameplayEffectContextHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetDamageType"));

	UGameplayEffectContextMixinLibrary_SetDamageType_Params params;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetAttackingPartInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FConstructablePartAttackerData AttackingPartInfo              (Parm, OutParm)

void UGameplayEffectContextMixinLibrary::STATIC_SetAttackingPartInfo(const struct FGameplayEffectContextHandle& Handle, struct FConstructablePartAttackerData* AttackingPartInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetAttackingPartInfo"));

	UGameplayEffectContextMixinLibrary_SetAttackingPartInfo_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttackingPartInfo != nullptr)
		*AttackingPartInfo = params.AttackingPartInfo;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetAffectedParts
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FConstructablePartDamageModelData> AffectedParts                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGameplayEffectContextMixinLibrary::STATIC_SetAffectedParts(const struct FGameplayEffectContextHandle& Handle, TArray<struct FConstructablePartDamageModelData> AffectedParts)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetAffectedParts"));

	UGameplayEffectContextMixinLibrary_SetAffectedParts_Params params;
	params.Handle = Handle;
	params.AffectedParts = AffectedParts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetAffectActorAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bShouldAffectActorAttributes   (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextMixinLibrary::STATIC_SetAffectActorAttributes(const struct FGameplayEffectContextHandle& Handle, bool bShouldAffectActorAttributes)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetAffectActorAttributes"));

	UGameplayEffectContextMixinLibrary_SetAffectActorAttributes_Params params;
	params.Handle = Handle;
	params.bShouldAffectActorAttributes = bShouldAffectActorAttributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetActorRawTakenDamage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// float                          RawDamage                      (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextMixinLibrary::STATIC_SetActorRawTakenDamage(const struct FGameplayEffectContextHandle& Handle, float RawDamage)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetActorRawTakenDamage"));

	UGameplayEffectContextMixinLibrary_SetActorRawTakenDamage_Params params;
	params.Handle = Handle;
	params.RawDamage = RawDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetActorAffectedDegreeUNorm
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (Parm, OutParm)
// float                          ActorAffectedDegreeUNorm       (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextMixinLibrary::STATIC_SetActorAffectedDegreeUNorm(float ActorAffectedDegreeUNorm, struct FGameplayEffectContextHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.SetActorAffectedDegreeUNorm"));

	UGameplayEffectContextMixinLibrary_SetActorAffectedDegreeUNorm_Params params;
	params.ActorAffectedDegreeUNorm = ActorAffectedDegreeUNorm;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.IsReplicatingAffectedPartIDs
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectContextMixinLibrary::STATIC_IsReplicatingAffectedPartIDs(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.IsReplicatingAffectedPartIDs"));

	UGameplayEffectContextMixinLibrary_IsReplicatingAffectedPartIDs_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetRawDamage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayEffectContextMixinLibrary::STATIC_GetRawDamage(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetRawDamage"));

	UGameplayEffectContextMixinLibrary_GetRawDamage_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetPrimaryTargetPartId
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayEffectContextMixinLibrary::STATIC_GetPrimaryTargetPartId(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetPrimaryTargetPartId"));

	UGameplayEffectContextMixinLibrary_GetPrimaryTargetPartId_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetOriginatorObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGameplayEffectContextMixinLibrary::STATIC_GetOriginatorObject(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetOriginatorObject"));

	UGameplayEffectContextMixinLibrary_GetOriginatorObject_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetEventID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayEffectContextMixinLibrary::STATIC_GetEventID(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetEventID"));

	UGameplayEffectContextMixinLibrary_GetEventID_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetDamageType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UGameplayEffectContextMixinLibrary::STATIC_GetDamageType(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetDamageType"));

	UGameplayEffectContextMixinLibrary_GetDamageType_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAttackingPartInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FConstructablePartAttackerData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FConstructablePartAttackerData UGameplayEffectContextMixinLibrary::STATIC_GetAttackingPartInfo(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAttackingPartInfo"));

	UGameplayEffectContextMixinLibrary_GetAttackingPartInfo_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectedPartsNum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayEffectContextMixinLibrary::STATIC_GetAffectedPartsNum(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectedPartsNum"));

	UGameplayEffectContextMixinLibrary_GetAffectedPartsNum_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectedParts
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FConstructablePartDamageModelData> AffectedParts                  (Parm, OutParm, ZeroConstructor)

void UGameplayEffectContextMixinLibrary::STATIC_GetAffectedParts(const struct FGameplayEffectContextHandle& Handle, TArray<struct FConstructablePartDamageModelData>* AffectedParts)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectedParts"));

	UGameplayEffectContextMixinLibrary_GetAffectedParts_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AffectedParts != nullptr)
		*AffectedParts = params.AffectedParts;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectedPartIDs
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UGameplayEffectContextMixinLibrary::STATIC_GetAffectedPartIDs(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectedPartIDs"));

	UGameplayEffectContextMixinLibrary_GetAffectedPartIDs_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectedPart
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            PartIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FConstructablePartDamageModelData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FConstructablePartDamageModelData UGameplayEffectContextMixinLibrary::STATIC_GetAffectedPart(const struct FGameplayEffectContextHandle& Handle, int PartIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectedPart"));

	UGameplayEffectContextMixinLibrary_GetAffectedPart_Params params;
	params.Handle = Handle;
	params.PartIndex = PartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectActorAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectContextMixinLibrary::STATIC_GetAffectActorAttributes(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetAffectActorAttributes"));

	UGameplayEffectContextMixinLibrary_GetAffectActorAttributes_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetActorRawTakenDamage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayEffectContextMixinLibrary::STATIC_GetActorRawTakenDamage(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetActorRawTakenDamage"));

	UGameplayEffectContextMixinLibrary_GetActorRawTakenDamage_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetActorAffectedDegreeUNorm
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayEffectContextMixinLibrary::STATIC_GetActorAffectedDegreeUNorm(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.GetActorAffectedDegreeUNorm"));

	UGameplayEffectContextMixinLibrary_GetActorAffectedDegreeUNorm_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.AddAffectedParts
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FConstructablePartDamageModelData> AffectedParts                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGameplayEffectContextMixinLibrary::STATIC_AddAffectedParts(const struct FGameplayEffectContextHandle& Handle, TArray<struct FConstructablePartDamageModelData> AffectedParts)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.AddAffectedParts"));

	UGameplayEffectContextMixinLibrary_AddAffectedParts_Params params;
	params.Handle = Handle;
	params.AffectedParts = AffectedParts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.GameplayEffectContextMixinLibrary.AddAffectedPart
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FConstructablePartDamageModelData AffectedPart                   (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayEffectContextMixinLibrary::STATIC_AddAffectedPart(const struct FGameplayEffectContextHandle& Handle, const struct FConstructablePartDamageModelData& AffectedPart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GameplayEffectContextMixinLibrary.AddAffectedPart"));

	UGameplayEffectContextMixinLibrary_AddAffectedPart_Params params;
	params.Handle = Handle;
	params.AffectedPart = AffectedPart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.GrantedTagsMixinLibrary.AddGrantedTags
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm, OutParm)
// struct FGameplayTagContainer   InGameplayTagsToAdd            (ConstParm, Parm, OutParm, ReferenceParm)

void UGrantedTagsMixinLibrary::STATIC_AddGrantedTags(const struct FGameplayTagContainer& InGameplayTagsToAdd, struct FGameplayEffectSpecHandle* SpecHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GrantedTagsMixinLibrary.AddGrantedTags"));

	UGrantedTagsMixinLibrary_AddGrantedTags_Params params;
	params.InGameplayTagsToAdd = InGameplayTagsToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpecHandle != nullptr)
		*SpecHandle = params.SpecHandle;
}


// Function EmbarkConstructable.GrantedTagsMixinLibrary.AddGrantedTag
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm, OutParm)
// struct FGameplayTag            InTagToAdd                     (ConstParm, Parm, OutParm, ReferenceParm)

void UGrantedTagsMixinLibrary::STATIC_AddGrantedTag(const struct FGameplayTag& InTagToAdd, struct FGameplayEffectSpecHandle* SpecHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.GrantedTagsMixinLibrary.AddGrantedTag"));

	UGrantedTagsMixinLibrary_AddGrantedTag_Params params;
	params.InTagToAdd = InTagToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpecHandle != nullptr)
		*SpecHandle = params.SpecHandle;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.SetDynamicSubtree
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBehaviorTree*           BehaviorTree                   (Parm, ZeroConstructor, IsPlainOldData)

void AConstructableAIControllerBase::SetDynamicSubtree(const struct FGameplayTag& Tag, class UBehaviorTree* BehaviorTree)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.SetDynamicSubtree"));

	AConstructableAIControllerBase_SetDynamicSubtree_Params params;
	params.Tag = Tag;
	params.BehaviorTree = BehaviorTree;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.RequestFocus_Internal
// (Final, Native, Public)
// Parameters:
// struct FFocusRequest           Request                        (Parm)

void AConstructableAIControllerBase::RequestFocus_Internal(const struct FFocusRequest& Request)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.RequestFocus_Internal"));

	AConstructableAIControllerBase_RequestFocus_Internal_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.RequestFocus
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusRequest           Request                        (Parm)

void AConstructableAIControllerBase::RequestFocus(const struct FFocusRequest& Request)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.RequestFocus"));

	AConstructableAIControllerBase_RequestFocus_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.RemovePartPerceptionComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OwningPartID                   (Parm, ZeroConstructor, IsPlainOldData)

void AConstructableAIControllerBase::RemovePartPerceptionComponent(int OwningPartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.RemovePartPerceptionComponent"));

	AConstructableAIControllerBase_RemovePartPerceptionComponent_Params params;
	params.OwningPartID = OwningPartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.IsRequestValid_Internal
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FFocusRequest           Request                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableAIControllerBase::IsRequestValid_Internal(const struct FFocusRequest& Request)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.IsRequestValid_Internal"));

	AConstructableAIControllerBase_IsRequestValid_Internal_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.IsRequestValid
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFocusRequest           Request                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableAIControllerBase::IsRequestValid(const struct FFocusRequest& Request)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.IsRequestValid"));

	AConstructableAIControllerBase_IsRequestValid_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.HasValidFocus_Internal
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableAIControllerBase::HasValidFocus_Internal()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.HasValidFocus_Internal"));

	AConstructableAIControllerBase_HasValidFocus_Internal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.HasValidFocus
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableAIControllerBase::HasValidFocus()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.HasValidFocus"));

	AConstructableAIControllerBase_HasValidFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.HasDynamicTreeTag
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableAIControllerBase::HasDynamicTreeTag(const struct FGameplayTag& Tag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.HasDynamicTreeTag"));

	AConstructableAIControllerBase_HasDynamicTreeTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.GetCurrentFocus_Internal
// (Final, Native, Public)
// Parameters:
// struct FFocusTarget            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFocusTarget AConstructableAIControllerBase::GetCurrentFocus_Internal()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.GetCurrentFocus_Internal"));

	AConstructableAIControllerBase_GetCurrentFocus_Internal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.GetCurrentFocus
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusTarget            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFocusTarget AConstructableAIControllerBase::GetCurrentFocus()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.GetCurrentFocus"));

	AConstructableAIControllerBase_GetCurrentFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.ClearFocus_Internal
// (Final, Native, Public)
// Parameters:
// enum class EAIFocusMode        FocusMode                      (Parm, ZeroConstructor, IsPlainOldData)

void AConstructableAIControllerBase::ClearFocus_Internal(enum class EAIFocusMode FocusMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.ClearFocus_Internal"));

	AConstructableAIControllerBase_ClearFocus_Internal_Params params;
	params.FocusMode = FocusMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.ClearFocus
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// enum class EAIFocusMode        FocusMode                      (Parm, ZeroConstructor, IsPlainOldData)

void AConstructableAIControllerBase::ClearFocus(enum class EAIFocusMode FocusMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.ClearFocus"));

	AConstructableAIControllerBase_ClearFocus_Params params;
	params.FocusMode = FocusMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.ClearDynamicSubTree
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)

void AConstructableAIControllerBase::ClearDynamicSubTree(const struct FGameplayTag& Tag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.ClearDynamicSubTree"));

	AConstructableAIControllerBase_ClearDynamicSubTree_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.CalcFocusRotator_Internal
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AConstructableAIControllerBase::CalcFocusRotator_Internal()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.CalcFocusRotator_Internal"));

	AConstructableAIControllerBase_CalcFocusRotator_Internal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.CalcFocusRotator
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AConstructableAIControllerBase::CalcFocusRotator()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.CalcFocusRotator"));

	AConstructableAIControllerBase_CalcFocusRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.CalcFocusLocation_Internal
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AConstructableAIControllerBase::CalcFocusLocation_Internal()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.CalcFocusLocation_Internal"));

	AConstructableAIControllerBase_CalcFocusLocation_Internal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.CalcFocusLocation
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AConstructableAIControllerBase::CalcFocusLocation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.CalcFocusLocation"));

	AConstructableAIControllerBase_CalcFocusLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableAIControllerBase.AddPartPerceptionComponent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USceneComponent*         OwningComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UAISenseConfig*>  SenseConfigs                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            OwningPartID                   (Parm, ZeroConstructor, IsPlainOldData)

void AConstructableAIControllerBase::AddPartPerceptionComponent(class USceneComponent* OwningComponent, TArray<class UAISenseConfig*> SenseConfigs, int OwningPartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableAIControllerBase.AddPartPerceptionComponent"));

	AConstructableAIControllerBase_AddPartPerceptionComponent_Params params;
	params.OwningComponent = OwningComponent;
	params.SenseConfigs = SenseConfigs;
	params.OwningPartID = OwningPartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableBase.QueryPartsNoParams
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FGameplayTagQuery       PartQuery                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FConstructablePart> OutParts                       (Parm, OutParm, ZeroConstructor)

void AConstructableBase::QueryPartsNoParams(const struct FGameplayTagQuery& PartQuery, TArray<struct FConstructablePart>* OutParts)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.QueryPartsNoParams"));

	AConstructableBase_QueryPartsNoParams_Params params;
	params.PartQuery = PartQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutParts != nullptr)
		*OutParts = params.OutParts;
}


// Function EmbarkConstructable.ConstructableBase.QueryParts
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FGameplayTagQuery       PartQuery                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FConstructablePartQueryParams QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FConstructablePart> OutParts                       (Parm, OutParm, ZeroConstructor)

void AConstructableBase::QueryParts(const struct FGameplayTagQuery& PartQuery, const struct FConstructablePartQueryParams& QueryParams, TArray<struct FConstructablePart>* OutParts)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.QueryParts"));

	AConstructableBase_QueryParts_Params params;
	params.PartQuery = PartQuery;
	params.QueryParams = QueryParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutParts != nullptr)
		*OutParts = params.OutParts;
}


// Function EmbarkConstructable.ConstructableBase.QueryPartIDs
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagQuery       PartQuery                      (Parm)

void AConstructableBase::QueryPartIDs(const struct FGameplayTagQuery& PartQuery)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.QueryPartIDs"));

	AConstructableBase_QueryPartIDs_Params params;
	params.PartQuery = PartQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableBase.PumpServiceDataToStyles_Client
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTimeSecs                  (Parm, ZeroConstructor, IsPlainOldData)

void AConstructableBase::PumpServiceDataToStyles_Client(float DeltaTimeSecs)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.PumpServiceDataToStyles_Client"));

	AConstructableBase_PumpServiceDataToStyles_Client_Params params;
	params.DeltaTimeSecs = DeltaTimeSecs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableBase.OnActorFinalized
// (Event, Public, BlueprintEvent)

void AConstructableBase::OnActorFinalized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.OnActorFinalized"));

	AConstructableBase_OnActorFinalized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableBase.IsValidPartID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableBase::IsValidPartID(int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.IsValidPartID"));

	AConstructableBase_IsValidPartID_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.IsPartDestroyed
// (Final, Native, Public, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableBase::IsPartDestroyed(int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.IsPartDestroyed"));

	AConstructableBase_IsPartDestroyed_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.IsConstructableDestroyed
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableBase::IsConstructableDestroyed()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.IsConstructableDestroyed"));

	AConstructableBase_IsConstructableDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetStyleComponentFromPartID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* AConstructableBase::GetStyleComponentFromPartID(int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetStyleComponentFromPartID"));

	AConstructableBase_GetStyleComponentFromPartID_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetSocketRepIndex
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            OutSocketIndex                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableBase::GetSocketRepIndex(int PartID, const struct FName& SocketName, int* OutSocketIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetSocketRepIndex"));

	AConstructableBase_GetSocketRepIndex_Params params;
	params.PartID = PartID;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSocketIndex != nullptr)
		*OutSocketIndex = params.OutSocketIndex;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetSocketDataFromRepIndex
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutPartId                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   OutSocketName                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableBase::GetSocketDataFromRepIndex(int SocketIndex, int* OutPartId, struct FName* OutSocketName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetSocketDataFromRepIndex"));

	AConstructableBase_GetSocketDataFromRepIndex_Params params;
	params.SocketIndex = SocketIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartId != nullptr)
		*OutPartId = params.OutPartId;
	if (OutSocketName != nullptr)
		*OutSocketName = params.OutSocketName;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetRootPartID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AConstructableBase::GetRootPartID()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetRootPartID"));

	AConstructableBase_GetRootPartID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetRootPart
// (Final, Native, Public, Const)
// Parameters:
// struct FConstructablePart      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FConstructablePart AConstructableBase::GetRootPart()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetRootPart"));

	AConstructableBase_GetRootPart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetPartTags
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   OutGameplayTags                (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableBase::GetPartTags(int PartID, struct FGameplayTagContainer* OutGameplayTags)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetPartTags"));

	AConstructableBase_GetPartTags_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGameplayTags != nullptr)
		*OutGameplayTags = params.OutGameplayTags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetPartSocketGroupTransforms
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketGroupName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FTransform>      OutTransforms                  (Parm, OutParm, ZeroConstructor)
// TEnumAsByte<ERelativeTransformSpace> TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableBase::GetPartSocketGroupTransforms(int PartID, const struct FName& SocketGroupName, TEnumAsByte<ERelativeTransformSpace> TransformSpace, TArray<struct FTransform>* OutTransforms)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetPartSocketGroupTransforms"));

	AConstructableBase_GetPartSocketGroupTransforms_Params params;
	params.PartID = PartID;
	params.SocketGroupName = SocketGroupName;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransforms != nullptr)
		*OutTransforms = params.OutTransforms;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetPartSocketGroup
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketGroupName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FConstructableStyleSocket> OutSocketList                  (Parm, OutParm, ZeroConstructor)
// TEnumAsByte<ERelativeTransformSpace> TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableBase::GetPartSocketGroup(int PartID, const struct FName& SocketGroupName, TEnumAsByte<ERelativeTransformSpace> TransformSpace, TArray<struct FConstructableStyleSocket>* OutSocketList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetPartSocketGroup"));

	AConstructableBase_GetPartSocketGroup_Params params;
	params.PartID = PartID;
	params.SocketGroupName = SocketGroupName;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSocketList != nullptr)
		*OutSocketList = params.OutSocketList;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetPartFromID
// (Final, Native, Public, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FConstructablePart      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FConstructablePart AConstructableBase::GetPartFromID(int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetPartFromID"));

	AConstructableBase_GetPartFromID_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetLastPartID
// (Final, Native, Public, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AConstructableBase::GetLastPartID()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetLastPartID"));

	AConstructableBase_GetLastPartID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetFirstPartSocketGroupTransform
// (Final, Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketGroupName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              OutSocketTransform             (Parm, OutParm, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableBase::GetFirstPartSocketGroupTransform(int PartID, const struct FName& SocketGroupName, TEnumAsByte<ERelativeTransformSpace> TransformSpace, struct FTransform* OutSocketTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetFirstPartSocketGroupTransform"));

	AConstructableBase_GetFirstPartSocketGroupTransform_Params params;
	params.PartID = PartID;
	params.SocketGroupName = SocketGroupName;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSocketTransform != nullptr)
		*OutSocketTransform = params.OutSocketTransform;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetFirstPartSocketGroup
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketGroupName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FConstructableStyleSocket OutSocket                      (Parm, OutParm)
// TEnumAsByte<ERelativeTransformSpace> TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableBase::GetFirstPartSocketGroup(int PartID, const struct FName& SocketGroupName, TEnumAsByte<ERelativeTransformSpace> TransformSpace, struct FConstructableStyleSocket* OutSocket)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetFirstPartSocketGroup"));

	AConstructableBase_GetFirstPartSocketGroup_Params params;
	params.PartID = PartID;
	params.SocketGroupName = SocketGroupName;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSocket != nullptr)
		*OutSocket = params.OutSocket;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetConstructableASC
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UConstructableAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UConstructableAbilitySystemComponent* AConstructableBase::GetConstructableASC()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetConstructableASC"));

	AConstructableBase_GetConstructableASC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetAllStyleComponents
// (Final, Native, Public, Const)
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPrimitiveComponent*> AConstructableBase::GetAllStyleComponents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetAllStyleComponents"));

	AConstructableBase_GetAllStyleComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.GetAllParts
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<struct FConstructablePart> OutAllParts                    (Parm, OutParm, ZeroConstructor)

void AConstructableBase::GetAllParts(TArray<struct FConstructablePart>* OutAllParts)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetAllParts"));

	AConstructableBase_GetAllParts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAllParts != nullptr)
		*OutAllParts = params.OutAllParts;
}


// Function EmbarkConstructable.ConstructableBase.GetAllPartIDs
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<int>                    OutAllPartIDs                  (Parm, OutParm, ZeroConstructor)

void AConstructableBase::GetAllPartIDs(TArray<int>* OutAllPartIDs)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.GetAllPartIDs"));

	AConstructableBase_GetAllPartIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAllPartIDs != nullptr)
		*OutAllPartIDs = params.OutAllPartIDs;
}


// Function EmbarkConstructable.ConstructableBase.DestroyPart_Server
// (Final, Native, Public)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            EventID                        (Parm, ZeroConstructor, IsPlainOldData)
// enum class EConstructableHealthChangeReason DestructionMethod              (Parm, ZeroConstructor, IsPlainOldData)

void AConstructableBase::DestroyPart_Server(int PartID, int EventID, enum class EConstructableHealthChangeReason DestructionMethod)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.DestroyPart_Server"));

	AConstructableBase_DestroyPart_Server_Params params;
	params.PartID = PartID;
	params.EventID = EventID;
	params.DestructionMethod = DestructionMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableBase.CreateConstructablePart_Server
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UClass*                  StyleComponentClass            (Parm, ZeroConstructor, IsPlainOldData)
// struct FConstructablePartIDRange OutPartIDRange                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableBase::CreateConstructablePart_Server(class UClass* StyleComponentClass, struct FConstructablePartIDRange* OutPartIDRange)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.CreateConstructablePart_Server"));

	AConstructableBase_CreateConstructablePart_Server_Params params;
	params.StyleComponentClass = StyleComponentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartIDRange != nullptr)
		*OutPartIDRange = params.OutPartIDRange;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableBase.CompleteConstruction
// (Final, Native, Public, BlueprintCallable)

void AConstructableBase::CompleteConstruction()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableBase.CompleteConstruction"));

	AConstructableBase_CompleteConstruction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableServiceComponentBase.SimClassType
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UConstructableServiceComponentBase::SimClassType()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableServiceComponentBase.SimClassType"));

	UConstructableServiceComponentBase_SimClassType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableServiceComponentBase.OnPumpDataToStyle
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeSecs                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableServiceComponentBase::OnPumpDataToStyle(float DeltaTimeSecs)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableServiceComponentBase.OnPumpDataToStyle"));

	UConstructableServiceComponentBase_OnPumpDataToStyle_Params params;
	params.DeltaTimeSecs = DeltaTimeSecs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableServiceComponentBase.OnFullyConstructed
// (Event, Public, BlueprintEvent)

void UConstructableServiceComponentBase::OnFullyConstructed()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableServiceComponentBase.OnFullyConstructed"));

	UConstructableServiceComponentBase_OnFullyConstructed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableServiceComponentBase.GetSimBaseStatePtr
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USimConstructableBaseClass* ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USimConstructableBaseClass* UConstructableServiceComponentBase::GetSimBaseStatePtr()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableServiceComponentBase.GetSimBaseStatePtr"));

	UConstructableServiceComponentBase_GetSimBaseStatePtr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableServiceComponentBase.EditSimBaseStatePtr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USimConstructableBaseClass* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USimConstructableBaseClass* UConstructableServiceComponentBase::EditSimBaseStatePtr()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableServiceComponentBase.EditSimBaseStatePtr"));

	UConstructableServiceComponentBase_EditSimBaseStatePtr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableCapabilityServiceBase.OnCapabilityEvent_Client
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UConstructableCapabilityBase* Capability                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FConstructableCapabilityEvent EventData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableCapabilityServiceBase::OnCapabilityEvent_Client(class UConstructableCapabilityBase* Capability, const struct FConstructableCapabilityEvent& EventData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableCapabilityServiceBase.OnCapabilityEvent_Client"));

	UConstructableCapabilityServiceBase_OnCapabilityEvent_Client_Params params;
	params.Capability = Capability;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableCapabilityServiceBase.NetMulticast_StateMachine
// (Net, NetReliable, Native, Event, NetMulticast, Protected, BlueprintCallable)
// Parameters:
// TArray<struct FConstructableSMNetworkData> Data                           (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UConstructableCapabilityServiceBase::NetMulticast_StateMachine(TArray<struct FConstructableSMNetworkData> Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableCapabilityServiceBase.NetMulticast_StateMachine"));

	UConstructableCapabilityServiceBase_NetMulticast_StateMachine_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableCapabilityServiceBase.NetMulticast_EventData
// (Net, NetReliable, Native, Event, NetMulticast, Protected, BlueprintCallable)
// Parameters:
// TArray<struct FConstructableCapabilityEvent> Data                           (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UConstructableCapabilityServiceBase::NetMulticast_EventData(TArray<struct FConstructableCapabilityEvent> Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableCapabilityServiceBase.NetMulticast_EventData"));

	UConstructableCapabilityServiceBase_NetMulticast_EventData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableDynamicAttributes.IsValidAttributeName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   AttributeTypeName              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableDynamicAttributes::STATIC_IsValidAttributeName(const struct FName& AttributeTypeName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableDynamicAttributes.IsValidAttributeName"));

	UConstructableDynamicAttributes_IsValidAttributeName_Params params;
	params.AttributeTypeName = AttributeTypeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableDynamicAttributes.GetSetClassesForAttributeName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   AttributeTypeName              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          OutAttributeSetClasses         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableDynamicAttributes::STATIC_GetSetClassesForAttributeName(const struct FName& AttributeTypeName, TArray<class UClass*>* OutAttributeSetClasses)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableDynamicAttributes.GetSetClassesForAttributeName"));

	UConstructableDynamicAttributes_GetSetClassesForAttributeName_Params params;
	params.AttributeTypeName = AttributeTypeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAttributeSetClasses != nullptr)
		*OutAttributeSetClasses = params.OutAttributeSetClasses;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableDynamicAttributes.GetPartAttributeSetMetaData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  BaseClass                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FConstructablePartAttributeSetMetaData OutMetaData                    (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableDynamicAttributes::STATIC_GetPartAttributeSetMetaData(class UClass* BaseClass, struct FConstructablePartAttributeSetMetaData* OutMetaData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableDynamicAttributes.GetPartAttributeSetMetaData"));

	UConstructableDynamicAttributes_GetPartAttributeSetMetaData_Params params;
	params.BaseClass = BaseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMetaData != nullptr)
		*OutMetaData = params.OutMetaData;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableDynamicAttributes.GetMaxPrefixVersionName
// (Final, Native, Static, Public)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UConstructableDynamicAttributes::STATIC_GetMaxPrefixVersionName(const struct FName& Name)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableDynamicAttributes.GetMaxPrefixVersionName"));

	UConstructableDynamicAttributes_GetMaxPrefixVersionName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableDynamicAttributes.GetAllAttributeNames
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UConstructableDynamicAttributes::STATIC_GetAllAttributeNames()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableDynamicAttributes.GetAllAttributeNames"));

	UConstructableDynamicAttributes_GetAllAttributeNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableGameplayAbility.CanActivateConstructableAbility
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilitySpecHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayAbilityActorInfo ScopedActorInfo                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableGameplayAbility::CanActivateConstructableAbility(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ScopedActorInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableGameplayAbility.CanActivateConstructableAbility"));

	UConstructableGameplayAbility_CanActivateConstructableAbility_Params params;
	params.Handle = Handle;
	params.ScopedActorInfo = ScopedActorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableGameplayAbility.CalculateUtility
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilitySpecHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayAbilityActorInfo ScopedActorInfo                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UConstructableGameplayAbility::CalculateUtility(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ScopedActorInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableGameplayAbility.CalculateUtility"));

	UConstructableGameplayAbility_CalculateUtility_Params params;
	params.Handle = Handle;
	params.ScopedActorInfo = ScopedActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableGameplayAbility.ActivateConstructableAbility
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayAbilitySpecHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayAbilityActorInfo ScopedActorInfo                (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableGameplayAbility::ActivateConstructableAbility(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ScopedActorInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableGameplayAbility.ActivateConstructableAbility"));

	UConstructableGameplayAbility_ActivateConstructableAbility_Params params;
	params.Handle = Handle;
	params.ScopedActorInfo = ScopedActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableGameplayCueNotify_Actor.OnConstructableDestroyed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AConstructableBase*      Constructable                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConstructableGameplayCueNotify_Actor::OnConstructableDestroyed(class AConstructableBase* Constructable, class AActor* DamageInstigator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableGameplayCueNotify_Actor.OnConstructableDestroyed"));

	AConstructableGameplayCueNotify_Actor_OnConstructableDestroyed_Params params;
	params.Constructable = Constructable;
	params.DamageInstigator = DamageInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableGameplayCueNotify_Actor.Handle_OnConstructableDestroyed
// (Final, Native, Private)
// Parameters:
// class AConstructableBase*      Constructable                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)

void AConstructableGameplayCueNotify_Actor::Handle_OnConstructableDestroyed(class AConstructableBase* Constructable, class AActor* DamageInstigator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableGameplayCueNotify_Actor.Handle_OnConstructableDestroyed"));

	AConstructableGameplayCueNotify_Actor_Handle_OnConstructableDestroyed_Params params;
	params.Constructable = Constructable;
	params.DamageInstigator = DamageInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.SimConstructableBaseClass.GetService
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UConstructableServiceComponentBase* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UConstructableServiceComponentBase* USimConstructableBaseClass::GetService()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.SimConstructableBaseClass.GetService"));

	USimConstructableBaseClass_GetService_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.SimConstructableBaseClass.FindAndSetServiceForActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ServiceClass                   (Parm, ZeroConstructor, IsPlainOldData)

void USimConstructableBaseClass::FindAndSetServiceForActor(class AActor* Actor, class UClass* ServiceClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.SimConstructableBaseClass.FindAndSetServiceForActor"));

	USimConstructableBaseClass_FindAndSetServiceForActor_Params params;
	params.Actor = Actor;
	params.ServiceClass = ServiceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.SimConstructableBaseClass.DeinitFromReplication
// (Final, Native, Private)

void USimConstructableBaseClass::DeinitFromReplication()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.SimConstructableBaseClass.DeinitFromReplication"));

	USimConstructableBaseClass_DeinitFromReplication_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableDamageDataArraySimState.OnRep_Items
// (Final, Native, Public)

void UConstructableDamageDataArraySimState::OnRep_Items()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableDamageDataArraySimState.OnRep_Items"));

	UConstructableDamageDataArraySimState_OnRep_Items_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableDamageDataArraySimState.InitForActor
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableDamageDataArraySimState::InitForActor(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableDamageDataArraySimState.InitForActor"));

	UConstructableDamageDataArraySimState_InitForActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableFastArrayReplicationServiceComponentBase.StartDeferredEventProcessing_Server
// (Final, Native, Public)

void UConstructableFastArrayReplicationServiceComponentBase::StartDeferredEventProcessing_Server()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableFastArrayReplicationServiceComponentBase.StartDeferredEventProcessing_Server"));

	UConstructableFastArrayReplicationServiceComponentBase_StartDeferredEventProcessing_Server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableHealthServiceComponent.ReplicatePartDamageData_Server
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FConstructableDamageData DamageData                     (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableHealthServiceComponent::ReplicatePartDamageData_Server(const struct FConstructableDamageData& DamageData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableHealthServiceComponent.ReplicatePartDamageData_Server"));

	UConstructableHealthServiceComponent_ReplicatePartDamageData_Server_Params params;
	params.DamageData = DamageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableHealthServiceComponent.PollLatestHealthData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FConstructableDamageData OutLatestHealthData            (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableHealthServiceComponent::PollLatestHealthData(int PartID, struct FConstructableDamageData* OutLatestHealthData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableHealthServiceComponent.PollLatestHealthData"));

	UConstructableHealthServiceComponent_PollLatestHealthData_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLatestHealthData != nullptr)
		*OutLatestHealthData = params.OutLatestHealthData;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableHealthServiceComponent.PollInterpolatedHealthData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FConstructableDamageData OutInterpolatedHealthData      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableHealthServiceComponent::PollInterpolatedHealthData(int PartID, struct FConstructableDamageData* OutInterpolatedHealthData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableHealthServiceComponent.PollInterpolatedHealthData"));

	UConstructableHealthServiceComponent_PollInterpolatedHealthData_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInterpolatedHealthData != nullptr)
		*OutInterpolatedHealthData = params.OutInterpolatedHealthData;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableHealthServiceComponent.HandlePartDamaged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OwnerStyleComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FConstructableDamageData DamageData                     (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableHealthServiceComponent::HandlePartDamaged(class UPrimitiveComponent* OwnerStyleComponent, const struct FConstructableDamageData& DamageData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableHealthServiceComponent.HandlePartDamaged"));

	UConstructableHealthServiceComponent_HandlePartDamaged_Params params;
	params.OwnerStyleComponent = OwnerStyleComponent;
	params.DamageData = DamageData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableHoverMovementUtils.CalculateThrusterLocalForces
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FThrusterSimParams      ThrusterSimParams              (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FThrusterDefinition> InOutThrusters                 (Parm, OutParm, ZeroConstructor)

void UConstructableHoverMovementUtils::STATIC_CalculateThrusterLocalForces(const struct FThrusterSimParams& ThrusterSimParams, TArray<struct FThrusterDefinition>* InOutThrusters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableHoverMovementUtils.CalculateThrusterLocalForces"));

	UConstructableHoverMovementUtils_CalculateThrusterLocalForces_Params params;
	params.ThrusterSimParams = ThrusterSimParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutThrusters != nullptr)
		*InOutThrusters = params.InOutThrusters;
}


// Function EmbarkConstructable.ConstructableMovementComponentBase.UpdateNetStateFromBaseMovementState_Server
// (Final, Native, Public, Const)
// Parameters:
// class UConstructableMovementNetState* NetState                       (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableMovementComponentBase::UpdateNetStateFromBaseMovementState_Server(class UConstructableMovementNetState* NetState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableMovementComponentBase.UpdateNetStateFromBaseMovementState_Server"));

	UConstructableMovementComponentBase_UpdateNetStateFromBaseMovementState_Server_Params params;
	params.NetState = NetState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableMovementComponentBase.UpdateBaseMovementStateFromNetState_Client
// (Final, Native, Public)
// Parameters:
// class UConstructableMovementNetState* NetState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UConstructableMovementComponentBase::UpdateBaseMovementStateFromNetState_Client(class UConstructableMovementNetState* NetState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableMovementComponentBase.UpdateBaseMovementStateFromNetState_Client"));

	UConstructableMovementComponentBase_UpdateBaseMovementStateFromNetState_Client_Params params;
	params.NetState = NetState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableMovementComponentBase.SetEnableStructDeltaCompression
// (Final, Native, Public)

void UConstructableMovementComponentBase::SetEnableStructDeltaCompression()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableMovementComponentBase.SetEnableStructDeltaCompression"));

	UConstructableMovementComponentBase_SetEnableStructDeltaCompression_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableMovementComponentBase.RemovePhysicsSuppressor
// (Final, Native, Public)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableMovementComponentBase::RemovePhysicsSuppressor(const struct FName& InName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableMovementComponentBase.RemovePhysicsSuppressor"));

	UConstructableMovementComponentBase_RemovePhysicsSuppressor_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableMovementComponentBase.RemoveMovementSuppressor
// (Final, Native, Public)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableMovementComponentBase::RemoveMovementSuppressor(const struct FName& InName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableMovementComponentBase.RemoveMovementSuppressor"));

	UConstructableMovementComponentBase_RemoveMovementSuppressor_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableMovementComponentBase.OnRep_RootTransform
// (Final, Native, Public)

void UConstructableMovementComponentBase::OnRep_RootTransform()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableMovementComponentBase.OnRep_RootTransform"));

	UConstructableMovementComponentBase_OnRep_RootTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableMovementComponentBase.OnPhysicsSuppressionChangeState
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewSupressionState            (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableMovementComponentBase::OnPhysicsSuppressionChangeState(bool bNewSupressionState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableMovementComponentBase.OnPhysicsSuppressionChangeState"));

	UConstructableMovementComponentBase_OnPhysicsSuppressionChangeState_Params params;
	params.bNewSupressionState = bNewSupressionState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableMovementComponentBase.GetDesiredVelocity
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UConstructableMovementComponentBase::GetDesiredVelocity()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableMovementComponentBase.GetDesiredVelocity"));

	UConstructableMovementComponentBase_GetDesiredVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableMovementComponentBase.GetCurrentLocalRotationOffset
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UConstructableMovementComponentBase::GetCurrentLocalRotationOffset()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableMovementComponentBase.GetCurrentLocalRotationOffset"));

	UConstructableMovementComponentBase_GetCurrentLocalRotationOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableMovementComponentBase.GetAngularVelocity_Client
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UConstructableMovementComponentBase::GetAngularVelocity_Client()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableMovementComponentBase.GetAngularVelocity_Client"));

	UConstructableMovementComponentBase_GetAngularVelocity_Client_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableMovementComponentBase.AddPhysicsSuppressor
// (Final, Native, Public)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableMovementComponentBase::AddPhysicsSuppressor(const struct FName& InName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableMovementComponentBase.AddPhysicsSuppressor"));

	UConstructableMovementComponentBase_AddPhysicsSuppressor_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableMovementComponentBase.AddMovementSuppressor
// (Final, Native, Public)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableMovementComponentBase::AddMovementSuppressor(const struct FName& InName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableMovementComponentBase.AddMovementSuppressor"));

	UConstructableMovementComponentBase_AddMovementSuppressor_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (Parm, OutParm)
// bool                           bSetWorldTransform             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UConstructablePartMixinLibrary::STATIC_SetPartTransform(bool bSetWorldTransform, const struct FTransform& NewTransform, struct FConstructablePart* ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartTransform"));

	UConstructablePartMixinLibrary_SetPartTransform_Params params;
	params.bSetWorldTransform = bSetWorldTransform;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructablePart != nullptr)
		*ConstructablePart = params.ConstructablePart;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartSimulatePhysics
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FConstructablePart      ConstructablePart              (Parm, OutParm)
// bool                           bSimulatePhysics               (Parm, ZeroConstructor, IsPlainOldData)

void UConstructablePartMixinLibrary::STATIC_SetPartSimulatePhysics(bool bSimulatePhysics, struct FConstructablePart* ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartSimulatePhysics"));

	UConstructablePartMixinLibrary_SetPartSimulatePhysics_Params params;
	params.bSimulatePhysics = bSimulatePhysics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructablePart != nullptr)
		*ConstructablePart = params.ConstructablePart;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartShouldAlwaysGenerateOverlaps
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (Parm, OutParm)
// bool                           bShouldAlwaysGenerateOverlaps  (Parm, ZeroConstructor, IsPlainOldData)

void UConstructablePartMixinLibrary::STATIC_SetPartShouldAlwaysGenerateOverlaps(bool bShouldAlwaysGenerateOverlaps, struct FConstructablePart* ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartShouldAlwaysGenerateOverlaps"));

	UConstructablePartMixinLibrary_SetPartShouldAlwaysGenerateOverlaps_Params params;
	params.bShouldAlwaysGenerateOverlaps = bShouldAlwaysGenerateOverlaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructablePart != nullptr)
		*ConstructablePart = params.ConstructablePart;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartLinearVelocity
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (Parm, OutParm)
// struct FVector                 LinearVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConstructablePartMixinLibrary::STATIC_SetPartLinearVelocity(const struct FVector& LinearVelocity, struct FConstructablePart* ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartLinearVelocity"));

	UConstructablePartMixinLibrary_SetPartLinearVelocity_Params params;
	params.LinearVelocity = LinearVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructablePart != nullptr)
		*ConstructablePart = params.ConstructablePart;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartCollisionProfileName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (Parm, OutParm)
// struct FName                   InCollisionProfileName         (Parm, ZeroConstructor, IsPlainOldData)

void UConstructablePartMixinLibrary::STATIC_SetPartCollisionProfileName(const struct FName& InCollisionProfileName, struct FConstructablePart* ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartCollisionProfileName"));

	UConstructablePartMixinLibrary_SetPartCollisionProfileName_Params params;
	params.InCollisionProfileName = InCollisionProfileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructablePart != nullptr)
		*ConstructablePart = params.ConstructablePart;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartAngularVelocityInDegrees
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (Parm, OutParm)
// struct FVector                 AngularVelocityDegrees         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConstructablePartMixinLibrary::STATIC_SetPartAngularVelocityInDegrees(const struct FVector& AngularVelocityDegrees, struct FConstructablePart* ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.SetPartAngularVelocityInDegrees"));

	UConstructablePartMixinLibrary_SetPartAngularVelocityInDegrees_Params params;
	params.AngularVelocityDegrees = AngularVelocityDegrees;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructablePart != nullptr)
		*ConstructablePart = params.ConstructablePart;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.SetDampingProperties
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (Parm, OutParm)
// float                          LinearDamping                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngularDamping                 (Parm, ZeroConstructor, IsPlainOldData)

void UConstructablePartMixinLibrary::STATIC_SetDampingProperties(float LinearDamping, float AngularDamping, struct FConstructablePart* ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.SetDampingProperties"));

	UConstructablePartMixinLibrary_SetDampingProperties_Params params;
	params.LinearDamping = LinearDamping;
	params.AngularDamping = AngularDamping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructablePart != nullptr)
		*ConstructablePart = params.ConstructablePart;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.RefreshSocketGroups
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (Parm, OutParm)

void UConstructablePartMixinLibrary::STATIC_RefreshSocketGroups(struct FConstructablePart* ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.RefreshSocketGroups"));

	UConstructablePartMixinLibrary_RefreshSocketGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructablePart != nullptr)
		*ConstructablePart = params.ConstructablePart;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.IsValidPartIDForStyle
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_IsValidPartIDForStyle(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.IsValidPartIDForStyle"));

	UConstructablePartMixinLibrary_IsValidPartIDForStyle_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_IsValid(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.IsValid"));

	UConstructablePartMixinLibrary_IsValid_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.IsStaticMesh
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_IsStaticMesh(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.IsStaticMesh"));

	UConstructablePartMixinLibrary_IsStaticMesh_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.IsSkeletalMesh
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_IsSkeletalMesh(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.IsSkeletalMesh"));

	UConstructablePartMixinLibrary_IsSkeletalMesh_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.IsProxy
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_IsProxy(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.IsProxy"));

	UConstructablePartMixinLibrary_IsProxy_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.IsPointInsidePart
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_IsPointInsidePart(const struct FConstructablePart& ConstructablePart, const struct FVector& Point)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.IsPointInsidePart"));

	UConstructablePartMixinLibrary_IsPointInsidePart_Params params;
	params.ConstructablePart = ConstructablePart;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.IsPartDestroyed
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_IsPartDestroyed(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.IsPartDestroyed"));

	UConstructablePartMixinLibrary_IsPartDestroyed_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetWorldTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UConstructablePartMixinLibrary::STATIC_GetWorldTransform(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetWorldTransform"));

	UConstructablePartMixinLibrary_GetWorldTransform_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetWorldRotationQuat
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UConstructablePartMixinLibrary::STATIC_GetWorldRotationQuat(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetWorldRotationQuat"));

	UConstructablePartMixinLibrary_GetWorldRotationQuat_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetWorldRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UConstructablePartMixinLibrary::STATIC_GetWorldRotation(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetWorldRotation"));

	UConstructablePartMixinLibrary_GetWorldRotation_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetWorldLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UConstructablePartMixinLibrary::STATIC_GetWorldLocation(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetWorldLocation"));

	UConstructablePartMixinLibrary_GetWorldLocation_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetStyleComponent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* UConstructablePartMixinLibrary::STATIC_GetStyleComponent(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetStyleComponent"));

	UConstructablePartMixinLibrary_GetStyleComponent_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetSlotTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWantWorldTransform            (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetSlotTransform(const struct FConstructablePart& ConstructablePart, const struct FGameplayTagContainer& GameplayTagContainer, bool bWantWorldTransform, struct FTransform* OutTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetSlotTransform"));

	UConstructablePartMixinLibrary_GetSlotTransform_Params params;
	params.ConstructablePart = ConstructablePart;
	params.GameplayTagContainer = GameplayTagContainer;
	params.bWantWorldTransform = bWantWorldTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRootPartID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructablePartMixinLibrary::STATIC_GetRootPartID(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRootPartID"));

	UConstructablePartMixinLibrary_GetRootPartID_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRelativeTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UConstructablePartMixinLibrary::STATIC_GetRelativeTransform(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRelativeTransform"));

	UConstructablePartMixinLibrary_GetRelativeTransform_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRelativeRotationQuat
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UConstructablePartMixinLibrary::STATIC_GetRelativeRotationQuat(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRelativeRotationQuat"));

	UConstructablePartMixinLibrary_GetRelativeRotationQuat_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRelativeRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UConstructablePartMixinLibrary::STATIC_GetRelativeRotation(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRelativeRotation"));

	UConstructablePartMixinLibrary_GetRelativeRotation_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRelativeLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UConstructablePartMixinLibrary::STATIC_GetRelativeLocation(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetRelativeLocation"));

	UConstructablePartMixinLibrary_GetRelativeLocation_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWantWorldTransform            (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartTransform(const struct FConstructablePart& ConstructablePart, bool bWantWorldTransform, struct FTransform* OutTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartTransform"));

	UConstructablePartMixinLibrary_GetPartTransform_Params params;
	params.ConstructablePart = ConstructablePart;
	params.bWantWorldTransform = bWantWorldTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartTags
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   OutGameplayTags                (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartTags(const struct FConstructablePart& ConstructablePart, struct FGameplayTagContainer* OutGameplayTags)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartTags"));

	UConstructablePartMixinLibrary_GetPartTags_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGameplayTags != nullptr)
		*OutGameplayTags = params.OutGameplayTags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   SocketName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartSocketTransform(const struct FConstructablePart& ConstructablePart, const struct FName& SocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace, struct FTransform* OutTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketTransform"));

	UConstructablePartMixinLibrary_GetPartSocketTransform_Params params;
	params.ConstructablePart = ConstructablePart;
	params.SocketName = SocketName;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   SocketName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            OutSocketID                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartSocketID(const struct FConstructablePart& ConstructablePart, const struct FName& SocketName, int* OutSocketID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketID"));

	UConstructablePartMixinLibrary_GetPartSocketID_Params params;
	params.ConstructablePart = ConstructablePart;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSocketID != nullptr)
		*OutSocketID = params.OutSocketID;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketGroupTransforms
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   SocketGroupName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FTransform>      OutTransformList               (Parm, OutParm, ZeroConstructor)
// TEnumAsByte<ERelativeTransformSpace> TransformSpace                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartSocketGroupTransforms(const struct FConstructablePart& ConstructablePart, const struct FName& SocketGroupName, TEnumAsByte<ERelativeTransformSpace> TransformSpace, TArray<struct FTransform>* OutTransformList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketGroupTransforms"));

	UConstructablePartMixinLibrary_GetPartSocketGroupTransforms_Params params;
	params.ConstructablePart = ConstructablePart;
	params.SocketGroupName = SocketGroupName;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransformList != nullptr)
		*OutTransformList = params.OutTransformList;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketGroupNames
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   SocketGroupName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FName>           OutSocketGroupNameList         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartSocketGroupNames(const struct FConstructablePart& ConstructablePart, const struct FName& SocketGroupName, TArray<struct FName>* OutSocketGroupNameList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketGroupNames"));

	UConstructablePartMixinLibrary_GetPartSocketGroupNames_Params params;
	params.ConstructablePart = ConstructablePart;
	params.SocketGroupName = SocketGroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSocketGroupNameList != nullptr)
		*OutSocketGroupNameList = params.OutSocketGroupNameList;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketGroup
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   SocketGroupName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FConstructableStyleSocket> OutSocketList                  (Parm, OutParm, ZeroConstructor)
// TEnumAsByte<ERelativeTransformSpace> TransformSpace                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartSocketGroup(const struct FConstructablePart& ConstructablePart, const struct FName& SocketGroupName, TEnumAsByte<ERelativeTransformSpace> TransformSpace, TArray<struct FConstructableStyleSocket>* OutSocketList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSocketGroup"));

	UConstructablePartMixinLibrary_GetPartSocketGroup_Params params;
	params.ConstructablePart = ConstructablePart;
	params.SocketGroupName = SocketGroupName;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSocketList != nullptr)
		*OutSocketList = params.OutSocketList;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartsIntersectingSphere
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 SphereOrigin                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          SphereRadius                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutPartIDs                     (Parm, OutParm, ZeroConstructor)

void UConstructablePartMixinLibrary::STATIC_GetPartsIntersectingSphere(const struct FConstructablePart& ConstructablePart, const struct FVector& SphereOrigin, float SphereRadius, TArray<int>* OutPartIDs)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartsIntersectingSphere"));

	UConstructablePartMixinLibrary_GetPartsIntersectingSphere_Params params;
	params.ConstructablePart = ConstructablePart;
	params.SphereOrigin = SphereOrigin;
	params.SphereRadius = SphereRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartIDs != nullptr)
		*OutPartIDs = params.OutPartIDs;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSimulatePhysics
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartSimulatePhysics(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartSimulatePhysics"));

	UConstructablePartMixinLibrary_GetPartSimulatePhysics_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartParent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FConstructablePartParentInfo OutParentInfo                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartParent(const struct FConstructablePart& ConstructablePart, struct FConstructablePartParentInfo* OutParentInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartParent"));

	UConstructablePartMixinLibrary_GetPartParent_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutParentInfo != nullptr)
		*OutParentInfo = params.OutParentInfo;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UConstructablePartMixinLibrary::STATIC_GetPartName(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartName"));

	UConstructablePartMixinLibrary_GetPartName_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartMass
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// float                          OutMass                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartMass(const struct FConstructablePart& ConstructablePart, float* OutMass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartMass"));

	UConstructablePartMixinLibrary_GetPartMass_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMass != nullptr)
		*OutMass = params.OutMass;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartLinearVelocityAtLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OutLinearVelocity              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartLinearVelocityAtLocation(const struct FConstructablePart& ConstructablePart, const struct FVector& Location, struct FVector* OutLinearVelocity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartLinearVelocityAtLocation"));

	UConstructablePartMixinLibrary_GetPartLinearVelocityAtLocation_Params params;
	params.ConstructablePart = ConstructablePart;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLinearVelocity != nullptr)
		*OutLinearVelocity = params.OutLinearVelocity;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartLinearVelocity
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 OutLinearVelocity              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartLinearVelocity(const struct FConstructablePart& ConstructablePart, struct FVector* OutLinearVelocity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartLinearVelocity"));

	UConstructablePartMixinLibrary_GetPartLinearVelocity_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLinearVelocity != nullptr)
		*OutLinearVelocity = params.OutLinearVelocity;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartInitialRelativeTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              OutInitialRelativeTransform    (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartInitialRelativeTransform(const struct FConstructablePart& ConstructablePart, struct FTransform* OutInitialRelativeTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartInitialRelativeTransform"));

	UConstructablePartMixinLibrary_GetPartInitialRelativeTransform_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInitialRelativeTransform != nullptr)
		*OutInitialRelativeTransform = params.OutInitialRelativeTransform;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartInitialRelativeRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                OutInitialRelativeRotation     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartInitialRelativeRotation(const struct FConstructablePart& ConstructablePart, struct FRotator* OutInitialRelativeRotation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartInitialRelativeRotation"));

	UConstructablePartMixinLibrary_GetPartInitialRelativeRotation_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInitialRelativeRotation != nullptr)
		*OutInitialRelativeRotation = params.OutInitialRelativeRotation;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartIDsMatchingTagQuery
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagQuery       Query                          (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructablePartMixinLibrary::STATIC_GetPartIDsMatchingTagQuery(const struct FConstructablePart& ConstructablePart, const struct FGameplayTagQuery& Query)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartIDsMatchingTagQuery"));

	UConstructablePartMixinLibrary_GetPartIDsMatchingTagQuery_Params params;
	params.ConstructablePart = ConstructablePart;
	params.Query = Query;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartIDRange
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FConstructablePartIDRange ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FConstructablePartIDRange UConstructablePartMixinLibrary::STATIC_GetPartIDRange(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartIDRange"));

	UConstructablePartMixinLibrary_GetPartIDRange_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartIDFromPhysicsBodyIndex
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// int                            PhysicsBodyIndex               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutPartId                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartIDFromPhysicsBodyIndex(const struct FConstructablePart& ConstructablePart, int PhysicsBodyIndex, int* OutPartId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartIDFromPhysicsBodyIndex"));

	UConstructablePartMixinLibrary_GetPartIDFromPhysicsBodyIndex_Params params;
	params.ConstructablePart = ConstructablePart;
	params.PhysicsBodyIndex = PhysicsBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartId != nullptr)
		*OutPartId = params.OutPartId;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartIDFromHitResult
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructablePartMixinLibrary::STATIC_GetPartIDFromHitResult(const struct FConstructablePart& ConstructablePart, const struct FHitResult& HitResult)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartIDFromHitResult"));

	UConstructablePartMixinLibrary_GetPartIDFromHitResult_Params params;
	params.ConstructablePart = ConstructablePart;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartCollisionProfileName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UConstructablePartMixinLibrary::STATIC_GetPartCollisionProfileName(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartCollisionProfileName"));

	UConstructablePartMixinLibrary_GetPartCollisionProfileName_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartChildren
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FConstructablePart> OutPartChildren                (Parm, OutParm, ZeroConstructor)
// bool                           bIsRecursive                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAlsoGetDestroyedParts         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartChildren(const struct FConstructablePart& ConstructablePart, bool bIsRecursive, bool bAlsoGetDestroyedParts, TArray<struct FConstructablePart>* OutPartChildren)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartChildren"));

	UConstructablePartMixinLibrary_GetPartChildren_Params params;
	params.ConstructablePart = ConstructablePart;
	params.bIsRecursive = bIsRecursive;
	params.bAlsoGetDestroyedParts = bAlsoGetDestroyedParts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartChildren != nullptr)
		*OutPartChildren = params.OutPartChildren;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartBounds
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBox                    OutBounds                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartBounds(const struct FConstructablePart& ConstructablePart, struct FBox* OutBounds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartBounds"));

	UConstructablePartMixinLibrary_GetPartBounds_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBounds != nullptr)
		*OutBounds = params.OutBounds;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartBodyInstance
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBodyInstance           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBodyInstance UConstructablePartMixinLibrary::STATIC_GetPartBodyInstance(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartBodyInstance"));

	UConstructablePartMixinLibrary_GetPartBodyInstance_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartAngularVelocityInDegrees
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 OutAngularVelocityDegrees      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetPartAngularVelocityInDegrees(const struct FConstructablePart& ConstructablePart, struct FVector* OutAngularVelocityDegrees)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetPartAngularVelocityInDegrees"));

	UConstructablePartMixinLibrary_GetPartAngularVelocityInDegrees_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngularVelocityDegrees != nullptr)
		*OutAngularVelocityDegrees = params.OutAngularVelocityDegrees;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetNormalizedSocketGroupTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   SocketGroupName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetNormalizedSocketGroupTransform(const struct FConstructablePart& ConstructablePart, const struct FName& SocketGroupName, struct FTransform* OutTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetNormalizedSocketGroupTransform"));

	UConstructablePartMixinLibrary_GetNormalizedSocketGroupTransform_Params params;
	params.ConstructablePart = ConstructablePart;
	params.SocketGroupName = SocketGroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetFirstPartSocketGroupTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   SocketGroupName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> TransformSpace                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetFirstPartSocketGroupTransform(const struct FConstructablePart& ConstructablePart, const struct FName& SocketGroupName, TEnumAsByte<ERelativeTransformSpace> TransformSpace, struct FTransform* OutTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetFirstPartSocketGroupTransform"));

	UConstructablePartMixinLibrary_GetFirstPartSocketGroupTransform_Params params;
	params.ConstructablePart = ConstructablePart;
	params.SocketGroupName = SocketGroupName;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetFirstPartSocketGroup
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   SocketGroupName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FConstructableStyleSocket OutSocket                      (Parm, OutParm)
// TEnumAsByte<ERelativeTransformSpace> TransformSpace                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartMixinLibrary::STATIC_GetFirstPartSocketGroup(const struct FConstructablePart& ConstructablePart, const struct FName& SocketGroupName, TEnumAsByte<ERelativeTransformSpace> TransformSpace, struct FConstructableStyleSocket* OutSocket)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetFirstPartSocketGroup"));

	UConstructablePartMixinLibrary_GetFirstPartSocketGroup_Params params;
	params.ConstructablePart = ConstructablePart;
	params.SocketGroupName = SocketGroupName;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSocket != nullptr)
		*OutSocket = params.OutSocket;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.GetAttachSocketName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UConstructablePartMixinLibrary::STATIC_GetAttachSocketName(const struct FConstructablePart& ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.GetAttachSocketName"));

	UConstructablePartMixinLibrary_GetAttachSocketName_Params params;
	params.ConstructablePart = ConstructablePart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.DestroyPart
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (Parm, OutParm)
// int                            EventID                        (Parm, ZeroConstructor, IsPlainOldData)
// enum class EConstructableHealthChangeReason DestructionMethod              (Parm, ZeroConstructor, IsPlainOldData)

void UConstructablePartMixinLibrary::STATIC_DestroyPart(int EventID, enum class EConstructableHealthChangeReason DestructionMethod, struct FConstructablePart* ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.DestroyPart"));

	UConstructablePartMixinLibrary_DestroyPart_Params params;
	params.EventID = EventID;
	params.DestructionMethod = DestructionMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructablePart != nullptr)
		*ConstructablePart = params.ConstructablePart;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.AttachActor
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (Parm, OutParm)
// class AActor*                  ActorToAttach                  (Parm, ZeroConstructor, IsPlainOldData)
// enum class EAttachmentRule     AttachmentRule                 (Parm, ZeroConstructor, IsPlainOldData)

void UConstructablePartMixinLibrary::STATIC_AttachActor(class AActor* ActorToAttach, enum class EAttachmentRule AttachmentRule, struct FConstructablePart* ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.AttachActor"));

	UConstructablePartMixinLibrary_AttachActor_Params params;
	params.ActorToAttach = ActorToAttach;
	params.AttachmentRule = AttachmentRule;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructablePart != nullptr)
		*ConstructablePart = params.ConstructablePart;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.AddSocketData
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (Parm, OutParm)

void UConstructablePartMixinLibrary::STATIC_AddSocketData(struct FConstructablePart* ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.AddSocketData"));

	UConstructablePartMixinLibrary_AddSocketData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructablePart != nullptr)
		*ConstructablePart = params.ConstructablePart;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.AddPartTags
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePart      ConstructablePart              (Parm, OutParm)
// struct FGameplayTagContainer   PartTags                       (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructablePartMixinLibrary::STATIC_AddPartTags(const struct FGameplayTagContainer& PartTags, struct FConstructablePart* ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.AddPartTags"));

	UConstructablePartMixinLibrary_AddPartTags_Params params;
	params.PartTags = PartTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructablePart != nullptr)
		*ConstructablePart = params.ConstructablePart;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.AddPartImpulseAtLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (Parm, OutParm)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Impulse                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConstructablePartMixinLibrary::STATIC_AddPartImpulseAtLocation(const struct FVector& Location, const struct FVector& Impulse, struct FConstructablePart* ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.AddPartImpulseAtLocation"));

	UConstructablePartMixinLibrary_AddPartImpulseAtLocation_Params params;
	params.Location = Location;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructablePart != nullptr)
		*ConstructablePart = params.ConstructablePart;
}


// Function EmbarkConstructable.ConstructablePartMixinLibrary.AddPartForceAtLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePart      ConstructablePart              (Parm, OutParm)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Force                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConstructablePartMixinLibrary::STATIC_AddPartForceAtLocation(const struct FVector& Location, const struct FVector& Force, struct FConstructablePart* ConstructablePart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartMixinLibrary.AddPartForceAtLocation"));

	UConstructablePartMixinLibrary_AddPartForceAtLocation_Params params;
	params.Location = Location;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructablePart != nullptr)
		*ConstructablePart = params.ConstructablePart;
}


// Function EmbarkConstructable.ConstructablePartListMixinLibrary.IsEmpty
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartList  ConstructablePartList          (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartListMixinLibrary::STATIC_IsEmpty(const struct FConstructablePartList& ConstructablePartList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartListMixinLibrary.IsEmpty"));

	UConstructablePartListMixinLibrary_IsEmpty_Params params;
	params.ConstructablePartList = ConstructablePartList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartListMixinLibrary.GetPartList
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartList  ConstructablePartList          (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FConstructablePart> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FConstructablePart> UConstructablePartListMixinLibrary::STATIC_GetPartList(const struct FConstructablePartList& ConstructablePartList, class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartListMixinLibrary.GetPartList"));

	UConstructablePartListMixinLibrary_GetPartList_Params params;
	params.ConstructablePartList = ConstructablePartList;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartListMixinLibrary.GetPartIDs
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartList  ConstructablePartList          (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UConstructablePartListMixinLibrary::STATIC_GetPartIDs(const struct FConstructablePartList& ConstructablePartList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartListMixinLibrary.GetPartIDs"));

	UConstructablePartListMixinLibrary_GetPartIDs_Params params;
	params.ConstructablePartList = ConstructablePartList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartListMixinLibrary.GetFirstPartID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartList  ConstructablePartList          (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructablePartListMixinLibrary::STATIC_GetFirstPartID(const struct FConstructablePartList& ConstructablePartList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartListMixinLibrary.GetFirstPartID"));

	UConstructablePartListMixinLibrary_GetFirstPartID_Params params;
	params.ConstructablePartList = ConstructablePartList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartListMixinLibrary.ContainsPartID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartList  ConstructablePartList          (ConstParm, Parm, OutParm, ReferenceParm)
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartListMixinLibrary::STATIC_ContainsPartID(const struct FConstructablePartList& ConstructablePartList, int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartListMixinLibrary.ContainsPartID"));

	UConstructablePartListMixinLibrary_ContainsPartID_Params params;
	params.ConstructablePartList = ConstructablePartList;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartSelectionMixinLibrary.IsValidPartID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartSelection PartSelection                  (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartSelectionMixinLibrary::STATIC_IsValidPartID(const struct FConstructablePartSelection& PartSelection)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartSelectionMixinLibrary.IsValidPartID"));

	UConstructablePartSelectionMixinLibrary_IsValidPartID_Params params;
	params.PartSelection = PartSelection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartSelectionMixinLibrary.GetConstructablePart
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartSelection PartSelection                  (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FConstructablePart      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FConstructablePart UConstructablePartSelectionMixinLibrary::STATIC_GetConstructablePart(const struct FConstructablePartSelection& PartSelection, class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartSelectionMixinLibrary.GetConstructablePart"));

	UConstructablePartSelectionMixinLibrary_GetConstructablePart_Params params;
	params.PartSelection = PartSelection;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartTransformMixinLibrary::STATIC_IsValid(const struct FConstructablePartTransform& ConstructablePartTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.IsValid"));

	UConstructablePartTransformMixinLibrary_IsValid_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetWorldTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UConstructablePartTransformMixinLibrary::STATIC_GetWorldTransform(const struct FConstructablePartTransform& ConstructablePartTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetWorldTransform"));

	UConstructablePartTransformMixinLibrary_GetWorldTransform_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetWorldRotationQuat
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UConstructablePartTransformMixinLibrary::STATIC_GetWorldRotationQuat(const struct FConstructablePartTransform& ConstructablePartTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetWorldRotationQuat"));

	UConstructablePartTransformMixinLibrary_GetWorldRotationQuat_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetWorldRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UConstructablePartTransformMixinLibrary::STATIC_GetWorldRotation(const struct FConstructablePartTransform& ConstructablePartTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetWorldRotation"));

	UConstructablePartTransformMixinLibrary_GetWorldRotation_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetWorldLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UConstructablePartTransformMixinLibrary::STATIC_GetWorldLocation(const struct FConstructablePartTransform& ConstructablePartTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetWorldLocation"));

	UConstructablePartTransformMixinLibrary_GetWorldLocation_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetSocketName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UConstructablePartTransformMixinLibrary::STATIC_GetSocketName(const struct FConstructablePartTransform& ConstructablePartTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetSocketName"));

	UConstructablePartTransformMixinLibrary_GetSocketName_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeTransformByParam
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EConstructablePartRelativeTransformSpace TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UConstructablePartTransformMixinLibrary::STATIC_GetRelativeTransformByParam(const struct FConstructablePartTransform& ConstructablePartTransform, enum class EConstructablePartRelativeTransformSpace TransformSpace)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeTransformByParam"));

	UConstructablePartTransformMixinLibrary_GetRelativeTransformByParam_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UConstructablePartTransformMixinLibrary::STATIC_GetRelativeTransform(const struct FConstructablePartTransform& ConstructablePartTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeTransform"));

	UConstructablePartTransformMixinLibrary_GetRelativeTransform_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeRotationQuatByParam
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EConstructablePartRelativeTransformSpace TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UConstructablePartTransformMixinLibrary::STATIC_GetRelativeRotationQuatByParam(const struct FConstructablePartTransform& ConstructablePartTransform, enum class EConstructablePartRelativeTransformSpace TransformSpace)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeRotationQuatByParam"));

	UConstructablePartTransformMixinLibrary_GetRelativeRotationQuatByParam_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeRotationQuat
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UConstructablePartTransformMixinLibrary::STATIC_GetRelativeRotationQuat(const struct FConstructablePartTransform& ConstructablePartTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeRotationQuat"));

	UConstructablePartTransformMixinLibrary_GetRelativeRotationQuat_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeRotationByParam
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EConstructablePartRelativeTransformSpace TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UConstructablePartTransformMixinLibrary::STATIC_GetRelativeRotationByParam(const struct FConstructablePartTransform& ConstructablePartTransform, enum class EConstructablePartRelativeTransformSpace TransformSpace)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeRotationByParam"));

	UConstructablePartTransformMixinLibrary_GetRelativeRotationByParam_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UConstructablePartTransformMixinLibrary::STATIC_GetRelativeRotation(const struct FConstructablePartTransform& ConstructablePartTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeRotation"));

	UConstructablePartTransformMixinLibrary_GetRelativeRotation_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeLocationByParam
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EConstructablePartRelativeTransformSpace TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UConstructablePartTransformMixinLibrary::STATIC_GetRelativeLocationByParam(const struct FConstructablePartTransform& ConstructablePartTransform, enum class EConstructablePartRelativeTransformSpace TransformSpace)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeLocationByParam"));

	UConstructablePartTransformMixinLibrary_GetRelativeLocationByParam_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UConstructablePartTransformMixinLibrary::STATIC_GetRelativeLocation(const struct FConstructablePartTransform& ConstructablePartTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetRelativeLocation"));

	UConstructablePartTransformMixinLibrary_GetRelativeLocation_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetPartName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UConstructablePartTransformMixinLibrary::STATIC_GetPartName(const struct FConstructablePartTransform& ConstructablePartTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetPartName"));

	UConstructablePartTransformMixinLibrary_GetPartName_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetPartID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructablePartTransformMixinLibrary::STATIC_GetPartID(const struct FConstructablePartTransform& ConstructablePartTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetPartID"));

	UConstructablePartTransformMixinLibrary_GetPartID_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetComponent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UConstructablePartTransformMixinLibrary::STATIC_GetComponent(const struct FConstructablePartTransform& ConstructablePartTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.GetComponent"));

	UConstructablePartTransformMixinLibrary_GetComponent_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.AttachComponentToPart
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartTransform ConstructablePartTransform     (ConstParm, Parm, OutParm, ReferenceParm)
// class USceneComponent*         OtherComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UConstructablePartTransformMixinLibrary::STATIC_AttachComponentToPart(const struct FConstructablePartTransform& ConstructablePartTransform, class USceneComponent* OtherComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTransformMixinLibrary.AttachComponentToPart"));

	UConstructablePartTransformMixinLibrary_AttachComponentToPart_Params params;
	params.ConstructablePartTransform = ConstructablePartTransform;
	params.OtherComponent = OtherComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructablePartSelectionContainerMixinLibrary.Setup
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartTransformSelection PartSelectionContainer         (Parm, OutParm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UConstructablePartSelectionContainerMixinLibrary::STATIC_Setup(class AActor* Actor, struct FConstructablePartTransformSelection* PartSelectionContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartSelectionContainerMixinLibrary.Setup"));

	UConstructablePartSelectionContainerMixinLibrary_Setup_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartSelectionContainer != nullptr)
		*PartSelectionContainer = params.PartSelectionContainer;
}


// Function EmbarkConstructable.ConstructablePartSelectionContainerMixinLibrary.GetPart
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartTransformSelection PartSelectionContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FConstructablePart      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FConstructablePart UConstructablePartSelectionContainerMixinLibrary::STATIC_GetPart(const struct FConstructablePartTransformSelection& PartSelectionContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartSelectionContainerMixinLibrary.GetPart"));

	UConstructablePartSelectionContainerMixinLibrary_GetPart_Params params;
	params.PartSelectionContainer = PartSelectionContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartSelectionContainerMixinLibrary.GetAsPartTransform
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartTransformSelection PartSelectionContainer         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FConstructablePartTransform ReturnValue                    (Parm, OutParm, ReturnParm)

struct FConstructablePartTransform UConstructablePartSelectionContainerMixinLibrary::STATIC_GetAsPartTransform(const struct FConstructablePartTransformSelection& PartSelectionContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartSelectionContainerMixinLibrary.GetAsPartTransform"));

	UConstructablePartSelectionContainerMixinLibrary_GetAsPartTransform_Params params;
	params.PartSelectionContainer = PartSelectionContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePerceptionServiceComponent.OnPartDestroyed
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UConstructableHealthServiceComponent* HealthServiceComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     OwnerStyle                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FConstructableDamageData LatestData                     (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructablePerceptionServiceComponent::OnPartDestroyed(class UConstructableHealthServiceComponent* HealthServiceComponent, class UPrimitiveComponent* OwnerStyle, const struct FConstructableDamageData& LatestData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePerceptionServiceComponent.OnPartDestroyed"));

	UConstructablePerceptionServiceComponent_OnPartDestroyed_Params params;
	params.HealthServiceComponent = HealthServiceComponent;
	params.OwnerStyle = OwnerStyle;
	params.LatestData = LatestData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.WeldAllKinematics
// (Final, Native, Public, BlueprintCallable)

void UConstructableSkeletalMeshStyleComponent::WeldAllKinematics()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.WeldAllKinematics"));

	UConstructableSkeletalMeshStyleComponent_WeldAllKinematics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.UnWeldBody
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            BodyInstanceIndex              (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::UnWeldBody(int BodyInstanceIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.UnWeldBody"));

	UConstructableSkeletalMeshStyleComponent_UnWeldBody_Params params;
	params.BodyInstanceIndex = BodyInstanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.TermBody
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            BodyInstanceIndex              (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::TermBody(int BodyInstanceIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.TermBody"));

	UConstructableSkeletalMeshStyleComponent_TermBody_Params params;
	params.BodyInstanceIndex = BodyInstanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPhysicsLinearConstraintLimit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewLimit                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableSkeletalMeshStyleComponent::SetPhysicsLinearConstraintLimit(int PhysicsConstraintIndex, float NewLimit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPhysicsLinearConstraintLimit"));

	UConstructableSkeletalMeshStyleComponent_SetPhysicsLinearConstraintLimit_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;
	params.NewLimit = NewLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPhysicsConstraintLimits
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// struct FAngularConstraintData  NewLimits                      (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableSkeletalMeshStyleComponent::SetPhysicsConstraintLimits(int PhysicsConstraintIndex, const struct FAngularConstraintData& NewLimits)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPhysicsConstraintLimits"));

	UConstructableSkeletalMeshStyleComponent_SetPhysicsConstraintLimits_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;
	params.NewLimits = NewLimits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPartSimulatePhysics
// (Native, Public)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSimulatePhysics               (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::SetPartSimulatePhysics(int PartID, bool bSimulatePhysics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPartSimulatePhysics"));

	UConstructableSkeletalMeshStyleComponent_SetPartSimulatePhysics_Params params;
	params.PartID = PartID;
	params.bSimulatePhysics = bSimulatePhysics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPartLocalTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::SetPartLocalTransform(int PartID, const struct FTransform& NewTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPartLocalTransform"));

	UConstructableSkeletalMeshStyleComponent_SetPartLocalTransform_Params params;
	params.PartID = PartID;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPartInComponentSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsComponentSpace              (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::SetPartInComponentSpace(int PartID, bool bIsComponentSpace)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPartInComponentSpace"));

	UConstructableSkeletalMeshStyleComponent_SetPartInComponentSpace_Params params;
	params.PartID = PartID;
	params.bIsComponentSpace = bIsComponentSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPartCollisionProfileName
// (Native, Public)
// Parameters:
// int                            ParID                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InCollisionProfileName         (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::SetPartCollisionProfileName(int ParID, const struct FName& InCollisionProfileName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetPartCollisionProfileName"));

	UConstructableSkeletalMeshStyleComponent_SetPartCollisionProfileName_Params params;
	params.ParID = ParID;
	params.InCollisionProfileName = InCollisionProfileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetDampingProperties
// (Native, Public)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LinearDamping                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngularDamping                 (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::SetDampingProperties(int PartID, float LinearDamping, float AngularDamping)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetDampingProperties"));

	UConstructableSkeletalMeshStyleComponent_SetDampingProperties_Params params;
	params.PartID = PartID;
	params.LinearDamping = LinearDamping;
	params.AngularDamping = AngularDamping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintLinearVelocityTarget
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewVelocityTarget              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::SetConstraintLinearVelocityTarget(int PhysicsConstraintIndex, const struct FVector& NewVelocityTarget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintLinearVelocityTarget"));

	UConstructableSkeletalMeshStyleComponent_SetConstraintLinearVelocityTarget_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;
	params.NewVelocityTarget = NewVelocityTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintLinearPositionTarget
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewPositionTarget              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::SetConstraintLinearPositionTarget(int PhysicsConstraintIndex, const struct FVector& NewPositionTarget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintLinearPositionTarget"));

	UConstructableSkeletalMeshStyleComponent_SetConstraintLinearPositionTarget_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;
	params.NewPositionTarget = NewPositionTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintLinearDriveParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Spring                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damper                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxForce                       (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::SetConstraintLinearDriveParams(int PhysicsConstraintIndex, float Spring, float Damper, float MaxForce)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintLinearDriveParams"));

	UConstructableSkeletalMeshStyleComponent_SetConstraintLinearDriveParams_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;
	params.Spring = Spring;
	params.Damper = Damper;
	params.MaxForce = MaxForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintAngularVelocityTarget
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewVelocityTarget              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::SetConstraintAngularVelocityTarget(int PhysicsConstraintIndex, const struct FVector& NewVelocityTarget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintAngularVelocityTarget"));

	UConstructableSkeletalMeshStyleComponent_SetConstraintAngularVelocityTarget_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;
	params.NewVelocityTarget = NewVelocityTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintAngularOrientationTarget
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewOrientationTarget           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::SetConstraintAngularOrientationTarget(int PhysicsConstraintIndex, const struct FRotator& NewOrientationTarget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintAngularOrientationTarget"));

	UConstructableSkeletalMeshStyleComponent_SetConstraintAngularOrientationTarget_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;
	params.NewOrientationTarget = NewOrientationTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintAngularDriveParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// float                          PositionStrength               (Parm, ZeroConstructor, IsPlainOldData)
// float                          VelocityStrength               (Parm, ZeroConstructor, IsPlainOldData)
// float                          AccelerationStrength           (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::SetConstraintAngularDriveParams(int PhysicsConstraintIndex, float PositionStrength, float VelocityStrength, float AccelerationStrength)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetConstraintAngularDriveParams"));

	UConstructableSkeletalMeshStyleComponent_SetConstraintAngularDriveParams_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;
	params.PositionStrength = PositionStrength;
	params.VelocityStrength = VelocityStrength;
	params.AccelerationStrength = AccelerationStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetBoneTransformByName
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              InTransform                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EBoneSpaces>       BoneSpace                      (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::SetBoneTransformByName(const struct FName& BoneName, const struct FTransform& InTransform, TEnumAsByte<EBoneSpaces> BoneSpace)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetBoneTransformByName"));

	UConstructableSkeletalMeshStyleComponent_SetBoneTransformByName_Params params;
	params.BoneName = BoneName;
	params.InTransform = InTransform;
	params.BoneSpace = BoneSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetBodySolverIterations
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Position                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::SetBodySolverIterations(int Position, int Velocity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetBodySolverIterations"));

	UConstructableSkeletalMeshStyleComponent_SetBodySolverIterations_Params params;
	params.Position = Position;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetBodyCollisionProfileName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            BodyInstanceIndex              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InCollisionProfileName         (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::SetBodyCollisionProfileName(int BodyInstanceIndex, const struct FName& InCollisionProfileName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SetBodyCollisionProfileName"));

	UConstructableSkeletalMeshStyleComponent_SetBodyCollisionProfileName_Params params;
	params.BodyInstanceIndex = BodyInstanceIndex;
	params.InCollisionProfileName = InCollisionProfileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SeparateDrivenConstraints
// (Final, Native, Public, BlueprintCallable)

void UConstructableSkeletalMeshStyleComponent::SeparateDrivenConstraints()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.SeparateDrivenConstraints"));

	UConstructableSkeletalMeshStyleComponent_SeparateDrivenConstraints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.ResetBoneTransformByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::ResetBoneTransformByName(const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.ResetBoneTransformByName"));

	UConstructableSkeletalMeshStyleComponent_ResetBoneTransformByName_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.RefreshPartsAllowedToOverlap
// (Final, Native, Public, BlueprintCallable)

void UConstructableSkeletalMeshStyleComponent::RefreshPartsAllowedToOverlap()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.RefreshPartsAllowedToOverlap"));

	UConstructableSkeletalMeshStyleComponent_RefreshPartsAllowedToOverlap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PhysicsBodyIndexToPartID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PhysicsBodyIndex               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableSkeletalMeshStyleComponent::PhysicsBodyIndexToPartID(int PhysicsBodyIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PhysicsBodyIndexToPartID"));

	UConstructableSkeletalMeshStyleComponent_PhysicsBodyIndexToPartID_Params params;
	params.PhysicsBodyIndex = PhysicsBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PhysicsBodyIndexToBoneName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PhysicsBodyIndex               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UConstructableSkeletalMeshStyleComponent::PhysicsBodyIndexToBoneName(int PhysicsBodyIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PhysicsBodyIndexToBoneName"));

	UConstructableSkeletalMeshStyleComponent_PhysicsBodyIndexToBoneName_Params params;
	params.PhysicsBodyIndex = PhysicsBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PartIDToPhysicsBodyIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableSkeletalMeshStyleComponent::PartIDToPhysicsBodyIndex(int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PartIDToPhysicsBodyIndex"));

	UConstructableSkeletalMeshStyleComponent_PartIDToPhysicsBodyIndex_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PartIDToBoneName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UConstructableSkeletalMeshStyleComponent::PartIDToBoneName(int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PartIDToBoneName"));

	UConstructableSkeletalMeshStyleComponent_PartIDToBoneName_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PartIDToBoneIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableSkeletalMeshStyleComponent::PartIDToBoneIndex(int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.PartIDToBoneIndex"));

	UConstructableSkeletalMeshStyleComponent_PartIDToBoneIndex_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.OnPartHealthChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FConstructableDamageData LatestHealthData               (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableSkeletalMeshStyleComponent::OnPartHealthChanged(const struct FConstructableDamageData& LatestHealthData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.OnPartHealthChanged"));

	UConstructableSkeletalMeshStyleComponent_OnPartHealthChanged_Params params;
	params.LatestHealthData = LatestHealthData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.OnPartDestroyed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FConstructableDamageData DestructionData                (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableSkeletalMeshStyleComponent::OnPartDestroyed(const struct FConstructableDamageData& DestructionData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.OnPartDestroyed"));

	UConstructableSkeletalMeshStyleComponent_OnPartDestroyed_Params params;
	params.DestructionData = DestructionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.OnFullyConstructed
// (Event, Public, BlueprintEvent)

void UConstructableSkeletalMeshStyleComponent::OnFullyConstructed()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.OnFullyConstructed"));

	UConstructableSkeletalMeshStyleComponent_OnFullyConstructed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.InitializeTSSConstraint
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTSSDriveParams         Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableSkeletalMeshStyleComponent::InitializeTSSConstraint(const struct FTSSDriveParams& Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.InitializeTSSConstraint"));

	UConstructableSkeletalMeshStyleComponent_InitializeTSSConstraint_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.InitializeSLERPConstraint
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSLERPDriveParams       Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableSkeletalMeshStyleComponent::InitializeSLERPConstraint(const struct FSLERPDriveParams& Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.InitializeSLERPConstraint"));

	UConstructableSkeletalMeshStyleComponent_InitializeSLERPConstraint_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.InitializeLinearConstraint
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLinearDriveParams      Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableSkeletalMeshStyleComponent::InitializeLinearConstraint(const struct FLinearDriveParams& Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.InitializeLinearConstraint"));

	UConstructableSkeletalMeshStyleComponent_InitializeLinearConstraint_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetSkeletalBodySetups
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USkeletalBodySetup*> OutSkeletalBodySetups          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableSkeletalMeshStyleComponent::GetSkeletalBodySetups(TArray<class USkeletalBodySetup*>* OutSkeletalBodySetups)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetSkeletalBodySetups"));

	UConstructableSkeletalMeshStyleComponent_GetSkeletalBodySetups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSkeletalBodySetups != nullptr)
		*OutSkeletalBodySetups = params.OutSkeletalBodySetups;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetRootBodyIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableSkeletalMeshStyleComponent::GetRootBodyIndex()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetRootBodyIndex"));

	UConstructableSkeletalMeshStyleComponent_GetRootBodyIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsLinearConstraint
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearConstraintData   OutConstraint                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableSkeletalMeshStyleComponent::GetPhysicsLinearConstraint(int PhysicsConstraintIndex, struct FLinearConstraintData* OutConstraint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsLinearConstraint"));

	UConstructableSkeletalMeshStyleComponent_GetPhysicsLinearConstraint_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConstraint != nullptr)
		*OutConstraint = params.OutConstraint;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsConstraintTwistSwing1Swing2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UConstructableSkeletalMeshStyleComponent::GetPhysicsConstraintTwistSwing1Swing2(int PhysicsConstraintIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsConstraintTwistSwing1Swing2"));

	UConstructableSkeletalMeshStyleComponent_GetPhysicsConstraintTwistSwing1Swing2_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsConstraintsForBody
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            PhysicsBodyIndex               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutConstraintIndices           (Parm, OutParm, ZeroConstructor)

void UConstructableSkeletalMeshStyleComponent::GetPhysicsConstraintsForBody(int PhysicsBodyIndex, TArray<int>* OutConstraintIndices)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsConstraintsForBody"));

	UConstructableSkeletalMeshStyleComponent_GetPhysicsConstraintsForBody_Params params;
	params.PhysicsBodyIndex = PhysicsBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConstraintIndices != nullptr)
		*OutConstraintIndices = params.OutConstraintIndices;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsConstraintName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UConstructableSkeletalMeshStyleComponent::GetPhysicsConstraintName(int PhysicsConstraintIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsConstraintName"));

	UConstructableSkeletalMeshStyleComponent_GetPhysicsConstraintName_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsConstraintLimits
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// struct FAngularConstraintData  OutLimits                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableSkeletalMeshStyleComponent::GetPhysicsConstraintLimits(int PhysicsConstraintIndex, struct FAngularConstraintData* OutLimits)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPhysicsConstraintLimits"));

	UConstructableSkeletalMeshStyleComponent_GetPhysicsConstraintLimits_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLimits != nullptr)
		*OutLimits = params.OutLimits;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPartMass
// (Native, Public, HasOutParms, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutMass                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableSkeletalMeshStyleComponent::GetPartMass(int PartID, float* OutMass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPartMass"));

	UConstructableSkeletalMeshStyleComponent_GetPartMass_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMass != nullptr)
		*OutMass = params.OutMass;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPartLocalTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableSkeletalMeshStyleComponent::GetPartLocalTransform(int PartID, struct FTransform* OutTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPartLocalTransform"));

	UConstructableSkeletalMeshStyleComponent_GetPartLocalTransform_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPartIDRange
// (Native, Public, Const)
// Parameters:
// struct FConstructablePartIDRange ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FConstructablePartIDRange UConstructableSkeletalMeshStyleComponent::GetPartIDRange()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPartIDRange"));

	UConstructableSkeletalMeshStyleComponent_GetPartIDRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPartBounds
// (Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FBox                    OutBounds                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableSkeletalMeshStyleComponent::GetPartBounds(int PartID, struct FBox* OutBounds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetPartBounds"));

	UConstructableSkeletalMeshStyleComponent_GetPartBounds_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBounds != nullptr)
		*OutBounds = params.OutBounds;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetParentPhysicsBodyIndexFromConstraint
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableSkeletalMeshStyleComponent::GetParentPhysicsBodyIndexFromConstraint(int PhysicsConstraintIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetParentPhysicsBodyIndexFromConstraint"));

	UConstructableSkeletalMeshStyleComponent_GetParentPhysicsBodyIndexFromConstraint_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetNumConstraintInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableSkeletalMeshStyleComponent::GetNumConstraintInstances()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetNumConstraintInstances"));

	UConstructableSkeletalMeshStyleComponent_GetNumConstraintInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetNumBodyInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableSkeletalMeshStyleComponent::GetNumBodyInstances()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetNumBodyInstances"));

	UConstructableSkeletalMeshStyleComponent_GetNumBodyInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetConstraintFrame
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EConstraintFrame>  Frame                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableSkeletalMeshStyleComponent::GetConstraintFrame(int PhysicsConstraintIndex, TEnumAsByte<EConstraintFrame> Frame, struct FTransform* OutTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetConstraintFrame"));

	UConstructableSkeletalMeshStyleComponent_GetConstraintFrame_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetConstraintForce
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLinearForce                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutAngularForce                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableSkeletalMeshStyleComponent::GetConstraintForce(int PhysicsConstraintIndex, struct FVector* OutLinearForce, struct FVector* OutAngularForce)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetConstraintForce"));

	UConstructableSkeletalMeshStyleComponent_GetConstraintForce_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLinearForce != nullptr)
		*OutLinearForce = params.OutLinearForce;
	if (OutAngularForce != nullptr)
		*OutAngularForce = params.OutAngularForce;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetConstraintDrive
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAngularDriveMode> OutDriveMode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableSkeletalMeshStyleComponent::GetConstraintDrive(int PhysicsConstraintIndex, TEnumAsByte<EAngularDriveMode>* OutDriveMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetConstraintDrive"));

	UConstructableSkeletalMeshStyleComponent_GetConstraintDrive_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDriveMode != nullptr)
		*OutDriveMode = params.OutDriveMode;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetComponentSpaceRefPose
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UConstructableSkeletalMeshStyleComponent::GetComponentSpaceRefPose(const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetComponentSpaceRefPose"));

	UConstructableSkeletalMeshStyleComponent_GetComponentSpaceRefPose_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetChildPhysicsBodyIndexFromConstraint
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ConstraintIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableSkeletalMeshStyleComponent::GetChildPhysicsBodyIndexFromConstraint(int ConstraintIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetChildPhysicsBodyIndexFromConstraint"));

	UConstructableSkeletalMeshStyleComponent_GetChildPhysicsBodyIndexFromConstraint_Params params;
	params.ConstraintIndex = ConstraintIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBoneTransformByName
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBoneSpaces>       BoneSpace                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UConstructableSkeletalMeshStyleComponent::GetBoneTransformByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBoneTransformByName"));

	UConstructableSkeletalMeshStyleComponent_GetBoneTransformByName_Params params;
	params.BoneName = BoneName;
	params.BoneSpace = BoneSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBoneSpaceRefPose
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UConstructableSkeletalMeshStyleComponent::GetBoneSpaceRefPose(const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBoneSpaceRefPose"));

	UConstructableSkeletalMeshStyleComponent_GetBoneSpaceRefPose_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBodyTransformFromIndex
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            BodyInstanceIndex              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableSkeletalMeshStyleComponent::GetBodyTransformFromIndex(int BodyInstanceIndex, struct FTransform* OutTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBodyTransformFromIndex"));

	UConstructableSkeletalMeshStyleComponent_GetBodyTransformFromIndex_Params params;
	params.BodyInstanceIndex = BodyInstanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBodyInstanceFromIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            BodyInstanceIndex              (Parm, ZeroConstructor, IsPlainOldData)
// struct FBodyInstance           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBodyInstance UConstructableSkeletalMeshStyleComponent::GetBodyInstanceFromIndex(int BodyInstanceIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBodyInstanceFromIndex"));

	UConstructableSkeletalMeshStyleComponent_GetBodyInstanceFromIndex_Params params;
	params.BodyInstanceIndex = BodyInstanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBodyCollisionProfileName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            BodyInstanceIndex              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UConstructableSkeletalMeshStyleComponent::GetBodyCollisionProfileName(int BodyInstanceIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetBodyCollisionProfileName"));

	UConstructableSkeletalMeshStyleComponent_GetBodyCollisionProfileName_Params params;
	params.BodyInstanceIndex = BodyInstanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetActivePhysicsAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhysicsAsset*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhysicsAsset* UConstructableSkeletalMeshStyleComponent::GetActivePhysicsAsset()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.GetActivePhysicsAsset"));

	UConstructableSkeletalMeshStyleComponent_GetActivePhysicsAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.CopyPoseFromSkeletalComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkinnedMeshComponent*   InComponentToCopy              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::CopyPoseFromSkeletalComponent(class USkinnedMeshComponent* InComponentToCopy)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.CopyPoseFromSkeletalComponent"));

	UConstructableSkeletalMeshStyleComponent_CopyPoseFromSkeletalComponent_Params params;
	params.InComponentToCopy = InComponentToCopy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.BreakPhysicsConstraint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PhysicsConstraintIndex         (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::BreakPhysicsConstraint(int PhysicsConstraintIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.BreakPhysicsConstraint"));

	UConstructableSkeletalMeshStyleComponent_BreakPhysicsConstraint_Params params;
	params.PhysicsConstraintIndex = PhysicsConstraintIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.BoneNameToPhysicsBodyIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableSkeletalMeshStyleComponent::BoneNameToPhysicsBodyIndex(const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.BoneNameToPhysicsBodyIndex"));

	UConstructableSkeletalMeshStyleComponent_BoneNameToPhysicsBodyIndex_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.BoneNameToPartID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableSkeletalMeshStyleComponent::BoneNameToPartID(const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.BoneNameToPartID"));

	UConstructableSkeletalMeshStyleComponent_BoneNameToPartID_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.BoneIndexToPartID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableSkeletalMeshStyleComponent::BoneIndexToPartID(int BoneIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.BoneIndexToPartID"));

	UConstructableSkeletalMeshStyleComponent_BoneIndexToPartID_Params params;
	params.BoneIndex = BoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.AddPartImpulseAtLocation
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Impulse                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConstructableSkeletalMeshStyleComponent::AddPartImpulseAtLocation(int PartID, const struct FVector& Location, const struct FVector& Impulse)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalMeshStyleComponent.AddPartImpulseAtLocation"));

	UConstructableSkeletalMeshStyleComponent_AddPartImpulseAtLocation_Params params;
	params.PartID = PartID;
	params.Location = Location;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableSkeletalReplicationServiceComponent.SetReplicationType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EConstructableReplicationType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableSkeletalReplicationServiceComponent::SetReplicationType(int PartID, TEnumAsByte<EConstructableReplicationType> Type)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSkeletalReplicationServiceComponent.SetReplicationType"));

	UConstructableSkeletalReplicationServiceComponent_SetReplicationType_Params params;
	params.PartID = PartID;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSpawnSizeComponentBase.GetCollisionRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UConstructableSpawnSizeComponentBase::GetCollisionRadius()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSpawnSizeComponentBase.GetCollisionRadius"));

	UConstructableSpawnSizeComponentBase_GetCollisionRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableSpawnSizeComponentBase.GetAutoAcquiredExtent
// (Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FBox                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FBox UConstructableSpawnSizeComponentBase::GetAutoAcquiredExtent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableSpawnSizeComponentBase.GetAutoAcquiredExtent"));

	UConstructableSpawnSizeComponentBase_GetAutoAcquiredExtent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.OnPartHealthChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FConstructableDamageData LatestHealthData               (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableStaticMeshStyleComponent::OnPartHealthChanged(const struct FConstructableDamageData& LatestHealthData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.OnPartHealthChanged"));

	UConstructableStaticMeshStyleComponent_OnPartHealthChanged_Params params;
	params.LatestHealthData = LatestHealthData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.OnPartDestroyed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FConstructableDamageData DestructionData                (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableStaticMeshStyleComponent::OnPartDestroyed(const struct FConstructableDamageData& DestructionData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.OnPartDestroyed"));

	UConstructableStaticMeshStyleComponent_OnPartDestroyed_Params params;
	params.DestructionData = DestructionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.OnFullyConstructed
// (Event, Public, BlueprintEvent)

void UConstructableStaticMeshStyleComponent::OnFullyConstructed()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.OnFullyConstructed"));

	UConstructableStaticMeshStyleComponent_OnFullyConstructed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.GetPartIDRange
// (Native, Public, Const)
// Parameters:
// struct FConstructablePartIDRange ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FConstructablePartIDRange UConstructableStaticMeshStyleComponent::GetPartIDRange()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.GetPartIDRange"));

	UConstructableStaticMeshStyleComponent_GetPartIDRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.GetPartBounds
// (Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FBox                    OutBounds                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableStaticMeshStyleComponent::GetPartBounds(int PartID, struct FBox* OutBounds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStaticMeshStyleComponent.GetPartBounds"));

	UConstructableStaticMeshStyleComponent_GetPartBounds_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBounds != nullptr)
		*OutBounds = params.OutBounds;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStyleAssemblyBase.GetStyleComponentFromPartID
// (Final, Native, Public, Const)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* AConstructableStyleAssemblyBase::GetStyleComponentFromPartID(int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleAssemblyBase.GetStyleComponentFromPartID"));

	AConstructableStyleAssemblyBase_GetStyleComponentFromPartID_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStyleAssemblyBase.GetAllStyles
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class AConstructableStyleAssemblyBase* AssemblyToGetFrom              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimitiveComponent*> OutAllStyles                   (Parm, OutParm, ZeroConstructor)

void AConstructableStyleAssemblyBase::STATIC_GetAllStyles(class AConstructableStyleAssemblyBase* AssemblyToGetFrom, TArray<class UPrimitiveComponent*>* OutAllStyles)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleAssemblyBase.GetAllStyles"));

	AConstructableStyleAssemblyBase_GetAllStyles_Params params;
	params.AssemblyToGetFrom = AssemblyToGetFrom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAllStyles != nullptr)
		*OutAllStyles = params.OutAllStyles;
}


// Function EmbarkConstructable.ConstructableStyleDriverComponent.OnConstructableDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableStyleDriverComponent::OnConstructableDestroyed(class AActor* DamageInstigator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleDriverComponent.OnConstructableDestroyed"));

	UConstructableStyleDriverComponent_OnConstructableDestroyed_Params params;
	params.DamageInstigator = DamageInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableStyleDriverComponent.Handle_ConstructableDestroyed
// (Final, Native, Private)
// Parameters:
// class AConstructableBase*      InConstructable                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InDamageInstigator             (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableStyleDriverComponent::Handle_ConstructableDestroyed(class AConstructableBase* InConstructable, class AActor* InDamageInstigator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleDriverComponent.Handle_ConstructableDestroyed"));

	UConstructableStyleDriverComponent_Handle_ConstructableDestroyed_Params params;
	params.InConstructable = InConstructable;
	params.InDamageInstigator = InDamageInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableStyleDriverComponent.GetConstructable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AConstructableBase*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AConstructableBase* UConstructableStyleDriverComponent::GetConstructable()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleDriverComponent.GetConstructable"));

	UConstructableStyleDriverComponent_GetConstructable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStyleDriverComponent.BP_OnFullyConstructed
// (Event, Public, BlueprintEvent)

void UConstructableStyleDriverComponent::BP_OnFullyConstructed()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleDriverComponent.BP_OnFullyConstructed"));

	UConstructableStyleDriverComponent_BP_OnFullyConstructed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.Setup
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructableStylePartList ConstructableStylePartList     (Parm, OutParm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableStylePartListMixinLibrary::STATIC_Setup(class AActor* Actor, struct FConstructableStylePartList* ConstructableStylePartList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.Setup"));

	UConstructableStylePartListMixinLibrary_Setup_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstructableStylePartList != nullptr)
		*ConstructableStylePartList = params.ConstructableStylePartList;
}


// Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetPartTransforms
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructableStylePartList ConstructableStylePartList     (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FConstructablePartTransform> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FConstructablePartTransform> UConstructableStylePartListMixinLibrary::STATIC_GetPartTransforms(const struct FConstructableStylePartList& ConstructableStylePartList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetPartTransforms"));

	UConstructableStylePartListMixinLibrary_GetPartTransforms_Params params;
	params.ConstructableStylePartList = ConstructableStylePartList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetPartTransformByID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructableStylePartList ConstructableStylePartList     (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FConstructablePartTransform ReturnValue                    (Parm, OutParm, ReturnParm)

struct FConstructablePartTransform UConstructableStylePartListMixinLibrary::STATIC_GetPartTransformByID(const struct FConstructableStylePartList& ConstructableStylePartList, class UObject* WorldContextObject, int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetPartTransformByID"));

	UConstructableStylePartListMixinLibrary_GetPartTransformByID_Params params;
	params.ConstructableStylePartList = ConstructableStylePartList;
	params.WorldContextObject = WorldContextObject;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetParts
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructableStylePartList ConstructableStylePartList     (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FConstructablePart> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FConstructablePart> UConstructableStylePartListMixinLibrary::STATIC_GetParts(const struct FConstructableStylePartList& ConstructableStylePartList, class AActor* Owner)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetParts"));

	UConstructableStylePartListMixinLibrary_GetParts_Params params;
	params.ConstructableStylePartList = ConstructableStylePartList;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetPartIDs
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructableStylePartList ConstructableStylePartList     (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UConstructableStylePartListMixinLibrary::STATIC_GetPartIDs(const struct FConstructableStylePartList& ConstructableStylePartList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetPartIDs"));

	UConstructableStylePartListMixinLibrary_GetPartIDs_Params params;
	params.ConstructableStylePartList = ConstructableStylePartList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetPartByID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructableStylePartList ConstructableStylePartList     (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FConstructablePart      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FConstructablePart UConstructableStylePartListMixinLibrary::STATIC_GetPartByID(const struct FConstructableStylePartList& ConstructableStylePartList, class UObject* WorldContextObject, int PartID, class AActor* Owner)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.GetPartByID"));

	UConstructableStylePartListMixinLibrary_GetPartByID_Params params;
	params.ConstructableStylePartList = ConstructableStylePartList;
	params.WorldContextObject = WorldContextObject;
	params.PartID = PartID;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.ContainsPartID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructableStylePartList ConstructableStylePartList     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableStylePartListMixinLibrary::STATIC_ContainsPartID(const struct FConstructableStylePartList& ConstructableStylePartList, int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStylePartListMixinLibrary.ContainsPartID"));

	UConstructableStylePartListMixinLibrary_ContainsPartID_Params params;
	params.ConstructableStylePartList = ConstructableStylePartList;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.SetupWithAssembly
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructableStyleProxy StyleProxy                     (Parm, OutParm)
// class AConstructableStyleAssemblyBase* Assembly                       (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableStyleProxyMixinLibrary::STATIC_SetupWithAssembly(class AConstructableStyleAssemblyBase* Assembly, struct FConstructableStyleProxy* StyleProxy)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.SetupWithAssembly"));

	UConstructableStyleProxyMixinLibrary_SetupWithAssembly_Params params;
	params.Assembly = Assembly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StyleProxy != nullptr)
		*StyleProxy = params.StyleProxy;
}


// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.Setup
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructableStyleProxy StyleProxy                     (Parm, OutParm)
// class AConstructableBase*      Constructable                  (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableStyleProxyMixinLibrary::STATIC_Setup(class AConstructableBase* Constructable, struct FConstructableStyleProxy* StyleProxy)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.Setup"));

	UConstructableStyleProxyMixinLibrary_Setup_Params params;
	params.Constructable = Constructable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StyleProxy != nullptr)
		*StyleProxy = params.StyleProxy;
}


// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetWorldTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructableStyleProxy StyleProxy                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UConstructableStyleProxyMixinLibrary::STATIC_GetWorldTransform(const struct FConstructableStyleProxy& StyleProxy)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetWorldTransform"));

	UConstructableStyleProxyMixinLibrary_GetWorldTransform_Params params;
	params.StyleProxy = StyleProxy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetWorldRotationQuat
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructableStyleProxy StyleProxy                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UConstructableStyleProxyMixinLibrary::STATIC_GetWorldRotationQuat(const struct FConstructableStyleProxy& StyleProxy)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetWorldRotationQuat"));

	UConstructableStyleProxyMixinLibrary_GetWorldRotationQuat_Params params;
	params.StyleProxy = StyleProxy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetWorldRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructableStyleProxy StyleProxy                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UConstructableStyleProxyMixinLibrary::STATIC_GetWorldRotation(const struct FConstructableStyleProxy& StyleProxy)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetWorldRotation"));

	UConstructableStyleProxyMixinLibrary_GetWorldRotation_Params params;
	params.StyleProxy = StyleProxy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetWorldLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructableStyleProxy StyleProxy                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UConstructableStyleProxyMixinLibrary::STATIC_GetWorldLocation(const struct FConstructableStyleProxy& StyleProxy)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetWorldLocation"));

	UConstructableStyleProxyMixinLibrary_GetWorldLocation_Params params;
	params.StyleProxy = StyleProxy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetRelativeTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructableStyleProxy StyleProxy                     (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EConstructablePartRelativeTransformSpace TransformSpace                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UConstructableStyleProxyMixinLibrary::STATIC_GetRelativeTransform(const struct FConstructableStyleProxy& StyleProxy, enum class EConstructablePartRelativeTransformSpace TransformSpace)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetRelativeTransform"));

	UConstructableStyleProxyMixinLibrary_GetRelativeTransform_Params params;
	params.StyleProxy = StyleProxy;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetRelativeRotationQuat
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructableStyleProxy StyleProxy                     (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EConstructablePartRelativeTransformSpace TransformSpace                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UConstructableStyleProxyMixinLibrary::STATIC_GetRelativeRotationQuat(const struct FConstructableStyleProxy& StyleProxy, enum class EConstructablePartRelativeTransformSpace TransformSpace)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetRelativeRotationQuat"));

	UConstructableStyleProxyMixinLibrary_GetRelativeRotationQuat_Params params;
	params.StyleProxy = StyleProxy;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetRelativeRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructableStyleProxy StyleProxy                     (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EConstructablePartRelativeTransformSpace TransformSpace                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UConstructableStyleProxyMixinLibrary::STATIC_GetRelativeRotation(const struct FConstructableStyleProxy& StyleProxy, enum class EConstructablePartRelativeTransformSpace TransformSpace)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetRelativeRotation"));

	UConstructableStyleProxyMixinLibrary_GetRelativeRotation_Params params;
	params.StyleProxy = StyleProxy;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetRelativeLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FConstructableStyleProxy StyleProxy                     (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EConstructablePartRelativeTransformSpace TransformSpace                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UConstructableStyleProxyMixinLibrary::STATIC_GetRelativeLocation(const struct FConstructableStyleProxy& StyleProxy, enum class EConstructablePartRelativeTransformSpace TransformSpace)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleProxyMixinLibrary.GetRelativeLocation"));

	UConstructableStyleProxyMixinLibrary_GetRelativeLocation_Params params;
	params.StyleProxy = StyleProxy;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStyleShapeComponent.OnPartHealthChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FConstructableDamageData LatestHealthData               (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableStyleShapeComponent::OnPartHealthChanged(const struct FConstructableDamageData& LatestHealthData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleShapeComponent.OnPartHealthChanged"));

	UConstructableStyleShapeComponent_OnPartHealthChanged_Params params;
	params.LatestHealthData = LatestHealthData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructablePartTargetingDataArraySimState.InitForActor
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UConstructablePartTargetingDataArraySimState::InitForActor(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartTargetingDataArraySimState.InitForActor"));

	UConstructablePartTargetingDataArraySimState_InitForActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.TargetPartRelativeRotation_Server_Quat
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   RelativeRotation               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTargetingServiceParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableTargetingServiceComponent::TargetPartRelativeRotation_Server_Quat(int AffectedPartID, const struct FQuat& RelativeRotation, const struct FTargetingServiceParams& Params)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.TargetPartRelativeRotation_Server_Quat"));

	UConstructableTargetingServiceComponent_TargetPartRelativeRotation_Server_Quat_Params params;
	params.AffectedPartID = AffectedPartID;
	params.RelativeRotation = RelativeRotation;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.TargetPartRelativeRotation_Server_NoParams_Quat
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   RelativeRotation               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UConstructableTargetingServiceComponent::TargetPartRelativeRotation_Server_NoParams_Quat(int AffectedPartID, const struct FQuat& RelativeRotation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.TargetPartRelativeRotation_Server_NoParams_Quat"));

	UConstructableTargetingServiceComponent_TargetPartRelativeRotation_Server_NoParams_Quat_Params params;
	params.AffectedPartID = AffectedPartID;
	params.RelativeRotation = RelativeRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.TargetPartRelativeRotation_Server_NoParams
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RelativeRotation               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConstructableTargetingServiceComponent::TargetPartRelativeRotation_Server_NoParams(int AffectedPartID, const struct FRotator& RelativeRotation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.TargetPartRelativeRotation_Server_NoParams"));

	UConstructableTargetingServiceComponent_TargetPartRelativeRotation_Server_NoParams_Params params;
	params.AffectedPartID = AffectedPartID;
	params.RelativeRotation = RelativeRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.TargetPartRelativeRotation_Server
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RelativeRotation               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTargetingServiceParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableTargetingServiceComponent::TargetPartRelativeRotation_Server(int AffectedPartID, const struct FRotator& RelativeRotation, const struct FTargetingServiceParams& Params)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.TargetPartRelativeRotation_Server"));

	UConstructableTargetingServiceComponent_TargetPartRelativeRotation_Server_Params params;
	params.AffectedPartID = AffectedPartID;
	params.RelativeRotation = RelativeRotation;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.PollInterpolatedTrackingData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FConstructablePartTargetingEventData OutData                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableTargetingServiceComponent::PollInterpolatedTrackingData(int AffectedPartID, struct FConstructablePartTargetingEventData* OutData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.PollInterpolatedTrackingData"));

	UConstructableTargetingServiceComponent_PollInterpolatedTrackingData_Params params;
	params.AffectedPartID = AffectedPartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackWorldOrientation_Server_NoParams
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                TargetOrientation              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConstructableTargetingServiceComponent::MakePartTrackWorldOrientation_Server_NoParams(int AffectedPartID, const struct FRotator& TargetOrientation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackWorldOrientation_Server_NoParams"));

	UConstructableTargetingServiceComponent_MakePartTrackWorldOrientation_Server_NoParams_Params params;
	params.AffectedPartID = AffectedPartID;
	params.TargetOrientation = TargetOrientation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackWorldOrientation_Server
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                TargetOrientation              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTargetingServiceParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableTargetingServiceComponent::MakePartTrackWorldOrientation_Server(int AffectedPartID, const struct FRotator& TargetOrientation, const struct FTargetingServiceParams& Params)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackWorldOrientation_Server"));

	UConstructableTargetingServiceComponent_MakePartTrackWorldOrientation_Server_Params params;
	params.AffectedPartID = AffectedPartID;
	params.TargetOrientation = TargetOrientation;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackWorldLocation_Server_NoParams
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConstructableTargetingServiceComponent::MakePartTrackWorldLocation_Server_NoParams(int AffectedPartID, const struct FVector& TargetLocation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackWorldLocation_Server_NoParams"));

	UConstructableTargetingServiceComponent_MakePartTrackWorldLocation_Server_NoParams_Params params;
	params.AffectedPartID = AffectedPartID;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackWorldLocation_Server
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTargetingServiceParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableTargetingServiceComponent::MakePartTrackWorldLocation_Server(int AffectedPartID, const struct FVector& TargetLocation, const struct FTargetingServiceParams& Params)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackWorldLocation_Server"));

	UConstructableTargetingServiceComponent_MakePartTrackWorldLocation_Server_Params params;
	params.AffectedPartID = AffectedPartID;
	params.TargetLocation = TargetLocation;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackConstructablePart_Server_NoParams
// (Final, Native, Public)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AConstructableBase*      ConstructableToTrack           (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartIDToTrack                  (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableTargetingServiceComponent::MakePartTrackConstructablePart_Server_NoParams(int AffectedPartID, class AConstructableBase* ConstructableToTrack, int PartIDToTrack)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackConstructablePart_Server_NoParams"));

	UConstructableTargetingServiceComponent_MakePartTrackConstructablePart_Server_NoParams_Params params;
	params.AffectedPartID = AffectedPartID;
	params.ConstructableToTrack = ConstructableToTrack;
	params.PartIDToTrack = PartIDToTrack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackConstructablePart_Server
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AConstructableBase*      ConstructableToTrack           (Parm, ZeroConstructor, IsPlainOldData)
// int                            PartIDToTrack                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTargetingServiceParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableTargetingServiceComponent::MakePartTrackConstructablePart_Server(int AffectedPartID, class AConstructableBase* ConstructableToTrack, int PartIDToTrack, const struct FTargetingServiceParams& Params)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackConstructablePart_Server"));

	UConstructableTargetingServiceComponent_MakePartTrackConstructablePart_Server_Params params;
	params.AffectedPartID = AffectedPartID;
	params.ConstructableToTrack = ConstructableToTrack;
	params.PartIDToTrack = PartIDToTrack;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackComponent_Server_NoParams
// (Final, Native, Public)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         ComponentToTrack               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UConstructableTargetingServiceComponent::MakePartTrackComponent_Server_NoParams(int AffectedPartID, class USceneComponent* ComponentToTrack)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackComponent_Server_NoParams"));

	UConstructableTargetingServiceComponent_MakePartTrackComponent_Server_NoParams_Params params;
	params.AffectedPartID = AffectedPartID;
	params.ComponentToTrack = ComponentToTrack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackComponent_Server
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         ComponentToTrack               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTargetingServiceParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableTargetingServiceComponent::MakePartTrackComponent_Server(int AffectedPartID, class USceneComponent* ComponentToTrack, const struct FTargetingServiceParams& Params)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackComponent_Server"));

	UConstructableTargetingServiceComponent_MakePartTrackComponent_Server_Params params;
	params.AffectedPartID = AffectedPartID;
	params.ComponentToTrack = ComponentToTrack;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackActor_Server_NoParams
// (Final, Native, Public)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorToTrack                   (Parm, ZeroConstructor, IsPlainOldData)

void UConstructableTargetingServiceComponent::MakePartTrackActor_Server_NoParams(int AffectedPartID, class AActor* ActorToTrack)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackActor_Server_NoParams"));

	UConstructableTargetingServiceComponent_MakePartTrackActor_Server_NoParams_Params params;
	params.AffectedPartID = AffectedPartID;
	params.ActorToTrack = ActorToTrack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackActor_Server
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorToTrack                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTargetingServiceParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableTargetingServiceComponent::MakePartTrackActor_Server(int AffectedPartID, class AActor* ActorToTrack, const struct FTargetingServiceParams& Params)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartTrackActor_Server"));

	UConstructableTargetingServiceComponent_MakePartTrackActor_Server_Params params;
	params.AffectedPartID = AffectedPartID;
	params.ActorToTrack = ActorToTrack;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartStopTracking_Server_NoParams
// (Final, Native, Public)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UConstructableTargetingServiceComponent::MakePartStopTracking_Server_NoParams(int AffectedPartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartStopTracking_Server_NoParams"));

	UConstructableTargetingServiceComponent_MakePartStopTracking_Server_NoParams_Params params;
	params.AffectedPartID = AffectedPartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartStopTracking_Server
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AffectedPartID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTargetingServiceParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UConstructableTargetingServiceComponent::MakePartStopTracking_Server(int AffectedPartID, const struct FTargetingServiceParams& Params)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.MakePartStopTracking_Server"));

	UConstructableTargetingServiceComponent_MakePartStopTracking_Server_Params params;
	params.AffectedPartID = AffectedPartID;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableTargetingServiceComponent.GetMutablePartConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PartID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FConstructablePartTargetingConfig ReturnValue                    (Parm, OutParm, ReturnParm)

struct FConstructablePartTargetingConfig UConstructableTargetingServiceComponent::GetMutablePartConfig(int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTargetingServiceComponent.GetMutablePartConfig"));

	UConstructableTargetingServiceComponent_GetMutablePartConfig_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableTrainingComponent.ConstructShapes
// (Final, Native, Public)

void UConstructableTrainingComponent::ConstructShapes()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableTrainingComponent.ConstructShapes"));

	UConstructableTrainingComponent_ConstructShapes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableUtilsStatics.SortStyleComponentsByName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<class USceneComponent*> OutStyleComponent              (Parm, OutParm, ZeroConstructor)

void UConstructableUtilsStatics::STATIC_SortStyleComponentsByName(TArray<class USceneComponent*>* OutStyleComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableUtilsStatics.SortStyleComponentsByName"));

	UConstructableUtilsStatics_SortStyleComponentsByName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStyleComponent != nullptr)
		*OutStyleComponent = params.OutStyleComponent;
}


// Function EmbarkConstructable.ConstructableUtilsStatics.IsStyleComponent
// (Final, Native, Static, Public)
// Parameters:
// class UActorComponent*         MaybeStyleComponent            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableUtilsStatics::STATIC_IsStyleComponent(class UActorComponent* MaybeStyleComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableUtilsStatics.IsStyleComponent"));

	UConstructableUtilsStatics_IsStyleComponent_Params params;
	params.MaybeStyleComponent = MaybeStyleComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableUtilsStatics.IsPartIDValid
// (Final, Native, Static, Public)
// Parameters:
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableUtilsStatics::STATIC_IsPartIDValid(int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableUtilsStatics.IsPartIDValid"));

	UConstructableUtilsStatics_IsPartIDValid_Params params;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableUtilsStatics.IsPartDestroyed
// (Final, Native, Static, Public)
// Parameters:
// class UPrimitiveComponent*     MaybeStyle                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableUtilsStatics::STATIC_IsPartDestroyed(class UPrimitiveComponent* MaybeStyle, int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableUtilsStatics.IsPartDestroyed"));

	UConstructableUtilsStatics_IsPartDestroyed_Params params;
	params.MaybeStyle = MaybeStyle;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableUtilsStatics.GetStyleComponentFromPartID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<class UPrimitiveComponent*> Styles                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* UConstructableUtilsStatics::STATIC_GetStyleComponentFromPartID(TArray<class UPrimitiveComponent*> Styles, int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableUtilsStatics.GetStyleComponentFromPartID"));

	UConstructableUtilsStatics_GetStyleComponentFromPartID_Params params;
	params.Styles = Styles;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableUtilsStatics.GetPartsIntersectingSphere
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     MaybeStyleComponent            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 SphereOrigin                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          SphereRadius                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutPartIDs                     (Parm, OutParm, ZeroConstructor)

void UConstructableUtilsStatics::STATIC_GetPartsIntersectingSphere(class UPrimitiveComponent* MaybeStyleComponent, const struct FVector& SphereOrigin, float SphereRadius, TArray<int>* OutPartIDs)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableUtilsStatics.GetPartsIntersectingSphere"));

	UConstructableUtilsStatics_GetPartsIntersectingSphere_Params params;
	params.MaybeStyleComponent = MaybeStyleComponent;
	params.SphereOrigin = SphereOrigin;
	params.SphereRadius = SphereRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartIDs != nullptr)
		*OutPartIDs = params.OutPartIDs;
}


// Function EmbarkConstructable.ConstructableUtilsStatics.GetPartIDsMatchingTagQuery
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     MaybeStyleComponent            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagQuery       TagQuery                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableUtilsStatics::STATIC_GetPartIDsMatchingTagQuery(class UPrimitiveComponent* MaybeStyleComponent, const struct FGameplayTagQuery& TagQuery)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableUtilsStatics.GetPartIDsMatchingTagQuery"));

	UConstructableUtilsStatics_GetPartIDsMatchingTagQuery_Params params;
	params.MaybeStyleComponent = MaybeStyleComponent;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableUtilsStatics.GetPartIDRange
// (Final, Native, Static, Public)
// Parameters:
// class UPrimitiveComponent*     MaybeStyleComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FConstructablePartIDRange ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FConstructablePartIDRange UConstructableUtilsStatics::STATIC_GetPartIDRange(class UPrimitiveComponent* MaybeStyleComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableUtilsStatics.GetPartIDRange"));

	UConstructableUtilsStatics_GetPartIDRange_Params params;
	params.MaybeStyleComponent = MaybeStyleComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableUtilsStatics.GetPartIDFromHitResult
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableUtilsStatics::STATIC_GetPartIDFromHitResult(const struct FHitResult& HitResult)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableUtilsStatics.GetPartIDFromHitResult"));

	UConstructableUtilsStatics_GetPartIDFromHitResult_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableUtilsStatics.GetNextAttackEventID
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableUtilsStatics::STATIC_GetNextAttackEventID()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableUtilsStatics.GetNextAttackEventID"));

	UConstructableUtilsStatics_GetNextAttackEventID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableUtilsStatics.AddSocketData
// (Final, Native, Static, Public)
// Parameters:
// class USceneComponent*         MaybeStyle                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UConstructableUtilsStatics::STATIC_AddSocketData(class USceneComponent* MaybeStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableUtilsStatics.AddSocketData"));

	UConstructableUtilsStatics_AddSocketData_Params params;
	params.MaybeStyle = MaybeStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkConstructable.ConstructableUtils.GetNextAttackEventID
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableUtils::STATIC_GetNextAttackEventID()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableUtils.GetNextAttackEventID"));

	UConstructableUtils_GetNextAttackEventID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStyleComponentMixinLibrary.IsStyleComponent
// (Final, Native, Static, Public)
// Parameters:
// class UActorComponent*         Style                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableStyleComponentMixinLibrary::STATIC_IsStyleComponent(class UActorComponent* Style)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStyleComponentMixinLibrary.IsStyleComponent"));

	UConstructableStyleComponentMixinLibrary_IsStyleComponent_Params params;
	params.Style = Style;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStylePartIDRangeMixinLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartIDRange PartIDRange                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableStylePartIDRangeMixinLibrary::STATIC_IsValid(const struct FConstructablePartIDRange& PartIDRange)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStylePartIDRangeMixinLibrary.IsValid"));

	UConstructableStylePartIDRangeMixinLibrary_IsValid_Params params;
	params.PartIDRange = PartIDRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStylePartIDRangeMixinLibrary.IsPartIDInRange
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartIDRange PartIDRange                    (ConstParm, Parm, OutParm, ReferenceParm)
// int                            PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructableStylePartIDRangeMixinLibrary::STATIC_IsPartIDInRange(const struct FConstructablePartIDRange& PartIDRange, int PartID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStylePartIDRangeMixinLibrary.IsPartIDInRange"));

	UConstructableStylePartIDRangeMixinLibrary_IsPartIDInRange_Params params;
	params.PartIDRange = PartIDRange;
	params.PartID = PartID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructableStylePartIDRangeMixinLibrary.GetLastID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartIDRange PartIDRange                    (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConstructableStylePartIDRangeMixinLibrary::STATIC_GetLastID(const struct FConstructablePartIDRange& PartIDRange)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructableStylePartIDRangeMixinLibrary.GetLastID"));

	UConstructableStylePartIDRangeMixinLibrary_GetLastID_Params params;
	params.PartIDRange = PartIDRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.ConstructablePartParentInfoMixinLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FConstructablePartParentInfo PartParentInfo                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConstructablePartParentInfoMixinLibrary::STATIC_IsValid(const struct FConstructablePartParentInfo& PartParentInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.ConstructablePartParentInfoMixinLibrary.IsValid"));

	UConstructablePartParentInfoMixinLibrary_IsValid_Params params;
	params.PartParentInfo = PartParentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkConstructable.EmbarkAbilityTask_ClientSendInteractionTargetData.ClientSendInteractionTargetData
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            InteractionIndex               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InteractionSourcePoint         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHandleInteraction             (Parm, ZeroConstructor, IsPlainOldData)
// struct FComponentOrStyle       PrimitiveInteractedWith        (ConstParm, Parm, OutParm, ReferenceParm)
// class UEmbarkAbilityTask_ClientSendInteractionTargetData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkAbilityTask_ClientSendInteractionTargetData* UEmbarkAbilityTask_ClientSendInteractionTargetData::STATIC_ClientSendInteractionTargetData(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class AActor* Target, int InteractionIndex, const struct FVector& InteractionSourcePoint, bool bHandleInteraction, const struct FComponentOrStyle& PrimitiveInteractedWith)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkConstructable.EmbarkAbilityTask_ClientSendInteractionTargetData.ClientSendInteractionTargetData"));

	UEmbarkAbilityTask_ClientSendInteractionTargetData_ClientSendInteractionTargetData_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.Target = Target;
	params.InteractionIndex = InteractionIndex;
	params.InteractionSourcePoint = InteractionSourcePoint;
	params.bHandleInteraction = bHandleInteraction;
	params.PrimitiveInteractedWith = PrimitiveInteractedWith;

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
