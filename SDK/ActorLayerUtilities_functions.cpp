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

// Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FActorLayer             Layer                          (ConstParm, Parm, OutParm, ReferenceParm)

void ULayersBlueprintLibrary::STATIC_RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer"));

	ULayersBlueprintLibrary_RemoveActorFromLayer_Params params;
	params.InActor = InActor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FActorLayer             ActorLayer                     (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> ULayersBlueprintLibrary::STATIC_GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors"));

	ULayersBlueprintLibrary_GetActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorLayer = ActorLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FActorLayer             Layer                          (ConstParm, Parm, OutParm, ReferenceParm)

void ULayersBlueprintLibrary::STATIC_AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer"));

	ULayersBlueprintLibrary_AddActorToLayer_Params params;
	params.InActor = InActor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
