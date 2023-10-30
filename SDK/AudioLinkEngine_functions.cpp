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

// Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink
// (Native, Public, BlueprintCallable)

void UAudioLinkBlueprintInterface::StopLink()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink"));

	UAudioLinkBlueprintInterface_StopLink_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound
// (Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              NewSound                       (Parm, ZeroConstructor, IsPlainOldData)

void UAudioLinkBlueprintInterface::SetLinkSound(class USoundBase* NewSound)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound"));

	UAudioLinkBlueprintInterface_SetLinkSound_Params params;
	params.NewSound = NewSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UAudioLinkBlueprintInterface::PlayLink(float StartTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink"));

	UAudioLinkBlueprintInterface_PlayLink_Params params;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioLinkBlueprintInterface::IsLinkPlaying()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying"));

	UAudioLinkBlueprintInterface_IsLinkPlaying_Params params;

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
