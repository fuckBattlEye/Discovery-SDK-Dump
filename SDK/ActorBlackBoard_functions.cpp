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

// Function ActorBlackBoard.ActorBlackBoardTestOnReps.OnRep_TriggeredExplosions
// (Final, Native, Public)

void UActorBlackBoardTestOnReps::OnRep_TriggeredExplosions()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ActorBlackBoard.ActorBlackBoardTestOnReps.OnRep_TriggeredExplosions"));

	UActorBlackBoardTestOnReps_OnRep_TriggeredExplosions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActorBlackBoard.ActorBlackBoardTestOnReps.OnRep_TriggeredA
// (Final, Native, Public)

void UActorBlackBoardTestOnReps::OnRep_TriggeredA()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ActorBlackBoard.ActorBlackBoardTestOnReps.OnRep_TriggeredA"));

	UActorBlackBoardTestOnReps_OnRep_TriggeredA_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActorBlackBoard.ActorBlackBoardTestInitialization.InitForActor
// (Final, Native, Public)
// Parameters:
// class UObject*                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void UActorBlackBoardTestInitialization::InitForActor(class UObject* Owner)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ActorBlackBoard.ActorBlackBoardTestInitialization.InitForActor"));

	UActorBlackBoardTestInitialization_InitForActor_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActorBlackBoard.BlackBoardTesterAS.SetOwnerActor
// (Final, Native, Public)
// Parameters:
// class AActor*                  Obj                            (Parm, ZeroConstructor, IsPlainOldData)

void UBlackBoardTesterAS::SetOwnerActor(class AActor* Obj)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ActorBlackBoard.BlackBoardTesterAS.SetOwnerActor"));

	UBlackBoardTesterAS_SetOwnerActor_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActorBlackBoard.BlackBoardTesterAS.RegisterClassToServerBlackBoard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBlackBoardTesterAS::RegisterClassToServerBlackBoard(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ActorBlackBoard.BlackBoardTesterAS.RegisterClassToServerBlackBoard"));

	UBlackBoardTesterAS_RegisterClassToServerBlackBoard_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActorBlackBoard.BlackBoardTesterAS.Init
// (Final, Native, Public)

void UBlackBoardTesterAS::Init()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ActorBlackBoard.BlackBoardTesterAS.Init"));

	UBlackBoardTesterAS_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActorBlackBoard.BlackBoardTesterAS.GetFirstStateOfTypeFromServerBlackBoard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBlackBoardTesterAS::GetFirstStateOfTypeFromServerBlackBoard(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ActorBlackBoard.BlackBoardTesterAS.GetFirstStateOfTypeFromServerBlackBoard"));

	UBlackBoardTesterAS_GetFirstStateOfTypeFromServerBlackBoard_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActorBlackBoard.BlackBoardTesterAS.GetFirstStateOfTypeFromClientBlackBoard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBlackBoardTesterAS::GetFirstStateOfTypeFromClientBlackBoard(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ActorBlackBoard.BlackBoardTesterAS.GetFirstStateOfTypeFromClientBlackBoard"));

	UBlackBoardTesterAS_GetFirstStateOfTypeFromClientBlackBoard_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActorBlackBoard.BlackBoardTesterAS.FakeTransmit
// (Final, Native, Public)

void UBlackBoardTesterAS::FakeTransmit()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ActorBlackBoard.BlackBoardTesterAS.FakeTransmit"));

	UBlackBoardTesterAS_FakeTransmit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
