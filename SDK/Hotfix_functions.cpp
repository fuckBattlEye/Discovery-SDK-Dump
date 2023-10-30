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

// Function Hotfix.OnlineHotfixManager.StartHotfixProcess
// (Native, Public, BlueprintCallable)

void UOnlineHotfixManager::StartHotfixProcess()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Hotfix.OnlineHotfixManager.StartHotfixProcess"));

	UOnlineHotfixManager_StartHotfixProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
