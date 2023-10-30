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

// Function EmbarkServerEvents.EmbarkServerEventsSubsystem.IsReady
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkServerEventsSubsystem::IsReady()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EmbarkServerEventsSubsystem.IsReady"));

	UEmbarkServerEventsSubsystem_IsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkServerEvents.EmbarkServerEventUtil.ServerShutdown
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ShutdownMessage                (Parm, ZeroConstructor)

void UEmbarkServerEventUtil::STATIC_ServerShutdown(class UObject* WorldContextObject, const struct FString& ShutdownMessage)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EmbarkServerEventUtil.ServerShutdown"));

	UEmbarkServerEventUtil_ServerShutdown_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ShutdownMessage = ShutdownMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EmbarkServerEventUtil.RoundCompleted
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkServerEventUtil::STATIC_RoundCompleted(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EmbarkServerEventUtil.RoundCompleted"));

	UEmbarkServerEventUtil_RoundCompleted_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EmbarkServerEventUtil.FlushEvents
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkServerEventUtil::STATIC_FlushEvents(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EmbarkServerEventUtil.FlushEvents"));

	UEmbarkServerEventUtil_FlushEvents_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.WorldActivityStarted
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ActivityName                   (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_WorldActivityStarted(class UObject* WorldContextObject, int64_t Player, const struct FString& ActivityName, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.WorldActivityStarted"));

	UEventAPI_WorldActivityStarted_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.ActivityName = ActivityName;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.WorldActivitySpawned
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ActivityName                   (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_WorldActivitySpawned(class UObject* WorldContextObject, const struct FString& ActivityName, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.WorldActivitySpawned"));

	UEventAPI_WorldActivitySpawned_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActivityName = ActivityName;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.WorldActivityFinished
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ActivityName                   (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_WorldActivityFinished(class UObject* WorldContextObject, int64_t Player, const struct FString& ActivityName, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.WorldActivityFinished"));

	UEventAPI_WorldActivityFinished_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.ActivityName = ActivityName;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.WorldActivityARCProbeLooted
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AssetName                      (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_WorldActivityARCProbeLooted(class UObject* WorldContextObject, int64_t Player, const struct FString& AssetName, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.WorldActivityARCProbeLooted"));

	UEventAPI_WorldActivityARCProbeLooted_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.AssetName = AssetName;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.WeaponReload
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Weapon                         (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        BulletsBefore                  (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        BulletsAfter                   (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_WeaponReload(class UObject* WorldContextObject, int64_t Player, const struct FString& Weapon, const struct FVector& Location, int64_t BulletsBefore, int64_t BulletsAfter, int64_t WeaponId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.WeaponReload"));

	UEventAPI_WeaponReload_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Weapon = Weapon;
	params.Location = Location;
	params.BulletsBefore = BulletsBefore;
	params.BulletsAfter = BulletsAfter;
	params.WeaponId = WeaponId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.WeaponModSet2
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        WeaponGameAssetId              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 WeaponName                     (Parm, ZeroConstructor)
// int64_t                        ModGameAssetId                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModName                        (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_WeaponModSet2(class UObject* WorldContextObject, int64_t Player, int64_t WeaponGameAssetId, const struct FString& WeaponName, int64_t ModGameAssetId, const struct FString& ModName, int Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.WeaponModSet2"));

	UEventAPI_WeaponModSet2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.WeaponGameAssetId = WeaponGameAssetId;
	params.WeaponName = WeaponName;
	params.ModGameAssetId = ModGameAssetId;
	params.ModName = ModName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.WeaponModSet
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        WeaponGameAssetId              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 WeaponName                     (Parm, ZeroConstructor)
// int64_t                        ModGameAssetId                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModName                        (Parm, ZeroConstructor)

void UEventAPI::STATIC_WeaponModSet(class UObject* WorldContextObject, int64_t Player, int64_t WeaponGameAssetId, const struct FString& WeaponName, int64_t ModGameAssetId, const struct FString& ModName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.WeaponModSet"));

	UEventAPI_WeaponModSet_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.WeaponGameAssetId = WeaponGameAssetId;
	params.WeaponName = WeaponName;
	params.ModGameAssetId = ModGameAssetId;
	params.ModName = ModName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.WeaponModRemoved2
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        WeaponGameAssetId              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 WeaponName                     (Parm, ZeroConstructor)
// int64_t                        ModGameAssetId                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModName                        (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_WeaponModRemoved2(class UObject* WorldContextObject, int64_t Player, int64_t WeaponGameAssetId, const struct FString& WeaponName, int64_t ModGameAssetId, const struct FString& ModName, int Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.WeaponModRemoved2"));

	UEventAPI_WeaponModRemoved2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.WeaponGameAssetId = WeaponGameAssetId;
	params.WeaponName = WeaponName;
	params.ModGameAssetId = ModGameAssetId;
	params.ModName = ModName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.WeaponModRemoved
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        WeaponGameAssetId              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 WeaponName                     (Parm, ZeroConstructor)
// int64_t                        ModGameAssetId                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModName                        (Parm, ZeroConstructor)

void UEventAPI::STATIC_WeaponModRemoved(class UObject* WorldContextObject, int64_t Player, int64_t WeaponGameAssetId, const struct FString& WeaponName, int64_t ModGameAssetId, const struct FString& ModName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.WeaponModRemoved"));

	UEventAPI_WeaponModRemoved_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.WeaponGameAssetId = WeaponGameAssetId;
	params.WeaponName = WeaponName;
	params.ModGameAssetId = ModGameAssetId;
	params.ModName = ModName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.WeaponHit2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Weapon                         (Parm, ZeroConstructor)
// bool                           bIsImpactDamage                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Target                         (Parm, ZeroConstructor)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        EnemySpawnId                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Payload                        (Parm, ZeroConstructor)
// int64_t                        PayloadId                      (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_WeaponHit2(class UObject* WorldContextObject, int64_t Player, const struct FString& Weapon, bool bIsImpactDamage, const struct FString& Target, const struct FVector& TargetLocation, int64_t WeaponId, int64_t EnemyId, int64_t EnemySpawnId, const struct FString& Payload, int64_t PayloadId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.WeaponHit2"));

	UEventAPI_WeaponHit2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Weapon = Weapon;
	params.bIsImpactDamage = bIsImpactDamage;
	params.Target = Target;
	params.TargetLocation = TargetLocation;
	params.WeaponId = WeaponId;
	params.EnemyId = EnemyId;
	params.EnemySpawnId = EnemySpawnId;
	params.Payload = Payload;
	params.PayloadId = PayloadId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.WeaponFired
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Weapon                         (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Direction                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        BulletsAfter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsingCamera                   (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_WeaponFired(class UObject* WorldContextObject, int64_t Player, const struct FString& Weapon, const struct FVector& Location, const struct FVector& Direction, int64_t BulletsAfter, bool bUsingCamera, int64_t WeaponId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.WeaponFired"));

	UEventAPI_WeaponFired_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Weapon = Weapon;
	params.Location = Location;
	params.Direction = Direction;
	params.BulletsAfter = BulletsAfter;
	params.bUsingCamera = bUsingCamera;
	params.WeaponId = WeaponId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.UpdateFameAmount2
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FameInstanceId                 (Parm, ZeroConstructor)
// int64_t                        Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        FameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)

void UEventAPI::STATIC_UpdateFameAmount2(class UObject* WorldContextObject, int64_t Player, const struct FString& FameInstanceId, int64_t Amount, int64_t FameAssetId, const struct FString& Reason)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.UpdateFameAmount2"));

	UEventAPI_UpdateFameAmount2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.FameInstanceId = FameInstanceId;
	params.Amount = Amount;
	params.FameAssetId = FameAssetId;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.UnrealServerTime2
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        UnrealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_UnrealServerTime2(class UObject* WorldContextObject, int64_t UnrealTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.UnrealServerTime2"));

	UEventAPI_UnrealServerTime2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.UnrealTime = UnrealTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.TryActivateAbility
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Ability                        (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_TryActivateAbility(class UObject* WorldContextObject, int64_t Player, const struct FString& Ability, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.TryActivateAbility"));

	UEventAPI_TryActivateAbility_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Ability = Ability;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.TournamentState
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TournamentId                   (Parm, ZeroConstructor)
// struct FString                 MatchId                        (Parm, ZeroConstructor)

void UEventAPI::STATIC_TournamentState(class UObject* WorldContextObject, const struct FString& TournamentId, const struct FString& MatchId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.TournamentState"));

	UEventAPI_TournamentState_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TournamentId = TournamentId;
	params.MatchId = MatchId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.TelemetryStartup
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ServerSessionId                (Parm, ZeroConstructor)

void UEventAPI::STATIC_TelemetryStartup(class UObject* WorldContextObject, const struct FString& ServerSessionId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.TelemetryStartup"));

	UEventAPI_TelemetryStartup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ServerSessionId = ServerSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.SteamApp
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            SteamAppId                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BranchName                     (Parm, ZeroConstructor)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_SteamApp(class UObject* WorldContextObject, int SteamAppId, const struct FString& BranchName, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.SteamApp"));

	UEventAPI_SteamApp_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SteamAppId = SteamAppId;
	params.BranchName = BranchName;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.StaticSpawnerSpawnEnemy2
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Enemy                          (Parm, ZeroConstructor)
// struct FString                 Spawner                        (Parm, ZeroConstructor)
// int64_t                        EnemySpawnId                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SpawnerUuid                    (Parm, ZeroConstructor)

void UEventAPI::STATIC_StaticSpawnerSpawnEnemy2(class UObject* WorldContextObject, const struct FString& Enemy, const struct FString& Spawner, int64_t EnemySpawnId, const struct FString& SpawnerUuid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.StaticSpawnerSpawnEnemy2"));

	UEventAPI_StaticSpawnerSpawnEnemy2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Enemy = Enemy;
	params.Spawner = Spawner;
	params.EnemySpawnId = EnemySpawnId;
	params.SpawnerUuid = SpawnerUuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.StaticSpawnerDestroyEnemy2
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Enemy                          (Parm, ZeroConstructor)
// struct FString                 Spawner                        (Parm, ZeroConstructor)
// int64_t                        EnemySpawnId                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SpawnerUuid                    (Parm, ZeroConstructor)

void UEventAPI::STATIC_StaticSpawnerDestroyEnemy2(class UObject* WorldContextObject, const struct FString& Enemy, const struct FString& Spawner, int64_t EnemySpawnId, const struct FString& SpawnerUuid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.StaticSpawnerDestroyEnemy2"));

	UEventAPI_StaticSpawnerDestroyEnemy2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Enemy = Enemy;
	params.Spawner = Spawner;
	params.EnemySpawnId = EnemySpawnId;
	params.SpawnerUuid = SpawnerUuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.StaticSpawnerDeactivate2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Spawner                        (Parm, ZeroConstructor)
// struct FString                 SpawnerUuid                    (Parm, ZeroConstructor)

void UEventAPI::STATIC_StaticSpawnerDeactivate2(class UObject* WorldContextObject, const struct FVector& Location, const struct FString& Spawner, const struct FString& SpawnerUuid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.StaticSpawnerDeactivate2"));

	UEventAPI_StaticSpawnerDeactivate2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Spawner = Spawner;
	params.SpawnerUuid = SpawnerUuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.StaticSpawnerCreated2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Spawner                        (Parm, ZeroConstructor)
// struct FString                 SpawnerParent                  (Parm, ZeroConstructor)
// struct FString                 EnemyTable                     (Parm, ZeroConstructor)
// struct FString                 SpawnerUuid                    (Parm, ZeroConstructor)

void UEventAPI::STATIC_StaticSpawnerCreated2(class UObject* WorldContextObject, const struct FVector& Location, const struct FString& Spawner, const struct FString& SpawnerParent, const struct FString& EnemyTable, const struct FString& SpawnerUuid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.StaticSpawnerCreated2"));

	UEventAPI_StaticSpawnerCreated2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Spawner = Spawner;
	params.SpawnerParent = SpawnerParent;
	params.EnemyTable = EnemyTable;
	params.SpawnerUuid = SpawnerUuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.StaticSpawnerActivate2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Spawner                        (Parm, ZeroConstructor)
// struct FString                 SpawnerUuid                    (Parm, ZeroConstructor)

void UEventAPI::STATIC_StaticSpawnerActivate2(class UObject* WorldContextObject, const struct FVector& Location, int64_t Player, const struct FVector& PlayerLocation, const struct FString& Spawner, const struct FString& SpawnerUuid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.StaticSpawnerActivate2"));

	UEventAPI_StaticSpawnerActivate2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Player = Player;
	params.PlayerLocation = PlayerLocation;
	params.Spawner = Spawner;
	params.SpawnerUuid = SpawnerUuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.SoundTrapActivated
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 TrapName                       (Parm, ZeroConstructor)
// float                          ElevationChangedTime           (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_SoundTrapActivated(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& TrapName, float ElevationChangedTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.SoundTrapActivated"));

	UEventAPI_SoundTrapActivated_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TrapName = TrapName;
	params.ElevationChangedTime = ElevationChangedTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.SessionModifier
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int64_t>                ModifierIds                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEventAPI::STATIC_SessionModifier(class UObject* WorldContextObject, TArray<int64_t> ModifierIds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.SessionModifier"));

	UEventAPI_SessionModifier_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ModifierIds = ModifierIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ServerShutdown
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)

void UEventAPI::STATIC_ServerShutdown(class UObject* WorldContextObject, const struct FString& Reason)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ServerShutdown"));

	UEventAPI_ServerShutdown_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ServerPerformance2
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Frametimes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          TotalSaturatedConnections      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            NumBadFrams                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            StartingFrameNum               (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_ServerPerformance2(class UObject* WorldContextObject, TArray<unsigned char> Frametimes, TArray<unsigned char> TotalSaturatedConnections, int NumBadFrams, int StartingFrameNum)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ServerPerformance2"));

	UEventAPI_ServerPerformance2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Frametimes = Frametimes;
	params.TotalSaturatedConnections = TotalSaturatedConnections;
	params.NumBadFrams = NumBadFrams;
	params.StartingFrameNum = StartingFrameNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ServerPerformance
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Frametimes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            NumBadFrams                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            StartingFrameNum               (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_ServerPerformance(class UObject* WorldContextObject, TArray<unsigned char> Frametimes, int NumBadFrams, int StartingFrameNum)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ServerPerformance"));

	UEventAPI_ServerPerformance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Frametimes = Frametimes;
	params.NumBadFrams = NumBadFrams;
	params.StartingFrameNum = StartingFrameNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ServerManifest
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ServerManifestId               (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_ServerManifest(class UObject* WorldContextObject, int64_t ServerManifestId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ServerManifest"));

	UEventAPI_ServerManifest_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ServerManifestId = ServerManifestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ServerAgonesReady
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        UnrealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_ServerAgonesReady(class UObject* WorldContextObject, int64_t UnrealTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ServerAgonesReady"));

	UEventAPI_ServerAgonesReady_Params params;
	params.WorldContextObject = WorldContextObject;
	params.UnrealTime = UnrealTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.RoundWin
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            WinReason                      (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_RoundWin(class UObject* WorldContextObject, int64_t Player, int WinReason)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.RoundWin"));

	UEventAPI_RoundWin_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.WinReason = WinReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.RoundStarted
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        UnrealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_RoundStarted(class UObject* WorldContextObject, int64_t UnrealTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.RoundStarted"));

	UEventAPI_RoundStarted_Params params;
	params.WorldContextObject = WorldContextObject;
	params.UnrealTime = UnrealTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.RoundDefeat
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            DefeatReason                   (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_RoundDefeat(class UObject* WorldContextObject, int64_t Player, int DefeatReason)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.RoundDefeat"));

	UEventAPI_RoundDefeat_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.DefeatReason = DefeatReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.RoundCompleted
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        UnrealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_RoundCompleted(class UObject* WorldContextObject, int64_t UnrealTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.RoundCompleted"));

	UEventAPI_RoundCompleted_Params params;
	params.WorldContextObject = WorldContextObject;
	params.UnrealTime = UnrealTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ProjectileValidationFailed
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayerPing                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetPlayerPing               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AimingLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ActorLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PelvisLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bIsCrouching                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)
// float                          FailingValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_ProjectileValidationFailed(class UObject* WorldContextObject, int64_t Player, int64_t TargetPlayer, float PlayerPing, float TargetPlayerPing, const struct FVector& AimingLocation, const struct FVector& ActorLocation, const struct FVector& HitLocation, const struct FVector& PelvisLocation, bool bIsCrouching, const struct FString& Reason, float FailingValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ProjectileValidationFailed"));

	UEventAPI_ProjectileValidationFailed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.TargetPlayer = TargetPlayer;
	params.PlayerPing = PlayerPing;
	params.TargetPlayerPing = TargetPlayerPing;
	params.AimingLocation = AimingLocation;
	params.ActorLocation = ActorLocation;
	params.HitLocation = HitLocation;
	params.PelvisLocation = PelvisLocation;
	params.bIsCrouching = bIsCrouching;
	params.Reason = Reason;
	params.FailingValue = FailingValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerSurrender
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_PlayerSurrender(class UObject* WorldContextObject, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerSurrender"));

	UEventAPI_PlayerSurrender_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerStateChange
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            OldState                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_PlayerStateChange(class UObject* WorldContextObject, int64_t Player, int OldState, int NewState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerStateChange"));

	UEventAPI_PlayerStateChange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerSpawn4
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        SquadId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Squad                          (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        CharacterId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Difficulty                     (Parm, ZeroConstructor)
// struct FString                 GameMap                        (Parm, ZeroConstructor)
// struct FString                 MapLocation                    (Parm, ZeroConstructor)

void UEventAPI::STATIC_PlayerSpawn4(class UObject* WorldContextObject, int64_t Player, int64_t SquadId, const struct FString& Squad, const struct FVector& Location, int64_t CharacterId, const struct FString& Difficulty, const struct FString& GameMap, const struct FString& MapLocation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerSpawn4"));

	UEventAPI_PlayerSpawn4_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.SquadId = SquadId;
	params.Squad = Squad;
	params.Location = Location;
	params.CharacterId = CharacterId;
	params.Difficulty = Difficulty;
	params.GameMap = GameMap;
	params.MapLocation = MapLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerSpawn3
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        SquadId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Squad                          (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        CharacterId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Difficulty                     (Parm, ZeroConstructor)
// struct FString                 MapName                        (Parm, ZeroConstructor)

void UEventAPI::STATIC_PlayerSpawn3(class UObject* WorldContextObject, int64_t Player, int64_t SquadId, const struct FString& Squad, const struct FVector& Location, int64_t CharacterId, const struct FString& Difficulty, const struct FString& MapName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerSpawn3"));

	UEventAPI_PlayerSpawn3_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.SquadId = SquadId;
	params.Squad = Squad;
	params.Location = Location;
	params.CharacterId = CharacterId;
	params.Difficulty = Difficulty;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerRevive2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          TargetHealTaken                (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetDbnoHealth               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemUsed                       (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_PlayerRevive2(class UObject* WorldContextObject, int64_t Player, int64_t TargetPlayer, const struct FVector& TargetLocation, float TargetHealTaken, float TargetDbnoHealth, const struct FString& ItemUsed, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerRevive2"));

	UEventAPI_PlayerRevive2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;
	params.TargetHealTaken = TargetHealTaken;
	params.TargetDbnoHealth = TargetDbnoHealth;
	params.ItemUsed = ItemUsed;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerPosition5
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Stance                         (Parm, ZeroConstructor)
// struct FString                 MovementMode                   (Parm, ZeroConstructor)
// struct FVector                 ForwardVector                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Stamina                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Health                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ArmorHealth                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ArmorMitigationValue           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ArmorType                      (Parm, ZeroConstructor)
// int                            UsedLoadoutSlots               (Parm, ZeroConstructor, IsPlainOldData)
// int                            UsedBackpackSlots              (Parm, ZeroConstructor, IsPlainOldData)
// int                            UsedBeltSlots                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            UsedSafePocketSlots            (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_PlayerPosition5(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& Stance, const struct FString& MovementMode, const struct FVector& ForwardVector, const struct FVector& Velocity, float Stamina, float Weight, float Health, float ArmorHealth, float ArmorMitigationValue, const struct FString& ArmorType, int UsedLoadoutSlots, int UsedBackpackSlots, int UsedBeltSlots, int UsedSafePocketSlots)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerPosition5"));

	UEventAPI_PlayerPosition5_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.Stance = Stance;
	params.MovementMode = MovementMode;
	params.ForwardVector = ForwardVector;
	params.Velocity = Velocity;
	params.Stamina = Stamina;
	params.Weight = Weight;
	params.Health = Health;
	params.ArmorHealth = ArmorHealth;
	params.ArmorMitigationValue = ArmorMitigationValue;
	params.ArmorType = ArmorType;
	params.UsedLoadoutSlots = UsedLoadoutSlots;
	params.UsedBackpackSlots = UsedBackpackSlots;
	params.UsedBeltSlots = UsedBeltSlots;
	params.UsedSafePocketSlots = UsedSafePocketSlots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ForwardVector                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_PlayerPosition(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FVector& ForwardVector, const struct FVector& Velocity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerPosition"));

	UEventAPI_PlayerPosition_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.ForwardVector = ForwardVector;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerNetworkLatency
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          NetworkLatency                 (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_PlayerNetworkLatency(class UObject* WorldContextObject, int64_t Player, float NetworkLatency)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerNetworkLatency"));

	UEventAPI_PlayerNetworkLatency_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.NetworkLatency = NetworkLatency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerInitialized
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_PlayerInitialized(class UObject* WorldContextObject, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerInitialized"));

	UEventAPI_PlayerInitialized_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerHeal2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          HealTaken                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          HealthAfter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ItemUsed                       (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_PlayerHeal2(class UObject* WorldContextObject, int64_t Player, int64_t TargetPlayer, int64_t ItemId, float HealTaken, float HealthAfter, const struct FVector& TargetLocation, const struct FString& ItemUsed, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerHeal2"));

	UEventAPI_PlayerHeal2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.TargetPlayer = TargetPlayer;
	params.ItemId = ItemId;
	params.HealTaken = HealTaken;
	params.HealthAfter = HealthAfter;
	params.TargetLocation = TargetLocation;
	params.ItemUsed = ItemUsed;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerExtractionStarted
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ExtractionPointName            (Parm, ZeroConstructor)
// struct FString                 ExtractionPointType            (Parm, ZeroConstructor)
// int                            ExtractionCycle                (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_PlayerExtractionStarted(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& ExtractionPointName, const struct FString& ExtractionPointType, int ExtractionCycle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerExtractionStarted"));

	UEventAPI_PlayerExtractionStarted_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.ExtractionPointName = ExtractionPointName;
	params.ExtractionPointType = ExtractionPointType;
	params.ExtractionCycle = ExtractionCycle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerExtractionFinalized
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ExtractionPointName            (Parm, ZeroConstructor)
// struct FString                 ExtractionPointType            (Parm, ZeroConstructor)
// int                            ExtractionCycle                (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_PlayerExtractionFinalized(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& ExtractionPointName, const struct FString& ExtractionPointType, int ExtractionCycle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerExtractionFinalized"));

	UEventAPI_PlayerExtractionFinalized_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.ExtractionPointName = ExtractionPointName;
	params.ExtractionPointType = ExtractionPointType;
	params.ExtractionCycle = ExtractionCycle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerExtractionCanceled
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ExtractionPointName            (Parm, ZeroConstructor)
// struct FString                 ExtractionPointType            (Parm, ZeroConstructor)
// int                            ExtractionCycle                (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_PlayerExtractionCanceled(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& ExtractionPointName, const struct FString& ExtractionPointType, int ExtractionCycle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerExtractionCanceled"));

	UEventAPI_PlayerExtractionCanceled_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.ExtractionPointName = ExtractionPointName;
	params.ExtractionPointType = ExtractionPointType;
	params.ExtractionCycle = ExtractionCycle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerDisconnect
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_PlayerDisconnect(class UObject* WorldContextObject, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerDisconnect"));

	UEventAPI_PlayerDisconnect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerDie
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_PlayerDie(class UObject* WorldContextObject, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerDie"));

	UEventAPI_PlayerDie_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerDamagePlayer2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          HealthBefore                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          HealthAfter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DamageCauser                   (Parm, ZeroConstructor)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDbno                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BoneHit                        (Parm, ZeroConstructor)

void UEventAPI::STATIC_PlayerDamagePlayer2(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, float HealthBefore, float HealthAfter, const struct FString& DamageCauser, int64_t GameAssetId, bool bIsDbno, const struct FString& BoneHit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerDamagePlayer2"));

	UEventAPI_PlayerDamagePlayer2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;
	params.HealthBefore = HealthBefore;
	params.HealthAfter = HealthAfter;
	params.DamageCauser = DamageCauser;
	params.GameAssetId = GameAssetId;
	params.bIsDbno = bIsDbno;
	params.BoneHit = BoneHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerConnectTelemetry
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_PlayerConnectTelemetry(class UObject* WorldContextObject, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerConnectTelemetry"));

	UEventAPI_PlayerConnectTelemetry_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.PlayerConnect3
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ManifestId                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ClientUuid                     (Parm, ZeroConstructor)
// int64_t                        ClientPlatform                 (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_PlayerConnect3(class UObject* WorldContextObject, int64_t Player, int64_t ManifestId, const struct FString& ClientUuid, int64_t ClientPlatform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.PlayerConnect3"));

	UEventAPI_PlayerConnect3_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.ManifestId = ManifestId;
	params.ClientUuid = ClientUuid;
	params.ClientPlatform = ClientPlatform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.Pinging
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PingIntent                     (Parm, ZeroConstructor)
// struct FString                 PingTagname                    (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PingLocation                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_Pinging(class UObject* WorldContextObject, int64_t Player, const struct FString& PingIntent, const struct FString& PingTagname, const struct FVector& Location, const struct FVector& PingLocation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.Pinging"));

	UEventAPI_Pinging_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.PingIntent = PingIntent;
	params.PingTagname = PingTagname;
	params.Location = Location;
	params.PingLocation = PingLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.OnlineTelemetry
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void UEventAPI::STATIC_OnlineTelemetry(class UObject* WorldContextObject, int64_t Player, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.OnlineTelemetry"));

	UEventAPI_OnlineTelemetry_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.MoveItem
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceId                     (Parm, ZeroConstructor)
// struct FString                 PreviousContainer              (Parm, ZeroConstructor)
// struct FString                 NewContainer                   (Parm, ZeroConstructor)

void UEventAPI::STATIC_MoveItem(class UObject* WorldContextObject, int64_t Player, int64_t Amount, const struct FVector& Location, int64_t GameAssetId, const struct FString& InstanceId, const struct FString& PreviousContainer, const struct FString& NewContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.MoveItem"));

	UEventAPI_MoveItem_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Amount = Amount;
	params.Location = Location;
	params.GameAssetId = GameAssetId;
	params.InstanceId = InstanceId;
	params.PreviousContainer = PreviousContainer;
	params.NewContainer = NewContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.MLAgentMovement
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Enemy                          (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 MoveToLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 FocusOnLocation                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          MoveToDeltaAngle               (Parm, ZeroConstructor, IsPlainOldData)
// float                          FocusOnDeltaAngle              (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetSpeed                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetTurnSpeed                (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_MLAgentMovement(class UObject* WorldContextObject, const struct FString& Enemy, const struct FVector& Location, const struct FVector& MoveToLocation, const struct FVector& FocusOnLocation, float MoveToDeltaAngle, float FocusOnDeltaAngle, float TargetSpeed, float TargetTurnSpeed, int64_t EnemyId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.MLAgentMovement"));

	UEventAPI_MLAgentMovement_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Enemy = Enemy;
	params.Location = Location;
	params.MoveToLocation = MoveToLocation;
	params.FocusOnLocation = FocusOnLocation;
	params.MoveToDeltaAngle = MoveToDeltaAngle;
	params.FocusOnDeltaAngle = FocusOnDeltaAngle;
	params.TargetSpeed = TargetSpeed;
	params.TargetTurnSpeed = TargetTurnSpeed;
	params.EnemyId = EnemyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.MissedInput
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_MissedInput(class UObject* WorldContextObject, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.MissedInput"));

	UEventAPI_MissedInput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.MeleeSwingStart
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SwingTag                       (Parm, ZeroConstructor)
// struct FString                 AttackTag                      (Parm, ZeroConstructor)

void UEventAPI::STATIC_MeleeSwingStart(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t GameAssetId, const struct FString& SwingTag, const struct FString& AttackTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.MeleeSwingStart"));

	UEventAPI_MeleeSwingStart_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.GameAssetId = GameAssetId;
	params.SwingTag = SwingTag;
	params.AttackTag = AttackTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.MeleeSwingEnd
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SwingTag                       (Parm, ZeroConstructor)
// struct FString                 AttackTag                      (Parm, ZeroConstructor)

void UEventAPI::STATIC_MeleeSwingEnd(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t GameAssetId, const struct FString& SwingTag, const struct FString& AttackTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.MeleeSwingEnd"));

	UEventAPI_MeleeSwingEnd_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.GameAssetId = GameAssetId;
	params.SwingTag = SwingTag;
	params.AttackTag = AttackTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.MeleeLounge
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SwingTag                       (Parm, ZeroConstructor)
// struct FString                 AttackTag                      (Parm, ZeroConstructor)

void UEventAPI::STATIC_MeleeLounge(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t GameAssetId, const struct FString& SwingTag, const struct FString& AttackTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.MeleeLounge"));

	UEventAPI_MeleeLounge_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.GameAssetId = GameAssetId;
	params.SwingTag = SwingTag;
	params.AttackTag = AttackTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.MeleeHit
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SwingTag                       (Parm, ZeroConstructor)
// struct FString                 AttackTag                      (Parm, ZeroConstructor)

void UEventAPI::STATIC_MeleeHit(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, int64_t GameAssetId, const struct FString& SwingTag, const struct FString& AttackTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.MeleeHit"));

	UEventAPI_MeleeHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;
	params.GameAssetId = GameAssetId;
	params.SwingTag = SwingTag;
	params.AttackTag = AttackTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.MatchmakingScenario
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ScenarioId                     (Parm, ZeroConstructor)

void UEventAPI::STATIC_MatchmakingScenario(class UObject* WorldContextObject, const struct FString& ScenarioId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.MatchmakingScenario"));

	UEventAPI_MatchmakingScenario_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScenarioId = ScenarioId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.MatchId
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MatchId                        (Parm, ZeroConstructor)

void UEventAPI::STATIC_MatchId(class UObject* WorldContextObject, const struct FString& MatchId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.MatchId"));

	UEventAPI_MatchId_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MatchId = MatchId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.LootSpawn
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        SourceId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Source                         (Parm, ZeroConstructor)
// int64_t                        ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ItemType                       (Parm, ZeroConstructor)
// struct FString                 Rarity                         (Parm, ZeroConstructor)

void UEventAPI::STATIC_LootSpawn(class UObject* WorldContextObject, int64_t SourceId, const struct FString& Source, int64_t ItemId, const struct FVector& Location, const struct FString& ItemType, const struct FString& Rarity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.LootSpawn"));

	UEventAPI_LootSpawn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SourceId = SourceId;
	params.Source = Source;
	params.ItemId = ItemId;
	params.Location = Location;
	params.ItemType = ItemType;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.LootCrateSpawn
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rarity                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 LootCrate                      (Parm, ZeroConstructor)

void UEventAPI::STATIC_LootCrateSpawn(class UObject* WorldContextObject, int Rarity, const struct FVector& Location, const struct FString& LootCrate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.LootCrateSpawn"));

	UEventAPI_LootCrateSpawn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Rarity = Rarity;
	params.Location = Location;
	params.LootCrate = LootCrate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.LootCrateOpen2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rarity                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 LootCrate                      (Parm, ZeroConstructor)

void UEventAPI::STATIC_LootCrateOpen2(class UObject* WorldContextObject, int64_t Player, int Rarity, const struct FVector& Location, const struct FString& LootCrate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.LootCrateOpen2"));

	UEventAPI_LootCrateOpen2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Rarity = Rarity;
	params.Location = Location;
	params.LootCrate = LootCrate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.LightingConditionSet
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LightingCondition              (Parm, ZeroConstructor)
// bool                           bOverridden                    (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_LightingConditionSet(class UObject* WorldContextObject, const struct FString& LightingCondition, bool bOverridden)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.LightingConditionSet"));

	UEventAPI_LightingConditionSet_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LightingCondition = LightingCondition;
	params.bOverridden = bOverridden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.KillStealer
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            TransferPointId                (Parm, ZeroConstructor, IsPlainOldData)
// int                            Cash                           (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_KillStealer(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, int TransferPointId, int Cash)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.KillStealer"));

	UEventAPI_KillStealer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;
	params.TransferPointId = TransferPointId;
	params.Cash = Cash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.KillBoxCarrier
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            TicketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Cash                           (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_KillBoxCarrier(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, int TicketIndex, int Cash)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.KillBoxCarrier"));

	UEventAPI_KillBoxCarrier_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;
	params.TicketIndex = TicketIndex;
	params.Cash = Cash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ItemUsed
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)

void UEventAPI::STATIC_ItemUsed(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t GameAssetId, const struct FString& Name)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ItemUsed"));

	UEventAPI_ItemUsed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.GameAssetId = GameAssetId;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ItemInventoryChange6
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemType                       (Parm, ZeroConstructor)
// struct FString                 Rarity                         (Parm, ZeroConstructor)
// int                            Tier                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemSource                     (Parm, ZeroConstructor)
// int                            AmountBefore                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmountAfter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceId                     (Parm, ZeroConstructor)
// struct FString                 Container                      (Parm, ZeroConstructor)
// int                            StackValue                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemValue                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int64_t>                WeaponModAssets                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEventAPI::STATIC_ItemInventoryChange6(class UObject* WorldContextObject, int64_t Player, const struct FString& ItemType, const struct FString& Rarity, int Tier, const struct FString& ItemSource, int AmountBefore, int AmountAfter, const struct FVector& Location, int64_t ItemId, const struct FString& InstanceId, const struct FString& Container, int StackValue, int ItemValue, TArray<int64_t> WeaponModAssets)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ItemInventoryChange6"));

	UEventAPI_ItemInventoryChange6_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.ItemType = ItemType;
	params.Rarity = Rarity;
	params.Tier = Tier;
	params.ItemSource = ItemSource;
	params.AmountBefore = AmountBefore;
	params.AmountAfter = AmountAfter;
	params.Location = Location;
	params.ItemId = ItemId;
	params.InstanceId = InstanceId;
	params.Container = Container;
	params.StackValue = StackValue;
	params.ItemValue = ItemValue;
	params.WeaponModAssets = WeaponModAssets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ItemInventoryChange5
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemType                       (Parm, ZeroConstructor)
// struct FString                 Rarity                         (Parm, ZeroConstructor)
// int                            Tier                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemSource                     (Parm, ZeroConstructor)
// int64_t                        AmountBefore                   (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        AmountAfter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceId                     (Parm, ZeroConstructor)
// struct FString                 Container                      (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int64_t>                WeaponModAssets                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEventAPI::STATIC_ItemInventoryChange5(class UObject* WorldContextObject, int64_t Player, const struct FString& ItemType, const struct FString& Rarity, int Tier, const struct FString& ItemSource, int64_t AmountBefore, int64_t AmountAfter, const struct FVector& Location, int64_t ItemId, const struct FString& InstanceId, const struct FString& Container, int Value, TArray<int64_t> WeaponModAssets)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ItemInventoryChange5"));

	UEventAPI_ItemInventoryChange5_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.ItemType = ItemType;
	params.Rarity = Rarity;
	params.Tier = Tier;
	params.ItemSource = ItemSource;
	params.AmountBefore = AmountBefore;
	params.AmountAfter = AmountAfter;
	params.Location = Location;
	params.ItemId = ItemId;
	params.InstanceId = InstanceId;
	params.Container = Container;
	params.Value = Value;
	params.WeaponModAssets = WeaponModAssets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ItemEquipped
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemName                       (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 EquipMethod                    (Parm, ZeroConstructor)
// int64_t                        ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_ItemEquipped(class UObject* WorldContextObject, int64_t Player, const struct FString& ItemName, const struct FVector& Location, const struct FString& EquipMethod, int64_t ItemId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ItemEquipped"));

	UEventAPI_ItemEquipped_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.ItemName = ItemName;
	params.Location = Location;
	params.EquipMethod = EquipMethod;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.InputMethodChanged
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InputDevice                    (Parm, ZeroConstructor)

void UEventAPI::STATIC_InputMethodChanged(class UObject* WorldContextObject, int64_t Player, const struct FString& InputDevice)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.InputMethodChanged"));

	UEventAPI_InputMethodChanged_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.InputDevice = InputDevice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.InputBufferOverflow
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_InputBufferOverflow(class UObject* WorldContextObject, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.InputBufferOverflow"));

	UEventAPI_InputBufferOverflow_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.HitscanValidationFailed
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayerPing                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetPlayerPing               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AimingLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ActorLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 PelvisLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bIsCrouching                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)
// float                          FailingValue                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ExtraContext                   (Parm, ZeroConstructor)

void UEventAPI::STATIC_HitscanValidationFailed(class UObject* WorldContextObject, int64_t Player, int64_t TargetPlayer, float PlayerPing, float TargetPlayerPing, const struct FVector& AimingLocation, const struct FVector& ActorLocation, const struct FVector& HitLocation, const struct FVector& PelvisLocation, bool bIsCrouching, const struct FString& Reason, float FailingValue, const struct FString& ExtraContext)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.HitscanValidationFailed"));

	UEventAPI_HitscanValidationFailed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.TargetPlayer = TargetPlayer;
	params.PlayerPing = PlayerPing;
	params.TargetPlayerPing = TargetPlayerPing;
	params.AimingLocation = AimingLocation;
	params.ActorLocation = ActorLocation;
	params.HitLocation = HitLocation;
	params.PelvisLocation = PelvisLocation;
	params.bIsCrouching = bIsCrouching;
	params.Reason = Reason;
	params.FailingValue = FailingValue;
	params.ExtraContext = ExtraContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.HealthChange3
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          HealthBefore                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          HealthAfter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DamageCauser                   (Parm, ZeroConstructor)
// bool                           bIsDbno                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BoneHit                        (Parm, ZeroConstructor)

void UEventAPI::STATIC_HealthChange3(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, float HealthBefore, float HealthAfter, const struct FString& DamageCauser, bool bIsDbno, const struct FString& BoneHit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.HealthChange3"));

	UEventAPI_HealthChange3_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.HealthBefore = HealthBefore;
	params.HealthAfter = HealthAfter;
	params.DamageCauser = DamageCauser;
	params.bIsDbno = bIsDbno;
	params.BoneHit = BoneHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.GameplayOver
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        UnrealTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_GameplayOver(class UObject* WorldContextObject, int64_t UnrealTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.GameplayOver"));

	UEventAPI_GameplayOver_Params params;
	params.WorldContextObject = WorldContextObject;
	params.UnrealTime = UnrealTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.GameModeEnd
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)

void UEventAPI::STATIC_GameModeEnd(class UObject* WorldContextObject, const struct FString& Reason)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.GameModeEnd"));

	UEventAPI_GameModeEnd_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.GameMode2
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Mode                           (Parm, ZeroConstructor)
// struct FString                 Difficulty                     (Parm, ZeroConstructor)
// struct FString                 Severity                       (Parm, ZeroConstructor)
// struct FString                 LocationTag                    (Parm, ZeroConstructor)

void UEventAPI::STATIC_GameMode2(class UObject* WorldContextObject, const struct FString& Mode, const struct FString& Difficulty, const struct FString& Severity, const struct FString& LocationTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.GameMode2"));

	UEventAPI_GameMode2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Mode = Mode;
	params.Difficulty = Difficulty;
	params.Severity = Severity;
	params.LocationTag = LocationTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.FoundStartLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PointName                      (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          NearestEnemySquared            (Parm, ZeroConstructor, IsPlainOldData)
// float                          NearestObjectiveSquared        (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_FoundStartLocation(class UObject* WorldContextObject, int64_t Player, const struct FString& PointName, const struct FVector& Location, float NearestEnemySquared, float NearestObjectiveSquared)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.FoundStartLocation"));

	UEventAPI_FoundStartLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.PointName = PointName;
	params.Location = Location;
	params.NearestEnemySquared = NearestEnemySquared;
	params.NearestObjectiveSquared = NearestObjectiveSquared;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.FallDamage
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          HealthBefore                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          HealthAfter                    (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_FallDamage(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, float DamageTaken, float HealthBefore, float HealthAfter)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.FallDamage"));

	UEventAPI_FallDamage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.DamageTaken = DamageTaken;
	params.HealthBefore = HealthBefore;
	params.HealthAfter = HealthAfter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ExtractionTimerStarted
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            ExtractionCycle                (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_ExtractionTimerStarted(class UObject* WorldContextObject, const struct FString& Name, int ExtractionCycle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ExtractionTimerStarted"));

	UEventAPI_ExtractionTimerStarted_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Name = Name;
	params.ExtractionCycle = ExtractionCycle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ExtractionFinalized
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            PlayerAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ExtractionCycle                (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_ExtractionFinalized(class UObject* WorldContextObject, const struct FString& Name, int PlayerAmount, int ExtractionCycle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ExtractionFinalized"));

	UEventAPI_ExtractionFinalized_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Name = Name;
	params.PlayerAmount = PlayerAmount;
	params.ExtractionCycle = ExtractionCycle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ExtractedInventorySlot2
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceId                     (Parm, ZeroConstructor)
// struct FString                 Container                      (Parm, ZeroConstructor)
// int64_t                        Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_ExtractedInventorySlot2(class UObject* WorldContextObject, int64_t Player, int64_t Amount, int64_t GameAssetId, const struct FString& InstanceId, const struct FString& Container, int64_t Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ExtractedInventorySlot2"));

	UEventAPI_ExtractedInventorySlot2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Amount = Amount;
	params.GameAssetId = GameAssetId;
	params.InstanceId = InstanceId;
	params.Container = Container;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ExtractedInventorySlot
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceId                     (Parm, ZeroConstructor)
// struct FString                 Container                      (Parm, ZeroConstructor)

void UEventAPI::STATIC_ExtractedInventorySlot(class UObject* WorldContextObject, int64_t Player, int64_t Amount, int64_t GameAssetId, const struct FString& InstanceId, const struct FString& Container)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ExtractedInventorySlot"));

	UEventAPI_ExtractedInventorySlot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Amount = Amount;
	params.GameAssetId = GameAssetId;
	params.InstanceId = InstanceId;
	params.Container = Container;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ExpectedPlayersProxy
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int64_t>                ExpectedPlayerIds              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEventAPI::STATIC_ExpectedPlayersProxy(class UObject* WorldContextObject, int64_t Amount, TArray<int64_t> ExpectedPlayerIds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ExpectedPlayersProxy"));

	UEventAPI_ExpectedPlayersProxy_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Amount = Amount;
	params.ExpectedPlayerIds = ExpectedPlayerIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EOSProductUserId
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ProductUserId                  (Parm, ZeroConstructor)

void UEventAPI::STATIC_EOSProductUserId(class UObject* WorldContextObject, int64_t Player, const struct FString& ProductUserId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EOSProductUserId"));

	UEventAPI_EOSProductUserId_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.ProductUserId = ProductUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyWeaponFired2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Weapon                         (Parm, ZeroConstructor)
// struct FString                 ProjectileClass                (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Direction                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Enemy                          (Parm, ZeroConstructor)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        TargetGameAssetId              (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_EnemyWeaponFired2(class UObject* WorldContextObject, const struct FString& Weapon, const struct FString& ProjectileClass, const struct FVector& Location, const struct FVector& Direction, const struct FString& Enemy, int64_t EnemyId, int64_t TargetPlayer, int64_t TargetGameAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyWeaponFired2"));

	UEventAPI_EnemyWeaponFired2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Weapon = Weapon;
	params.ProjectileClass = ProjectileClass;
	params.Location = Location;
	params.Direction = Direction;
	params.Enemy = Enemy;
	params.EnemyId = EnemyId;
	params.TargetPlayer = TargetPlayer;
	params.TargetGameAssetId = TargetGameAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyWeaponFired
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Weapon                         (Parm, ZeroConstructor)
// struct FString                 ProjectileClass                (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Direction                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Enemy                          (Parm, ZeroConstructor)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        TargetPlayerId                 (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        TargetGameAssetId              (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_EnemyWeaponFired(class UObject* WorldContextObject, const struct FString& Weapon, const struct FString& ProjectileClass, const struct FVector& Location, const struct FVector& Direction, const struct FString& Enemy, int64_t EnemyId, int64_t TargetPlayerId, int64_t TargetGameAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyWeaponFired"));

	UEventAPI_EnemyWeaponFired_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Weapon = Weapon;
	params.ProjectileClass = ProjectileClass;
	params.Location = Location;
	params.Direction = Direction;
	params.Enemy = Enemy;
	params.EnemyId = EnemyId;
	params.TargetPlayerId = TargetPlayerId;
	params.TargetGameAssetId = TargetGameAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemySpawned3
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Enemy                          (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        GroupId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        EnemySpawnId                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Alertness                      (Parm, ZeroConstructor)

void UEventAPI::STATIC_EnemySpawned3(class UObject* WorldContextObject, const struct FString& Enemy, const struct FVector& Location, int64_t GroupId, int64_t EnemyId, int64_t EnemySpawnId, const struct FString& Alertness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemySpawned3"));

	UEventAPI_EnemySpawned3_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Enemy = Enemy;
	params.Location = Location;
	params.GroupId = GroupId;
	params.EnemyId = EnemyId;
	params.EnemySpawnId = EnemySpawnId;
	params.Alertness = Alertness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemySpawned2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Enemy                          (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        GroupId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        EnemySpawnId                   (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_EnemySpawned2(class UObject* WorldContextObject, const struct FString& Enemy, const struct FVector& Location, int64_t GroupId, int64_t EnemyId, int64_t EnemySpawnId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemySpawned2"));

	UEventAPI_EnemySpawned2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Enemy = Enemy;
	params.Location = Location;
	params.GroupId = GroupId;
	params.EnemyId = EnemyId;
	params.EnemySpawnId = EnemySpawnId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyScavengeLooted
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ScavengeName                   (Parm, ZeroConstructor)

void UEventAPI::STATIC_EnemyScavengeLooted(class UObject* WorldContextObject, const struct FString& ScavengeName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyScavengeLooted"));

	UEventAPI_EnemyScavengeLooted_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScavengeName = ScavengeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyScavengeCreated
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ScavengeName                   (Parm, ZeroConstructor)

void UEventAPI::STATIC_EnemyScavengeCreated(class UObject* WorldContextObject, const struct FString& ScavengeName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyScavengeCreated"));

	UEventAPI_EnemyScavengeCreated_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScavengeName = ScavengeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        EnemySpawnId                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ForwardVector                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Enemy                          (Parm, ZeroConstructor)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_EnemyPosition(class UObject* WorldContextObject, int64_t EnemySpawnId, const struct FVector& Location, const struct FVector& ForwardVector, const struct FVector& Velocity, const struct FString& Enemy, int64_t EnemyId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyPosition"));

	UEventAPI_EnemyPosition_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EnemySpawnId = EnemySpawnId;
	params.Location = Location;
	params.ForwardVector = ForwardVector;
	params.Velocity = Velocity;
	params.Enemy = Enemy;
	params.EnemyId = EnemyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyPhysicsKill
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 DamageCauser                   (Parm, ZeroConstructor)
// struct FString                 Target                         (Parm, ZeroConstructor)

void UEventAPI::STATIC_EnemyPhysicsKill(class UObject* WorldContextObject, int64_t EnemyId, const struct FVector& Location, const struct FString& DamageCauser, const struct FString& Target)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyPhysicsKill"));

	UEventAPI_EnemyPhysicsKill_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EnemyId = EnemyId;
	params.Location = Location;
	params.DamageCauser = DamageCauser;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyPhysicsDamage
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PartHit                        (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bIsCriticalPart                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DamageCauser                   (Parm, ZeroConstructor)
// struct FString                 Target                         (Parm, ZeroConstructor)

void UEventAPI::STATIC_EnemyPhysicsDamage(class UObject* WorldContextObject, int64_t EnemyId, float DamageTaken, const struct FString& PartHit, const struct FVector& Location, bool bIsCriticalPart, const struct FString& DamageCauser, const struct FString& Target)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyPhysicsDamage"));

	UEventAPI_EnemyPhysicsDamage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EnemyId = EnemyId;
	params.DamageTaken = DamageTaken;
	params.PartHit = PartHit;
	params.Location = Location;
	params.bIsCriticalPart = bIsCriticalPart;
	params.DamageCauser = DamageCauser;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyKill2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ProjectileId                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 DamageCauser                   (Parm, ZeroConstructor)
// struct FString                 Target                         (Parm, ZeroConstructor)

void UEventAPI::STATIC_EnemyKill2(class UObject* WorldContextObject, int64_t Player, int64_t EnemyId, int64_t WeaponId, int64_t ProjectileId, const struct FVector& Location, const struct FString& DamageCauser, const struct FString& Target)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyKill2"));

	UEventAPI_EnemyKill2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.EnemyId = EnemyId;
	params.WeaponId = WeaponId;
	params.ProjectileId = ProjectileId;
	params.Location = Location;
	params.DamageCauser = DamageCauser;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyEvict2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Enemy                          (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInCombat                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)
// int64_t                        EnemySpawnId                   (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_EnemyEvict2(class UObject* WorldContextObject, const struct FString& Enemy, const struct FVector& Location, int64_t EnemyId, bool bInCombat, const struct FString& Reason, int64_t EnemySpawnId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyEvict2"));

	UEventAPI_EnemyEvict2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Enemy = Enemy;
	params.Location = Location;
	params.EnemyId = EnemyId;
	params.bInCombat = bInCombat;
	params.Reason = Reason;
	params.EnemySpawnId = EnemySpawnId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyDestroyed
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        EnemySpawnId                   (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Target                         (Parm, ZeroConstructor)

void UEventAPI::STATIC_EnemyDestroyed(class UObject* WorldContextObject, int64_t EnemySpawnId, int64_t EnemyId, const struct FVector& Location, const struct FString& Target)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyDestroyed"));

	UEventAPI_EnemyDestroyed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EnemySpawnId = EnemySpawnId;
	params.EnemyId = EnemyId;
	params.Location = Location;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyDamagePlayer2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Enemy                          (Parm, ZeroConstructor)
// struct FVector                 EnemyLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          HealthBefore                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          HealthAfter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DamageCauser                   (Parm, ZeroConstructor)
// bool                           bIsDbno                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BoneHit                        (Parm, ZeroConstructor)

void UEventAPI::STATIC_EnemyDamagePlayer2(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t GameAssetId, const struct FString& Enemy, const struct FVector& EnemyLocation, float HealthBefore, float HealthAfter, const struct FString& DamageCauser, bool bIsDbno, const struct FString& BoneHit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyDamagePlayer2"));

	UEventAPI_EnemyDamagePlayer2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.GameAssetId = GameAssetId;
	params.Enemy = Enemy;
	params.EnemyLocation = EnemyLocation;
	params.HealthBefore = HealthBefore;
	params.HealthAfter = HealthAfter;
	params.DamageCauser = DamageCauser;
	params.bIsDbno = bIsDbno;
	params.BoneHit = BoneHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyDamage2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 DamageCauser                   (Parm, ZeroConstructor)
// int64_t                        WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Weapon                         (Parm, ZeroConstructor)
// int64_t                        ProjectileId                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Target                         (Parm, ZeroConstructor)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        PartID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PartHit                        (Parm, ZeroConstructor)
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCriticalPart                (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_EnemyDamage2(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& DamageCauser, int64_t WeaponId, const struct FString& Weapon, int64_t ProjectileId, const struct FString& Target, const struct FVector& TargetLocation, int64_t EnemyId, int64_t PartID, const struct FString& PartHit, float DamageTaken, bool bIsCriticalPart)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyDamage2"));

	UEventAPI_EnemyDamage2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.DamageCauser = DamageCauser;
	params.WeaponId = WeaponId;
	params.Weapon = Weapon;
	params.ProjectileId = ProjectileId;
	params.Target = Target;
	params.TargetLocation = TargetLocation;
	params.EnemyId = EnemyId;
	params.PartID = PartID;
	params.PartHit = PartHit;
	params.DamageTaken = DamageTaken;
	params.bIsCriticalPart = bIsCriticalPart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyDamage
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ProjectileId                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PartHit                        (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Weapon                         (Parm, ZeroConstructor)
// bool                           bIsCriticalPart                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DamageCauser                   (Parm, ZeroConstructor)
// struct FString                 Target                         (Parm, ZeroConstructor)

void UEventAPI::STATIC_EnemyDamage(class UObject* WorldContextObject, int64_t Player, int64_t EnemyId, int64_t WeaponId, int64_t ProjectileId, float DamageTaken, const struct FString& PartHit, const struct FVector& Location, const struct FString& Weapon, bool bIsCriticalPart, const struct FString& DamageCauser, const struct FString& Target)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyDamage"));

	UEventAPI_EnemyDamage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.EnemyId = EnemyId;
	params.WeaponId = WeaponId;
	params.ProjectileId = ProjectileId;
	params.DamageTaken = DamageTaken;
	params.PartHit = PartHit;
	params.Location = Location;
	params.Weapon = Weapon;
	params.bIsCriticalPart = bIsCriticalPart;
	params.DamageCauser = DamageCauser;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyAlert2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Enemy                          (Parm, ZeroConstructor)
// struct FString                 NewAlertness                   (Parm, ZeroConstructor)
// struct FString                 OldAlertness                   (Parm, ZeroConstructor)
// struct FString                 AlertnessSource                (Parm, ZeroConstructor)
// struct FString                 Sense                          (Parm, ZeroConstructor)
// struct FString                 LastTag                        (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_EnemyAlert2(class UObject* WorldContextObject, const struct FString& Enemy, const struct FString& NewAlertness, const struct FString& OldAlertness, const struct FString& AlertnessSource, const struct FString& Sense, const struct FString& LastTag, const struct FVector& Location, int64_t EnemyId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyAlert2"));

	UEventAPI_EnemyAlert2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Enemy = Enemy;
	params.NewAlertness = NewAlertness;
	params.OldAlertness = OldAlertness;
	params.AlertnessSource = AlertnessSource;
	params.Sense = Sense;
	params.LastTag = LastTag;
	params.Location = Location;
	params.EnemyId = EnemyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.EnemyAbilityActivated
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Enemy                          (Parm, ZeroConstructor)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AbilityTag                     (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_EnemyAbilityActivated(class UObject* WorldContextObject, const struct FString& Enemy, int64_t EnemyId, const struct FString& AbilityTag, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.EnemyAbilityActivated"));

	UEventAPI_EnemyAbilityActivated_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Enemy = Enemy;
	params.EnemyId = EnemyId;
	params.AbilityTag = AbilityTag;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DropItem
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceId                     (Parm, ZeroConstructor)
// struct FString                 Container                      (Parm, ZeroConstructor)

void UEventAPI::STATIC_DropItem(class UObject* WorldContextObject, int64_t Player, int64_t Amount, const struct FVector& Location, int64_t GameAssetId, const struct FString& InstanceId, const struct FString& Container)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DropItem"));

	UEventAPI_DropItem_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Amount = Amount;
	params.Location = Location;
	params.GameAssetId = GameAssetId;
	params.InstanceId = InstanceId;
	params.Container = Container;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DisregardItem
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceId                     (Parm, ZeroConstructor)
// int                            StackSize                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LootContainer                  (Parm, ZeroConstructor)

void UEventAPI::STATIC_DisregardItem(class UObject* WorldContextObject, int64_t PlayerId, int64_t GameAssetId, const struct FString& InstanceId, int StackSize, const struct FString& LootContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DisregardItem"));

	UEventAPI_DisregardItem_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerId = PlayerId;
	params.GameAssetId = GameAssetId;
	params.InstanceId = InstanceId;
	params.StackSize = StackSize;
	params.LootContainer = LootContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DisqualifiedRespawnPoint2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PointName                      (Parm, ZeroConstructor)
// struct FString                 Reason                         (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DistanceSquared                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Ctx                            (Parm, ZeroConstructor)

void UEventAPI::STATIC_DisqualifiedRespawnPoint2(class UObject* WorldContextObject, int64_t Player, const struct FString& PointName, const struct FString& Reason, const struct FVector& Location, float DistanceSquared, const struct FString& Ctx)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DisqualifiedRespawnPoint2"));

	UEventAPI_DisqualifiedRespawnPoint2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.PointName = PointName;
	params.Reason = Reason;
	params.Location = Location;
	params.DistanceSquared = DistanceSquared;
	params.Ctx = Ctx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DisqualifiedRespawnPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PointName                      (Parm, ZeroConstructor)
// struct FString                 Reason                         (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DistanceSquared                (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DisqualifiedRespawnPoint(class UObject* WorldContextObject, int64_t Player, const struct FString& PointName, const struct FString& Reason, const struct FVector& Location, float DistanceSquared)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DisqualifiedRespawnPoint"));

	UEventAPI_DisqualifiedRespawnPoint_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.PointName = PointName;
	params.Reason = Reason;
	params.Location = Location;
	params.DistanceSquared = DistanceSquared;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoXpRewardTelemetry
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        BucketId                       (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventTag                       (Parm, ZeroConstructor)
// int64_t                        ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoXpRewardTelemetry(class UObject* WorldContextObject, int64_t Player, int64_t BucketId, int64_t Amount, const struct FString& EventTag, int64_t ItemId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoXpRewardTelemetry"));

	UEventAPI_DiscoXpRewardTelemetry_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.BucketId = BucketId;
	params.Amount = Amount;
	params.EventTag = EventTag;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoWeaponHitThing2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Weapon                         (Parm, ZeroConstructor)
// int64_t                        WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Target                         (Parm, ZeroConstructor)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_DiscoWeaponHitThing2(class UObject* WorldContextObject, int64_t Player, const struct FString& Weapon, int64_t WeaponId, const struct FString& Target, const struct FVector& TargetLocation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoWeaponHitThing2"));

	UEventAPI_DiscoWeaponHitThing2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Weapon = Weapon;
	params.WeaponId = WeaponId;
	params.Target = Target;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoWeaponHitPlayer3
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Weapon                         (Parm, ZeroConstructor)
// int64_t                        WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bIsEnemy                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsHeadshot                    (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoWeaponHitPlayer3(class UObject* WorldContextObject, int64_t Player, const struct FString& Weapon, int64_t WeaponId, int64_t TargetPlayer, const struct FVector& TargetLocation, bool bIsEnemy, bool bIsHeadshot)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoWeaponHitPlayer3"));

	UEventAPI_DiscoWeaponHitPlayer3_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Weapon = Weapon;
	params.WeaponId = WeaponId;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;
	params.bIsEnemy = bIsEnemy;
	params.bIsHeadshot = bIsHeadshot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoVaultSpawned2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Cash                           (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        VaultIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoVaultSpawned2(class UObject* WorldContextObject, const struct FVector& Location, int Cash, int64_t VaultIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoVaultSpawned2"));

	UEventAPI_DiscoVaultSpawned2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Cash = Cash;
	params.VaultIndex = VaultIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoVaultOpenStarted
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            VaultIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoVaultOpenStarted(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int VaultIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoVaultOpenStarted"));

	UEventAPI_DiscoVaultOpenStarted_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.VaultIndex = VaultIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoVaultOpened
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            VaultIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            CaseAmount                     (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoVaultOpened(class UObject* WorldContextObject, int VaultIndex, const struct FVector& Location, int CaseAmount)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoVaultOpened"));

	UEventAPI_DiscoVaultOpened_Params params;
	params.WorldContextObject = WorldContextObject;
	params.VaultIndex = VaultIndex;
	params.Location = Location;
	params.CaseAmount = CaseAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoUseRespawnCredit
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            RemainingRespawnCredits        (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoUseRespawnCredit(class UObject* WorldContextObject, int64_t Player, int RemainingRespawnCredits)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoUseRespawnCredit"));

	UEventAPI_DiscoUseRespawnCredit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.RemainingRespawnCredits = RemainingRespawnCredits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoUpdatedLoadoutItem
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Item                           (Parm, ZeroConstructor)
// int64_t                        ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LoadoutUpdateId                (Parm, ZeroConstructor)

void UEventAPI::STATIC_DiscoUpdatedLoadoutItem(class UObject* WorldContextObject, int64_t Player, const struct FString& Item, int64_t ItemId, const struct FString& LoadoutUpdateId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoUpdatedLoadoutItem"));

	UEventAPI_DiscoUpdatedLoadoutItem_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Item = Item;
	params.ItemId = ItemId;
	params.LoadoutUpdateId = LoadoutUpdateId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoUIRoundStateChange
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 State                          (Parm, ZeroConstructor)

void UEventAPI::STATIC_DiscoUIRoundStateChange(class UObject* WorldContextObject, const struct FString& State)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoUIRoundStateChange"));

	UEventAPI_DiscoUIRoundStateChange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoTriggerRemoteItem
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ProjectileName                 (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_DiscoTriggerRemoteItem(class UObject* WorldContextObject, int64_t Player, const struct FString& ProjectileName, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoTriggerRemoteItem"));

	UEventAPI_DiscoTriggerRemoteItem_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.ProjectileName = ProjectileName;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoTransferPointSpawned
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            TransferPointId                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_DiscoTransferPointSpawned(class UObject* WorldContextObject, int TransferPointId, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoTransferPointSpawned"));

	UEventAPI_DiscoTransferPointSpawned_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TransferPointId = TransferPointId;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoTransferPointPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            TransferPointId                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_DiscoTransferPointPosition(class UObject* WorldContextObject, int TransferPointId, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoTransferPointPosition"));

	UEventAPI_DiscoTransferPointPosition_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TransferPointId = TransferPointId;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoTransferPointDespawned
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            TransferPointId                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_DiscoTransferPointDespawned(class UObject* WorldContextObject, int TransferPointId, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoTransferPointDespawned"));

	UEventAPI_DiscoTransferPointDespawned_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TransferPointId = TransferPointId;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoTransferCompleted
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            TransferPointId                (Parm, ZeroConstructor, IsPlainOldData)
// int                            Cash                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            SquadIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoTransferCompleted(class UObject* WorldContextObject, const struct FVector& Location, int TransferPointId, int Cash, int SquadIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoTransferCompleted"));

	UEventAPI_DiscoTransferCompleted_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.TransferPointId = TransferPointId;
	params.Cash = Cash;
	params.SquadIndex = SquadIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoTournamentWon
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoTournamentWon(class UObject* WorldContextObject, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoTournamentWon"));

	UEventAPI_DiscoTournamentWon_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoTombstoneRespawn
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_DiscoTombstoneRespawn(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoTombstoneRespawn"));

	UEventAPI_DiscoTombstoneRespawn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoTicketSpawn2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            TicketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Cash                           (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoTicketSpawn2(class UObject* WorldContextObject, int TicketIndex, const struct FVector& Location, int Cash)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoTicketSpawn2"));

	UEventAPI_DiscoTicketSpawn2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TicketIndex = TicketIndex;
	params.Location = Location;
	params.Cash = Cash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoTicketPosition2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            TicketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_DiscoTicketPosition2(class UObject* WorldContextObject, int TicketIndex, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoTicketPosition2"));

	UEventAPI_DiscoTicketPosition2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TicketIndex = TicketIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoTicketPickup2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            TicketIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoTicketPickup2(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int TicketIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoTicketPickup2"));

	UEventAPI_DiscoTicketPickup2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TicketIndex = TicketIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoTicketInserted2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            TicketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            TransferPointId                (Parm, ZeroConstructor, IsPlainOldData)
// int                            Cash                           (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoTicketInserted2(class UObject* WorldContextObject, int64_t Player, int TicketIndex, const struct FVector& Location, int TransferPointId, int Cash)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoTicketInserted2"));

	UEventAPI_DiscoTicketInserted2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.TicketIndex = TicketIndex;
	params.Location = Location;
	params.TransferPointId = TransferPointId;
	params.Cash = Cash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoTicketDrop2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            TicketIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoTicketDrop2(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int TicketIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoTicketDrop2"));

	UEventAPI_DiscoTicketDrop2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TicketIndex = TicketIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoStartTraining
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoStartTraining(class UObject* WorldContextObject, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoStartTraining"));

	UEventAPI_DiscoStartTraining_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoSquadWiped
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoSquadWiped(class UObject* WorldContextObject, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoSquadWiped"));

	UEventAPI_DiscoSquadWiped_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoSquadRoundCurrencyChanged
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            SquadId                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            PreviousRoundCurrency          (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentRoundCurrency           (Parm, ZeroConstructor, IsPlainOldData)
// int                            RoundCurrencyDelta             (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoSquadRoundCurrencyChanged(class UObject* WorldContextObject, int SquadId, int PreviousRoundCurrency, int CurrentRoundCurrency, int RoundCurrencyDelta)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoSquadRoundCurrencyChanged"));

	UEventAPI_DiscoSquadRoundCurrencyChanged_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SquadId = SquadId;
	params.PreviousRoundCurrency = PreviousRoundCurrency;
	params.CurrentRoundCurrency = CurrentRoundCurrency;
	params.RoundCurrencyDelta = RoundCurrencyDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoSelfDamage2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Causer                         (Parm, ZeroConstructor)
// int64_t                        CauserId                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousHealth                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentHealth                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDbno                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DamageTypeTag                  (Parm, ZeroConstructor)
// struct FString                 SourceTag                      (Parm, ZeroConstructor)

void UEventAPI::STATIC_DiscoSelfDamage2(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& Causer, int64_t CauserId, float DamageTaken, float PreviousHealth, float CurrentHealth, int DamageType, bool bIsDbno, const struct FString& DamageTypeTag, const struct FString& SourceTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoSelfDamage2"));

	UEventAPI_DiscoSelfDamage2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.Causer = Causer;
	params.CauserId = CauserId;
	params.DamageTaken = DamageTaken;
	params.PreviousHealth = PreviousHealth;
	params.CurrentHealth = CurrentHealth;
	params.DamageType = DamageType;
	params.bIsDbno = bIsDbno;
	params.DamageTypeTag = DamageTypeTag;
	params.SourceTag = SourceTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoSelfDamage
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Causer                         (Parm, ZeroConstructor)
// int64_t                        CauserId                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousHealth                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentHealth                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDbno                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DamageTypeTag                  (Parm, ZeroConstructor)

void UEventAPI::STATIC_DiscoSelfDamage(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& Causer, int64_t CauserId, float DamageTaken, float PreviousHealth, float CurrentHealth, int DamageType, bool bIsDbno, const struct FString& DamageTypeTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoSelfDamage"));

	UEventAPI_DiscoSelfDamage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.Causer = Causer;
	params.CauserId = CauserId;
	params.DamageTaken = DamageTaken;
	params.PreviousHealth = PreviousHealth;
	params.CurrentHealth = CurrentHealth;
	params.DamageType = DamageType;
	params.bIsDbno = bIsDbno;
	params.DamageTypeTag = DamageTypeTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoSelectedSpray
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoSelectedSpray(class UObject* WorldContextObject, int64_t Player, const struct FString& Name, int64_t GameAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoSelectedSpray"));

	UEventAPI_DiscoSelectedSpray_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Name = Name;
	params.GameAssetId = GameAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoSelectedPose
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PoseType                       (Parm, ZeroConstructor)

void UEventAPI::STATIC_DiscoSelectedPose(class UObject* WorldContextObject, int64_t Player, const struct FString& Name, int64_t GameAssetId, const struct FString& PoseType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoSelectedPose"));

	UEventAPI_DiscoSelectedPose_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Name = Name;
	params.GameAssetId = GameAssetId;
	params.PoseType = PoseType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoRoundCurrencyChanged
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            PreviousRoundCurrency          (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentRoundCurrency           (Parm, ZeroConstructor, IsPlainOldData)
// int                            RoundCurrencyDelta             (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoRoundCurrencyChanged(class UObject* WorldContextObject, int64_t Player, int PreviousRoundCurrency, int CurrentRoundCurrency, int RoundCurrencyDelta)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoRoundCurrencyChanged"));

	UEventAPI_DiscoRoundCurrencyChanged_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.PreviousRoundCurrency = PreviousRoundCurrency;
	params.CurrentRoundCurrency = CurrentRoundCurrency;
	params.RoundCurrencyDelta = RoundCurrencyDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoRespawn
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            RemainingRespawnCredits        (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoRespawn(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int RemainingRespawnCredits)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoRespawn"));

	UEventAPI_DiscoRespawn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.RemainingRespawnCredits = RemainingRespawnCredits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoReserveItem
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Item                           (Parm, ZeroConstructor)
// int64_t                        ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoReserveItem(class UObject* WorldContextObject, int64_t Player, const struct FString& Item, int64_t ItemId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoReserveItem"));

	UEventAPI_DiscoReserveItem_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Item = Item;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoQuestCompleted
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 QuestInstanceId                (Parm, ZeroConstructor)
// int64_t                        QuestAssetId                   (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoQuestCompleted(class UObject* WorldContextObject, int64_t Player, const struct FString& QuestInstanceId, int64_t QuestAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoQuestCompleted"));

	UEventAPI_DiscoQuestCompleted_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.QuestInstanceId = QuestInstanceId;
	params.QuestAssetId = QuestAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoPreLoginEvent
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsAllowedToConnect            (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoPreLoginEvent(class UObject* WorldContextObject, int64_t Player, bool bIsAllowedToConnect)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoPreLoginEvent"));

	UEventAPI_DiscoPreLoginEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.bIsAllowedToConnect = bIsAllowedToConnect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoPlayerStartSteal
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            TransferPointId                (Parm, ZeroConstructor, IsPlainOldData)
// int                            Cash                           (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoPlayerStartSteal(class UObject* WorldContextObject, int64_t Player, int TransferPointId, int Cash)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoPlayerStartSteal"));

	UEventAPI_DiscoPlayerStartSteal_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.TransferPointId = TransferPointId;
	params.Cash = Cash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoPlayerSpawn2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        SquadId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Squad                          (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 CharacterArchetype             (Parm, ZeroConstructor)
// struct FString                 GameMode                       (Parm, ZeroConstructor)
// struct FString                 MapName                        (Parm, ZeroConstructor)
// struct FString                 Deck                           (Parm, ZeroConstructor)

void UEventAPI::STATIC_DiscoPlayerSpawn2(class UObject* WorldContextObject, int64_t Player, int64_t SquadId, const struct FString& Squad, const struct FVector& Location, const struct FString& CharacterArchetype, const struct FString& GameMode, const struct FString& MapName, const struct FString& Deck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoPlayerSpawn2"));

	UEventAPI_DiscoPlayerSpawn2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.SquadId = SquadId;
	params.Squad = Squad;
	params.Location = Location;
	params.CharacterArchetype = CharacterArchetype;
	params.GameMode = GameMode;
	params.MapName = MapName;
	params.Deck = Deck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoPlayerReconnect
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoPlayerReconnect(class UObject* WorldContextObject, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoPlayerReconnect"));

	UEventAPI_DiscoPlayerReconnect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoPlayerHealPlayer
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          AmountHealed                   (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoPlayerHealPlayer(class UObject* WorldContextObject, int64_t Player, int64_t TargetPlayer, int64_t GameAssetId, float AmountHealed)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoPlayerHealPlayer"));

	UEventAPI_DiscoPlayerHealPlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.TargetPlayer = TargetPlayer;
	params.GameAssetId = GameAssetId;
	params.AmountHealed = AmountHealed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoPlayerHeal
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Causer                         (Parm, ZeroConstructor)
// float                          AmountHealed                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousHealth                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentHealth                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDbno                        (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoPlayerHeal(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, const struct FString& Causer, float AmountHealed, float PreviousHealth, float CurrentHealth, bool bIsDbno)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoPlayerHeal"));

	UEventAPI_DiscoPlayerHeal_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;
	params.Causer = Causer;
	params.AmountHealed = AmountHealed;
	params.PreviousHealth = PreviousHealth;
	params.CurrentHealth = CurrentHealth;
	params.bIsDbno = bIsDbno;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoPlayerFinishSteal
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            TransferPointId                (Parm, ZeroConstructor, IsPlainOldData)
// int                            Cash                           (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoPlayerFinishSteal(class UObject* WorldContextObject, int64_t Player, int TransferPointId, int Cash)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoPlayerFinishSteal"));

	UEventAPI_DiscoPlayerFinishSteal_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.TransferPointId = TransferPointId;
	params.Cash = Cash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoPlayerEliminated
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_DiscoPlayerEliminated(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoPlayerEliminated"));

	UEventAPI_DiscoPlayerEliminated_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoPlayerDisconnect
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)

void UEventAPI::STATIC_DiscoPlayerDisconnect(class UObject* WorldContextObject, int64_t Player, const struct FString& Reason)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoPlayerDisconnect"));

	UEventAPI_DiscoPlayerDisconnect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoPlayerDie
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_DiscoPlayerDie(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoPlayerDie"));

	UEventAPI_DiscoPlayerDie_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoPlayerDepartedTournament
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoPlayerDepartedTournament(class UObject* WorldContextObject, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoPlayerDepartedTournament"));

	UEventAPI_DiscoPlayerDepartedTournament_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoPlayerAbandonedTournament
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoPlayerAbandonedTournament(class UObject* WorldContextObject, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoPlayerAbandonedTournament"));

	UEventAPI_DiscoPlayerAbandonedTournament_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoLoadoutItem2
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Item                           (Parm, ZeroConstructor)
// int64_t                        ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoLoadoutItem2(class UObject* WorldContextObject, int64_t Player, const struct FString& Item, int64_t ItemId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoLoadoutItem2"));

	UEventAPI_DiscoLoadoutItem2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Item = Item;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoKillAssist
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoKillAssist(class UObject* WorldContextObject, int64_t Player, int64_t TargetPlayer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoKillAssist"));

	UEventAPI_DiscoKillAssist_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.TargetPlayer = TargetPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoItemUse
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int64_t                        ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmountBefore                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmountNow                      (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoItemUse(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& Name, int64_t ItemId, int AmountBefore, int AmountNow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoItemUse"));

	UEventAPI_DiscoItemUse_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.Name = Name;
	params.ItemId = ItemId;
	params.AmountBefore = AmountBefore;
	params.AmountNow = AmountNow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoItemUsageStat
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Tag                            (Parm, ZeroConstructor)
// float                          Modifier                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Usage                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Description                    (Parm, ZeroConstructor)

void UEventAPI::STATIC_DiscoItemUsageStat(class UObject* WorldContextObject, int64_t Player, int64_t ItemId, const struct FString& Tag, float Modifier, float Usage, const struct FString& Description)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoItemUsageStat"));

	UEventAPI_DiscoItemUsageStat_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.ItemId = ItemId;
	params.Tag = Tag;
	params.Modifier = Modifier;
	params.Usage = Usage;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoHealthChanged2
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Causer                         (Parm, ZeroConstructor)
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousHealth                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentHealth                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDbno                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DamageTypeTag                  (Parm, ZeroConstructor)

void UEventAPI::STATIC_DiscoHealthChanged2(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& Causer, float DamageTaken, float PreviousHealth, float CurrentHealth, int DamageType, bool bIsDbno, const struct FString& DamageTypeTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoHealthChanged2"));

	UEventAPI_DiscoHealthChanged2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.Causer = Causer;
	params.DamageTaken = DamageTaken;
	params.PreviousHealth = PreviousHealth;
	params.CurrentHealth = CurrentHealth;
	params.DamageType = DamageType;
	params.bIsDbno = bIsDbno;
	params.DamageTypeTag = DamageTypeTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoGameModeStart
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EnvironmentalCondition         (Parm, ZeroConstructor)
// struct FString                 VariantName                    (Parm, ZeroConstructor)
// TArray<struct FString>         SpawnTypes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         RandomGameShowEvents           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEventAPI::STATIC_DiscoGameModeStart(class UObject* WorldContextObject, const struct FString& EnvironmentalCondition, const struct FString& VariantName, TArray<struct FString> SpawnTypes, TArray<struct FString> RandomGameShowEvents)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoGameModeStart"));

	UEventAPI_DiscoGameModeStart_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EnvironmentalCondition = EnvironmentalCondition;
	params.VariantName = VariantName;
	params.SpawnTypes = SpawnTypes;
	params.RandomGameShowEvents = RandomGameShowEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoGameModeRequest
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DesiredGameMode                (Parm, ZeroConstructor)
// struct FString                 ResultingGameMode              (Parm, ZeroConstructor)

void UEventAPI::STATIC_DiscoGameModeRequest(class UObject* WorldContextObject, const struct FString& DesiredGameMode, const struct FString& ResultingGameMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoGameModeRequest"));

	UEventAPI_DiscoGameModeRequest_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DesiredGameMode = DesiredGameMode;
	params.ResultingGameMode = ResultingGameMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoEquipItem
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ItemName                       (Parm, ZeroConstructor)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoEquipItem(class UObject* WorldContextObject, int64_t Player, const struct FString& ItemName, int64_t GameAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoEquipItem"));

	UEventAPI_DiscoEquipItem_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.ItemName = ItemName;
	params.GameAssetId = GameAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoEnemyKilled
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_DiscoEnemyKilled(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoEnemyKilled"));

	UEventAPI_DiscoEnemyKilled_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoEnemyDamage7
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Causer                         (Parm, ZeroConstructor)
// int64_t                        CauserId                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousHealth                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentHealth                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDbno                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DamageTypeTag                  (Parm, ZeroConstructor)
// bool                           bIsHeadshot                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SourceTag                      (Parm, ZeroConstructor)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoEnemyDamage7(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, const struct FString& Causer, int64_t CauserId, float DamageTaken, float PreviousHealth, float CurrentHealth, int DamageType, bool bIsDbno, const struct FString& DamageTypeTag, bool bIsHeadshot, const struct FString& SourceTag, float Distance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoEnemyDamage7"));

	UEventAPI_DiscoEnemyDamage7_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;
	params.Causer = Causer;
	params.CauserId = CauserId;
	params.DamageTaken = DamageTaken;
	params.PreviousHealth = PreviousHealth;
	params.CurrentHealth = CurrentHealth;
	params.DamageType = DamageType;
	params.bIsDbno = bIsDbno;
	params.DamageTypeTag = DamageTypeTag;
	params.bIsHeadshot = bIsHeadshot;
	params.SourceTag = SourceTag;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoEnemyDamage6
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Causer                         (Parm, ZeroConstructor)
// int64_t                        CauserId                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousHealth                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentHealth                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDbno                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DamageTypeTag                  (Parm, ZeroConstructor)
// bool                           bIsHeadshot                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SourceTag                      (Parm, ZeroConstructor)

void UEventAPI::STATIC_DiscoEnemyDamage6(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, const struct FString& Causer, int64_t CauserId, float DamageTaken, float PreviousHealth, float CurrentHealth, int DamageType, bool bIsDbno, const struct FString& DamageTypeTag, bool bIsHeadshot, const struct FString& SourceTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoEnemyDamage6"));

	UEventAPI_DiscoEnemyDamage6_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;
	params.Causer = Causer;
	params.CauserId = CauserId;
	params.DamageTaken = DamageTaken;
	params.PreviousHealth = PreviousHealth;
	params.CurrentHealth = CurrentHealth;
	params.DamageType = DamageType;
	params.bIsDbno = bIsDbno;
	params.DamageTypeTag = DamageTypeTag;
	params.bIsHeadshot = bIsHeadshot;
	params.SourceTag = SourceTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoEnemyDamage5
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Causer                         (Parm, ZeroConstructor)
// int64_t                        CauserId                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousHealth                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentHealth                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDbno                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DamageTypeTag                  (Parm, ZeroConstructor)
// bool                           bIsHeadshot                    (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoEnemyDamage5(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, const struct FString& Causer, int64_t CauserId, float DamageTaken, float PreviousHealth, float CurrentHealth, int DamageType, bool bIsDbno, const struct FString& DamageTypeTag, bool bIsHeadshot)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoEnemyDamage5"));

	UEventAPI_DiscoEnemyDamage5_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;
	params.Causer = Causer;
	params.CauserId = CauserId;
	params.DamageTaken = DamageTaken;
	params.PreviousHealth = PreviousHealth;
	params.CurrentHealth = CurrentHealth;
	params.DamageType = DamageType;
	params.bIsDbno = bIsDbno;
	params.DamageTypeTag = DamageTypeTag;
	params.bIsHeadshot = bIsHeadshot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoEnemyDamage4
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Causer                         (Parm, ZeroConstructor)
// int64_t                        CauserId                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousHealth                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentHealth                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDbno                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DamageTypeTag                  (Parm, ZeroConstructor)

void UEventAPI::STATIC_DiscoEnemyDamage4(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, const struct FString& Causer, int64_t CauserId, float DamageTaken, float PreviousHealth, float CurrentHealth, int DamageType, bool bIsDbno, const struct FString& DamageTypeTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoEnemyDamage4"));

	UEventAPI_DiscoEnemyDamage4_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;
	params.Causer = Causer;
	params.CauserId = CauserId;
	params.DamageTaken = DamageTaken;
	params.PreviousHealth = PreviousHealth;
	params.CurrentHealth = CurrentHealth;
	params.DamageType = DamageType;
	params.bIsDbno = bIsDbno;
	params.DamageTypeTag = DamageTypeTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoDefibRespawn
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_DiscoDefibRespawn(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoDefibRespawn"));

	UEventAPI_DiscoDefibRespawn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoCloakedBackHit
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoCloakedBackHit(class UObject* WorldContextObject, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoCloakedBackHit"));

	UEventAPI_DiscoCloakedBackHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoCharacterCustomizationItem
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Item                           (Parm, ZeroConstructor)
// int64_t                        ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoCharacterCustomizationItem(class UObject* WorldContextObject, int64_t Player, const struct FString& Item, int64_t ItemId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoCharacterCustomizationItem"));

	UEventAPI_DiscoCharacterCustomizationItem_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Item = Item;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoCaseSpawned
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_DiscoCaseSpawned(class UObject* WorldContextObject, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoCaseSpawned"));

	UEventAPI_DiscoCaseSpawned_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoCasePickup
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 CaseLocation                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            PreviousCash                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            CaseValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoCasePickup(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FVector& CaseLocation, int PreviousCash, int CaseValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoCasePickup"));

	UEventAPI_DiscoCasePickup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.CaseLocation = CaseLocation;
	params.PreviousCash = PreviousCash;
	params.CaseValue = CaseValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoBankItTransferStarted
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            TransferPointId                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TransferPointLocation          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Cash                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            SquadIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoBankItTransferStarted(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int TransferPointId, const struct FVector& TransferPointLocation, int Cash, int SquadIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoBankItTransferStarted"));

	UEventAPI_DiscoBankItTransferStarted_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TransferPointId = TransferPointId;
	params.TransferPointLocation = TransferPointLocation;
	params.Cash = Cash;
	params.SquadIndex = SquadIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoBankItTransferCompleted
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            TransferPointId                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TransferPointLocation          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Cash                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            SquadIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoBankItTransferCompleted(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int TransferPointId, const struct FVector& TransferPointLocation, int Cash, int SquadIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoBankItTransferCompleted"));

	UEventAPI_DiscoBankItTransferCompleted_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TransferPointId = TransferPointId;
	params.TransferPointLocation = TransferPointLocation;
	params.Cash = Cash;
	params.SquadIndex = SquadIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoAssignPlayerSquad
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        SquadId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Squad                          (Parm, ZeroConstructor)

void UEventAPI::STATIC_DiscoAssignPlayerSquad(class UObject* WorldContextObject, int64_t Player, int64_t SquadId, const struct FString& Squad)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoAssignPlayerSquad"));

	UEventAPI_DiscoAssignPlayerSquad_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.SquadId = SquadId;
	params.Squad = Squad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiscoAddRankBucketRewardXp
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        BucketId                       (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiscoAddRankBucketRewardXp(class UObject* WorldContextObject, int64_t Player, int64_t BucketId, int64_t Amount)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiscoAddRankBucketRewardXp"));

	UEventAPI_DiscoAddRankBucketRewardXp_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.BucketId = BucketId;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiedInventorySlot2
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceId                     (Parm, ZeroConstructor)
// struct FString                 Container                      (Parm, ZeroConstructor)
// int64_t                        Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DiedInventorySlot2(class UObject* WorldContextObject, int64_t Player, int64_t Amount, int64_t GameAssetId, const struct FString& InstanceId, const struct FString& Container, int64_t Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiedInventorySlot2"));

	UEventAPI_DiedInventorySlot2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Amount = Amount;
	params.GameAssetId = GameAssetId;
	params.InstanceId = InstanceId;
	params.Container = Container;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DiedInventorySlot
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceId                     (Parm, ZeroConstructor)
// struct FString                 Container                      (Parm, ZeroConstructor)

void UEventAPI::STATIC_DiedInventorySlot(class UObject* WorldContextObject, int64_t Player, int64_t Amount, int64_t GameAssetId, const struct FString& InstanceId, const struct FString& Container)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DiedInventorySlot"));

	UEventAPI_DiedInventorySlot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Amount = Amount;
	params.GameAssetId = GameAssetId;
	params.InstanceId = InstanceId;
	params.Container = Container;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DevInstanceKey
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DevInstanceKey                 (Parm, ZeroConstructor)

void UEventAPI::STATIC_DevInstanceKey(class UObject* WorldContextObject, const struct FString& DevInstanceKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DevInstanceKey"));

	UEventAPI_DevInstanceKey_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DevInstanceKey = DevInstanceKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DestructionStartSimulate
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Size                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_DestructionStartSimulate(class UObject* WorldContextObject, int64_t Size, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DestructionStartSimulate"));

	UEventAPI_DestructionStartSimulate_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Size = Size;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DestructionCutConnection
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        StrainConnects                 (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        BrokenLinks                    (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_DestructionCutConnection(class UObject* WorldContextObject, int64_t StrainConnects, int64_t BrokenLinks)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DestructionCutConnection"));

	UEventAPI_DestructionCutConnection_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StrainConnects = StrainConnects;
	params.BrokenLinks = BrokenLinks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DestructionBoneDestroyed
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_DestructionBoneDestroyed(class UObject* WorldContextObject, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DestructionBoneDestroyed"));

	UEventAPI_DestructionBoneDestroyed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.DefibReviveFailed
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          PlayerPing                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetPlayerPing               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)

void UEventAPI::STATIC_DefibReviveFailed(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, float PlayerPing, float TargetPlayerPing, const struct FString& Reason)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.DefibReviveFailed"));

	UEventAPI_DefibReviveFailed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.TargetPlayer = TargetPlayer;
	params.TargetLocation = TargetLocation;
	params.PlayerPing = PlayerPing;
	params.TargetPlayerPing = TargetPlayerPing;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.CompleteTutorialObjective
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Objective                      (Parm, ZeroConstructor)

void UEventAPI::STATIC_CompleteTutorialObjective(class UObject* WorldContextObject, int64_t Player, const struct FString& Objective)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.CompleteTutorialObjective"));

	UEventAPI_CompleteTutorialObjective_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.AutobotSpawned
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsServerBot                   (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_AutobotSpawned(class UObject* WorldContextObject, int64_t Player, bool bIsServerBot)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.AutobotSpawned"));

	UEventAPI_AutobotSpawned_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.bIsServerBot = bIsServerBot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ArmorDamage
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Armor                          (Parm, ZeroConstructor)
// struct FString                 Enemy                          (Parm, ZeroConstructor)
// float                          ArmorBefore                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ArmorAfter                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DamageCauser                   (Parm, ZeroConstructor)
// int64_t                        EnemyId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ArmorId                        (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_ArmorDamage(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& Armor, const struct FString& Enemy, float ArmorBefore, float ArmorAfter, const struct FString& DamageCauser, int64_t EnemyId, int64_t ArmorId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ArmorDamage"));

	UEventAPI_ArmorDamage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Location = Location;
	params.Armor = Armor;
	params.Enemy = Enemy;
	params.ArmorBefore = ArmorBefore;
	params.ArmorAfter = ArmorAfter;
	params.DamageCauser = DamageCauser;
	params.EnemyId = EnemyId;
	params.ArmorId = ArmorId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.AppInfo
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AppId                          (Parm, ZeroConstructor)
// struct FString                 BranchName                     (Parm, ZeroConstructor)
// struct FString                 CountryCode                    (Parm, ZeroConstructor)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_AppInfo(class UObject* WorldContextObject, const struct FString& AppId, const struct FString& BranchName, const struct FString& CountryCode, int64_t Player)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.AppInfo"));

	UEventAPI_AppInfo_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AppId = AppId;
	params.BranchName = BranchName;
	params.CountryCode = CountryCode;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.AntiCheatPlayerActionRequiredServer
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ClientAction                   (Parm, ZeroConstructor)
// struct FString                 Reason                         (Parm, ZeroConstructor)
// struct FString                 Details                        (Parm, ZeroConstructor)

void UEventAPI::STATIC_AntiCheatPlayerActionRequiredServer(class UObject* WorldContextObject, int64_t Player, const struct FString& ClientAction, const struct FString& Reason, const struct FString& Details)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.AntiCheatPlayerActionRequiredServer"));

	UEventAPI_AntiCheatPlayerActionRequiredServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.ClientAction = ClientAction;
	params.Reason = Reason;
	params.Details = Details;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.AngelscriptServerError
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Source                         (Parm, ZeroConstructor)
// struct FString                 Message                        (Parm, ZeroConstructor)

void UEventAPI::STATIC_AngelscriptServerError(class UObject* WorldContextObject, const struct FString& Source, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.AngelscriptServerError"));

	UEventAPI_AngelscriptServerError_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Source = Source;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.AimingValidationFailed
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayerPing                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ClientAimingLocation           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)

void UEventAPI::STATIC_AimingValidationFailed(class UObject* WorldContextObject, int64_t Player, float PlayerPing, const struct FVector& ClientAimingLocation, const struct FString& Reason)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.AimingValidationFailed"));

	UEventAPI_AimingValidationFailed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.PlayerPing = PlayerPing;
	params.ClientAimingLocation = ClientAimingLocation;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.AimBasedForceApplication
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ForceMagnitude                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Target                         (Parm, ZeroConstructor)
// int64_t                        TargetId                       (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_AimBasedForceApplication(class UObject* WorldContextObject, int64_t Player, float ForceMagnitude, const struct FVector& Location, const struct FString& Target, int64_t TargetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.AimBasedForceApplication"));

	UEventAPI_AimBasedForceApplication_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.ForceMagnitude = ForceMagnitude;
	params.Location = Location;
	params.Target = Target;
	params.TargetId = TargetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.AddQuestProgress2
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 QuestInstanceId                (Parm, ZeroConstructor)
// int64_t                        Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        QuestAssetId                   (Parm, ZeroConstructor, IsPlainOldData)

void UEventAPI::STATIC_AddQuestProgress2(class UObject* WorldContextObject, int64_t Player, const struct FString& QuestInstanceId, int64_t Amount, int64_t QuestAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.AddQuestProgress2"));

	UEventAPI_AddQuestProgress2_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.QuestInstanceId = QuestInstanceId;
	params.Amount = Amount;
	params.QuestAssetId = QuestAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.AddPersistedItem
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Source                         (Parm, ZeroConstructor)
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AssetType                      (Parm, ZeroConstructor)
// int64_t                        Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int64_t>                Breakthroughs                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEventAPI::STATIC_AddPersistedItem(class UObject* WorldContextObject, int64_t Player, const struct FString& Source, int64_t GameAssetId, const struct FString& AssetType, int64_t Amount, TArray<int64_t> Breakthroughs)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.AddPersistedItem"));

	UEventAPI_AddPersistedItem_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Source = Source;
	params.GameAssetId = GameAssetId;
	params.AssetType = AssetType;
	params.Amount = Amount;
	params.Breakthroughs = Breakthroughs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkServerEvents.EventAPI.ActivatedAbility
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Ability                        (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEventAPI::STATIC_ActivatedAbility(class UObject* WorldContextObject, int64_t Player, const struct FString& Ability, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkServerEvents.EventAPI.ActivatedAbility"));

	UEventAPI_ActivatedAbility_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Player = Player;
	params.Ability = Ability;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
