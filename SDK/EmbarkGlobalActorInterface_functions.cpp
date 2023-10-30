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

// Function EmbarkGlobalActorInterface.EmbarkGlobalActorFactorySubsystemInterface.GetGlobalActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  GlobalActorClass               (Parm, ZeroConstructor, IsPlainOldData)
// class AEmbarkGlobalActor*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AEmbarkGlobalActor* UEmbarkGlobalActorFactorySubsystemInterface::GetGlobalActor(class UClass* GlobalActorClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGlobalActorInterface.EmbarkGlobalActorFactorySubsystemInterface.GetGlobalActor"));

	UEmbarkGlobalActorFactorySubsystemInterface_GetGlobalActor_Params params;
	params.GlobalActorClass = GlobalActorClass;

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
