#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.SetIsMatchmaking
struct UBP_DiscoveryGameInstance_C_SetIsMatchmaking_Params
{
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.SetCurrentSession
struct UBP_DiscoveryGameInstance_C_SetCurrentSession_Params
{
	struct FBlueprintSessionResult                     Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsSessionValid;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.OnFailure_7C51A29246145214228F94B2C6E7EFA0
struct UBP_DiscoveryGameInstance_C_OnFailure_7C51A29246145214228F94B2C6E7EFA0_Params
{
};

// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.OnSuccess_7C51A29246145214228F94B2C6E7EFA0
struct UBP_DiscoveryGameInstance_C_OnSuccess_7C51A29246145214228F94B2C6E7EFA0_Params
{
};

// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.LeaveCurrentSession
struct UBP_DiscoveryGameInstance_C_LeaveCurrentSession_Params
{
};

// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.ExecuteUbergraph_BP_DiscoveryGameInstance
struct UBP_DiscoveryGameInstance_C_ExecuteUbergraph_BP_DiscoveryGameInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.MatchmakingUpdated__DelegateSignature
struct UBP_DiscoveryGameInstance_C_MatchmakingUpdated__DelegateSignature_Params
{
	unsigned char                                      State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.MatchmakingEnded__DelegateSignature
struct UBP_DiscoveryGameInstance_C_MatchmakingEnded__DelegateSignature_Params
{
	bool                                               Successful;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.MatchmakingStarted__DelegateSignature
struct UBP_DiscoveryGameInstance_C_MatchmakingStarted__DelegateSignature_Params
{
};

// Function BP_DiscoveryGameInstance.BP_DiscoveryGameInstance_C.UserStatusChanged__DelegateSignature
struct UBP_DiscoveryGameInstance_C_UserStatusChanged__DelegateSignature_Params
{
	bool                                               IsLoggedIn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
