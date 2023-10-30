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

// Function ComponentAssembler.ComponentAssemblerComponentBase.GetAssemblyType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UComponentAssemblerComponentBase::GetAssemblyType()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ComponentAssembler.ComponentAssemblerComponentBase.GetAssemblyType"));

	UComponentAssemblerComponentBase_GetAssemblyType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ComponentAssembler.ComponentAssemblerComponentBase.GetAssemblyPropertyName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UComponentAssemblerComponentBase::GetAssemblyPropertyName()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ComponentAssembler.ComponentAssemblerComponentBase.GetAssemblyPropertyName"));

	UComponentAssemblerComponentBase_GetAssemblyPropertyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ComponentAssembler.ComponentAssemblerComponentBase.DisassembleComponents
// (Final, Native, Public, BlueprintCallable)

void UComponentAssemblerComponentBase::DisassembleComponents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ComponentAssembler.ComponentAssemblerComponentBase.DisassembleComponents"));

	UComponentAssemblerComponentBase_DisassembleComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ComponentAssembler.ComponentAssemblerComponentBase.AssembleComponents
// (Final, Native, Public, BlueprintCallable)

void UComponentAssemblerComponentBase::AssembleComponents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ComponentAssembler.ComponentAssemblerComponentBase.AssembleComponents"));

	UComponentAssemblerComponentBase_AssembleComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
