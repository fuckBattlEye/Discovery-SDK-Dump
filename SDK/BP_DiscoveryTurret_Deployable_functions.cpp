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

// Function BP_DiscoveryTurret_Deployable.BP_DiscoveryTurret_Deployable_C.OnRep_bIsExploding
// (BlueprintCallable, BlueprintEvent)

void ABP_DiscoveryTurret_Deployable_C::OnRep_bIsExploding()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function BP_DiscoveryTurret_Deployable.BP_DiscoveryTurret_Deployable_C.OnRep_bIsExploding"));

	ABP_DiscoveryTurret_Deployable_C_OnRep_bIsExploding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
