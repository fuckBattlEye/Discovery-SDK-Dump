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

// Function OnlineSubsystemAngelscript.EmbarkOnlineServiceBase.Shutdown
struct UEmbarkOnlineServiceBase_Shutdown_Params
{
};

// Function OnlineSubsystemAngelscript.EmbarkOnlineServiceBase.Init
struct UEmbarkOnlineServiceBase_Init_Params
{
};

// Function OnlineSubsystemAngelscript.EmbarkOnlineServiceBase.GetContext
struct UEmbarkOnlineServiceBase_GetContext_Params
{
	class UEmbarkApiContext*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.IsInTestMode
struct UIEmbarkOnlineClientServices_IsInTestMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.Initialize
struct UIEmbarkOnlineClientServices_Initialize_Params
{
	class ULocalPlayer*                                InLocalPlayer;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineClientServices*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetVoiceChatModel
struct UIEmbarkOnlineClientServices_GetVoiceChatModel_Params
{
	class UIEmbarkOnlineVoiceChatModel*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetStoreModel
struct UIEmbarkOnlineClientServices_GetStoreModel_Params
{
	class UIEmbarkOnlineStoreModel*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetRewardModel
struct UIEmbarkOnlineClientServices_GetRewardModel_Params
{
	class UIEmbarkOnlineRewardModel*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetPersistentPlayerKeysModel
struct UIEmbarkOnlineClientServices_GetPersistentPlayerKeysModel_Params
{
	class UIEmbarkOnlinePersistentPlayerKeysModel*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetMatchmakingModel
struct UIEmbarkOnlineClientServices_GetMatchmakingModel_Params
{
	class UIEmbarkOnlineMatchmakingModel*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetManifestModel
struct UIEmbarkOnlineClientServices_GetManifestModel_Params
{
	class UIEmbarkOnlineManifestModel*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetInventoryModel
struct UIEmbarkOnlineClientServices_GetInventoryModel_Params
{
	class UIEmbarkOnlineInventoryModel*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetIdentityModel
struct UIEmbarkOnlineClientServices_GetIdentityModel_Params
{
	class UIEmbarkOnlineIdentityModel*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetGameSettingsModel
struct UIEmbarkOnlineClientServices_GetGameSettingsModel_Params
{
	class UIEmbarkOnlineGameSettingsModel*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetFriendsModel
struct UIEmbarkOnlineClientServices_GetFriendsModel_Params
{
	class UIEmbarkOnlineFriendsModel*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetContext
struct UIEmbarkOnlineClientServices_GetContext_Params
{
	class UEmbarkApiContext*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetBuildModel
struct UIEmbarkOnlineClientServices_GetBuildModel_Params
{
	class UIEmbarkOnlineBuildModel*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetBattlePassModel
struct UIEmbarkOnlineClientServices_GetBattlePassModel_Params
{
	class UIEmbarkOnlineBattlePassModel*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetAnnouncementsModel
struct UIEmbarkOnlineClientServices_GetAnnouncementsModel_Params
{
	class UIEmbarkOnlineAnnouncementsModel*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.GetAchievementsModel
struct UIEmbarkOnlineClientServices_GetAchievementsModel_Params
{
	class UIEmbarkOnlineAchievementsModel*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.Get
struct UIEmbarkOnlineClientServices_Get_Params
{
	class UObject*                                     InObj;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineClientServices*                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServices.Deinitialize
struct UIEmbarkOnlineClientServices_Deinitialize_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineInventoryModel.SyncPartyInventories
struct UIEmbarkOnlineInventoryModel_SyncPartyInventories_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineInventoryModel.SyncInventory
struct UIEmbarkOnlineInventoryModel_SyncInventory_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineInventoryModel.GetPartyMemberInventory
struct UIEmbarkOnlineInventoryModel_GetPartyMemberInventory_Params
{
	struct FUniqueNetIdRepl                            PartyMemberNetId;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	class UInventoryServiceInventory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineInventoryModel.GetInventory
struct UIEmbarkOnlineInventoryModel_GetInventory_Params
{
	class UInventoryServiceInventory*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.ReportPlayerDisconnected
struct UIEmbarkOnlineServerServices_ReportPlayerDisconnected_Params
{
	struct FString                                     MatchId;                                                  // (Parm, ZeroConstructor)
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.RegisterSquadsFromAnnotation
struct UIEmbarkOnlineServerServices_RegisterSquadsFromAnnotation_Params
{
	struct FString                                     JsonBlob;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.RegisterPlayerToSquad
struct UIEmbarkOnlineServerServices_RegisterPlayerToSquad_Params
{
	struct FString                                     SquadId;                                                  // (Parm, ZeroConstructor)
	struct FUniqueNetIdRepl                            NetId;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.QuerySquadVoipChannelsForRegisteredSquads
struct UIEmbarkOnlineServerServices_QuerySquadVoipChannelsForRegisteredSquads_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.QuerySquadVoipChannelsBySquadIds
struct UIEmbarkOnlineServerServices_QuerySquadVoipChannelsBySquadIds_Params
{
	TArray<struct FString>                             SquadIds;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.QuerySquadVoipChannelsByPlayerId
struct UIEmbarkOnlineServerServices_QuerySquadVoipChannelsByPlayerId_Params
{
	struct FString                                     SquadId;                                                  // (Parm, ZeroConstructor)
	struct FUniqueNetIdRepl                            NetId;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.KickPlayerFromSquadVoipChannel
struct UIEmbarkOnlineServerServices_KickPlayerFromSquadVoipChannel_Params
{
	struct FUniqueNetIdRepl                            NetId;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.IsInTestMode
struct UIEmbarkOnlineServerServices_IsInTestMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.Initialize
struct UIEmbarkOnlineServerServices_Initialize_Params
{
	class UIEmbarkOnlineServerServices*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetTweakablesAsync
struct UIEmbarkOnlineServerServices_GetTweakablesAsync_Params
{
	struct FString                                     ArtifactId;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetSquadVoipChannel
struct UIEmbarkOnlineServerServices_GetSquadVoipChannel_Params
{
	struct FUniqueNetIdRepl                            NetId;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVoiceChannelInfo                           OutVoiceChannelInfo;                                      // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetRegisteredSquads
struct UIEmbarkOnlineServerServices_GetRegisteredSquads_Params
{
	TMap<struct FString, struct FOnlineSquadInfo>      OutSquads;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetManifest
struct UIEmbarkOnlineServerServices_GetManifest_Params
{
	class UServiceManifest*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.GetContext
struct UIEmbarkOnlineServerServices_GetContext_Params
{
	class UEmbarkApiContext*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.Get
struct UIEmbarkOnlineServerServices_Get_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineServerServices*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.Deinitialize
struct UIEmbarkOnlineServerServices_Deinitialize_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServices.ApplyManifest
struct UIEmbarkOnlineServerServices_ApplyManifest_Params
{
	struct FString                                     ManifestContent;                                          // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.SyncStoreRecommendations
struct UIEmbarkOnlineStoreModel_SyncStoreRecommendations_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.RedeemOutstandingThirdPartyPurchases
struct UIEmbarkOnlineStoreModel_RedeemOutstandingThirdPartyPurchases_Params
{
	struct FString                                     InTransactionId;                                          // (Parm, ZeroConstructor)
	bool                                               bForceQueryReceipts;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.PurchaseThirdPartyStoreOffer
struct UIEmbarkOnlineStoreModel_PurchaseThirdPartyStoreOffer_Params
{
	struct FString                                     InTransactionId;                                          // (Parm, ZeroConstructor)
	struct FString                                     InThirdPartyOfferId;                                      // (Parm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.PurchaseStoreOffer
struct UIEmbarkOnlineStoreModel_PurchaseStoreOffer_Params
{
	struct FString                                     InTransactionId;                                          // (Parm, ZeroConstructor)
	int64_t                                            InOfferId;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.LeaveStore
struct UIEmbarkOnlineStoreModel_LeaveStore_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.HasStoreRecommendations
struct UIEmbarkOnlineStoreModel_HasStoreRecommendations_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.HasPurchasedItemsCache
struct UIEmbarkOnlineStoreModel_HasPurchasedItemsCache_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.GetThirdPartyStoreTelemetryName
struct UIEmbarkOnlineStoreModel_GetThirdPartyStoreTelemetryName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.GetStoreRecommendations
struct UIEmbarkOnlineStoreModel_GetStoreRecommendations_Params
{
	class UStoreRecommendations*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.GetPurchasedItemsCache
struct UIEmbarkOnlineStoreModel_GetPurchasedItemsCache_Params
{
	TArray<class UStorePurchasedItem*>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.EnterStore
struct UIEmbarkOnlineStoreModel_EnterStore_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel.ClearPurchasedItemsCache
struct UIEmbarkOnlineStoreModel_ClearPurchasedItemsCache_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineAchievementsModel.SyncAchievements
struct UIEmbarkOnlineAchievementsModel_SyncAchievements_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineAchievementsModel.SetAchievementProgress
struct UIEmbarkOnlineAchievementsModel_SetAchievementProgress_Params
{
	struct FString                                     AchievementId;                                            // (Parm, ZeroConstructor)
	int                                                TimesToTrigger;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineAchievementsModel.ResetAchievements
struct UIEmbarkOnlineAchievementsModel_ResetAchievements_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineAchievementsModel.AddAchievementProgress
struct UIEmbarkOnlineAchievementsModel_AddAchievementProgress_Params
{
	struct FString                                     AchievementId;                                            // (Parm, ZeroConstructor)
	int                                                TimesToTrigger;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineAnnouncementsModel.SyncAnnouncements
struct UIEmbarkOnlineAnnouncementsModel_SyncAnnouncements_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineAnnouncementsModel.GetAnnouncements
struct UIEmbarkOnlineAnnouncementsModel_GetAnnouncements_Params
{
	class UServiceAnnouncements*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineBattlePassModel.UpgradeBattlePassLevel
struct UIEmbarkOnlineBattlePassModel_UpgradeBattlePassLevel_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	int                                                NextLevel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineBattlePassModel.SyncBattlePass
struct UIEmbarkOnlineBattlePassModel_SyncBattlePass_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineBattlePassModel.GetBattlePass
struct UIEmbarkOnlineBattlePassModel_GetBattlePass_Params
{
	class UServiceBattlePass*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineBattlePassModel.ClaimBattlePassEntry
struct UIEmbarkOnlineBattlePassModel_ClaimBattlePassEntry_Params
{
	int64_t                                            ProductId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineBuildModel.RequestLatestBuild
struct UIEmbarkOnlineBuildModel_RequestLatestBuild_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineBuildModel.IsBuildOutdated
struct UIEmbarkOnlineBuildModel_IsBuildOutdated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.ShowPlatformProfileUI
struct UIEmbarkOnlineFriendsModel_ShowPlatformProfileUI_Params
{
	struct FUniqueNetIdRepl                            Requestor;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUniqueNetIdRepl                            Requestee;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.SetRichPresenceStatus
struct UIEmbarkOnlineFriendsModel_SetRichPresenceStatus_Params
{
	struct FString                                     RichPresenceStatus;                                       // (Parm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.SetCrossPlayEnabled
struct UIEmbarkOnlineFriendsModel_SetCrossPlayEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.RequestFriendshipByName
struct UIEmbarkOnlineFriendsModel_RequestFriendshipByName_Params
{
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     DisplayNameDiscriminator;                                 // (Parm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.ReportPlayer
struct UIEmbarkOnlineFriendsModel_ReportPlayer_Params
{
	struct FUniqueNetIdRepl                            EmbarkID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EReportPlayerReason                     ReportReason;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.LeaveParty
struct UIEmbarkOnlineFriendsModel_LeaveParty_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.KickFromParty
struct UIEmbarkOnlineFriendsModel_KickFromParty_Params
{
	struct FUniqueNetIdRepl                            UserId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.JoinParty
struct UIEmbarkOnlineFriendsModel_JoinParty_Params
{
	struct FString                                     PartyId;                                                  // (Parm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.IsPartyLeader
struct UIEmbarkOnlineFriendsModel_IsPartyLeader_Params
{
	struct FUniqueNetIdRepl                            MemberTenancyId;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.InviteToPartyById
struct UIEmbarkOnlineFriendsModel_InviteToPartyById_Params
{
	struct FUniqueNetIdRepl                            UserId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.InviteToParty
struct UIEmbarkOnlineFriendsModel_InviteToParty_Params
{
	class UServiceFriend*                              Friend;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.HasTriedBootToGame
struct UIEmbarkOnlineFriendsModel_HasTriedBootToGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetSuggestedFriendsList
struct UIEmbarkOnlineFriendsModel_GetSuggestedFriendsList_Params
{
	class UServiceFriendsList*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetRecentPlayersList
struct UIEmbarkOnlineFriendsModel_GetRecentPlayersList_Params
{
	class UServiceRecentPlayersList*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetParty
struct UIEmbarkOnlineFriendsModel_GetParty_Params
{
	class UServiceParty*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetInvitationsInfo
struct UIEmbarkOnlineFriendsModel_GetInvitationsInfo_Params
{
	class UServicePartyInvitationsInfo*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetFriendsList
struct UIEmbarkOnlineFriendsModel_GetFriendsList_Params
{
	class UServiceFriendsList*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.GetBlockedPlayersList
struct UIEmbarkOnlineFriendsModel_GetBlockedPlayersList_Params
{
	class UServiceFriendsList*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.DeleteFriendship
struct UIEmbarkOnlineFriendsModel_DeleteFriendship_Params
{
	class UServiceFriend*                              Friend;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.DeclineInvitation
struct UIEmbarkOnlineFriendsModel_DeclineInvitation_Params
{
	struct FString                                     PartyId;                                                  // (Parm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.BlockPlayer
struct UIEmbarkOnlineFriendsModel_BlockPlayer_Params
{
	struct FUniqueNetIdRepl                            TenancyUserId;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel.AcceptFriendship
struct UIEmbarkOnlineFriendsModel_AcceptFriendship_Params
{
	class UServiceFriend*                              Friend;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineGameSettingsModel.SyncGameSettings
struct UIEmbarkOnlineGameSettingsModel_SyncGameSettings_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineGameSettingsModel.GetGameSettings
struct UIEmbarkOnlineGameSettingsModel_GetGameSettings_Params
{
	class UEmbarkOnlineGameSettings*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.UpdateProfile
struct UIEmbarkOnlineIdentityModel_UpdateProfile_Params
{
	bool                                               bUpdateEmail;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Email;                                                    // (Parm, ZeroConstructor)
	bool                                               bUpdateTosVersionSeen;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TosVersionSeen;                                           // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.UpdatePlayingMultiplayerOnline
struct UIEmbarkOnlineIdentityModel_UpdatePlayingMultiplayerOnline_Params
{
	bool                                               bIsPlayingMultiplayerOnline;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.SyncPlayerProfile
struct UIEmbarkOnlineIdentityModel_SyncPlayerProfile_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.ShowWebURL
struct UIEmbarkOnlineIdentityModel_ShowWebURL_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               bRequestPredeterminedContent;                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.RequestProfilesByTenancyUserIds
struct UIEmbarkOnlineIdentityModel_RequestProfilesByTenancyUserIds_Params
{
	TArray<struct FEmbarkUserHandle>                   Ids;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.RequestProfilesByEmbarkAccountIds
struct UIEmbarkOnlineIdentityModel_RequestProfilesByEmbarkAccountIds_Params
{
	TArray<struct FEmbarkAccountHandle>                Ids;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.Logout
struct UIEmbarkOnlineIdentityModel_Logout_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.LoginWithLink
struct UIEmbarkOnlineIdentityModel_LoginWithLink_Params
{
	bool                                               bLink;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.Login
struct UIEmbarkOnlineIdentityModel_Login_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.IsWebUrlPredeterminedContent
struct UIEmbarkOnlineIdentityModel_IsWebUrlPredeterminedContent_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.IsLoggedIn
struct UIEmbarkOnlineIdentityModel_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.IsCrossPlayEnabled
struct UIEmbarkOnlineIdentityModel_IsCrossPlayEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.HasEmail
struct UIEmbarkOnlineIdentityModel_HasEmail_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.HasCrossPlayPrivilege
struct UIEmbarkOnlineIdentityModel_HasCrossPlayPrivilege_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetWebUrlPredeterminedContent
struct UIEmbarkOnlineIdentityModel_GetWebUrlPredeterminedContent_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetUserId
struct UIEmbarkOnlineIdentityModel_GetUserId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetUniqueNetId
struct UIEmbarkOnlineIdentityModel_GetUniqueNetId_Params
{
	struct FUniqueNetIdRepl                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetRetryAfterSeconds
struct UIEmbarkOnlineIdentityModel_GetRetryAfterSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetProfileByTenancyUserId
struct UIEmbarkOnlineIdentityModel_GetProfileByTenancyUserId_Params
{
	struct FEmbarkUserHandle                           ID;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	class UServicePlayerProfile*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetProfileByEmbarkAccountId
struct UIEmbarkOnlineIdentityModel_GetProfileByEmbarkAccountId_Params
{
	struct FEmbarkAccountHandle                        ID;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	class UServicePlayerProfile*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetProfile
struct UIEmbarkOnlineIdentityModel_GetProfile_Params
{
	class UServicePlayerProfile*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetLocalPlayerNum
struct UIEmbarkOnlineIdentityModel_GetLocalPlayerNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetLinkingCode
struct UIEmbarkOnlineIdentityModel_GetLinkingCode_Params
{
	struct FEmbarkLinkingCode                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.GetDisplayName
struct UIEmbarkOnlineIdentityModel_GetDisplayName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.CanCommunicateOnline
struct UIEmbarkOnlineIdentityModel_CanCommunicateOnline_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel.AutoLogin
struct UIEmbarkOnlineIdentityModel_AutoLogin_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.SyncManifest
struct UIEmbarkOnlineManifestModel_SyncManifest_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.SetManifestDeferredOverride
struct UIEmbarkOnlineManifestModel_SetManifestDeferredOverride_Params
{
	bool                                               bIsDeferred;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.OverrideManifest
struct UIEmbarkOnlineManifestModel_OverrideManifest_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.IsUpToDate
struct UIEmbarkOnlineManifestModel_IsUpToDate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel.GetManifest
struct UIEmbarkOnlineManifestModel_GetManifest_Params
{
	class UServiceManifest*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.StartMatchmaking
struct UIEmbarkOnlineMatchmakingModel_StartMatchmaking_Params
{
	struct FMatchmakingParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.SkipMatchmaking
struct UIEmbarkOnlineMatchmakingModel_SkipMatchmaking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.RefreshMatchmakingTimeEstimates
struct UIEmbarkOnlineMatchmakingModel_RefreshMatchmakingTimeEstimates_Params
{
	TArray<struct FString>                             Scenarios;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.Reconnect
struct UIEmbarkOnlineMatchmakingModel_Reconnect_Params
{
	struct FGameServer                                 GameServer;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.JoinSession
struct UIEmbarkOnlineMatchmakingModel_JoinSession_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.JoinLocalServer
struct UIEmbarkOnlineMatchmakingModel_JoinLocalServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.IsSkipMatchmakingPending
struct UIEmbarkOnlineMatchmakingModel_IsSkipMatchmakingPending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.IsMatchmaking
struct UIEmbarkOnlineMatchmakingModel_IsMatchmaking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.IsAboveLatencyThreshold
struct UIEmbarkOnlineMatchmakingModel_IsAboveLatencyThreshold_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingTimeEstimates
struct UIEmbarkOnlineMatchmakingModel_GetMatchmakingTimeEstimates_Params
{
	struct FMatchmakingTimeEstimates                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingStatus
struct UIEmbarkOnlineMatchmakingModel_GetMatchmakingStatus_Params
{
	enum class EMatchmakingStatus                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingSession
struct UIEmbarkOnlineMatchmakingModel_GetMatchmakingSession_Params
{
	struct FMatchmakingSession                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingServer
struct UIEmbarkOnlineMatchmakingModel_GetMatchmakingServer_Params
{
	struct FGameServer                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.GetMatchmakingParameters
struct UIEmbarkOnlineMatchmakingModel_GetMatchmakingParameters_Params
{
	struct FMatchmakingParameters                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.ConfirmPartyMatchmaking
struct UIEmbarkOnlineMatchmakingModel_ConfirmPartyMatchmaking_Params
{
	struct FString                                     MatchId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Region;                                                   // (Parm, ZeroConstructor)
	bool                                               bEnableVoice;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CanStartMatchmaking
struct UIEmbarkOnlineMatchmakingModel_CanStartMatchmaking_Params
{
	struct FMatchmakingParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CanSkipMatchmaking
struct UIEmbarkOnlineMatchmakingModel_CanSkipMatchmaking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CanJoinSession
struct UIEmbarkOnlineMatchmakingModel_CanJoinSession_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CancelMatchmaking
struct UIEmbarkOnlineMatchmakingModel_CancelMatchmaking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel.CanCancelMatchmaking
struct UIEmbarkOnlineMatchmakingModel_CanCancelMatchmaking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.SetPersistentPlayerKey
struct UIEmbarkOnlinePersistentPlayerKeysModel_SetPersistentPlayerKey_Params
{
	struct FGameplayTag                                Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.HasPersistentPlayerKey
struct UIEmbarkOnlinePersistentPlayerKeysModel_HasPersistentPlayerKey_Params
{
	struct FGameplayTag                                Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.GetPersistentPlayerKeys
struct UIEmbarkOnlinePersistentPlayerKeysModel_GetPersistentPlayerKeys_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.GetPersistentPlayerKey
struct UIEmbarkOnlinePersistentPlayerKeysModel_GetPersistentPlayerKey_Params
{
	struct FGameplayTag                                Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.ClearPersistentPlayerKeys
struct UIEmbarkOnlinePersistentPlayerKeysModel_ClearPersistentPlayerKeys_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel.ClearPersistentPlayerKey
struct UIEmbarkOnlinePersistentPlayerKeysModel_ClearPersistentPlayerKey_Params
{
	struct FGameplayTag                                Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineRewardModel.SyncProgressionRewards
struct UIEmbarkOnlineRewardModel_SyncProgressionRewards_Params
{
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineRewardModel.GetProgressionRewards
struct UIEmbarkOnlineRewardModel_GetProgressionRewards_Params
{
	class UServiceProgressionRewards*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetSquadVoiceChannelInfo
struct UIEmbarkOnlineVoiceChatModel_SetSquadVoiceChannelInfo_Params
{
	struct FVoiceChannelInfo                           VoiceChannelInfo;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetPlayerMuted
struct UIEmbarkOnlineVoiceChatModel_SetPlayerMuted_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIsMuted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetPlayerBlocked
struct UIEmbarkOnlineVoiceChatModel_SetPlayerBlocked_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIsBlocked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetOutputVolume
struct UIEmbarkOnlineVoiceChatModel_SetOutputVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetOutputDeviceId
struct UIEmbarkOnlineVoiceChatModel_SetOutputDeviceId_Params
{
	struct FString                                     InputDeviceId;                                            // (Parm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetMode
struct UIEmbarkOnlineVoiceChatModel_SetMode_Params
{
	enum class EVoiceChatMode                          InMode;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetInputVolume
struct UIEmbarkOnlineVoiceChatModel_SetInputVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetInputDeviceId
struct UIEmbarkOnlineVoiceChatModel_SetInputDeviceId_Params
{
	struct FString                                     InputDeviceId;                                            // (Parm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SetEnabled
struct UIEmbarkOnlineVoiceChatModel_SetEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.SelectVoiceModPreset
struct UIEmbarkOnlineVoiceChatModel_SelectVoiceModPreset_Params
{
	struct FString                                     Preset;                                                   // (Parm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.LeaveVoiceChat
struct UIEmbarkOnlineVoiceChatModel_LeaveVoiceChat_Params
{
	enum class EVoiceChannel                           Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.JoinVoiceChat
struct UIEmbarkOnlineVoiceChatModel_JoinVoiceChat_Params
{
	enum class EVoiceChannel                           Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EVoiceChannelType                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsVoiceModEnabled
struct UIEmbarkOnlineVoiceChatModel_IsVoiceModEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsVoiceModAvailable
struct UIEmbarkOnlineVoiceChatModel_IsVoiceModAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsPlayerMuted
struct UIEmbarkOnlineVoiceChatModel_IsPlayerMuted_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsPlayerBlocked
struct UIEmbarkOnlineVoiceChatModel_IsPlayerBlocked_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsInVoiceChat
struct UIEmbarkOnlineVoiceChatModel_IsInVoiceChat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsEnabled
struct UIEmbarkOnlineVoiceChatModel_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.IsConsolePlayerMuted
struct UIEmbarkOnlineVoiceChatModel_IsConsolePlayerMuted_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetVoipInputBindings
struct UIEmbarkOnlineVoiceChatModel_GetVoipInputBindings_Params
{
	class UInputComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetVoiceModPresets
struct UIEmbarkOnlineVoiceChatModel_GetVoiceModPresets_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetSelectedVoiceModPreset
struct UIEmbarkOnlineVoiceChatModel_GetSelectedVoiceModPreset_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetRoom
struct UIEmbarkOnlineVoiceChatModel_GetRoom_Params
{
	enum class EVoiceChannel                           Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkVoiceRoom*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetOutputVolume
struct UIEmbarkOnlineVoiceChatModel_GetOutputVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetOutputDeviceId
struct UIEmbarkOnlineVoiceChatModel_GetOutputDeviceId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetInputVolume
struct UIEmbarkOnlineVoiceChatModel_GetInputVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetInputDeviceId
struct UIEmbarkOnlineVoiceChatModel_GetInputDeviceId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetDefaultOutputDeviceId
struct UIEmbarkOnlineVoiceChatModel_GetDefaultOutputDeviceId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetDefaultInputDeviceId
struct UIEmbarkOnlineVoiceChatModel_GetDefaultInputDeviceId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetAvailableOutputDevices
struct UIEmbarkOnlineVoiceChatModel_GetAvailableOutputDevices_Params
{
	TArray<struct FVoiceDeviceInfo>                    Output;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.GetAvailableInputDevices
struct UIEmbarkOnlineVoiceChatModel_GetAvailableInputDevices_Params
{
	TArray<struct FVoiceDeviceInfo>                    Output;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.EnableVoiceMod
struct UIEmbarkOnlineVoiceChatModel_EnableVoiceMod_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.EnableRoom
struct UIEmbarkOnlineVoiceChatModel_EnableRoom_Params
{
	enum class EVoiceChannel                           Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.DeleteChannelInfo
struct UIEmbarkOnlineVoiceChatModel_DeleteChannelInfo_Params
{
	enum class EVoiceChannel                           Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel.CanChatWith
struct UIEmbarkOnlineVoiceChatModel_CanChatWith_Params
{
	TArray<struct FUniqueNetIdRepl>                    OtherUsersEmbark;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.EmbarkID.ToInt64
struct UEmbarkID_ToInt64_Params
{
	struct FUniqueNetIdRepl                            Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.EmbarkID.Invalid
struct UEmbarkID_Invalid_Params
{
	struct FUniqueNetIdRepl                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemAngelscript.EmbarkID.CreateFromString
struct UEmbarkID_CreateFromString_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FUniqueNetIdRepl                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemAngelscript.EmbarkID.Create
struct UEmbarkID_Create_Params
{
	int64_t                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServicesFactory.GetDependencies
struct UIEmbarkOnlineClientServicesFactory_GetDependencies_Params
{
	TArray<class UClass*>                              Dependencies;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineClientServicesFactory.Create
struct UIEmbarkOnlineClientServicesFactory_Create_Params
{
	class ULocalPlayer*                                InLocalPlayer;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineClientServices*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServicesFactory.GetDependencies
struct UIEmbarkOnlineServerServicesFactory_GetDependencies_Params
{
	TArray<class UClass*>                              Dependencies;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.IEmbarkOnlineServerServicesFactory.Create
struct UIEmbarkOnlineServerServicesFactory_Create_Params
{
	class UIEmbarkOnlineServerServices*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.EmbarkOnlineSubSystemHelper.RequestAuthToken
struct UEmbarkOnlineSubSystemHelper_RequestAuthToken_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.EmbarkOnlineSubSystemHelper.GetSimulationServiceUrl
struct UEmbarkOnlineSubSystemHelper_GetSimulationServiceUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerUseWeapon
struct UGameplayEventAPI_LogPlayerUseWeapon_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     PlayerPosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FQuat                                       PlayerView;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsZoomed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMelee;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WeaponName;                                               // (Parm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerUseAbility
struct UGameplayEventAPI_LogPlayerUseAbility_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	uint32_t                                           AbilityId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           DurationMs;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           CooldownMs;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerTick
struct UGameplayEventAPI_LogPlayerTick_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     PlayerPosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FQuat                                       PlayerView;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsZoomed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerTakeDamage
struct UGameplayEventAPI_LogPlayerTakeDamage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            AttackerId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     AttackerLocation;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FQuat                                       AttackerRotation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FUniqueNetIdRepl                            VictimPlayerId;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     VictimLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FQuat                                       VictimRotation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealthRemaining;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerSpawn
struct UGameplayEventAPI_LogPlayerSpawn_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	uint32_t                                           TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           CharacterId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerRevive
struct UGameplayEventAPI_LogPlayerRevive_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            RevivedPlayerId;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUniqueNetIdRepl                            ReviverPlayerId;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogPlayerDespawn
struct UGameplayEventAPI_LogPlayerDespawn_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogGameRoundStart
struct UGameplayEventAPI_LogGameRoundStart_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
	struct FString                                     ModeName;                                                 // (Parm, ZeroConstructor)
	uint32_t                                           RoundTimeSeconds;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.GameplayEventAPI.LogGameRoundEnd
struct UGameplayEventAPI_LogGameRoundEnd_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           WinningTeamId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceFriendsList.Remove
struct UServiceFriendsList_Remove_Params
{
	struct FUniqueNetIdRepl                            ID;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceFriendsList.GetFriends
struct UServiceFriendsList_GetFriends_Params
{
	TMap<struct FUniqueNetIdRepl, class UServiceFriend*> ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function OnlineSubsystemAngelscript.ServiceFriendsList.FindFriendByName
struct UServiceFriendsList_FindFriendByName_Params
{
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     DisplayNameDiscriminator;                                 // (Parm, ZeroConstructor)
	class UServiceFriend*                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceFriendsList.Find
struct UServiceFriendsList_Find_Params
{
	struct FUniqueNetIdRepl                            ID;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	class UServiceFriend*                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceFriendsList.Add
struct UServiceFriendsList_Add_Params
{
	class UServiceFriend*                              Friend;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceParty.IsValid
struct UServiceParty_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServicePlayerProfile.IsOnlineOnPlatform
struct UServicePlayerProfile_IsOnlineOnPlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServicePlayerProfile.GetPreferredDisplayName
struct UServicePlayerProfile_GetPreferredDisplayName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.InventoryServiceInventory.UpdateDerivedProperties
struct UInventoryServiceInventory_UpdateDerivedProperties_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.InventoryServiceInventory.HasItemsByItemType
struct UInventoryServiceInventory_HasItemsByItemType_Params
{
	class UStruct*                                     ItemType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.InventoryServiceInventory.HasItemsByAssetId
struct UInventoryServiceInventory_HasItemsByAssetId_Params
{
	int64_t                                            AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.InventoryServiceInventory.HasItemByItemId
struct UInventoryServiceInventory_HasItemByItemId_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemsByItemType
struct UInventoryServiceInventory_GetItemsByItemType_Params
{
	class UStruct*                                     ItemType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UInventoryServiceItemBase*>           OutItems;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemsByAssetId
struct UInventoryServiceInventory_GetItemsByAssetId_Params
{
	int64_t                                            AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UInventoryServiceItemBase*>           OutItems;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemByItemType
struct UInventoryServiceInventory_GetItemByItemType_Params
{
	class UStruct*                                     ItemType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryServiceItemBase*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemByItemId
struct UInventoryServiceInventory_GetItemByItemId_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor)
	class UInventoryServiceItemBase*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.InventoryServiceInventory.GetItemByAssetId
struct UInventoryServiceInventory_GetItemByAssetId_Params
{
	int64_t                                            AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryServiceItemBase*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceManifest.ParseAndApplyFlags
struct UServiceManifest_ParseAndApplyFlags_Params
{
};

// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.UpdateDerivedProperties
struct UServiceProgressionRewardBucket_UpdateDerivedProperties_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.HasRewardsByItemAssetId
struct UServiceProgressionRewardBucket_HasRewardsByItemAssetId_Params
{
	int64_t                                            AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.HasRewardByXP
struct UServiceProgressionRewardBucket_HasRewardByXP_Params
{
	int64_t                                            CurrentXP;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.HasRewardByRank
struct UServiceProgressionRewardBucket_HasRewardByRank_Params
{
	int64_t                                            Rank;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.GetRewardsByItemAssetId
struct UServiceProgressionRewardBucket_GetRewardsByItemAssetId_Params
{
	int64_t                                            AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UServiceProgressionReward*>           OutRewards;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.GetRewardByXP
struct UServiceProgressionRewardBucket_GetRewardByXP_Params
{
	int64_t                                            CurrentXP;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UServiceProgressionReward*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.GetRewardByRank
struct UServiceProgressionRewardBucket_GetRewardByRank_Params
{
	int64_t                                            Rank;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UServiceProgressionReward*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceProgressionRewardBucket.GetFirstRewardByItemAssetId
struct UServiceProgressionRewardBucket_GetFirstRewardByItemAssetId_Params
{
	int64_t                                            AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UServiceProgressionReward*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceProgressionRewards.UpdateDerivedProperties
struct UServiceProgressionRewards_UpdateDerivedProperties_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceProgressionRewards.HasBucketByBucketId
struct UServiceProgressionRewards_HasBucketByBucketId_Params
{
	struct FString                                     BucketId;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.ServiceProgressionRewards.GetBucketByBucketId
struct UServiceProgressionRewards_GetBucketByBucketId_Params
{
	struct FString                                     BucketId;                                                 // (Parm, ZeroConstructor)
	class UServiceProgressionRewardBucket*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.StoreOffer.HasThirdPartyProduct
struct UStoreOffer_HasThirdPartyProduct_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.StoreOffer.HasEmbarkProduct
struct UStoreOffer_HasEmbarkProduct_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.RegexHelper.Match
struct URegexHelper_Match_Params
{
	struct FString                                     Pattern;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Subject;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.VoiceChatModeSetting.GetCurrentMode
struct UVoiceChatModeSetting_GetCurrentMode_Params
{
	enum class EVoiceChatMode                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.SetAutoEnable
struct UEmbarkVoiceRoom_SetAutoEnable_Params
{
	bool                                               bInAutoEnable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.IsPlayerTalking
struct UEmbarkVoiceRoom_IsPlayerTalking_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.IsPlayerInRoom
struct UEmbarkVoiceRoom_IsPlayerInRoom_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.IsPlayerActive
struct UEmbarkVoiceRoom_IsPlayerActive_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.GetState
struct UEmbarkVoiceRoom_GetState_Params
{
	enum class EVoiceRoomState                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.GetRoomId
struct UEmbarkVoiceRoom_GetRoomId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemAngelscript.EmbarkVoiceRoom.Enable
struct UEmbarkVoiceRoom_Enable_Params
{
	bool                                               bShouldEnable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
