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

// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.SetIsMatchmaking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DiscoveryGameInstance_C::SetIsMatchmaking(bool Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.SetIsMatchmaking"));

	UBP_DiscoveryGameInstance_C_SetIsMatchmaking_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.SetCurrentSession
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsSessionValid                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DiscoveryGameInstance_C::SetCurrentSession(const struct FBlueprintSessionResult& Session, bool IsSessionValid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.SetCurrentSession"));

	UBP_DiscoveryGameInstance_C_SetCurrentSession_Params params;
	params.Session = Session;
	params.IsSessionValid = IsSessionValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.OnFailure_7C51A29246145214228F94B2C6E7EFA0
// (BlueprintCallable, BlueprintEvent)

void UBP_DiscoveryGameInstance_C::OnFailure_7C51A29246145214228F94B2C6E7EFA0()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.OnFailure_7C51A29246145214228F94B2C6E7EFA0"));

	UBP_DiscoveryGameInstance_C_OnFailure_7C51A29246145214228F94B2C6E7EFA0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.OnSuccess_7C51A29246145214228F94B2C6E7EFA0
// (BlueprintCallable, BlueprintEvent)

void UBP_DiscoveryGameInstance_C::OnSuccess_7C51A29246145214228F94B2C6E7EFA0()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.OnSuccess_7C51A29246145214228F94B2C6E7EFA0"));

	UBP_DiscoveryGameInstance_C_OnSuccess_7C51A29246145214228F94B2C6E7EFA0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.LeaveCurrentSession
// (BlueprintCallable, BlueprintEvent)

void UBP_DiscoveryGameInstance_C::LeaveCurrentSession()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.LeaveCurrentSession"));

	UBP_DiscoveryGameInstance_C_LeaveCurrentSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.ExecuteUbergraph_BP_DiscoveryGameInstance
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DiscoveryGameInstance_C::ExecuteUbergraph_BP_DiscoveryGameInstance(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.ExecuteUbergraph_BP_DiscoveryGameInstance"));

	UBP_DiscoveryGameInstance_C_ExecuteUbergraph_BP_DiscoveryGameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.MatchmakingUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DiscoveryGameInstance_C::MatchmakingUpdated__DelegateSignature(unsigned char State)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.MatchmakingUpdated__DelegateSignature"));

	UBP_DiscoveryGameInstance_C_MatchmakingUpdated__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.MatchmakingEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DiscoveryGameInstance_C::MatchmakingEnded__DelegateSignature(bool Successful)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.MatchmakingEnded__DelegateSignature"));

	UBP_DiscoveryGameInstance_C_MatchmakingEnded__DelegateSignature_Params params;
	params.Successful = Successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.MatchmakingStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DiscoveryGameInstance_C::MatchmakingStarted__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.MatchmakingStarted__DelegateSignature"));

	UBP_DiscoveryGameInstance_C_MatchmakingStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.UserStatusChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLoggedIn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DiscoveryGameInstance_C::UserStatusChanged__DelegateSignature(bool IsLoggedIn)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.UserStatusChanged__DelegateSignature"));

	UBP_DiscoveryGameInstance_C_UserStatusChanged__DelegateSignature_Params params;
	params.IsLoggedIn = IsLoggedIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
