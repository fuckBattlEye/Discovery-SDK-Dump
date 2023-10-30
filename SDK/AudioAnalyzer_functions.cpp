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

// Function AudioAnalyzer.AudioAnalyzer.StopAnalyzing
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioAnalyzer::StopAnalyzing(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioAnalyzer.AudioAnalyzer.StopAnalyzing"));

	UAudioAnalyzer_StopAnalyzing_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioAnalyzer.AudioAnalyzer.StartAnalyzing
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAudioBus*               AudioBusToAnalyze              (Parm, ZeroConstructor, IsPlainOldData)

void UAudioAnalyzer::StartAnalyzing(class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioAnalyzer.AudioAnalyzer.StartAnalyzing"));

	UAudioAnalyzer_StartAnalyzing_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AudioBusToAnalyze = AudioBusToAnalyze;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
