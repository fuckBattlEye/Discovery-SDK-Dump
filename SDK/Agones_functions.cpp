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

// Function Agones.AgonesComponent.WatchGameServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         WatchDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::WatchGameServer(const struct FScriptDelegate& WatchDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.WatchGameServer"));

	UAgonesComponent_WatchGameServer_Params params;
	params.WatchDelegate = WatchDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.Shutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::Shutdown(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.Shutdown"));

	UAgonesComponent_Shutdown_Params params;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.SetPlayerCapacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        Count                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::SetPlayerCapacity(int64_t Count, const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.SetPlayerCapacity"));

	UAgonesComponent_SetPlayerCapacity_Params params;
	params.Count = Count;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.SetLabel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::SetLabel(const struct FString& Key, const struct FString& Value, const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.SetLabel"));

	UAgonesComponent_SetLabel_Params params;
	params.Key = Key;
	params.Value = Value;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.SetAnnotation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::SetAnnotation(const struct FString& Key, const struct FString& Value, const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.SetAnnotation"));

	UAgonesComponent_SetAnnotation_Params params;
	params.Key = Key;
	params.Value = Value;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.Reserve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t                        Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::Reserve(int64_t Seconds, const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.Reserve"));

	UAgonesComponent_Reserve_Params params;
	params.Seconds = Seconds;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.Ready
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::Ready(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.Ready"));

	UAgonesComponent_Ready_Params params;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.PlayerDisconnect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor)
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::PlayerDisconnect(const struct FString& PlayerId, const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.PlayerDisconnect"));

	UAgonesComponent_PlayerDisconnect_Params params;
	params.PlayerId = PlayerId;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.PlayerConnect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor)
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::PlayerConnect(const struct FString& PlayerId, const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.PlayerConnect"));

	UAgonesComponent_PlayerConnect_Params params;
	params.PlayerId = PlayerId;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.IsPlayerConnected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor)
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::IsPlayerConnected(const struct FString& PlayerId, const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.IsPlayerConnected"));

	UAgonesComponent_IsPlayerConnected_Params params;
	params.PlayerId = PlayerId;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.HealthPing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          RateSeconds                    (Parm, ZeroConstructor, IsPlainOldData)

void UAgonesComponent::HealthPing(float RateSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.HealthPing"));

	UAgonesComponent_HealthPing_Params params;
	params.RateSeconds = RateSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.Health
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::Health(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.Health"));

	UAgonesComponent_Health_Params params;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.GetPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::GetPlayerCount(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.GetPlayerCount"));

	UAgonesComponent_GetPlayerCount_Params params;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.GetPlayerCapacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::GetPlayerCapacity(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.GetPlayerCapacity"));

	UAgonesComponent_GetPlayerCapacity_Params params;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.GetConnectedPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::GetConnectedPlayers(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.GetConnectedPlayers"));

	UAgonesComponent_GetConnectedPlayers_Params params;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.GameServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::GameServer(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.GameServer"));

	UAgonesComponent_GameServer_Params params;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.ConnectSuccess
// (Final, Native, Private)
// Parameters:
// struct FGameServerResponse     GameServerResponse             (Parm)

void UAgonesComponent::ConnectSuccess(const struct FGameServerResponse& GameServerResponse)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.ConnectSuccess"));

	UAgonesComponent_ConnectSuccess_Params params;
	params.GameServerResponse = GameServerResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.Connect
// (Final, Native, Public, BlueprintCallable)

void UAgonesComponent::Connect()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.Connect"));

	UAgonesComponent_Connect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Agones.AgonesComponent.Allocate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         SuccessDelegate                (Parm, ZeroConstructor)
// struct FScriptDelegate         ErrorDelegate                  (Parm, ZeroConstructor)

void UAgonesComponent::Allocate(const struct FScriptDelegate& SuccessDelegate, const struct FScriptDelegate& ErrorDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Agones.AgonesComponent.Allocate"));

	UAgonesComponent_Allocate_Params params;
	params.SuccessDelegate = SuccessDelegate;
	params.ErrorDelegate = ErrorDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
