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

// Function Agones.AgonesComponent.WatchGameServer
struct UAgonesComponent_WatchGameServer_Params
{
	struct FScriptDelegate                             WatchDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.Shutdown
struct UAgonesComponent_Shutdown_Params
{
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.SetPlayerCapacity
struct UAgonesComponent_SetPlayerCapacity_Params
{
	int64_t                                            Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.SetLabel
struct UAgonesComponent_SetLabel_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.SetAnnotation
struct UAgonesComponent_SetAnnotation_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.Reserve
struct UAgonesComponent_Reserve_Params
{
	int64_t                                            Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.Ready
struct UAgonesComponent_Ready_Params
{
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.PlayerDisconnect
struct UAgonesComponent_PlayerDisconnect_Params
{
	struct FString                                     PlayerId;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.PlayerConnect
struct UAgonesComponent_PlayerConnect_Params
{
	struct FString                                     PlayerId;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.IsPlayerConnected
struct UAgonesComponent_IsPlayerConnected_Params
{
	struct FString                                     PlayerId;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.HealthPing
struct UAgonesComponent_HealthPing_Params
{
	float                                              RateSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Agones.AgonesComponent.Health
struct UAgonesComponent_Health_Params
{
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.GetPlayerCount
struct UAgonesComponent_GetPlayerCount_Params
{
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.GetPlayerCapacity
struct UAgonesComponent_GetPlayerCapacity_Params
{
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.GetConnectedPlayers
struct UAgonesComponent_GetConnectedPlayers_Params
{
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.GameServer
struct UAgonesComponent_GameServer_Params
{
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

// Function Agones.AgonesComponent.ConnectSuccess
struct UAgonesComponent_ConnectSuccess_Params
{
	struct FGameServerResponse                         GameServerResponse;                                       // (Parm)
};

// Function Agones.AgonesComponent.Connect
struct UAgonesComponent_Connect_Params
{
};

// Function Agones.AgonesComponent.Allocate
struct UAgonesComponent_Allocate_Params
{
	struct FScriptDelegate                             SuccessDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             ErrorDelegate;                                            // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
