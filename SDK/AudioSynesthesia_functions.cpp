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

// Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  OutConstantQ                   (Parm, OutParm, ZeroConstructor)

void UConstantQNRT::GetNormalizedChannelConstantQAtTime(float InSeconds, int InChannel, TArray<float>* OutConstantQ)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime"));

	UConstantQNRT_GetNormalizedChannelConstantQAtTime_Params params;
	params.InSeconds = InSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConstantQ != nullptr)
		*OutConstantQ = params.OutConstantQ;
}


// Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  OutConstantQ                   (Parm, OutParm, ZeroConstructor)

void UConstantQNRT::GetChannelConstantQAtTime(float InSeconds, int InChannel, TArray<float>* OutConstantQ)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime"));

	UConstantQNRT_GetChannelConstantQAtTime_Params params;
	params.InSeconds = InSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConstantQ != nullptr)
		*OutConstantQ = params.OutConstantQ;
}


// Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutLoudness                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULoudnessNRT::GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime"));

	ULoudnessNRT_GetNormalizedLoudnessAtTime_Params params;
	params.InSeconds = InSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoudness != nullptr)
		*OutLoudness = params.OutLoudness;
}


// Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutLoudness                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULoudnessNRT::GetNormalizedChannelLoudnessAtTime(float InSeconds, int InChannel, float* OutLoudness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime"));

	ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Params params;
	params.InSeconds = InSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoudness != nullptr)
		*OutLoudness = params.OutLoudness;
}


// Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutLoudness                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULoudnessNRT::GetLoudnessAtTime(float InSeconds, float* OutLoudness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime"));

	ULoudnessNRT_GetLoudnessAtTime_Params params;
	params.InSeconds = InSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoudness != nullptr)
		*OutLoudness = params.OutLoudness;
}


// Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InSeconds                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutLoudness                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULoudnessNRT::GetChannelLoudnessAtTime(float InSeconds, int InChannel, float* OutLoudness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime"));

	ULoudnessNRT_GetChannelLoudnessAtTime_Params params;
	params.InSeconds = InSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoudness != nullptr)
		*OutLoudness = params.OutLoudness;
}


// Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InStartSeconds                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InEndSeconds                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  OutOnsetTimestamps             (Parm, OutParm, ZeroConstructor)
// TArray<float>                  OutOnsetStrengths              (Parm, OutParm, ZeroConstructor)

void UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes"));

	UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Params params;
	params.InStartSeconds = InStartSeconds;
	params.InEndSeconds = InEndSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOnsetTimestamps != nullptr)
		*OutOnsetTimestamps = params.OutOnsetTimestamps;
	if (OutOnsetStrengths != nullptr)
		*OutOnsetStrengths = params.OutOnsetStrengths;
}


// Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InStartSeconds                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InEndSeconds                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InChannel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  OutOnsetTimestamps             (Parm, OutParm, ZeroConstructor)
// TArray<float>                  OutOnsetStrengths              (Parm, OutParm, ZeroConstructor)

void UOnsetNRT::GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes"));

	UOnsetNRT_GetChannelOnsetsBetweenTimes_Params params;
	params.InStartSeconds = InStartSeconds;
	params.InEndSeconds = InEndSeconds;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOnsetTimestamps != nullptr)
		*OutOnsetTimestamps = params.OutOnsetTimestamps;
	if (OutOnsetStrengths != nullptr)
		*OutOnsetStrengths = params.OutOnsetStrengths;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
