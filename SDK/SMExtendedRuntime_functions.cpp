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

// Function SMExtendedRuntime.SMExtendedGraphPropertyHelpers.ObjectToText
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InFunctionName                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USMExtendedGraphPropertyHelpers::STATIC_ObjectToText(class UObject* InObject, const struct FName& InFunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMExtendedRuntime.SMExtendedGraphPropertyHelpers.ObjectToText"));

	USMExtendedGraphPropertyHelpers_ObjectToText_Params params;
	params.InObject = InObject;
	params.InFunctionName = InFunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMExtendedRuntime.SMExtendedGraphPropertyHelpers.BreakTextGraphProperty
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSMTextGraphProperty    GraphProperty                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   Result                         (Parm, OutParm)

void USMExtendedGraphPropertyHelpers::STATIC_BreakTextGraphProperty(const struct FSMTextGraphProperty& GraphProperty, struct FText* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMExtendedRuntime.SMExtendedGraphPropertyHelpers.BreakTextGraphProperty"));

	USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Params params;
	params.GraphProperty = GraphProperty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
