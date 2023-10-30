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

// Function EmbarkReplicationGraph.EmbarkReplicationGraphStatics.RemoveDependentActor_Server
// (Final, Native, Static, Public)
// Parameters:
// class AActor*                  Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Child                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkReplicationGraphStatics::STATIC_RemoveDependentActor_Server(class AActor* Parent, class AActor* Child, class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicationGraph.EmbarkReplicationGraphStatics.RemoveDependentActor_Server"));

	UEmbarkReplicationGraphStatics_RemoveDependentActor_Server_Params params;
	params.Parent = Parent;
	params.Child = Child;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkReplicationGraph.EmbarkReplicationGraphStatics.AddDependentActor_Server
// (Final, Native, Static, Public)
// Parameters:
// class AActor*                  Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Child                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkReplicationGraphStatics::STATIC_AddDependentActor_Server(class AActor* Parent, class AActor* Child, class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicationGraph.EmbarkReplicationGraphStatics.AddDependentActor_Server"));

	UEmbarkReplicationGraphStatics_AddDependentActor_Server_Params params;
	params.Parent = Parent;
	params.Child = Child;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
