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

// Function DiscoveryOnline.IEmbarkOnlineRoundStatModel.RequestRoundStatSummary
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineRoundStatModel::RequestRoundStatSummary()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IEmbarkOnlineRoundStatModel.RequestRoundStatSummary"));

	UIEmbarkOnlineRoundStatModel_RequestRoundStatSummary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IEmbarkOnlineRoundStatModel.RequestRoundStat
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineRoundStatModel::RequestRoundStat()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IEmbarkOnlineRoundStatModel.RequestRoundStat"));

	UIEmbarkOnlineRoundStatModel_RequestRoundStat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IEmbarkOnlineRoundStatModel.GetRoundStatSummary
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// enum class EServiceRoundStatSummaryType Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FApiGatewayDiscoveryRoundStatSummary ReturnValue                    (Parm, OutParm, ReturnParm)

struct FApiGatewayDiscoveryRoundStatSummary UIEmbarkOnlineRoundStatModel::GetRoundStatSummary(enum class EServiceRoundStatSummaryType Type)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IEmbarkOnlineRoundStatModel.GetRoundStatSummary"));

	UIEmbarkOnlineRoundStatModel_GetRoundStatSummary_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IEmbarkOnlineRoundStatModel.GetRoundStats
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TArray<struct FApiGatewayDiscoveryRoundStats> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FApiGatewayDiscoveryRoundStats> UIEmbarkOnlineRoundStatModel::GetRoundStats()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IEmbarkOnlineRoundStatModel.GetRoundStats"));

	UIEmbarkOnlineRoundStatModel_GetRoundStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IEmbarkOnlineSurveySettingsModel.RequestSurveySettings
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Locale                         (Parm, ZeroConstructor)

void UIEmbarkOnlineSurveySettingsModel::RequestSurveySettings(const struct FString& Locale)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IEmbarkOnlineSurveySettingsModel.RequestSurveySettings"));

	UIEmbarkOnlineSurveySettingsModel_RequestSurveySettings_Params params;
	params.Locale = Locale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IEmbarkOnlineSurveySettingsModel.GetSurveySettings
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FApiGatewaySharedGetSurveySettingsResponse ReturnValue                    (Parm, OutParm, ReturnParm)

