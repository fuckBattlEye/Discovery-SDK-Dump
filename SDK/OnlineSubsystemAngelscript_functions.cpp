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

// Function OnlineSubsystemAngelscript.EmbarkOnlineServiceBase.Shutdown
// (Native, Event, Public, BlueprintEvent)

void UEmbarkOnlineServiceBase::Shutdown()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkOnlineServiceBase.Shutdown"));

	UEmbarkOnlineServiceBase_Shutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.EmbarkOnlineServiceBase.Init
// (Native, Event, Public, BlueprintEvent)

void UEmbarkOnlineServiceBase::Init()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkOnlineServiceBase.Init"));

	UEmbarkOnlineServiceBase_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.EmbarkOnlineServiceBase.GetContext
// (Final, Native, Public)
// Parameters:
// class UEmbarkApiContext*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkApiContext* UEmbarkOnlineServiceBase::GetContext()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkOnlineServiceBase.GetContext"));

	UEmbarkOnlineServiceBase_GetContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.IsInTestMode
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineClientServices::STATIC_IsInTestMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.IsInTestMode"));

	UIEmbarkOnlineClientServices_IsInTestMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.Initialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ULocalPlayer*            InLocalPlayer                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UIEmbarkOnlineClientServices* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineClientServices* UIEmbarkOnlineClientServices::Initialize(class ULocalPlayer* InLocalPlayer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.Initialize"));

	UIEmbarkOnlineClientServices_Initialize_Params params;
	params.InLocalPlayer = InLocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetVoiceChatModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineVoiceChatModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineVoiceChatModel* UIEmbarkOnlineClientServices::GetVoiceChatModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetVoiceChatModel"));

	UIEmbarkOnlineClientServices_GetVoiceChatModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetStoreModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineStoreModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineStoreModel* UIEmbarkOnlineClientServices::GetStoreModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetStoreModel"));

	UIEmbarkOnlineClientServices_GetStoreModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetRewardModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineRewardModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineRewardModel* UIEmbarkOnlineClientServices::GetRewardModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetRewardModel"));

	UIEmbarkOnlineClientServices_GetRewardModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetPersistentPlayerKeysModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlinePersistentPlayerKeysModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlinePersistentPlayerKeysModel* UIEmbarkOnlineClientServices::GetPersistentPlayerKeysModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetPersistentPlayerKeysModel"));

	UIEmbarkOnlineClientServices_GetPersistentPlayerKeysModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetMatchmakingModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineMatchmakingModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineMatchmakingModel* UIEmbarkOnlineClientServices::GetMatchmakingModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetMatchmakingModel"));

	UIEmbarkOnlineClientServices_GetMatchmakingModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetManifestModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineManifestModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineManifestModel* UIEmbarkOnlineClientServices::GetManifestModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetManifestModel"));

	UIEmbarkOnlineClientServices_GetManifestModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetInventoryModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineInventoryModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineInventoryModel* UIEmbarkOnlineClientServices::GetInventoryModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetInventoryModel"));

	UIEmbarkOnlineClientServices_GetInventoryModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetIdentityModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineIdentityModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineIdentityModel* UIEmbarkOnlineClientServices::GetIdentityModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetIdentityModel"));

	UIEmbarkOnlineClientServices_GetIdentityModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetGameSettingsModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineGameSettingsModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineGameSettingsModel* UIEmbarkOnlineClientServices::GetGameSettingsModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetGameSettingsModel"));

	UIEmbarkOnlineClientServices_GetGameSettingsModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetFriendsModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineFriendsModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineFriendsModel* UIEmbarkOnlineClientServices::GetFriendsModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetFriendsModel"));

	UIEmbarkOnlineClientServices_GetFriendsModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetContext
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UEmbarkApiContext*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkApiContext* UIEmbarkOnlineClientServices::GetContext()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetContext"));

	UIEmbarkOnlineClientServices_GetContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetBuildModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineBuildModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineBuildModel* UIEmbarkOnlineClientServices::GetBuildModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetBuildModel"));

	UIEmbarkOnlineClientServices_GetBuildModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetBattlePassModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineBattlePassModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineBattlePassModel* UIEmbarkOnlineClientServices::GetBattlePassModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetBattlePassModel"));

	UIEmbarkOnlineClientServices_GetBattlePassModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetAnnouncementsModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineAnnouncementsModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineAnnouncementsModel* UIEmbarkOnlineClientServices::GetAnnouncementsModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetAnnouncementsModel"));

	UIEmbarkOnlineClientServices_GetAnnouncementsModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetAchievementsModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineAchievementsModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineAchievementsModel* UIEmbarkOnlineClientServices::GetAchievementsModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetAchievementsModel"));

	UIEmbarkOnlineClientServices_GetAchievementsModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.Get
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 InObj                          (Parm, ZeroConstructor, IsPlainOldData)
// class UIEmbarkOnlineClientServices* ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineClientServices* UIEmbarkOnlineClientServices::STATIC_Get(class UObject* InObj)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.Get"));

	UIEmbarkOnlineClientServices_Get_Params params;
	params.InObj = InObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.Deinitialize
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineClientServices::Deinitialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.Deinitialize"));

	UIEmbarkOnlineClientServices_Deinitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineInventoryModel.SyncPartyInventories
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineInventoryModel::SyncPartyInventories()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineInventoryModel.SyncPartyInventories"));

	UIEmbarkOnlineInventoryModel_SyncPartyInventories_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineInventoryModel.SyncInventory
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineInventoryModel::SyncInventory()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineInventoryModel.SyncInventory"));

	UIEmbarkOnlineInventoryModel_SyncInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineInventoryModel.GetPartyMemberInventory
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FUniqueNetIdRepl        PartyMemberNetId               (ConstParm, Parm, OutParm, ReferenceParm)
// class UInventoryServiceInventory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInventoryServiceInventory* UIEmbarkOnlineInventoryModel::GetPartyMemberInventory(const struct FUniqueNetIdRepl& PartyMemberNetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineInventoryModel.GetPartyMemberInventory"));

	UIEmbarkOnlineInventoryModel_GetPartyMemberInventory_Params params;
	params.PartyMemberNetId = PartyMemberNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineInventoryModel.GetInventory
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UInventoryServiceInventory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInventoryServiceInventory* UIEmbarkOnlineInventoryModel::GetInventory()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineInventoryModel.GetInventory"));

	UIEmbarkOnlineInventoryModel_GetInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.ReportPlayerDisconnected
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 MatchId                        (Parm, ZeroConstructor)
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)

