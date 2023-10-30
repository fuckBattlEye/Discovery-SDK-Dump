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

// Function EmbarkGlobalSubsystemAngelscript.SubsystemFunctionLibrary.GetGlobalSubsystem
// (Final, Native, Static, Public)
// Parameters:
// class UClass*                  SubsystemClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkGlobalSubsystem*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkGlobalSubsystem* USubsystemFunctionLibrary::STATIC_GetGlobalSubsystem(class UClass* SubsystemClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGlobalSubsystemAngelscript.SubsystemFunctionLibrary.GetGlobalSubsystem"));

	USubsystemFunctionLibrary_GetGlobalSubsystem_Params params;
	params.SubsystemClass = SubsystemClass;

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
