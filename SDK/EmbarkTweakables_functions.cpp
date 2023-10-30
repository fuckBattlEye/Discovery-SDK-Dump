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

// Function EmbarkTweakables.EmbarkTweakablesSubsystem.RegisterOnlineTweakables_Server
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FOnlineTweakablesContainer InOnlineTweakablesContainer    (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkTweakablesSubsystem::RegisterOnlineTweakables_Server(const struct FOnlineTweakablesContainer& InOnlineTweakablesContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTweakables.EmbarkTweakablesSubsystem.RegisterOnlineTweakables_Server"));

	UEmbarkTweakablesSubsystem_RegisterOnlineTweakables_Server_Params params;
	params.InOnlineTweakablesContainer = InOnlineTweakablesContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTweakables.EmbarkTweakablesSubsystem.RegisterOnlineTweakables_Client
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FOnlineTweakablesContainer InOnlineTweakablesContainer    (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkTweakablesSubsystem::RegisterOnlineTweakables_Client(const struct FOnlineTweakablesContainer& InOnlineTweakablesContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTweakables.EmbarkTweakablesSubsystem.RegisterOnlineTweakables_Client"));

	UEmbarkTweakablesSubsystem_RegisterOnlineTweakables_Client_Params params;
	params.InOnlineTweakablesContainer = InOnlineTweakablesContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTweakables.EmbarkTweakablesSubsystem.IsInitialized
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkTweakablesSubsystem::IsInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTweakables.EmbarkTweakablesSubsystem.IsInitialized"));

	UEmbarkTweakablesSubsystem_IsInitialized_Params params;

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
