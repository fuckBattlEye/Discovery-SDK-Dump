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

// Function BP_DialogueStateInstance_PlayOnCoHost.BP_DialogueStateInstance_PlayOnCoHost_C.ConstructionScript
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_DialogueStateInstance_PlayOnCoHost_C::ConstructionScript()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function BP_DialogueStateInstance_PlayOnCoHost.BP_DialogueStateInstance_PlayOnCoHost_C.ConstructionScript"));

	UBP_DialogueStateInstance_PlayOnCoHost_C_ConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
