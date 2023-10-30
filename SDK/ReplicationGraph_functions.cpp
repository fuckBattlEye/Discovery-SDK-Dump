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

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
// (Net, NetReliable, Native, Event, Public, NetServer)

void AReplicationGraphDebugActor::ServerStopDebugging()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging"));

	AReplicationGraphDebugActor_ServerStopDebugging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
// (Net, NetReliable, Native, Event, Public, NetServer)

void AReplicationGraphDebugActor::ServerStartDebugging()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging"));

	AReplicationGraphDebugActor_ServerStartDebugging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            PeriodFrame                    (Parm, ZeroConstructor, IsPlainOldData)

void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass(class UClass* Class, int PeriodFrame)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass"));

	AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params params;
	params.Class = Class;
	params.PeriodFrame = PeriodFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          CullDistance                   (Parm, ZeroConstructor, IsPlainOldData)

void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(class UClass* Class, float CullDistance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass"));

	AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params params;
	params.Class = Class;
	params.CullDistance = CullDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint"));

	AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
// (Net, NetReliable, Native, Event, Public, NetServer)

void AReplicationGraphDebugActor::ServerPrintCullDistances()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances"));

	AReplicationGraphDebugActor_ServerPrintCullDistances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// struct FString                 Str                            (Parm, ZeroConstructor)

void AReplicationGraphDebugActor::ServerPrintAllActorInfo(const struct FString& Str)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo"));

	AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
// (Net, NetReliable, Native, Event, Public, NetServer)

void AReplicationGraphDebugActor::ServerCellInfo()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo"));

	AReplicationGraphDebugActor_ServerCellInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FVector                 CellLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CellExtent                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AReplicationGraphDebugActor::ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> Actors)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo"));

	AReplicationGraphDebugActor_ClientCellInfo_Params params;
	params.CellLocation = CellLocation;
	params.CellExtent = CellExtent;
	params.Actors = Actors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
