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

// Function DiscoveryOnline.IEmbarkOnlineRoundStatModel.RequestRoundStatSummary
struct UIEmbarkOnlineRoundStatModel_RequestRoundStatSummary_Params
{
};

// Function DiscoveryOnline.IEmbarkOnlineRoundStatModel.RequestRoundStat
struct UIEmbarkOnlineRoundStatModel_RequestRoundStat_Params
{
};

// Function DiscoveryOnline.IEmbarkOnlineRoundStatModel.GetRoundStatSummary
struct UIEmbarkOnlineRoundStatModel_GetRoundStatSummary_Params
{
	enum class EServiceRoundStatSummaryType            Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FApiGatewayDiscoveryRoundStatSummary        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DiscoveryOnline.IEmbarkOnlineRoundStatModel.GetRoundStats
struct UIEmbarkOnlineRoundStatModel_GetRoundStats_Params
{
	TArray<struct FApiGatewayDiscoveryRoundStats>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DiscoveryOnline.IEmbarkOnlineSurveySettingsModel.RequestSurveySettings
struct UIEmbarkOnlineSurveySettingsModel_RequestSurveySettings_Params
{
	struct FString                                     Locale;                                                   // (Parm, ZeroConstructor)
};

// Function DiscoveryOnline.IEmbarkOnlineSurveySettingsModel.GetSurveySettings
struct UIEmbarkOnlineSurveySettingsModel_GetSurveySettings_Params
{
	struct FApiGatewaySharedGetSurveySettingsResponse  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.TravelToTierMatch
struct UIEmbarkOnlineTournamentsModel_TravelToTierMatch_Params
{
	struct FApiGatewayDiscoveryGameServer              TournamentGameServer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.MonitorTournament
struct UIEmbarkOnlineTournamentsModel_MonitorTournament_Params
{
	struct FString                                     TournamentId;                                             // (Parm, ZeroConstructor)
};

// Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.JoinTournamentMatch
struct UIEmbarkOnlineTournamentsModel_JoinTournamentMatch_Params
{
};

// Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.IsJoiningTournament
struct UIEmbarkOnlineTournamentsModel_IsJoiningTournament_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.GetTournamentSession
struct UIEmbarkOnlineTournamentsModel_GetTournamentSession_Params
{
};

// Function DiscoveryOnline.IEmbarkOnlineTournamentsModel.AbandonTournament
struct UIEmbarkOnlineTournamentsModel_AbandonTournament_Params
{
	struct FString                                     TournamentId;                                             // (Parm, ZeroConstructor)
};

// Function DiscoveryOnline.InventoryServiceDiscoveryContestantPackItem.IsEmpty
struct UInventoryServiceDiscoveryContestantPackItem_IsEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ResetRoundStats
struct UDiscoveryOnlineClientAdmin_ResetRoundStats_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ResetProgression
struct UDiscoveryOnlineClientAdmin_ResetProgression_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ResetInventory
struct UDiscoveryOnlineClientAdmin_ResetInventory_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DiscoveryOnline.DiscoveryOnlineClientAdmin.HasAccess
struct UDiscoveryOnlineClientAdmin_HasAccess_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ClearReconnect
struct UDiscoveryOnlineClientAdmin_ClearReconnect_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DiscoveryOnline.DiscoveryOnlineClientAdmin.ClearBan
struct UDiscoveryOnlineClientAdmin_ClearBan_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DiscoveryOnline.DiscoveryOnlineClientAdmin.AbandonMatch
struct UDiscoveryOnlineClientAdmin_AbandonMatch_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetTournamentsModel
struct UIDiscoveryOnlineClientServices_GetTournamentsModel_Params
{
	class UIEmbarkOnlineTournamentsModel*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetSurveySettingsModel
struct UIDiscoveryOnlineClientServices_GetSurveySettingsModel_Params
{
	class UIEmbarkOnlineSurveySettingsModel*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetScenarioModel
struct UIDiscoveryOnlineClientServices_GetScenarioModel_Params
{
	class UIDiscoveryOnlineScenarioModel*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetRoundStatModel
struct UIDiscoveryOnlineClientServices_GetRoundStatModel_Params
{
	class UIEmbarkOnlineRoundStatModel*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetRankModel
struct UIDiscoveryOnlineClientServices_GetRankModel_Params
{
	class UIDiscoveryOnlineRankModel*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetDiscoveryOnlineClientServices
struct UIDiscoveryOnlineClientServices_GetDiscoveryOnlineClientServices_Params
{
	class UObject*                                     InObj;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UIDiscoveryOnlineClientServices*             ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetDiscoveryInventoryModel
struct UIDiscoveryOnlineClientServices_GetDiscoveryInventoryModel_Params
{
	class UIDiscoveryOnlineInventoryModel*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineClientServices.GetContestantPackModel
struct UIDiscoveryOnlineClientServices_GetContestantPackModel_Params
{
	class UIDiscoveryOnlineContestantPackModel*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestUpdateContestantPack
struct UIDiscoveryOnlineContestantPackModel_RequestUpdateContestantPack_Params
{
	struct FApiGatewayDiscoveryPlayerPersistenceContestantPack Pack;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestRemoveContestantPack
struct UIDiscoveryOnlineContestantPackModel_RequestRemoveContestantPack_Params
{
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
	struct FString                                     Etag;                                                     // (Parm, ZeroConstructor)
};

// Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestContestantPacks
struct UIDiscoveryOnlineContestantPackModel_RequestContestantPacks_Params
{
};

// Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestBatchUpdateContestantPacks
struct UIDiscoveryOnlineContestantPackModel_RequestBatchUpdateContestantPacks_Params
{
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> packs;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.RequestAddContestantPack
struct UIDiscoveryOnlineContestantPackModel_RequestAddContestantPack_Params
{
	struct FApiGatewayDiscoveryCreateContestantPackRequest req;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DiscoveryOnline.IDiscoveryOnlineContestantPackModel.GetContestantPacks
struct UIDiscoveryOnlineContestantPackModel_GetContestantPacks_Params
{
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DiscoveryOnline.IDiscoveryOnlineInventoryModel.RemoveContestantPack
struct UIDiscoveryOnlineInventoryModel_RemoveContestantPack_Params
{
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
	struct FString                                     Etag;                                                     // (Parm, ZeroConstructor)
};

// Function DiscoveryOnline.IDiscoveryOnlineInventoryModel.MutateInventoryItem
struct UIDiscoveryOnlineInventoryModel_MutateInventoryItem_Params
{
	class UInventoryServiceItemBase*                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineInventoryModel.BatchUpdateContestantPacks
struct UIDiscoveryOnlineInventoryModel_BatchUpdateContestantPacks_Params
{
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> ContestantPacks;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DiscoveryOnline.IDiscoveryOnlineInventoryModel.AddContestantPack
struct UIDiscoveryOnlineInventoryModel_AddContestantPack_Params
{
	struct FApiGatewayDiscoveryCreateContestantPackRequest req;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DiscoveryOnline.IDiscoveryOnlineRankModel.UpgradeItem
struct UIDiscoveryOnlineRankModel_UpgradeItem_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	int                                                NextLevel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineRankModel.SyncPlayerRanks
struct UIDiscoveryOnlineRankModel_SyncPlayerRanks_Params
{
};

// Function DiscoveryOnline.IDiscoveryOnlineRankModel.GetPlayerRankInfo
struct UIDiscoveryOnlineRankModel_GetPlayerRankInfo_Params
{
	class UDiscoveryPlayerRankInfo*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineRankModel.ActivateItemRank
struct UIDiscoveryOnlineRankModel_ActivateItemRank_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Etag;                                                     // (Parm, ZeroConstructor)
};

// Function DiscoveryOnline.IDiscoveryOnlineScenarioModel.SyncScenarioList
struct UIDiscoveryOnlineScenarioModel_SyncScenarioList_Params
{
};

// Function DiscoveryOnline.IDiscoveryOnlineScenarioModel.GetScenarioList
struct UIDiscoveryOnlineScenarioModel_GetScenarioList_Params
{
	class UDiscoveryScenarioList*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineServerServices.SyncInventories
struct UIDiscoveryOnlineServerServices_SyncInventories_Params
{
	TArray<struct FUniqueNetIdRepl>                    UniqueNetIdRepls;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineServerServices.SubmitMatchReport
struct UIDiscoveryOnlineServerServices_SubmitMatchReport_Params
{
	struct FString                                     MatchId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ScenarioId;                                               // (Parm, ZeroConstructor)
	TArray<struct FOnlineSquadInfo>                    ParticipatedSquads;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<struct FString, int>                          SquadScores;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineServerServices.SendMatchHeartbeat
struct UIDiscoveryOnlineServerServices_SendMatchHeartbeat_Params
{
	struct FString                                     TournamentId;                                             // (Parm, ZeroConstructor)
	struct FString                                     MatchId;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineServerServices.ReportTournamentMatchResult
struct UIDiscoveryOnlineServerServices_ReportTournamentMatchResult_Params
{
	struct FString                                     TournamentId;                                             // (Parm, ZeroConstructor)
	struct FString                                     MatchId;                                                  // (Parm, ZeroConstructor)
	TArray<int>                                        WinningTeamIds;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<struct FString, struct FString>               TravelData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineServerServices.ReportTournamentMatchProgress
struct UIDiscoveryOnlineServerServices_ReportTournamentMatchProgress_Params
{
	struct FString                                     TournamentId;                                             // (Parm, ZeroConstructor)
	struct FString                                     MatchId;                                                  // (Parm, ZeroConstructor)
	int                                                ExpectedEndTime;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchProgressData;                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineServerServices.ReportPlayerAbandoned
struct UIDiscoveryOnlineServerServices_ReportPlayerAbandoned_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     TournamentId;                                             // (Parm, ZeroConstructor)
	int64_t                                            TimeOfAbandon;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImposeSanction;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GameServer;                                               // (Parm, ZeroConstructor)
};

// Function DiscoveryOnline.IDiscoveryOnlineServerServices.HasInventories
struct UIDiscoveryOnlineServerServices_HasInventories_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineServerServices.HasActivatedItemRanks
struct UIDiscoveryOnlineServerServices_HasActivatedItemRanks_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineServerServices.GetInventory
struct UIDiscoveryOnlineServerServices_GetInventory_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class UInventoryServiceInventory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineServerServices.GetActivatedItemRanks
struct UIDiscoveryOnlineServerServices_GetActivatedItemRanks_Params
{
	TArray<struct FUniqueNetIdRepl>                    UniqueNetIdRepls;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.IDiscoveryOnlineServerServices.GetActivatedItemRank
struct UIDiscoveryOnlineServerServices_GetActivatedItemRank_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DiscoveryOnline.DiscoveryPlayerRankInfo.UpdateDerivedProperties
struct UDiscoveryPlayerRankInfo_UpdateDerivedProperties_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.DiscoveryPlayerRankInfo.HasRankInfoByBucketId
struct UDiscoveryPlayerRankInfo_HasRankInfoByBucketId_Params
{
	struct FString                                     BucketId;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryOnline.DiscoveryPlayerRankInfo.GetRankInfoByBucketId
struct UDiscoveryPlayerRankInfo_GetRankInfoByBucketId_Params
{
	struct FString                                     BucketId;                                                 // (Parm, ZeroConstructor)
	class UDiscoveryRankInfo*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
