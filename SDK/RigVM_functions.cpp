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

// Function RigVM.RigVM.SetParameterValueVector2D
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void URigVM::SetParameterValueVector2D(const struct FName& InParameterName, const struct FVector2D& InValue, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.SetParameterValueVector2D"));

	URigVM_SetParameterValueVector2D_Params params;
	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RigVM.RigVM.SetParameterValueVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void URigVM::SetParameterValueVector(const struct FName& InParameterName, const struct FVector& InValue, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.SetParameterValueVector"));

	URigVM_SetParameterValueVector_Params params;
	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RigVM.RigVM.SetParameterValueTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void URigVM::SetParameterValueTransform(const struct FName& InParameterName, const struct FTransform& InValue, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.SetParameterValueTransform"));

	URigVM_SetParameterValueTransform_Params params;
	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RigVM.RigVM.SetParameterValueString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 InValue                        (Parm, ZeroConstructor)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void URigVM::SetParameterValueString(const struct FName& InParameterName, const struct FString& InValue, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.SetParameterValueString"));

	URigVM_SetParameterValueString_Params params;
	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RigVM.RigVM.SetParameterValueQuat
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void URigVM::SetParameterValueQuat(const struct FName& InParameterName, const struct FQuat& InValue, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.SetParameterValueQuat"));

	URigVM_SetParameterValueQuat_Params params;
	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RigVM.RigVM.SetParameterValueName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void URigVM::SetParameterValueName(const struct FName& InParameterName, const struct FName& InValue, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.SetParameterValueName"));

	URigVM_SetParameterValueName_Params params;
	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RigVM.RigVM.SetParameterValueInt
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void URigVM::SetParameterValueInt(const struct FName& InParameterName, int InValue, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.SetParameterValueInt"));

	URigVM_SetParameterValueInt_Params params;
	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RigVM.RigVM.SetParameterValueFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void URigVM::SetParameterValueFloat(const struct FName& InParameterName, float InValue, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.SetParameterValueFloat"));

	URigVM_SetParameterValueFloat_Params params;
	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RigVM.RigVM.SetParameterValueDouble
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// double                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void URigVM::SetParameterValueDouble(const struct FName& InParameterName, double InValue, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.SetParameterValueDouble"));

	URigVM_SetParameterValueDouble_Params params;
	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RigVM.RigVM.SetParameterValueBool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void URigVM::SetParameterValueBool(const struct FName& InParameterName, bool InValue, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.SetParameterValueBool"));

	URigVM_SetParameterValueBool_Params params;
	params.InParameterName = InParameterName;
	params.InValue = InValue;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RigVM.RigVM.GetStatistics
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigVMStatistics        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigVMStatistics URigVM::GetStatistics()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.GetStatistics"));

	URigVM_GetStatistics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetRigVMFunctionName
// (Final, Native, Public, Const)
// Parameters:
// int                            InFunctionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URigVM::GetRigVMFunctionName(int InFunctionIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.GetRigVMFunctionName"));

	URigVM_GetRigVMFunctionName_Params params;
	params.InFunctionIndex = InFunctionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueVector2D
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D URigVM::GetParameterValueVector2D(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.GetParameterValueVector2D"));

	URigVM_GetParameterValueVector2D_Params params;
	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector URigVM::GetParameterValueVector(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.GetParameterValueVector"));

	URigVM_GetParameterValueVector_Params params;
	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform URigVM::GetParameterValueTransform(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.GetParameterValueTransform"));

	URigVM_GetParameterValueTransform_Params params;
	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URigVM::GetParameterValueString(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.GetParameterValueString"));

	URigVM_GetParameterValueString_Params params;
	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueQuat
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat URigVM::GetParameterValueQuat(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.GetParameterValueQuat"));

	URigVM_GetParameterValueQuat_Params params;
	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName URigVM::GetParameterValueName(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.GetParameterValueName"));

	URigVM_GetParameterValueName_Params params;
	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueInt
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URigVM::GetParameterValueInt(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.GetParameterValueInt"));

	URigVM_GetParameterValueInt_Params params;
	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URigVM::GetParameterValueFloat(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.GetParameterValueFloat"));

	URigVM_GetParameterValueFloat_Params params;
	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueDouble
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double URigVM::GetParameterValueDouble(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.GetParameterValueDouble"));

	URigVM_GetParameterValueDouble_Params params;
	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RigVM.RigVM.GetParameterValueBool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InArrayIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigVM::GetParameterValueBool(const struct FName& InParameterName, int InArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.GetParameterValueBool"));

	URigVM_GetParameterValueBool_Params params;
	params.InParameterName = InParameterName;
	params.InArrayIndex = InArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RigVM.RigVM.Execute
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InEntryName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigVM::Execute(const struct FName& InEntryName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.Execute"));

	URigVM_Execute_Params params;
	params.InEntryName = InEntryName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RigVM.RigVM.AddRigVMFunction
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UScriptStruct*           InRigVMStruct                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InMethodName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URigVM::AddRigVMFunction(class UScriptStruct* InRigVMStruct, const struct FName& InMethodName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function RigVM.RigVM.AddRigVMFunction"));

	URigVM_AddRigVMFunction_Params params;
	params.InRigVMStruct = InRigVMStruct;
	params.InMethodName = InMethodName;

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
