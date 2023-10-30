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

// Function EmbarkActivities.ActivityInstance.Initialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UActivityAsset*          InActivityAsset                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ULocalPlayer*            InLocalPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UActivityInstance::Initialize(class UActivityAsset* InActivityAsset, class ULocalPlayer* InLocalPlayer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.ActivityInstance.Initialize"));

	UActivityInstance_Initialize_Params params;
	params.InActivityAsset = InActivityAsset;
	params.InLocalPlayer = InLocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkActivities.ActivityInstance.GetPlayerController
// (Final, Native, Public, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UActivityInstance::GetPlayerController()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.ActivityInstance.GetPlayerController"));

	UActivityInstance_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkActivities.ActivityInstance.GetGameState
// (Final, Native, Public, Const)
// Parameters:
// class AEmbarkGameStateBase*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AEmbarkGameStateBase* UActivityInstance::GetGameState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.ActivityInstance.GetGameState"));

	UActivityInstance_GetGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkActivities.CheckLoginStatus.HandleOnLoginComplete
// (Final, Native, Private)
// Parameters:
// bool                           bWasSuccessful                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// enum class EAuthErrorCode      ErrorCode                      (Parm, ZeroConstructor, IsPlainOldData)

void UCheckLoginStatus::HandleOnLoginComplete(bool bWasSuccessful, enum class EAuthErrorCode ErrorCode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.CheckLoginStatus.HandleOnLoginComplete"));

	UCheckLoginStatus_HandleOnLoginComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkActivities.CheckScenarioNameTask.HandleOnSquadsChanged
// (Final, Native, Private)

void UCheckScenarioNameTask::HandleOnSquadsChanged()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.CheckScenarioNameTask.HandleOnSquadsChanged"));

	UCheckScenarioNameTask_HandleOnSquadsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkActivities.CheckScenarioNameTask.HandleOnMatchStatusChanged
// (Final, Native, Private)
// Parameters:
// enum class EMatchStatus        InNewMatchStatus               (Parm, ZeroConstructor, IsPlainOldData)

void UCheckScenarioNameTask::HandleOnMatchStatusChanged(enum class EMatchStatus InNewMatchStatus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.CheckScenarioNameTask.HandleOnMatchStatusChanged"));

	UCheckScenarioNameTask_HandleOnMatchStatusChanged_Params params;
	params.InNewMatchStatus = InNewMatchStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkActivities.CheckScenarioNameTask.HandleOnMatchStatsChanged
// (Final, Native, Private)

void UCheckScenarioNameTask::HandleOnMatchStatsChanged()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.CheckScenarioNameTask.HandleOnMatchStatsChanged"));

	UCheckScenarioNameTask_HandleOnMatchStatsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkActivities.CheckScenarioNameTask.HandleOnGameModeChanged
// (Final, Native, Private)
// Parameters:
// struct FName                   InNewGameModeName              (Parm, ZeroConstructor, IsPlainOldData)

void UCheckScenarioNameTask::HandleOnGameModeChanged(const struct FName& InNewGameModeName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.CheckScenarioNameTask.HandleOnGameModeChanged"));

	UCheckScenarioNameTask_HandleOnGameModeChanged_Params params;
	params.InNewGameModeName = InNewGameModeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkActivities.CompetitiveActivityInstance.UpdateGameStateListeners
// (Event, Public, BlueprintEvent)

void UCompetitiveActivityInstance::UpdateGameStateListeners()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.CompetitiveActivityInstance.UpdateGameStateListeners"));

	UCompetitiveActivityInstance_UpdateGameStateListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction EmbarkActivities.CompetitiveActivityInstance.OnMatchStatusChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class EMatchStatus        InNewMatchStatus               (Parm, ZeroConstructor, IsPlainOldData)

void UCompetitiveActivityInstance::OnMatchStatusChanged__DelegateSignature(enum class EMatchStatus InNewMatchStatus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction EmbarkActivities.CompetitiveActivityInstance.OnMatchStatusChanged__DelegateSignature"));

	UCompetitiveActivityInstance_OnMatchStatusChanged__DelegateSignature_Params params;
	params.InNewMatchStatus = InNewMatchStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction EmbarkActivities.CompetitiveActivityInstance.OnMatchStatsChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UCompetitiveActivityInstance::OnMatchStatsChanged__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction EmbarkActivities.CompetitiveActivityInstance.OnMatchStatsChanged__DelegateSignature"));

	UCompetitiveActivityInstance_OnMatchStatsChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction EmbarkActivities.CompetitiveActivityInstance.OnGameModeChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FName                   InNewGameModeName              (Parm, ZeroConstructor, IsPlainOldData)

void UCompetitiveActivityInstance::OnGameModeChanged__DelegateSignature(const struct FName& InNewGameModeName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction EmbarkActivities.CompetitiveActivityInstance.OnGameModeChanged__DelegateSignature"));

	UCompetitiveActivityInstance_OnGameModeChanged__DelegateSignature_Params params;
	params.InNewGameModeName = InNewGameModeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkActivities.CompetitiveActivityInstance.IsValidScenarioName
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCompetitiveActivityInstance::IsValidScenarioName()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.CompetitiveActivityInstance.IsValidScenarioName"));

	UCompetitiveActivityInstance_IsValidScenarioName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkActivities.CompetitiveActivityInstance.GetTeamScore
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class AEmbarkSquad*            Squad                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScore                  OutScore                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCompetitiveActivityInstance::GetTeamScore(class AEmbarkSquad* Squad, struct FScore* OutScore)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.CompetitiveActivityInstance.GetTeamScore"));

	UCompetitiveActivityInstance_GetTeamScore_Params params;
	params.Squad = Squad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutScore != nullptr)
		*OutScore = params.OutScore;

	return params.ReturnValue;
}


// Function EmbarkActivities.CompetitiveActivityInstance.GetPlayerScore
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UEmbarkSquadMember*      SquadMember                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScore                  OutScore                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCompetitiveActivityInstance::GetPlayerScore(class UEmbarkSquadMember* SquadMember, struct FScore* OutScore)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.CompetitiveActivityInstance.GetPlayerScore"));

	UCompetitiveActivityInstance_GetPlayerScore_Params params;
	params.SquadMember = SquadMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutScore != nullptr)
		*OutScore = params.OutScore;

	return params.ReturnValue;
}


// Function EmbarkActivities.CompetitiveActivityInstance.GetCurrentMatchStatus
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// enum class EMatchStatus        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EMatchStatus UCompetitiveActivityInstance::GetCurrentMatchStatus()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.CompetitiveActivityInstance.GetCurrentMatchStatus"));

	UCompetitiveActivityInstance_GetCurrentMatchStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkActivities.EmbarkActivitiesStatics.GetProfile
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class ULocalPlayer*            InLocalPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        InUniqueNetId                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UServicePlayerProfile*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UServicePlayerProfile* UEmbarkActivitiesStatics::STATIC_GetProfile(class ULocalPlayer* InLocalPlayer, const struct FUniqueNetIdRepl& InUniqueNetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.EmbarkActivitiesStatics.GetProfile"));

	UEmbarkActivitiesStatics_GetProfile_Params params;
	params.InLocalPlayer = InLocalPlayer;
	params.InUniqueNetId = InUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkActivities.EmbarkActivitiesStatics.GetPlayerName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class ULocalPlayer*            InLocalPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        InUniqueNetId                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkActivitiesStatics::STATIC_GetPlayerName(class ULocalPlayer* InLocalPlayer, const struct FUniqueNetIdRepl& InUniqueNetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.EmbarkActivitiesStatics.GetPlayerName"));

	UEmbarkActivitiesStatics_GetPlayerName_Params params;
	params.InLocalPlayer = InLocalPlayer;
	params.InUniqueNetId = InUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkActivities.EmbarkActivitiesStatics.GetPlatformUniqueNetId
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class ULocalPlayer*            InLocalPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        InUniqueNetId                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FUniqueNetIdRepl        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUniqueNetIdRepl UEmbarkActivitiesStatics::STATIC_GetPlatformUniqueNetId(class ULocalPlayer* InLocalPlayer, const struct FUniqueNetIdRepl& InUniqueNetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.EmbarkActivitiesStatics.GetPlatformUniqueNetId"));

	UEmbarkActivitiesStatics_GetPlatformUniqueNetId_Params params;
	params.InLocalPlayer = InLocalPlayer;
	params.InUniqueNetId = InUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkActivities.EmbarkActivitiesStatics.GetPlatformEmptyId
// (Final, Native, Static, Public)
// Parameters:
// struct FUniqueNetIdRepl        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUniqueNetIdRepl UEmbarkActivitiesStatics::STATIC_GetPlatformEmptyId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.EmbarkActivitiesStatics.GetPlatformEmptyId"));

	UEmbarkActivitiesStatics_GetPlatformEmptyId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkActivities.GetMatchIdTask.HandleOnMatchIdChanged
// (Final, Native, Private)

void UGetMatchIdTask::HandleOnMatchIdChanged()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.GetMatchIdTask.HandleOnMatchIdChanged"));

	UGetMatchIdTask_HandleOnMatchIdChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkActivities.RequestPlatformIdTask.HandleOnSquadsChanged
// (Final, Native, Private)

void URequestPlatformIdTask::HandleOnSquadsChanged()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.RequestPlatformIdTask.HandleOnSquadsChanged"));

	URequestPlatformIdTask_HandleOnSquadsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkActivities.RequestPlatformIdTask.HandleOnRequestCompleted
// (Final, Native, Private)
// Parameters:
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData)

void URequestPlatformIdTask::HandleOnRequestCompleted(bool bWasSuccessful)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkActivities.RequestPlatformIdTask.HandleOnRequestCompleted"));

	URequestPlatformIdTask_HandleOnRequestCompleted_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
