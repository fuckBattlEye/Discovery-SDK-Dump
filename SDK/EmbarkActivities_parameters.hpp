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

// Function EmbarkActivities.ActivityInstance.Initialize
struct UActivityInstance_Initialize_Params
{
	class UActivityAsset*                              InActivityAsset;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULocalPlayer*                                InLocalPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkActivities.ActivityInstance.GetPlayerController
struct UActivityInstance_GetPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkActivities.ActivityInstance.GetGameState
struct UActivityInstance_GetGameState_Params
{
	class AEmbarkGameStateBase*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkActivities.CheckLoginStatus.HandleOnLoginComplete
struct UCheckLoginStatus_HandleOnLoginComplete_Params
{
	bool                                               bWasSuccessful;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	enum class EAuthErrorCode                          ErrorCode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkActivities.CheckScenarioNameTask.HandleOnSquadsChanged
struct UCheckScenarioNameTask_HandleOnSquadsChanged_Params
{
};

// Function EmbarkActivities.CheckScenarioNameTask.HandleOnMatchStatusChanged
struct UCheckScenarioNameTask_HandleOnMatchStatusChanged_Params
{
	enum class EMatchStatus                            InNewMatchStatus;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkActivities.CheckScenarioNameTask.HandleOnMatchStatsChanged
struct UCheckScenarioNameTask_HandleOnMatchStatsChanged_Params
{
};

// Function EmbarkActivities.CheckScenarioNameTask.HandleOnGameModeChanged
struct UCheckScenarioNameTask_HandleOnGameModeChanged_Params
{
	struct FName                                       InNewGameModeName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkActivities.CompetitiveActivityInstance.UpdateGameStateListeners
struct UCompetitiveActivityInstance_UpdateGameStateListeners_Params
{
};

// DelegateFunction EmbarkActivities.CompetitiveActivityInstance.OnMatchStatusChanged__DelegateSignature
struct UCompetitiveActivityInstance_OnMatchStatusChanged__DelegateSignature_Params
{
	enum class EMatchStatus                            InNewMatchStatus;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction EmbarkActivities.CompetitiveActivityInstance.OnMatchStatsChanged__DelegateSignature
struct UCompetitiveActivityInstance_OnMatchStatsChanged__DelegateSignature_Params
{
};

// DelegateFunction EmbarkActivities.CompetitiveActivityInstance.OnGameModeChanged__DelegateSignature
struct UCompetitiveActivityInstance_OnGameModeChanged__DelegateSignature_Params
{
	struct FName                                       InNewGameModeName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkActivities.CompetitiveActivityInstance.IsValidScenarioName
struct UCompetitiveActivityInstance_IsValidScenarioName_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkActivities.CompetitiveActivityInstance.GetTeamScore
struct UCompetitiveActivityInstance_GetTeamScore_Params
{
	class AEmbarkSquad*                                Squad;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScore                                      OutScore;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkActivities.CompetitiveActivityInstance.GetPlayerScore
struct UCompetitiveActivityInstance_GetPlayerScore_Params
{
	class UEmbarkSquadMember*                          SquadMember;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScore                                      OutScore;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkActivities.CompetitiveActivityInstance.GetCurrentMatchStatus
struct UCompetitiveActivityInstance_GetCurrentMatchStatus_Params
{
	enum class EMatchStatus                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkActivities.EmbarkActivitiesStatics.GetProfile
struct UEmbarkActivitiesStatics_GetProfile_Params
{
	class ULocalPlayer*                                InLocalPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            InUniqueNetId;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UServicePlayerProfile*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkActivities.EmbarkActivitiesStatics.GetPlayerName
struct UEmbarkActivitiesStatics_GetPlayerName_Params
{
	class ULocalPlayer*                                InLocalPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            InUniqueNetId;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkActivities.EmbarkActivitiesStatics.GetPlatformUniqueNetId
struct UEmbarkActivitiesStatics_GetPlatformUniqueNetId_Params
{
	class ULocalPlayer*                                InLocalPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            InUniqueNetId;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUniqueNetIdRepl                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkActivities.EmbarkActivitiesStatics.GetPlatformEmptyId
struct UEmbarkActivitiesStatics_GetPlatformEmptyId_Params
{
	struct FUniqueNetIdRepl                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkActivities.GetMatchIdTask.HandleOnMatchIdChanged
struct UGetMatchIdTask_HandleOnMatchIdChanged_Params
{
};

// Function EmbarkActivities.RequestPlatformIdTask.HandleOnSquadsChanged
struct URequestPlatformIdTask_HandleOnSquadsChanged_Params
{
};

// Function EmbarkActivities.RequestPlatformIdTask.HandleOnRequestCompleted
struct URequestPlatformIdTask_HandleOnRequestCompleted_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