void UIEmbarkOnlineServerServices::ReportPlayerDisconnected(const struct FString& MatchId, const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.ReportPlayerDisconnected"));

	UIEmbarkOnlineServerServices_ReportPlayerDisconnected_Params params;
	params.MatchId = MatchId;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.RegisterSquadsFromAnnotation
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 JsonBlob                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineServerServices::RegisterSquadsFromAnnotation(const struct FString& JsonBlob)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.RegisterSquadsFromAnnotation"));

	UIEmbarkOnlineServerServices_RegisterSquadsFromAnnotation_Params params;
	params.JsonBlob = JsonBlob;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.RegisterPlayerToSquad
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 SquadId                        (Parm, ZeroConstructor)
// struct FUniqueNetIdRepl        NetId                          (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineServerServices::RegisterPlayerToSquad(const struct FString& SquadId, const struct FUniqueNetIdRepl& NetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.RegisterPlayerToSquad"));

	UIEmbarkOnlineServerServices_RegisterPlayerToSquad_Params params;
	params.SquadId = SquadId;
	params.NetId = NetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.QuerySquadVoipChannelsForRegisteredSquads
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineServerServices::QuerySquadVoipChannelsForRegisteredSquads()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.QuerySquadVoipChannelsForRegisteredSquads"));

	UIEmbarkOnlineServerServices_QuerySquadVoipChannelsForRegisteredSquads_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.QuerySquadVoipChannelsBySquadIds
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FString>         SquadIds                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIEmbarkOnlineServerServices::QuerySquadVoipChannelsBySquadIds(TArray<struct FString> SquadIds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.QuerySquadVoipChannelsBySquadIds"));

	UIEmbarkOnlineServerServices_QuerySquadVoipChannelsBySquadIds_Params params;
	params.SquadIds = SquadIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.QuerySquadVoipChannelsByPlayerId
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 SquadId                        (Parm, ZeroConstructor)
// struct FUniqueNetIdRepl        NetId                          (ConstParm, Parm, OutParm, ReferenceParm)

void UIEmbarkOnlineServerServices::QuerySquadVoipChannelsByPlayerId(const struct FString& SquadId, const struct FUniqueNetIdRepl& NetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.QuerySquadVoipChannelsByPlayerId"));

	UIEmbarkOnlineServerServices_QuerySquadVoipChannelsByPlayerId_Params params;
	params.SquadId = SquadId;
	params.NetId = NetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.KickPlayerFromSquadVoipChannel
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        NetId                          (ConstParm, Parm, OutParm, ReferenceParm)

void UIEmbarkOnlineServerServices::KickPlayerFromSquadVoipChannel(const struct FUniqueNetIdRepl& NetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.KickPlayerFromSquadVoipChannel"));

	UIEmbarkOnlineServerServices_KickPlayerFromSquadVoipChannel_Params params;
	params.NetId = NetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.IsInTestMode
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineServerServices::STATIC_IsInTestMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.IsInTestMode"));

	UIEmbarkOnlineServerServices_IsInTestMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.Initialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UIEmbarkOnlineServerServices* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineServerServices* UIEmbarkOnlineServerServices::Initialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.Initialize"));

	UIEmbarkOnlineServerServices_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetTweakablesAsync
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ArtifactId                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineServerServices::GetTweakablesAsync(const struct FString& ArtifactId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetTweakablesAsync"));

	UIEmbarkOnlineServerServices_GetTweakablesAsync_Params params;
	params.ArtifactId = ArtifactId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetSquadVoipChannel
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FUniqueNetIdRepl        NetId                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVoiceChannelInfo       OutVoiceChannelInfo            (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineServerServices::GetSquadVoipChannel(const struct FUniqueNetIdRepl& NetId, struct FVoiceChannelInfo* OutVoiceChannelInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetSquadVoipChannel"));

	UIEmbarkOnlineServerServices_GetSquadVoipChannel_Params params;
	params.NetId = NetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVoiceChannelInfo != nullptr)
		*OutVoiceChannelInfo = params.OutVoiceChannelInfo;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetRegisteredSquads
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TMap<struct FString, struct FOnlineSquadInfo> OutSquads                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineServerServices::GetRegisteredSquads(TMap<struct FString, struct FOnlineSquadInfo>* OutSquads)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetRegisteredSquads"));

	UIEmbarkOnlineServerServices_GetRegisteredSquads_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSquads != nullptr)
		*OutSquads = params.OutSquads;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetManifest
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UServiceManifest*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServiceManifest* UIEmbarkOnlineServerServices::GetManifest()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetManifest"));

	UIEmbarkOnlineServerServices_GetManifest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetContext
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UEmbarkApiContext*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkApiContext* UIEmbarkOnlineServerServices::GetContext()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetContext"));

	UIEmbarkOnlineServerServices_GetContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.Get
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UIEmbarkOnlineServerServices* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineServerServices* UIEmbarkOnlineServerServices::STATIC_Get(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.Get"));

	UIEmbarkOnlineServerServices_Get_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.Deinitialize
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineServerServices::Deinitialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.Deinitialize"));

	UIEmbarkOnlineServerServices_Deinitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.ApplyManifest
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ManifestContent                (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineServerServices::ApplyManifest(const struct FString& ManifestContent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.ApplyManifest"));

	UIEmbarkOnlineServerServices_ApplyManifest_Params params;
	params.ManifestContent = ManifestContent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.SyncStoreRecommendations
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineStoreModel::SyncStoreRecommendations()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.SyncStoreRecommendations"));

	UIEmbarkOnlineStoreModel_SyncStoreRecommendations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.RedeemOutstandingThirdPartyPurchases
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InTransactionId                (Parm, ZeroConstructor)
// bool                           bForceQueryReceipts            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineStoreModel::RedeemOutstandingThirdPartyPurchases(const struct FString& InTransactionId, bool bForceQueryReceipts)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.RedeemOutstandingThirdPartyPurchases"));

	UIEmbarkOnlineStoreModel_RedeemOutstandingThirdPartyPurchases_Params params;
	params.InTransactionId = InTransactionId;
	params.bForceQueryReceipts = bForceQueryReceipts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.PurchaseThirdPartyStoreOffer
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InTransactionId                (Parm, ZeroConstructor)
// struct FString                 InThirdPartyOfferId            (Parm, ZeroConstructor)

void UIEmbarkOnlineStoreModel::PurchaseThirdPartyStoreOffer(const struct FString& InTransactionId, const struct FString& InThirdPartyOfferId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.PurchaseThirdPartyStoreOffer"));

	UIEmbarkOnlineStoreModel_PurchaseThirdPartyStoreOffer_Params params;
	params.InTransactionId = InTransactionId;
	params.InThirdPartyOfferId = InThirdPartyOfferId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.PurchaseStoreOffer
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InTransactionId                (Parm, ZeroConstructor)
// int64_t                        InOfferId                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineStoreModel::PurchaseStoreOffer(const struct FString& InTransactionId, int64_t InOfferId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.PurchaseStoreOffer"));

	UIEmbarkOnlineStoreModel_PurchaseStoreOffer_Params params;
	params.InTransactionId = InTransactionId;
	params.InOfferId = InOfferId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.LeaveStore
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineStoreModel::LeaveStore()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.LeaveStore"));

	UIEmbarkOnlineStoreModel_LeaveStore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.HasStoreRecommendations
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineStoreModel::HasStoreRecommendations()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.HasStoreRecommendations"));

	UIEmbarkOnlineStoreModel_HasStoreRecommendations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.HasPurchasedItemsCache
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineStoreModel::HasPurchasedItemsCache()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.HasPurchasedItemsCache"));

	UIEmbarkOnlineStoreModel_HasPurchasedItemsCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.GetThirdPartyStoreTelemetryName
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIEmbarkOnlineStoreModel::GetThirdPartyStoreTelemetryName()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.GetThirdPartyStoreTelemetryName"));

	UIEmbarkOnlineStoreModel_GetThirdPartyStoreTelemetryName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.GetStoreRecommendations
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UStoreRecommendations*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStoreRecommendations* UIEmbarkOnlineStoreModel::GetStoreRecommendations()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.GetStoreRecommendations"));

	UIEmbarkOnlineStoreModel_GetStoreRecommendations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.GetPurchasedItemsCache
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class UStorePurchasedItem*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UStorePurchasedItem*> UIEmbarkOnlineStoreModel::GetPurchasedItemsCache()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.GetPurchasedItemsCache"));

	UIEmbarkOnlineStoreModel_GetPurchasedItemsCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.EnterStore
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineStoreModel::EnterStore()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.EnterStore"));

	UIEmbarkOnlineStoreModel_EnterStore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.ClearPurchasedItemsCache
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineStoreModel::ClearPurchasedItemsCache()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.ClearPurchasedItemsCache"));

	UIEmbarkOnlineStoreModel_ClearPurchasedItemsCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineAchievementsModel.SyncAchievements
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineAchievementsModel::SyncAchievements()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineAchievementsModel.SyncAchievements"));

	UIEmbarkOnlineAchievementsModel_SyncAchievements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineAchievementsModel.SetAchievementProgress
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 AchievementId                  (Parm, ZeroConstructor)
// int                            TimesToTrigger                 (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineAchievementsModel::SetAchievementProgress(const struct FString& AchievementId, int TimesToTrigger)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineAchievementsModel.SetAchievementProgress"));

	UIEmbarkOnlineAchievementsModel_SetAchievementProgress_Params params;
	params.AchievementId = AchievementId;
	params.TimesToTrigger = TimesToTrigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineAchievementsModel.ResetAchievements
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineAchievementsModel::ResetAchievements()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineAchievementsModel.ResetAchievements"));

	UIEmbarkOnlineAchievementsModel_ResetAchievements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineAchievementsModel.AddAchievementProgress
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 AchievementId                  (Parm, ZeroConstructor)
// int                            TimesToTrigger                 (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineAchievementsModel::AddAchievementProgress(const struct FString& AchievementId, int TimesToTrigger)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineAchievementsModel.AddAchievementProgress"));

	UIEmbarkOnlineAchievementsModel_AddAchievementProgress_Params params;
	params.AchievementId = AchievementId;
	params.TimesToTrigger = TimesToTrigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineAnnouncementsModel.SyncAnnouncements
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineAnnouncementsModel::SyncAnnouncements()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineAnnouncementsModel.SyncAnnouncements"));

	UIEmbarkOnlineAnnouncementsModel_SyncAnnouncements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineAnnouncementsModel.GetAnnouncements
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UServiceAnnouncements*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServiceAnnouncements* UIEmbarkOnlineAnnouncementsModel::GetAnnouncements()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineAnnouncementsModel.GetAnnouncements"));

	UIEmbarkOnlineAnnouncementsModel_GetAnnouncements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineBattlePassModel.UpgradeBattlePassLevel
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ItemId                         (Parm, ZeroConstructor)
// int                            NextLevel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineBattlePassModel::UpgradeBattlePassLevel(const struct FString& ItemId, int NextLevel)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineBattlePassModel.UpgradeBattlePassLevel"));

	UIEmbarkOnlineBattlePassModel_UpgradeBattlePassLevel_Params params;
	params.ItemId = ItemId;
	params.NextLevel = NextLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineBattlePassModel.SyncBattlePass
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineBattlePassModel::SyncBattlePass()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineBattlePassModel.SyncBattlePass"));

	UIEmbarkOnlineBattlePassModel_SyncBattlePass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineBattlePassModel.GetBattlePass
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UServiceBattlePass*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServiceBattlePass* UIEmbarkOnlineBattlePassModel::GetBattlePass()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineBattlePassModel.GetBattlePass"));

	UIEmbarkOnlineBattlePassModel_GetBattlePass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineBattlePassModel.ClaimBattlePassEntry
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int64_t                        ProductId                      (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineBattlePassModel::ClaimBattlePassEntry(int64_t ProductId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineBattlePassModel.ClaimBattlePassEntry"));

	UIEmbarkOnlineBattlePassModel_ClaimBattlePassEntry_Params params;
	params.ProductId = ProductId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineBuildModel.RequestLatestBuild
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineBuildModel::RequestLatestBuild()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineBuildModel.RequestLatestBuild"));

	UIEmbarkOnlineBuildModel_RequestLatestBuild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineBuildModel.IsBuildOutdated
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineBuildModel::IsBuildOutdated()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineBuildModel.IsBuildOutdated"));

	UIEmbarkOnlineBuildModel_IsBuildOutdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.ShowPlatformProfileUI
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        Requestor                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUniqueNetIdRepl        Requestee                      (ConstParm, Parm, OutParm, ReferenceParm)

void UIEmbarkOnlineFriendsModel::ShowPlatformProfileUI(const struct FUniqueNetIdRepl& Requestor, const struct FUniqueNetIdRepl& Requestee)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.ShowPlatformProfileUI"));

	UIEmbarkOnlineFriendsModel_ShowPlatformProfileUI_Params params;
	params.Requestor = Requestor;
	params.Requestee = Requestee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.SetRichPresenceStatus
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 RichPresenceStatus             (Parm, ZeroConstructor)

void UIEmbarkOnlineFriendsModel::SetRichPresenceStatus(const struct FString& RichPresenceStatus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.SetRichPresenceStatus"));

	UIEmbarkOnlineFriendsModel_SetRichPresenceStatus_Params params;
	params.RichPresenceStatus = RichPresenceStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.SetCrossPlayEnabled
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineFriendsModel::SetCrossPlayEnabled(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.SetCrossPlayEnabled"));

	UIEmbarkOnlineFriendsModel_SetCrossPlayEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.RequestFriendshipByName
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 DisplayNameDiscriminator       (Parm, ZeroConstructor)

void UIEmbarkOnlineFriendsModel::RequestFriendshipByName(const struct FString& DisplayName, const struct FString& DisplayNameDiscriminator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.RequestFriendshipByName"));

	UIEmbarkOnlineFriendsModel_RequestFriendshipByName_Params params;
	params.DisplayName = DisplayName;
	params.DisplayNameDiscriminator = DisplayNameDiscriminator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.ReportPlayer
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        EmbarkID                       (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EReportPlayerReason ReportReason                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void UIEmbarkOnlineFriendsModel::ReportPlayer(const struct FUniqueNetIdRepl& EmbarkID, enum class EReportPlayerReason ReportReason, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.ReportPlayer"));

	UIEmbarkOnlineFriendsModel_ReportPlayer_Params params;
	params.EmbarkID = EmbarkID;
	params.ReportReason = ReportReason;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.LeaveParty
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineFriendsModel::LeaveParty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.LeaveParty"));

	UIEmbarkOnlineFriendsModel_LeaveParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.KickFromParty
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        UserId                         (ConstParm, Parm, OutParm, ReferenceParm)

void UIEmbarkOnlineFriendsModel::KickFromParty(const struct FUniqueNetIdRepl& UserId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.KickFromParty"));

	UIEmbarkOnlineFriendsModel_KickFromParty_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.JoinParty
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 PartyId                        (Parm, ZeroConstructor)

void UIEmbarkOnlineFriendsModel::JoinParty(const struct FString& PartyId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.JoinParty"));

	UIEmbarkOnlineFriendsModel_JoinParty_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.IsPartyLeader
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        MemberTenancyId                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineFriendsModel::IsPartyLeader(const struct FUniqueNetIdRepl& MemberTenancyId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.IsPartyLeader"));

	UIEmbarkOnlineFriendsModel_IsPartyLeader_Params params;
	params.MemberTenancyId = MemberTenancyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.InviteToPartyById
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        UserId                         (ConstParm, Parm, OutParm, ReferenceParm)

void UIEmbarkOnlineFriendsModel::InviteToPartyById(const struct FUniqueNetIdRepl& UserId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.InviteToPartyById"));

	UIEmbarkOnlineFriendsModel_InviteToPartyById_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.InviteToParty
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UServiceFriend*          Friend                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineFriendsModel::InviteToParty(class UServiceFriend* Friend)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.InviteToParty"));

	UIEmbarkOnlineFriendsModel_InviteToParty_Params params;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.HasTriedBootToGame
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineFriendsModel::HasTriedBootToGame()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.HasTriedBootToGame"));

	UIEmbarkOnlineFriendsModel_HasTriedBootToGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetSuggestedFriendsList
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UServiceFriendsList*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServiceFriendsList* UIEmbarkOnlineFriendsModel::GetSuggestedFriendsList()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetSuggestedFriendsList"));

	UIEmbarkOnlineFriendsModel_GetSuggestedFriendsList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetRecentPlayersList
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UServiceRecentPlayersList* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServiceRecentPlayersList* UIEmbarkOnlineFriendsModel::GetRecentPlayersList()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetRecentPlayersList"));

	UIEmbarkOnlineFriendsModel_GetRecentPlayersList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetParty
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UServiceParty*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServiceParty* UIEmbarkOnlineFriendsModel::GetParty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetParty"));

	UIEmbarkOnlineFriendsModel_GetParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetInvitationsInfo
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UServicePartyInvitationsInfo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServicePartyInvitationsInfo* UIEmbarkOnlineFriendsModel::GetInvitationsInfo()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetInvitationsInfo"));

	UIEmbarkOnlineFriendsModel_GetInvitationsInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetFriendsList
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UServiceFriendsList*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServiceFriendsList* UIEmbarkOnlineFriendsModel::GetFriendsList()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetFriendsList"));

	UIEmbarkOnlineFriendsModel_GetFriendsList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetBlockedPlayersList
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UServiceFriendsList*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServiceFriendsList* UIEmbarkOnlineFriendsModel::GetBlockedPlayersList()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetBlockedPlayersList"));

	UIEmbarkOnlineFriendsModel_GetBlockedPlayersList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.DeleteFriendship
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UServiceFriend*          Friend                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineFriendsModel::DeleteFriendship(class UServiceFriend* Friend)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.DeleteFriendship"));

	UIEmbarkOnlineFriendsModel_DeleteFriendship_Params params;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.DeclineInvitation
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 PartyId                        (Parm, ZeroConstructor)

void UIEmbarkOnlineFriendsModel::DeclineInvitation(const struct FString& PartyId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.DeclineInvitation"));

	UIEmbarkOnlineFriendsModel_DeclineInvitation_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.BlockPlayer
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        TenancyUserId                  (ConstParm, Parm, OutParm, ReferenceParm)

void UIEmbarkOnlineFriendsModel::BlockPlayer(const struct FUniqueNetIdRepl& TenancyUserId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.BlockPlayer"));

	UIEmbarkOnlineFriendsModel_BlockPlayer_Params params;
	params.TenancyUserId = TenancyUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.AcceptFriendship
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UServiceFriend*          Friend                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineFriendsModel::AcceptFriendship(class UServiceFriend* Friend)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.AcceptFriendship"));

	UIEmbarkOnlineFriendsModel_AcceptFriendship_Params params;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineGameSettingsModel.SyncGameSettings
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineGameSettingsModel::SyncGameSettings()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineGameSettingsModel.SyncGameSettings"));

	UIEmbarkOnlineGameSettingsModel_SyncGameSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineGameSettingsModel.GetGameSettings
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UEmbarkOnlineGameSettings* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkOnlineGameSettings* UIEmbarkOnlineGameSettingsModel::GetGameSettings()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineGameSettingsModel.GetGameSettings"));

	UIEmbarkOnlineGameSettingsModel_GetGameSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.UpdateProfile
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           bUpdateEmail                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Email                          (Parm, ZeroConstructor)
// bool                           bUpdateTosVersionSeen          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TosVersionSeen                 (Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIEmbarkOnlineIdentityModel::UpdateProfile(bool bUpdateEmail, const struct FString& Email, bool bUpdateTosVersionSeen, const struct FString& TosVersionSeen, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.UpdateProfile"));

	UIEmbarkOnlineIdentityModel_UpdateProfile_Params params;
	params.bUpdateEmail = bUpdateEmail;
	params.Email = Email;
	params.bUpdateTosVersionSeen = bUpdateTosVersionSeen;
	params.TosVersionSeen = TosVersionSeen;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.UpdatePlayingMultiplayerOnline
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsPlayingMultiplayerOnline    (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineIdentityModel::UpdatePlayingMultiplayerOnline(bool bIsPlayingMultiplayerOnline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.UpdatePlayingMultiplayerOnline"));

	UIEmbarkOnlineIdentityModel_UpdatePlayingMultiplayerOnline_Params params;
	params.bIsPlayingMultiplayerOnline = bIsPlayingMultiplayerOnline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.SyncPlayerProfile
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineIdentityModel::SyncPlayerProfile()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.SyncPlayerProfile"));

	UIEmbarkOnlineIdentityModel_SyncPlayerProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.ShowWebURL
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           bRequestPredeterminedContent   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineIdentityModel::ShowWebURL(const struct FString& URL, bool bRequestPredeterminedContent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.ShowWebURL"));

	UIEmbarkOnlineIdentityModel_ShowWebURL_Params params;
	params.URL = URL;
	params.bRequestPredeterminedContent = bRequestPredeterminedContent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.RequestProfilesByTenancyUserIds
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FEmbarkUserHandle> Ids                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIEmbarkOnlineIdentityModel::RequestProfilesByTenancyUserIds(TArray<struct FEmbarkUserHandle> Ids, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.RequestProfilesByTenancyUserIds"));

	UIEmbarkOnlineIdentityModel_RequestProfilesByTenancyUserIds_Params params;
	params.Ids = Ids;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.RequestProfilesByEmbarkAccountIds
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FEmbarkAccountHandle> Ids                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIEmbarkOnlineIdentityModel::RequestProfilesByEmbarkAccountIds(TArray<struct FEmbarkAccountHandle> Ids, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.RequestProfilesByEmbarkAccountIds"));

	UIEmbarkOnlineIdentityModel_RequestProfilesByEmbarkAccountIds_Params params;
	params.Ids = Ids;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.Logout
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineIdentityModel::Logout()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.Logout"));

	UIEmbarkOnlineIdentityModel_Logout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.LoginWithLink
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bLink                          (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineIdentityModel::LoginWithLink(bool bLink)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.LoginWithLink"));

	UIEmbarkOnlineIdentityModel_LoginWithLink_Params params;
	params.bLink = bLink;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.Login
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineIdentityModel::Login()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.Login"));

	UIEmbarkOnlineIdentityModel_Login_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.IsWebUrlPredeterminedContent
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineIdentityModel::IsWebUrlPredeterminedContent(const struct FString& URL)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.IsWebUrlPredeterminedContent"));

	UIEmbarkOnlineIdentityModel_IsWebUrlPredeterminedContent_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.IsLoggedIn
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineIdentityModel::IsLoggedIn()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.IsLoggedIn"));

	UIEmbarkOnlineIdentityModel_IsLoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.IsCrossPlayEnabled
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineIdentityModel::IsCrossPlayEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.IsCrossPlayEnabled"));

	UIEmbarkOnlineIdentityModel_IsCrossPlayEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.HasEmail
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineIdentityModel::HasEmail()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.HasEmail"));

	UIEmbarkOnlineIdentityModel_HasEmail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.HasCrossPlayPrivilege
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineIdentityModel::HasCrossPlayPrivilege()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.HasCrossPlayPrivilege"));

	UIEmbarkOnlineIdentityModel_HasCrossPlayPrivilege_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetWebUrlPredeterminedContent
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UIEmbarkOnlineIdentityModel::GetWebUrlPredeterminedContent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetWebUrlPredeterminedContent"));

	UIEmbarkOnlineIdentityModel_GetWebUrlPredeterminedContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetUserId
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIEmbarkOnlineIdentityModel::GetUserId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetUserId"));

	UIEmbarkOnlineIdentityModel_GetUserId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetUniqueNetId
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FUniqueNetIdRepl        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUniqueNetIdRepl UIEmbarkOnlineIdentityModel::GetUniqueNetId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetUniqueNetId"));

	UIEmbarkOnlineIdentityModel_GetUniqueNetId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetRetryAfterSeconds
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIEmbarkOnlineIdentityModel::GetRetryAfterSeconds()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetRetryAfterSeconds"));

	UIEmbarkOnlineIdentityModel_GetRetryAfterSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetProfileByTenancyUserId
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FEmbarkUserHandle       ID                             (ConstParm, Parm, OutParm, ReferenceParm)
// class UServicePlayerProfile*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServicePlayerProfile* UIEmbarkOnlineIdentityModel::GetProfileByTenancyUserId(const struct FEmbarkUserHandle& ID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetProfileByTenancyUserId"));

	UIEmbarkOnlineIdentityModel_GetProfileByTenancyUserId_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetProfileByEmbarkAccountId
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FEmbarkAccountHandle    ID                             (ConstParm, Parm, OutParm, ReferenceParm)
// class UServicePlayerProfile*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServicePlayerProfile* UIEmbarkOnlineIdentityModel::GetProfileByEmbarkAccountId(const struct FEmbarkAccountHandle& ID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetProfileByEmbarkAccountId"));

	UIEmbarkOnlineIdentityModel_GetProfileByEmbarkAccountId_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetProfile
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UServicePlayerProfile*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServicePlayerProfile* UIEmbarkOnlineIdentityModel::GetProfile()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetProfile"));

	UIEmbarkOnlineIdentityModel_GetProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetLocalPlayerNum
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIEmbarkOnlineIdentityModel::GetLocalPlayerNum()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetLocalPlayerNum"));

	UIEmbarkOnlineIdentityModel_GetLocalPlayerNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetLinkingCode
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FEmbarkLinkingCode      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkLinkingCode UIEmbarkOnlineIdentityModel::GetLinkingCode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetLinkingCode"));

	UIEmbarkOnlineIdentityModel_GetLinkingCode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetDisplayName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIEmbarkOnlineIdentityModel::GetDisplayName()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetDisplayName"));

	UIEmbarkOnlineIdentityModel_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.CanCommunicateOnline
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineIdentityModel::CanCommunicateOnline()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.CanCommunicateOnline"));

	UIEmbarkOnlineIdentityModel_CanCommunicateOnline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.AutoLogin
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineIdentityModel::AutoLogin()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.AutoLogin"));

	UIEmbarkOnlineIdentityModel_AutoLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.SyncManifest
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineManifestModel::SyncManifest()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.SyncManifest"));

	UIEmbarkOnlineManifestModel_SyncManifest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.SetManifestDeferredOverride
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsDeferred                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineManifestModel::SetManifestDeferredOverride(bool bIsDeferred)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.SetManifestDeferredOverride"));

	UIEmbarkOnlineManifestModel_SetManifestDeferredOverride_Params params;
	params.bIsDeferred = bIsDeferred;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.OverrideManifest
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineManifestModel::OverrideManifest()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.OverrideManifest"));

	UIEmbarkOnlineManifestModel_OverrideManifest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.IsUpToDate
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineManifestModel::IsUpToDate()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.IsUpToDate"));

	UIEmbarkOnlineManifestModel_IsUpToDate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.GetManifest
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UServiceManifest*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServiceManifest* UIEmbarkOnlineManifestModel::GetManifest()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.GetManifest"));

	UIEmbarkOnlineManifestModel_GetManifest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.StartMatchmaking
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FMatchmakingParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::StartMatchmaking(const struct FMatchmakingParameters& Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.StartMatchmaking"));

	UIEmbarkOnlineMatchmakingModel_StartMatchmaking_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.SkipMatchmaking
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::SkipMatchmaking()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.SkipMatchmaking"));

	UIEmbarkOnlineMatchmakingModel_SkipMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.RefreshMatchmakingTimeEstimates
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Scenarios                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::RefreshMatchmakingTimeEstimates(TArray<struct FString> Scenarios)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.RefreshMatchmakingTimeEstimates"));

	UIEmbarkOnlineMatchmakingModel_RefreshMatchmakingTimeEstimates_Params params;
	params.Scenarios = Scenarios;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.Reconnect
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameServer             GameServer                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::Reconnect(const struct FGameServer& GameServer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.Reconnect"));

	UIEmbarkOnlineMatchmakingModel_Reconnect_Params params;
	params.GameServer = GameServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.JoinSession
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::JoinSession()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.JoinSession"));

	UIEmbarkOnlineMatchmakingModel_JoinSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.JoinLocalServer
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::JoinLocalServer()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.JoinLocalServer"));

	UIEmbarkOnlineMatchmakingModel_JoinLocalServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.IsSkipMatchmakingPending
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::IsSkipMatchmakingPending()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.IsSkipMatchmakingPending"));

	UIEmbarkOnlineMatchmakingModel_IsSkipMatchmakingPending_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.IsMatchmaking
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::IsMatchmaking()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.IsMatchmaking"));

	UIEmbarkOnlineMatchmakingModel_IsMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.IsAboveLatencyThreshold
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::IsAboveLatencyThreshold()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.IsAboveLatencyThreshold"));

	UIEmbarkOnlineMatchmakingModel_IsAboveLatencyThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingTimeEstimates
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FMatchmakingTimeEstimates ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatchmakingTimeEstimates UIEmbarkOnlineMatchmakingModel::GetMatchmakingTimeEstimates()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingTimeEstimates"));

	UIEmbarkOnlineMatchmakingModel_GetMatchmakingTimeEstimates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingStatus
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// enum class EMatchmakingStatus  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EMatchmakingStatus UIEmbarkOnlineMatchmakingModel::GetMatchmakingStatus()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingStatus"));

	UIEmbarkOnlineMatchmakingModel_GetMatchmakingStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingSession
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FMatchmakingSession     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatchmakingSession UIEmbarkOnlineMatchmakingModel::GetMatchmakingSession()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingSession"));

	UIEmbarkOnlineMatchmakingModel_GetMatchmakingSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingServer
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FGameServer             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameServer UIEmbarkOnlineMatchmakingModel::GetMatchmakingServer()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingServer"));

	UIEmbarkOnlineMatchmakingModel_GetMatchmakingServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingParameters
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FMatchmakingParameters  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMatchmakingParameters UIEmbarkOnlineMatchmakingModel::GetMatchmakingParameters()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingParameters"));

	UIEmbarkOnlineMatchmakingModel_GetMatchmakingParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.ConfirmPartyMatchmaking
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 MatchId                        (Parm, ZeroConstructor)
// struct FString                 Region                         (Parm, ZeroConstructor)
// bool                           bEnableVoice                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::ConfirmPartyMatchmaking(const struct FString& MatchId, const struct FString& Region, bool bEnableVoice)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.ConfirmPartyMatchmaking"));

	UIEmbarkOnlineMatchmakingModel_ConfirmPartyMatchmaking_Params params;
	params.MatchId = MatchId;
	params.Region = Region;
	params.bEnableVoice = bEnableVoice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CanStartMatchmaking
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FMatchmakingParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::CanStartMatchmaking(const struct FMatchmakingParameters& Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CanStartMatchmaking"));

	UIEmbarkOnlineMatchmakingModel_CanStartMatchmaking_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CanSkipMatchmaking
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::CanSkipMatchmaking()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CanSkipMatchmaking"));

	UIEmbarkOnlineMatchmakingModel_CanSkipMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CanJoinSession
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::CanJoinSession()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CanJoinSession"));

	UIEmbarkOnlineMatchmakingModel_CanJoinSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CancelMatchmaking
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::CancelMatchmaking()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CancelMatchmaking"));

	UIEmbarkOnlineMatchmakingModel_CancelMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CanCancelMatchmaking
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineMatchmakingModel::CanCancelMatchmaking()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CanCancelMatchmaking"));

	UIEmbarkOnlineMatchmakingModel_CanCancelMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.SetPersistentPlayerKey
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UIEmbarkOnlinePersistentPlayerKeysModel::SetPersistentPlayerKey(const struct FGameplayTag& Key, const struct FString& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.SetPersistentPlayerKey"));

	UIEmbarkOnlinePersistentPlayerKeysModel_SetPersistentPlayerKey_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.HasPersistentPlayerKey
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag            Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlinePersistentPlayerKeysModel::HasPersistentPlayerKey(const struct FGameplayTag& Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.HasPersistentPlayerKey"));

	UIEmbarkOnlinePersistentPlayerKeysModel_HasPersistentPlayerKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.GetPersistentPlayerKeys
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlinePersistentPlayerKeysModel::GetPersistentPlayerKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.GetPersistentPlayerKeys"));

	UIEmbarkOnlinePersistentPlayerKeysModel_GetPersistentPlayerKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.GetPersistentPlayerKey
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag            Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIEmbarkOnlinePersistentPlayerKeysModel::GetPersistentPlayerKey(const struct FGameplayTag& Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.GetPersistentPlayerKey"));

	UIEmbarkOnlinePersistentPlayerKeysModel_GetPersistentPlayerKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.ClearPersistentPlayerKeys
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlinePersistentPlayerKeysModel::ClearPersistentPlayerKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.ClearPersistentPlayerKeys"));

	UIEmbarkOnlinePersistentPlayerKeysModel_ClearPersistentPlayerKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.ClearPersistentPlayerKey
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Key                            (ConstParm, Parm, OutParm, ReferenceParm)

void UIEmbarkOnlinePersistentPlayerKeysModel::ClearPersistentPlayerKey(const struct FGameplayTag& Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.ClearPersistentPlayerKey"));

	UIEmbarkOnlinePersistentPlayerKeysModel_ClearPersistentPlayerKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineRewardModel.SyncProgressionRewards
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineRewardModel::SyncProgressionRewards()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineRewardModel.SyncProgressionRewards"));

	UIEmbarkOnlineRewardModel_SyncProgressionRewards_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineRewardModel.GetProgressionRewards
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UServiceProgressionRewards* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServiceProgressionRewards* UIEmbarkOnlineRewardModel::GetProgressionRewards()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineRewardModel.GetProgressionRewards"));

	UIEmbarkOnlineRewardModel_GetProgressionRewards_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetSquadVoiceChannelInfo
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVoiceChannelInfo       VoiceChannelInfo               (ConstParm, Parm, OutParm, ReferenceParm)

void UIEmbarkOnlineVoiceChatModel::SetSquadVoiceChannelInfo(const struct FVoiceChannelInfo& VoiceChannelInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetSquadVoiceChannelInfo"));

	UIEmbarkOnlineVoiceChatModel_SetSquadVoiceChannelInfo_Params params;
	params.VoiceChannelInfo = VoiceChannelInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetPlayerMuted
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bIsMuted                       (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineVoiceChatModel::SetPlayerMuted(const struct FUniqueNetIdRepl& PlayerId, bool bIsMuted)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetPlayerMuted"));

	UIEmbarkOnlineVoiceChatModel_SetPlayerMuted_Params params;
	params.PlayerId = PlayerId;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetPlayerBlocked
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bIsBlocked                     (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineVoiceChatModel::SetPlayerBlocked(const struct FUniqueNetIdRepl& PlayerId, bool bIsBlocked)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetPlayerBlocked"));

	UIEmbarkOnlineVoiceChatModel_SetPlayerBlocked_Params params;
	params.PlayerId = PlayerId;
	params.bIsBlocked = bIsBlocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetOutputVolume
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineVoiceChatModel::SetOutputVolume(float Volume)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetOutputVolume"));

	UIEmbarkOnlineVoiceChatModel_SetOutputVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetOutputDeviceId
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InputDeviceId                  (Parm, ZeroConstructor)

void UIEmbarkOnlineVoiceChatModel::SetOutputDeviceId(const struct FString& InputDeviceId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetOutputDeviceId"));

	UIEmbarkOnlineVoiceChatModel_SetOutputDeviceId_Params params;
	params.InputDeviceId = InputDeviceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetMode
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// enum class EVoiceChatMode      InMode                         (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineVoiceChatModel::SetMode(enum class EVoiceChatMode InMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetMode"));

	UIEmbarkOnlineVoiceChatModel_SetMode_Params params;
	params.InMode = InMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetInputVolume
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineVoiceChatModel::SetInputVolume(float Volume)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetInputVolume"));

	UIEmbarkOnlineVoiceChatModel_SetInputVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetInputDeviceId
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InputDeviceId                  (Parm, ZeroConstructor)

void UIEmbarkOnlineVoiceChatModel::SetInputDeviceId(const struct FString& InputDeviceId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetInputDeviceId"));

	UIEmbarkOnlineVoiceChatModel_SetInputDeviceId_Params params;
	params.InputDeviceId = InputDeviceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetEnabled
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineVoiceChatModel::SetEnabled(bool Enabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetEnabled"));

	UIEmbarkOnlineVoiceChatModel_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SelectVoiceModPreset
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Preset                         (Parm, ZeroConstructor)

void UIEmbarkOnlineVoiceChatModel::SelectVoiceModPreset(const struct FString& Preset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SelectVoiceModPreset"));

	UIEmbarkOnlineVoiceChatModel_SelectVoiceModPreset_Params params;
	params.Preset = Preset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.LeaveVoiceChat
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// enum class EVoiceChannel       Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineVoiceChatModel::LeaveVoiceChat(enum class EVoiceChannel Channel)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.LeaveVoiceChat"));

	UIEmbarkOnlineVoiceChatModel_LeaveVoiceChat_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.JoinVoiceChat
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// enum class EVoiceChannel       Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// enum class EVoiceChannelType   Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineVoiceChatModel::JoinVoiceChat(enum class EVoiceChannel Channel, enum class EVoiceChannelType Type)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.JoinVoiceChat"));

	UIEmbarkOnlineVoiceChatModel_JoinVoiceChat_Params params;
	params.Channel = Channel;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsVoiceModEnabled
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineVoiceChatModel::IsVoiceModEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsVoiceModEnabled"));

	UIEmbarkOnlineVoiceChatModel_IsVoiceModEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsVoiceModAvailable
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineVoiceChatModel::IsVoiceModAvailable()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsVoiceModAvailable"));

	UIEmbarkOnlineVoiceChatModel_IsVoiceModAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsPlayerMuted
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineVoiceChatModel::IsPlayerMuted(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsPlayerMuted"));

	UIEmbarkOnlineVoiceChatModel_IsPlayerMuted_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsPlayerBlocked
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineVoiceChatModel::IsPlayerBlocked(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsPlayerBlocked"));

	UIEmbarkOnlineVoiceChatModel_IsPlayerBlocked_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsInVoiceChat
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineVoiceChatModel::IsInVoiceChat()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsInVoiceChat"));

	UIEmbarkOnlineVoiceChatModel_IsInVoiceChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsEnabled
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineVoiceChatModel::IsEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsEnabled"));

	UIEmbarkOnlineVoiceChatModel_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsConsolePlayerMuted
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineVoiceChatModel::IsConsolePlayerMuted(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsConsolePlayerMuted"));

	UIEmbarkOnlineVoiceChatModel_IsConsolePlayerMuted_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetVoipInputBindings
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UInputComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UInputComponent* UIEmbarkOnlineVoiceChatModel::GetVoipInputBindings()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetVoipInputBindings"));

	UIEmbarkOnlineVoiceChatModel_GetVoipInputBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetVoiceModPresets
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UIEmbarkOnlineVoiceChatModel::GetVoiceModPresets()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetVoiceModPresets"));

	UIEmbarkOnlineVoiceChatModel_GetVoiceModPresets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetSelectedVoiceModPreset
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIEmbarkOnlineVoiceChatModel::GetSelectedVoiceModPreset()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetSelectedVoiceModPreset"));

	UIEmbarkOnlineVoiceChatModel_GetSelectedVoiceModPreset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetRoom
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// enum class EVoiceChannel       Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkVoiceRoom*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkVoiceRoom* UIEmbarkOnlineVoiceChatModel::GetRoom(enum class EVoiceChannel Channel)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetRoom"));

	UIEmbarkOnlineVoiceChatModel_GetRoom_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetOutputVolume
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIEmbarkOnlineVoiceChatModel::GetOutputVolume()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetOutputVolume"));

	UIEmbarkOnlineVoiceChatModel_GetOutputVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetOutputDeviceId
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIEmbarkOnlineVoiceChatModel::GetOutputDeviceId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetOutputDeviceId"));

	UIEmbarkOnlineVoiceChatModel_GetOutputDeviceId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetInputVolume
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIEmbarkOnlineVoiceChatModel::GetInputVolume()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetInputVolume"));

	UIEmbarkOnlineVoiceChatModel_GetInputVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetInputDeviceId
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIEmbarkOnlineVoiceChatModel::GetInputDeviceId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetInputDeviceId"));

	UIEmbarkOnlineVoiceChatModel_GetInputDeviceId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetDefaultOutputDeviceId
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIEmbarkOnlineVoiceChatModel::GetDefaultOutputDeviceId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetDefaultOutputDeviceId"));

	UIEmbarkOnlineVoiceChatModel_GetDefaultOutputDeviceId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetDefaultInputDeviceId
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIEmbarkOnlineVoiceChatModel::GetDefaultInputDeviceId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetDefaultInputDeviceId"));

	UIEmbarkOnlineVoiceChatModel_GetDefaultInputDeviceId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetAvailableOutputDevices
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TArray<struct FVoiceDeviceInfo> Output                         (Parm, OutParm, ZeroConstructor)

void UIEmbarkOnlineVoiceChatModel::GetAvailableOutputDevices(TArray<struct FVoiceDeviceInfo>* Output)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetAvailableOutputDevices"));

	UIEmbarkOnlineVoiceChatModel_GetAvailableOutputDevices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetAvailableInputDevices
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TArray<struct FVoiceDeviceInfo> Output                         (Parm, OutParm, ZeroConstructor)

void UIEmbarkOnlineVoiceChatModel::GetAvailableInputDevices(TArray<struct FVoiceDeviceInfo>* Output)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetAvailableInputDevices"));

	UIEmbarkOnlineVoiceChatModel_GetAvailableInputDevices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.EnableVoiceMod
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineVoiceChatModel::EnableVoiceMod(bool Enabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.EnableVoiceMod"));

	UIEmbarkOnlineVoiceChatModel_EnableVoiceMod_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.EnableRoom
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// enum class EVoiceChannel       Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineVoiceChatModel::EnableRoom(enum class EVoiceChannel Channel, bool bEnable)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.EnableRoom"));

	UIEmbarkOnlineVoiceChatModel_EnableRoom_Params params;
	params.Channel = Channel;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.DeleteChannelInfo
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// enum class EVoiceChannel       Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOnlineVoiceChatModel::DeleteChannelInfo(enum class EVoiceChannel Channel)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.DeleteChannelInfo"));

	UIEmbarkOnlineVoiceChatModel_DeleteChannelInfo_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.CanChatWith
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FUniqueNetIdRepl> OtherUsersEmbark               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIEmbarkOnlineVoiceChatModel::CanChatWith(TArray<struct FUniqueNetIdRepl> OtherUsersEmbark)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.CanChatWith"));

	UIEmbarkOnlineVoiceChatModel_CanChatWith_Params params;
	params.OtherUsersEmbark = OtherUsersEmbark;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.EmbarkID.ToInt64
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FUniqueNetIdRepl        Value                          (ConstParm, Parm, OutParm, ReferenceParm)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UEmbarkID::STATIC_ToInt64(const struct FUniqueNetIdRepl& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkID.ToInt64"));

	UEmbarkID_ToInt64_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.EmbarkID.Invalid
// (Final, Native, Static, Public)
// Parameters:
// struct FUniqueNetIdRepl        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUniqueNetIdRepl UEmbarkID::STATIC_Invalid()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkID.Invalid"));

	UEmbarkID_Invalid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.EmbarkID.CreateFromString
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FUniqueNetIdRepl        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUniqueNetIdRepl UEmbarkID::STATIC_CreateFromString(const struct FString& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkID.CreateFromString"));

	UEmbarkID_CreateFromString_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.EmbarkID.Create
// (Final, Native, Static, Public)
// Parameters:
// int64_t                        Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUniqueNetIdRepl UEmbarkID::STATIC_Create(int64_t Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkID.Create"));

	UEmbarkID_Create_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServicesFactory.GetDependencies
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TArray<class UClass*>          Dependencies                   (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineClientServicesFactory::GetDependencies(TArray<class UClass*>* Dependencies)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServicesFactory.GetDependencies"));

	UIEmbarkOnlineClientServicesFactory_GetDependencies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dependencies != nullptr)
		*Dependencies = params.Dependencies;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServicesFactory.Create
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ULocalPlayer*            InLocalPlayer                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UIEmbarkOnlineClientServices* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineClientServices* UIEmbarkOnlineClientServicesFactory::Create(class ULocalPlayer* InLocalPlayer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServicesFactory.Create"));

	UIEmbarkOnlineClientServicesFactory_Create_Params params;
	params.InLocalPlayer = InLocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServicesFactory.GetDependencies
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TArray<class UClass*>          Dependencies                   (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineServerServicesFactory::GetDependencies(TArray<class UClass*>* Dependencies)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServicesFactory.GetDependencies"));

	UIEmbarkOnlineServerServicesFactory_GetDependencies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dependencies != nullptr)
		*Dependencies = params.Dependencies;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServicesFactory.Create
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineServerServices* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineServerServices* UIEmbarkOnlineServerServicesFactory::Create()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServicesFactory.Create"));

	UIEmbarkOnlineServerServicesFactory_Create_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.EmbarkOnlineSubSystemHelper.RequestAuthToken
// (Final, Native, Static, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkOnlineSubSystemHelper::STATIC_RequestAuthToken(class UWorld* InWorld)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkOnlineSubSystemHelper.RequestAuthToken"));

	UEmbarkOnlineSubSystemHelper_RequestAuthToken_Params params;
	params.InWorld = InWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.EmbarkOnlineSubSystemHelper.GetSimulationServiceUrl
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkOnlineSubSystemHelper::STATIC_GetSimulationServiceUrl()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkOnlineSubSystemHelper.GetSimulationServiceUrl"));

	UEmbarkOnlineSubSystemHelper_GetSimulationServiceUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerUseWeapon
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 PlayerPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FQuat                   PlayerView                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bIsZoomed                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsMelee                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 WeaponName                     (Parm, ZeroConstructor)

void UGameplayEventAPI::STATIC_LogPlayerUseWeapon(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& PlayerId, const struct FVector& PlayerPosition, const struct FQuat& PlayerView, bool bIsZoomed, bool bIsMelee, const struct FString& WeaponName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerUseWeapon"));

	UGameplayEventAPI_LogPlayerUseWeapon_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerId = PlayerId;
	params.PlayerPosition = PlayerPosition;
	params.PlayerView = PlayerView;
	params.bIsZoomed = bIsZoomed;
	params.bIsMelee = bIsMelee;
	params.WeaponName = WeaponName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerUseAbility
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// uint32_t                       AbilityId                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       DurationMs                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       CooldownMs                     (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEventAPI::STATIC_LogPlayerUseAbility(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& PlayerId, uint32_t AbilityId, uint32_t DurationMs, uint32_t CooldownMs)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerUseAbility"));

	UGameplayEventAPI_LogPlayerUseAbility_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerId = PlayerId;
	params.AbilityId = AbilityId;
	params.DurationMs = DurationMs;
	params.CooldownMs = CooldownMs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerTick
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 PlayerPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FQuat                   PlayerView                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bIsZoomed                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Health                         (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEventAPI::STATIC_LogPlayerTick(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& PlayerId, const struct FVector& PlayerPosition, const struct FQuat& PlayerView, bool bIsZoomed, float Health)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerTick"));

	UGameplayEventAPI_LogPlayerTick_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerId = PlayerId;
	params.PlayerPosition = PlayerPosition;
	params.PlayerView = PlayerView;
	params.bIsZoomed = bIsZoomed;
	params.Health = Health;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerTakeDamage
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        AttackerId                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 AttackerLocation               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FQuat                   AttackerRotation               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FUniqueNetIdRepl        VictimPlayerId                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 VictimLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FQuat                   VictimRotation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          HealthRemaining                (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEventAPI::STATIC_LogPlayerTakeDamage(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& AttackerId, const struct FVector& AttackerLocation, const struct FQuat& AttackerRotation, const struct FUniqueNetIdRepl& VictimPlayerId, const struct FVector& VictimLocation, const struct FQuat& VictimRotation, float DamageTaken, float HealthRemaining)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerTakeDamage"));

	UGameplayEventAPI_LogPlayerTakeDamage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AttackerId = AttackerId;
	params.AttackerLocation = AttackerLocation;
	params.AttackerRotation = AttackerRotation;
	params.VictimPlayerId = VictimPlayerId;
	params.VictimLocation = VictimLocation;
	params.VictimRotation = VictimRotation;
	params.DamageTaken = DamageTaken;
	params.HealthRemaining = HealthRemaining;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerSpawn
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// uint32_t                       TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       CharacterId                    (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEventAPI::STATIC_LogPlayerSpawn(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& PlayerId, uint32_t TeamId, uint32_t CharacterId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerSpawn"));

	UGameplayEventAPI_LogPlayerSpawn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerId = PlayerId;
	params.TeamId = TeamId;
	params.CharacterId = CharacterId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerRevive
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        RevivedPlayerId                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUniqueNetIdRepl        ReviverPlayerId                (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayEventAPI::STATIC_LogPlayerRevive(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& RevivedPlayerId, const struct FUniqueNetIdRepl& ReviverPlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerRevive"));

	UGameplayEventAPI_LogPlayerRevive_Params params;
	params.WorldContextObject = WorldContextObject;
	params.RevivedPlayerId = RevivedPlayerId;
	params.ReviverPlayerId = ReviverPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerDespawn
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayEventAPI::STATIC_LogPlayerDespawn(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerDespawn"));

	UGameplayEventAPI_LogPlayerDespawn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogGameRoundStart
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LevelName                      (Parm, ZeroConstructor)
// struct FString                 ModeName                       (Parm, ZeroConstructor)
// uint32_t                       RoundTimeSeconds               (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEventAPI::STATIC_LogGameRoundStart(class UObject* WorldContextObject, const struct FString& LevelName, const struct FString& ModeName, uint32_t RoundTimeSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.GameplayEventAPI.LogGameRoundStart"));

	UGameplayEventAPI_LogGameRoundStart_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelName = LevelName;
	params.ModeName = ModeName;
	params.RoundTimeSeconds = RoundTimeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogGameRoundEnd
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       WinningTeamId                  (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEventAPI::STATIC_LogGameRoundEnd(class UObject* WorldContextObject, uint32_t WinningTeamId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.GameplayEventAPI.LogGameRoundEnd"));

	UGameplayEventAPI_LogGameRoundEnd_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WinningTeamId = WinningTeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.ServiceFriendsList.Remove
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetIdRepl        ID                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServiceFriendsList::Remove(const struct FUniqueNetIdRepl& ID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceFriendsList.Remove"));

	UServiceFriendsList_Remove_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServiceFriendsList.GetFriends
// (Final, Native, Public, Const)
// Parameters:
// TMap<struct FUniqueNetIdRepl, class UServiceFriend*> ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

TMap<struct FUniqueNetIdRepl, class UServiceFriend*> UServiceFriendsList::GetFriends()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceFriendsList.GetFriends"));

	UServiceFriendsList_GetFriends_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServiceFriendsList.FindFriendByName
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 DisplayNameDiscriminator       (Parm, ZeroConstructor)
// class UServiceFriend*          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServiceFriendsList::FindFriendByName(const struct FString& DisplayName, const struct FString& DisplayNameDiscriminator, class UServiceFriend** Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceFriendsList.FindFriendByName"));

	UServiceFriendsList_FindFriendByName_Params params;
	params.DisplayName = DisplayName;
	params.DisplayNameDiscriminator = DisplayNameDiscriminator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServiceFriendsList.Find
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FUniqueNetIdRepl        ID                             (ConstParm, Parm, OutParm, ReferenceParm)
// class UServiceFriend*          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServiceFriendsList::Find(const struct FUniqueNetIdRepl& ID, class UServiceFriend** Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceFriendsList.Find"));

	UServiceFriendsList_Find_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServiceFriendsList.Add
// (Final, Native, Public)
// Parameters:
// class UServiceFriend*          Friend                         (Parm, ZeroConstructor, IsPlainOldData)

void UServiceFriendsList::Add(class UServiceFriend* Friend)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceFriendsList.Add"));

	UServiceFriendsList_Add_Params params;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.ServiceParty.IsValid
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServiceParty::IsValid()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceParty.IsValid"));

	UServiceParty_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServicePlayerProfile.IsOnlineOnPlatform
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServicePlayerProfile::IsOnlineOnPlatform()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServicePlayerProfile.IsOnlineOnPlatform"));

	UServicePlayerProfile_IsOnlineOnPlatform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServicePlayerProfile.GetPreferredDisplayName
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UServicePlayerProfile::GetPreferredDisplayName()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServicePlayerProfile.GetPreferredDisplayName"));

	UServicePlayerProfile_GetPreferredDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.InventoryServiceInventory.UpdateDerivedProperties
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryServiceInventory::UpdateDerivedProperties()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.InventoryServiceInventory.UpdateDerivedProperties"));

	UInventoryServiceInventory_UpdateDerivedProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.InventoryServiceInventory.HasItemsByItemType
// (Final, Native, Public, Const)
// Parameters:
// class UStruct*                 ItemType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryServiceInventory::HasItemsByItemType(class UStruct* ItemType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.InventoryServiceInventory.HasItemsByItemType"));

	UInventoryServiceInventory_HasItemsByItemType_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.InventoryServiceInventory.HasItemsByAssetId
// (Final, Native, Public, Const)
// Parameters:
// int64_t                        AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryServiceInventory::HasItemsByAssetId(int64_t AssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.InventoryServiceInventory.HasItemsByAssetId"));

	UInventoryServiceInventory_HasItemsByAssetId_Params params;
	params.AssetId = AssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.InventoryServiceInventory.HasItemByItemId
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 ItemId                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryServiceInventory::HasItemByItemId(const struct FString& ItemId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.InventoryServiceInventory.HasItemByItemId"));

	UInventoryServiceInventory_HasItemByItemId_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemsByItemType
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// class UStruct*                 ItemType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UInventoryServiceItemBase*> OutItems                       (Parm, OutParm, ZeroConstructor)

void UInventoryServiceInventory::GetItemsByItemType(class UStruct* ItemType, TArray<class UInventoryServiceItemBase*>* OutItems)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemsByItemType"));

	UInventoryServiceInventory_GetItemsByItemType_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItems != nullptr)
		*OutItems = params.OutItems;
}


// Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemsByAssetId
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// int64_t                        AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UInventoryServiceItemBase*> OutItems                       (Parm, OutParm, ZeroConstructor)

void UInventoryServiceInventory::GetItemsByAssetId(int64_t AssetId, TArray<class UInventoryServiceItemBase*>* OutItems)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemsByAssetId"));

	UInventoryServiceInventory_GetItemsByAssetId_Params params;
	params.AssetId = AssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItems != nullptr)
		*OutItems = params.OutItems;
}


// Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemByItemType
// (Final, Native, Public, Const)
// Parameters:
// class UStruct*                 ItemType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryServiceItemBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInventoryServiceItemBase* UInventoryServiceInventory::GetItemByItemType(class UStruct* ItemType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemByItemType"));

	UInventoryServiceInventory_GetItemByItemType_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemByItemId
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 ItemId                         (Parm, ZeroConstructor)
// class UInventoryServiceItemBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInventoryServiceItemBase* UInventoryServiceInventory::GetItemByItemId(const struct FString& ItemId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemByItemId"));

	UInventoryServiceInventory_GetItemByItemId_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemByAssetId
// (Final, Native, Public, Const)
// Parameters:
// int64_t                        AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryServiceItemBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInventoryServiceItemBase* UInventoryServiceInventory::GetItemByAssetId(int64_t AssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemByAssetId"));

	UInventoryServiceInventory_GetItemByAssetId_Params params;
	params.AssetId = AssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServiceManifest.ParseAndApplyFlags
// (Final, Native, Public, Const)

void UServiceManifest::ParseAndApplyFlags()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceManifest.ParseAndApplyFlags"));

	UServiceManifest_ParseAndApplyFlags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.UpdateDerivedProperties
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServiceProgressionRewardBucket::UpdateDerivedProperties()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.UpdateDerivedProperties"));

	UServiceProgressionRewardBucket_UpdateDerivedProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.HasRewardsByItemAssetId
// (Final, Native, Public, Const)
// Parameters:
// int64_t                        AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServiceProgressionRewardBucket::HasRewardsByItemAssetId(int64_t AssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.HasRewardsByItemAssetId"));

	UServiceProgressionRewardBucket_HasRewardsByItemAssetId_Params params;
	params.AssetId = AssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.HasRewardByXP
// (Final, Native, Public, Const)
// Parameters:
// int64_t                        CurrentXP                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServiceProgressionRewardBucket::HasRewardByXP(int64_t CurrentXP)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.HasRewardByXP"));

	UServiceProgressionRewardBucket_HasRewardByXP_Params params;
	params.CurrentXP = CurrentXP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.HasRewardByRank
// (Final, Native, Public, Const)
// Parameters:
// int64_t                        Rank                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServiceProgressionRewardBucket::HasRewardByRank(int64_t Rank)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.HasRewardByRank"));

	UServiceProgressionRewardBucket_HasRewardByRank_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.GetRewardsByItemAssetId
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// int64_t                        AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UServiceProgressionReward*> OutRewards                     (Parm, OutParm, ZeroConstructor)

void UServiceProgressionRewardBucket::GetRewardsByItemAssetId(int64_t AssetId, TArray<class UServiceProgressionReward*>* OutRewards)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.GetRewardsByItemAssetId"));

	UServiceProgressionRewardBucket_GetRewardsByItemAssetId_Params params;
	params.AssetId = AssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRewards != nullptr)
		*OutRewards = params.OutRewards;
}


// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.GetRewardByXP
// (Final, Native, Public, Const)
// Parameters:
// int64_t                        CurrentXP                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UServiceProgressionReward* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServiceProgressionReward* UServiceProgressionRewardBucket::GetRewardByXP(int64_t CurrentXP)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.GetRewardByXP"));

	UServiceProgressionRewardBucket_GetRewardByXP_Params params;
	params.CurrentXP = CurrentXP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.GetRewardByRank
// (Final, Native, Public, Const)
// Parameters:
// int64_t                        Rank                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UServiceProgressionReward* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServiceProgressionReward* UServiceProgressionRewardBucket::GetRewardByRank(int64_t Rank)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.GetRewardByRank"));

	UServiceProgressionRewardBucket_GetRewardByRank_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.GetFirstRewardByItemAssetId
// (Final, Native, Public, Const)
// Parameters:
// int64_t                        AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UServiceProgressionReward* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServiceProgressionReward* UServiceProgressionRewardBucket::GetFirstRewardByItemAssetId(int64_t AssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.GetFirstRewardByItemAssetId"));

	UServiceProgressionRewardBucket_GetFirstRewardByItemAssetId_Params params;
	params.AssetId = AssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServiceProgressionRewards.UpdateDerivedProperties
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServiceProgressionRewards::UpdateDerivedProperties()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceProgressionRewards.UpdateDerivedProperties"));

	UServiceProgressionRewards_UpdateDerivedProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServiceProgressionRewards.HasBucketByBucketId
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 BucketId                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServiceProgressionRewards::HasBucketByBucketId(const struct FString& BucketId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceProgressionRewards.HasBucketByBucketId"));

	UServiceProgressionRewards_HasBucketByBucketId_Params params;
	params.BucketId = BucketId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.ServiceProgressionRewards.GetBucketByBucketId
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 BucketId                       (Parm, ZeroConstructor)
// class UServiceProgressionRewardBucket* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServiceProgressionRewardBucket* UServiceProgressionRewards::GetBucketByBucketId(const struct FString& BucketId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.ServiceProgressionRewards.GetBucketByBucketId"));

	UServiceProgressionRewards_GetBucketByBucketId_Params params;
	params.BucketId = BucketId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.StoreOffer.HasThirdPartyProduct
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStoreOffer::HasThirdPartyProduct()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.StoreOffer.HasThirdPartyProduct"));

	UStoreOffer_HasThirdPartyProduct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.StoreOffer.HasEmbarkProduct
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStoreOffer::HasEmbarkProduct()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.StoreOffer.HasEmbarkProduct"));

	UStoreOffer_HasEmbarkProduct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.RegexHelper.Match
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Pattern                        (Parm, ZeroConstructor)
// struct FString                 Subject                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URegexHelper::STATIC_Match(const struct FString& Pattern, const struct FString& Subject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.RegexHelper.Match"));

	URegexHelper_Match_Params params;
	params.Pattern = Pattern;
	params.Subject = Subject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.VoiceChatModeSetting.GetCurrentMode
// (Final, Native, Public, Const)
// Parameters:
// enum class EVoiceChatMode      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EVoiceChatMode UVoiceChatModeSetting::GetCurrentMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.VoiceChatModeSetting.GetCurrentMode"));

	UVoiceChatModeSetting_GetCurrentMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.SetAutoEnable
// (Final, Native, Public)
// Parameters:
// bool                           bInAutoEnable                  (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkVoiceRoom::SetAutoEnable(bool bInAutoEnable)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.SetAutoEnable"));

	UEmbarkVoiceRoom_SetAutoEnable_Params params;
	params.bInAutoEnable = bInAutoEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.IsPlayerTalking
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkVoiceRoom::IsPlayerTalking(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.IsPlayerTalking"));

	UEmbarkVoiceRoom_IsPlayerTalking_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.IsPlayerInRoom
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkVoiceRoom::IsPlayerInRoom(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.IsPlayerInRoom"));

	UEmbarkVoiceRoom_IsPlayerInRoom_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.IsPlayerActive
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkVoiceRoom::IsPlayerActive(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.IsPlayerActive"));

	UEmbarkVoiceRoom_IsPlayerActive_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.GetState
// (Final, Native, Public, Const)
// Parameters:
// enum class EVoiceRoomState     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EVoiceRoomState UEmbarkVoiceRoom::GetState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.GetState"));

	UEmbarkVoiceRoom_GetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.GetRoomId
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkVoiceRoom::GetRoomId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.GetRoomId"));

	UEmbarkVoiceRoom_GetRoomId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.Enable
// (Final, Native, Public)
// Parameters:
// bool                           bShouldEnable                  (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkVoiceRoom::Enable(bool bShouldEnable)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.Enable"));

	UEmbarkVoiceRoom_Enable_Params params;
	params.bShouldEnable = bShouldEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