struct FApiGatewaySharedGetSurveySettingsResponse UIEmbarkOnlineSurveySettingsModel::GetSurveySettings()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IEmbarkOnlineSurveySettingsModel.GetSurveySettings"));

	UIEmbarkOnlineSurveySettingsModel_GetSurveySettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.TravelToTierMatch
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FApiGatewayDiscoveryGameServer TournamentGameServer           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineTournamentsModel::TravelToTierMatch(const struct FApiGatewayDiscoveryGameServer& TournamentGameServer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.TravelToTierMatch"));

	UIEmbarkOnlineTournamentsModel_TravelToTierMatch_Params params;
	params.TournamentGameServer = TournamentGameServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.MonitorTournament
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 TournamentId                   (Parm, ZeroConstructor)

void UIEmbarkOnlineTournamentsModel::MonitorTournament(const struct FString& TournamentId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.MonitorTournament"));

	UIEmbarkOnlineTournamentsModel_MonitorTournament_Params params;
	params.TournamentId = TournamentId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.JoinTournamentMatch
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineTournamentsModel::JoinTournamentMatch()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.JoinTournamentMatch"));

	UIEmbarkOnlineTournamentsModel_JoinTournamentMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.IsJoiningTournament
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOnlineTournamentsModel::IsJoiningTournament()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.IsJoiningTournament"));

	UIEmbarkOnlineTournamentsModel_IsJoiningTournament_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.GetTournamentSession
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkOnlineTournamentsModel::GetTournamentSession()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.GetTournamentSession"));

	UIEmbarkOnlineTournamentsModel_GetTournamentSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.AbandonTournament
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 TournamentId                   (Parm, ZeroConstructor)

void UIEmbarkOnlineTournamentsModel::AbandonTournament(const struct FString& TournamentId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.AbandonTournament"));

	UIEmbarkOnlineTournamentsModel_AbandonTournament_Params params;
	params.TournamentId = TournamentId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.InventoryServiceDiscoveryContestantPackItem.IsEmpty
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryServiceDiscoveryContestantPackItem::IsEmpty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.InventoryServiceDiscoveryContestantPackItem.IsEmpty"));

	UInventoryServiceDiscoveryContestantPackItem_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ResetRoundStats
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDiscoveryOnlineClientAdmin::ResetRoundStats(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ResetRoundStats"));

	UDiscoveryOnlineClientAdmin_ResetRoundStats_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ResetProgression
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDiscoveryOnlineClientAdmin::ResetProgression(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ResetProgression"));

	UDiscoveryOnlineClientAdmin_ResetProgression_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ResetInventory
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDiscoveryOnlineClientAdmin::ResetInventory(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ResetInventory"));

	UDiscoveryOnlineClientAdmin_ResetInventory_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.DiscoveryOnlineClientAdmin.HasAccess
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDiscoveryOnlineClientAdmin::HasAccess(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.DiscoveryOnlineClientAdmin.HasAccess"));

	UDiscoveryOnlineClientAdmin_HasAccess_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ClearReconnect
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDiscoveryOnlineClientAdmin::ClearReconnect(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ClearReconnect"));

	UDiscoveryOnlineClientAdmin_ClearReconnect_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ClearBan
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDiscoveryOnlineClientAdmin::ClearBan(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ClearBan"));

	UDiscoveryOnlineClientAdmin_ClearBan_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.DiscoveryOnlineClientAdmin.AbandonMatch
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDiscoveryOnlineClientAdmin::AbandonMatch(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.DiscoveryOnlineClientAdmin.AbandonMatch"));

	UDiscoveryOnlineClientAdmin_AbandonMatch_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetTournamentsModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineTournamentsModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineTournamentsModel* UIDiscoveryOnlineClientServices::GetTournamentsModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetTournamentsModel"));

	UIDiscoveryOnlineClientServices_GetTournamentsModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetSurveySettingsModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineSurveySettingsModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineSurveySettingsModel* UIDiscoveryOnlineClientServices::GetSurveySettingsModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetSurveySettingsModel"));

	UIDiscoveryOnlineClientServices_GetSurveySettingsModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetScenarioModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIDiscoveryOnlineScenarioModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIDiscoveryOnlineScenarioModel* UIDiscoveryOnlineClientServices::GetScenarioModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetScenarioModel"));

	UIDiscoveryOnlineClientServices_GetScenarioModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetRoundStatModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIEmbarkOnlineRoundStatModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOnlineRoundStatModel* UIDiscoveryOnlineClientServices::GetRoundStatModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetRoundStatModel"));

	UIDiscoveryOnlineClientServices_GetRoundStatModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetRankModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIDiscoveryOnlineRankModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIDiscoveryOnlineRankModel* UIDiscoveryOnlineClientServices::GetRankModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetRankModel"));

	UIDiscoveryOnlineClientServices_GetRankModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetDiscoveryOnlineClientServices
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 InObj                          (Parm, ZeroConstructor, IsPlainOldData)
// class UIDiscoveryOnlineClientServices* ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIDiscoveryOnlineClientServices* UIDiscoveryOnlineClientServices::STATIC_GetDiscoveryOnlineClientServices(class UObject* InObj)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetDiscoveryOnlineClientServices"));

	UIDiscoveryOnlineClientServices_GetDiscoveryOnlineClientServices_Params params;
	params.InObj = InObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetDiscoveryInventoryModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIDiscoveryOnlineInventoryModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIDiscoveryOnlineInventoryModel* UIDiscoveryOnlineClientServices::GetDiscoveryInventoryModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetDiscoveryInventoryModel"));

	UIDiscoveryOnlineClientServices_GetDiscoveryInventoryModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetContestantPackModel
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UIDiscoveryOnlineContestantPackModel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIDiscoveryOnlineContestantPackModel* UIDiscoveryOnlineClientServices::GetContestantPackModel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetContestantPackModel"));

	UIDiscoveryOnlineClientServices_GetContestantPackModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestUpdateContestantPack
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FApiGatewayDiscoveryPlayerPersistenceContestantPack Pack                           (ConstParm, Parm, OutParm, ReferenceParm)

void UIDiscoveryOnlineContestantPackModel::RequestUpdateContestantPack(const struct FApiGatewayDiscoveryPlayerPersistenceContestantPack& Pack)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestUpdateContestantPack"));

	UIDiscoveryOnlineContestantPackModel_RequestUpdateContestantPack_Params params;
	params.Pack = Pack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestRemoveContestantPack
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceId                     (Parm, ZeroConstructor)
// struct FString                 Etag                           (Parm, ZeroConstructor)

void UIDiscoveryOnlineContestantPackModel::RequestRemoveContestantPack(const struct FString& InstanceId, const struct FString& Etag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestRemoveContestantPack"));

	UIDiscoveryOnlineContestantPackModel_RequestRemoveContestantPack_Params params;
	params.InstanceId = InstanceId;
	params.Etag = Etag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestContestantPacks
// (Native, Event, Public, BlueprintEvent)

void UIDiscoveryOnlineContestantPackModel::RequestContestantPacks()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestContestantPacks"));

	UIDiscoveryOnlineContestantPackModel_RequestContestantPacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestBatchUpdateContestantPacks
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> packs                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIDiscoveryOnlineContestantPackModel::RequestBatchUpdateContestantPacks(TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> packs)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestBatchUpdateContestantPacks"));

	UIDiscoveryOnlineContestantPackModel_RequestBatchUpdateContestantPacks_Params params;
	params.packs = packs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestAddContestantPack
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FApiGatewayDiscoveryCreateContestantPackRequest req                            (ConstParm, Parm, OutParm, ReferenceParm)

void UIDiscoveryOnlineContestantPackModel::RequestAddContestantPack(const struct FApiGatewayDiscoveryCreateContestantPackRequest& req)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestAddContestantPack"));

	UIDiscoveryOnlineContestantPackModel_RequestAddContestantPack_Params params;
	params.req = req;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.GetContestantPacks
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> UIDiscoveryOnlineContestantPackModel::GetContestantPacks()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.GetContestantPacks"));

	UIDiscoveryOnlineContestantPackModel_GetContestantPacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineInventoryModel.RemoveContestantPack
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceId                     (Parm, ZeroConstructor)
// struct FString                 Etag                           (Parm, ZeroConstructor)

void UIDiscoveryOnlineInventoryModel::RemoveContestantPack(const struct FString& InstanceId, const struct FString& Etag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineInventoryModel.RemoveContestantPack"));

	UIDiscoveryOnlineInventoryModel_RemoveContestantPack_Params params;
	params.InstanceId = InstanceId;
	params.Etag = Etag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IDiscoveryOnlineInventoryModel.MutateInventoryItem
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UInventoryServiceItemBase* Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIDiscoveryOnlineInventoryModel::MutateInventoryItem(class UInventoryServiceItemBase* Item)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineInventoryModel.MutateInventoryItem"));

	UIDiscoveryOnlineInventoryModel_MutateInventoryItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineInventoryModel.BatchUpdateContestantPacks
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> ContestantPacks                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIDiscoveryOnlineInventoryModel::BatchUpdateContestantPacks(TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> ContestantPacks)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineInventoryModel.BatchUpdateContestantPacks"));

	UIDiscoveryOnlineInventoryModel_BatchUpdateContestantPacks_Params params;
	params.ContestantPacks = ContestantPacks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IDiscoveryOnlineInventoryModel.AddContestantPack
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FApiGatewayDiscoveryCreateContestantPackRequest req                            (ConstParm, Parm, OutParm, ReferenceParm)

void UIDiscoveryOnlineInventoryModel::AddContestantPack(const struct FApiGatewayDiscoveryCreateContestantPackRequest& req)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineInventoryModel.AddContestantPack"));

	UIDiscoveryOnlineInventoryModel_AddContestantPack_Params params;
	params.req = req;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IDiscoveryOnlineRankModel.UpgradeItem
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ItemId                         (Parm, ZeroConstructor)
// int                            NextLevel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIDiscoveryOnlineRankModel::UpgradeItem(const struct FString& ItemId, int NextLevel)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineRankModel.UpgradeItem"));

	UIDiscoveryOnlineRankModel_UpgradeItem_Params params;
	params.ItemId = ItemId;
	params.NextLevel = NextLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IDiscoveryOnlineRankModel.SyncPlayerRanks
// (Native, Event, Public, BlueprintEvent)

void UIDiscoveryOnlineRankModel::SyncPlayerRanks()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineRankModel.SyncPlayerRanks"));

	UIDiscoveryOnlineRankModel_SyncPlayerRanks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IDiscoveryOnlineRankModel.GetPlayerRankInfo
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDiscoveryPlayerRankInfo* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDiscoveryPlayerRankInfo* UIDiscoveryOnlineRankModel::GetPlayerRankInfo()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineRankModel.GetPlayerRankInfo"));

	UIDiscoveryOnlineRankModel_GetPlayerRankInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineRankModel.ActivateItemRank
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ItemId                         (Parm, ZeroConstructor)
// struct FString                 Etag                           (Parm, ZeroConstructor)

void UIDiscoveryOnlineRankModel::ActivateItemRank(const struct FString& ItemId, const struct FString& Etag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineRankModel.ActivateItemRank"));

	UIDiscoveryOnlineRankModel_ActivateItemRank_Params params;
	params.ItemId = ItemId;
	params.Etag = Etag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IDiscoveryOnlineScenarioModel.SyncScenarioList
// (Native, Event, Public, BlueprintEvent)

void UIDiscoveryOnlineScenarioModel::SyncScenarioList()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineScenarioModel.SyncScenarioList"));

	UIDiscoveryOnlineScenarioModel_SyncScenarioList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IDiscoveryOnlineScenarioModel.GetScenarioList
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDiscoveryScenarioList*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDiscoveryScenarioList* UIDiscoveryOnlineScenarioModel::GetScenarioList()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineScenarioModel.GetScenarioList"));

	UIDiscoveryOnlineScenarioModel_GetScenarioList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineServerServices.SyncInventories
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FUniqueNetIdRepl> UniqueNetIdRepls               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIDiscoveryOnlineServerServices::SyncInventories(TArray<struct FUniqueNetIdRepl> UniqueNetIdRepls)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineServerServices.SyncInventories"));

	UIDiscoveryOnlineServerServices_SyncInventories_Params params;
	params.UniqueNetIdRepls = UniqueNetIdRepls;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineServerServices.SubmitMatchReport
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 MatchId                        (Parm, ZeroConstructor)
// struct FString                 ScenarioId                     (Parm, ZeroConstructor)
// TArray<struct FOnlineSquadInfo> ParticipatedSquads             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<struct FString, int>      SquadScores                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIDiscoveryOnlineServerServices::SubmitMatchReport(const struct FString& MatchId, const struct FString& ScenarioId, TArray<struct FOnlineSquadInfo> ParticipatedSquads, TMap<struct FString, int> SquadScores)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineServerServices.SubmitMatchReport"));

	UIDiscoveryOnlineServerServices_SubmitMatchReport_Params params;
	params.MatchId = MatchId;
	params.ScenarioId = ScenarioId;
	params.ParticipatedSquads = ParticipatedSquads;
	params.SquadScores = SquadScores;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineServerServices.SendMatchHeartbeat
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 TournamentId                   (Parm, ZeroConstructor)
// struct FString                 MatchId                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIDiscoveryOnlineServerServices::SendMatchHeartbeat(const struct FString& TournamentId, const struct FString& MatchId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineServerServices.SendMatchHeartbeat"));

	UIDiscoveryOnlineServerServices_SendMatchHeartbeat_Params params;
	params.TournamentId = TournamentId;
	params.MatchId = MatchId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineServerServices.ReportTournamentMatchResult
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 TournamentId                   (Parm, ZeroConstructor)
// struct FString                 MatchId                        (Parm, ZeroConstructor)
// TArray<int>                    WinningTeamIds                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<struct FString, struct FString> TravelData                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIDiscoveryOnlineServerServices::ReportTournamentMatchResult(const struct FString& TournamentId, const struct FString& MatchId, TArray<int> WinningTeamIds, TMap<struct FString, struct FString> TravelData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineServerServices.ReportTournamentMatchResult"));

	UIDiscoveryOnlineServerServices_ReportTournamentMatchResult_Params params;
	params.TournamentId = TournamentId;
	params.MatchId = MatchId;
	params.WinningTeamIds = WinningTeamIds;
	params.TravelData = TravelData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineServerServices.ReportTournamentMatchProgress
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 TournamentId                   (Parm, ZeroConstructor)
// struct FString                 MatchId                        (Parm, ZeroConstructor)
// int                            ExpectedEndTime                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MatchProgressData              (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIDiscoveryOnlineServerServices::ReportTournamentMatchProgress(const struct FString& TournamentId, const struct FString& MatchId, int ExpectedEndTime, const struct FString& MatchProgressData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineServerServices.ReportTournamentMatchProgress"));

	UIDiscoveryOnlineServerServices_ReportTournamentMatchProgress_Params params;
	params.TournamentId = TournamentId;
	params.MatchId = MatchId;
	params.ExpectedEndTime = ExpectedEndTime;
	params.MatchProgressData = MatchProgressData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineServerServices.ReportPlayerAbandoned
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 TournamentId                   (Parm, ZeroConstructor)
// int64_t                        TimeOfAbandon                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImposeSanction                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GameServer                     (Parm, ZeroConstructor)

void UIDiscoveryOnlineServerServices::ReportPlayerAbandoned(const struct FUniqueNetIdRepl& PlayerId, const struct FString& TournamentId, int64_t TimeOfAbandon, bool bImposeSanction, const struct FString& GameServer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineServerServices.ReportPlayerAbandoned"));

	UIDiscoveryOnlineServerServices_ReportPlayerAbandoned_Params params;
	params.PlayerId = PlayerId;
	params.TournamentId = TournamentId;
	params.TimeOfAbandon = TimeOfAbandon;
	params.bImposeSanction = bImposeSanction;
	params.GameServer = GameServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryOnline.IDiscoveryOnlineServerServices.HasInventories
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIDiscoveryOnlineServerServices::HasInventories()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineServerServices.HasInventories"));

	UIDiscoveryOnlineServerServices_HasInventories_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineServerServices.HasActivatedItemRanks
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIDiscoveryOnlineServerServices::HasActivatedItemRanks()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineServerServices.HasActivatedItemRanks"));

	UIDiscoveryOnlineServerServices_HasActivatedItemRanks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineServerServices.GetInventory
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UInventoryServiceInventory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInventoryServiceInventory* UIDiscoveryOnlineServerServices::GetInventory(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineServerServices.GetInventory"));

	UIDiscoveryOnlineServerServices_GetInventory_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineServerServices.GetActivatedItemRanks
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FUniqueNetIdRepl> UniqueNetIdRepls               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIDiscoveryOnlineServerServices::GetActivatedItemRanks(TArray<struct FUniqueNetIdRepl> UniqueNetIdRepls)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineServerServices.GetActivatedItemRanks"));

	UIDiscoveryOnlineServerServices_GetActivatedItemRanks_Params params;
	params.UniqueNetIdRepls = UniqueNetIdRepls;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.IDiscoveryOnlineServerServices.GetActivatedItemRank
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIDiscoveryOnlineServerServices::GetActivatedItemRank(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.IDiscoveryOnlineServerServices.GetActivatedItemRank"));

	UIDiscoveryOnlineServerServices_GetActivatedItemRank_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.DiscoveryPlayerRankInfo.UpdateDerivedProperties
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDiscoveryPlayerRankInfo::UpdateDerivedProperties()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.DiscoveryPlayerRankInfo.UpdateDerivedProperties"));

	UDiscoveryPlayerRankInfo_UpdateDerivedProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.DiscoveryPlayerRankInfo.HasRankInfoByBucketId
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 BucketId                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDiscoveryPlayerRankInfo::HasRankInfoByBucketId(const struct FString& BucketId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.DiscoveryPlayerRankInfo.HasRankInfoByBucketId"));

	UDiscoveryPlayerRankInfo_HasRankInfoByBucketId_Params params;
	params.BucketId = BucketId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryOnline.DiscoveryPlayerRankInfo.GetRankInfoByBucketId
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 BucketId                       (Parm, ZeroConstructor)
// class UDiscoveryRankInfo*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDiscoveryRankInfo* UDiscoveryPlayerRankInfo::GetRankInfoByBucketId(const struct FString& BucketId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryOnline.DiscoveryPlayerRankInfo.GetRankInfoByBucketId"));

	UDiscoveryPlayerRankInfo_GetRankInfoByBucketId_Params params;
	params.BucketId = BucketId;

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
