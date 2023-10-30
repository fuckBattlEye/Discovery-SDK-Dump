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

// Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)

void UAudioParameterControllerInterface::SetTriggerParameter(const struct FName& InName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter"));

	UAudioParameterControllerInterface_SetTriggerParameter_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InValue                        (Parm, ZeroConstructor)

void UAudioParameterControllerInterface::SetStringParameter(const struct FName& InName, const struct FString& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter"));

	UAudioParameterControllerInterface_SetStringParameter_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAudioParameterControllerInterface::SetStringArrayParameter(const struct FName& InName, TArray<struct FString> InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter"));

	UAudioParameterControllerInterface_SetStringArrayParameter_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAudioParameter> InParameters                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAudioParameterControllerInterface::SetParameters_Blueprint(TArray<struct FAudioParameter> InParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint"));

	UAudioParameterControllerInterface_SetParameters_Blueprint_Params params;
	params.InParameters = InParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioParameterControllerInterface::SetObjectParameter(const struct FName& InName, class UObject* InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter"));

	UAudioParameterControllerInterface_SetObjectParameter_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAudioParameterControllerInterface::SetObjectArrayParameter(const struct FName& InName, TArray<class UObject*> InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter"));

	UAudioParameterControllerInterface_SetObjectArrayParameter_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            inInt                          (Parm, ZeroConstructor, IsPlainOldData)

void UAudioParameterControllerInterface::SetIntParameter(const struct FName& InName, int inInt)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter"));

	UAudioParameterControllerInterface_SetIntParameter_Params params;
	params.InName = InName;
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAudioParameterControllerInterface::SetIntArrayParameter(const struct FName& InName, TArray<int> InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter"));

	UAudioParameterControllerInterface_SetIntArrayParameter_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InFloat                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioParameterControllerInterface::SetFloatParameter(const struct FName& InName, float InFloat)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter"));

	UAudioParameterControllerInterface_SetFloatParameter_Params params;
	params.InName = InName;
	params.InFloat = InFloat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAudioParameterControllerInterface::SetFloatArrayParameter(const struct FName& InName, TArray<float> InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter"));

	UAudioParameterControllerInterface_SetFloatArrayParameter_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InBool                         (Parm, ZeroConstructor, IsPlainOldData)

void UAudioParameterControllerInterface::SetBoolParameter(const struct FName& InName, bool InBool)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter"));

	UAudioParameterControllerInterface_SetBoolParameter_Params params;
	params.InName = InName;
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAudioParameterControllerInterface::SetBoolArrayParameter(const struct FName& InName, TArray<bool> InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter"));

	UAudioParameterControllerInterface_SetBoolArrayParameter_Params params;
	params.InName = InName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioExtensions.AudioParameterControllerInterface.ResetParameters
// (Native, Public, BlueprintCallable)

void UAudioParameterControllerInterface::ResetParameters()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioExtensions.AudioParameterControllerInterface.ResetParameters"));

	UAudioParameterControllerInterface_ResetParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
