#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemAngelscript.EmbarkOnlineServiceBase
// 0x0000 (0x0028 - 0x0028)
class UEmbarkOnlineServiceBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.EmbarkOnlineServiceBase"));
		return ptr;
	}


	void Shutdown();//Offset:Discovery.exe+0x191D9E0
	void Init();//Offset:Discovery.exe+0x14618E0
	class UEmbarkApiContext* GetContext();//Offset:Discovery.exe+0x1DC85F0
};


// Class OnlineSubsystemAngelscript.InventoryServiceItemBase
// 0x0030 (0x0058 - 0x0028)
class UInventoryServiceItemBase : public UObject
{
public:
	struct FString                                     ItemId;                                                   // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int64_t                                            AssetId;                                                  // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            Generation;                                               // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasSeen;                                                 // 0x0054(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.InventoryServiceItemBase"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineClientServices
// 0x0000 (0x0028 - 0x0028)
class UIEmbarkOnlineClientServices : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineClientServices"));
		return ptr;
	}


	bool STATIC_IsInTestMode();//Offset:Discovery.exe+0x1DB6450
	class UIEmbarkOnlineClientServices* Initialize(class ULocalPlayer* InLocalPlayer);//Offset:Discovery.exe+0x1DB6750
	class UIEmbarkOnlineVoiceChatModel* GetVoiceChatModel();//Offset:Discovery.exe+0x11B97F0
	class UIEmbarkOnlineStoreModel* GetStoreModel();//Offset:Discovery.exe+0x1DB6580
	class UIEmbarkOnlineRewardModel* GetRewardModel();//Offset:Discovery.exe+0x1DB5750
	class UIEmbarkOnlinePersistentPlayerKeysModel* GetPersistentPlayerKeysModel();//Offset:Discovery.exe+0x11BA0D0
	class UIEmbarkOnlineMatchmakingModel* GetMatchmakingModel();//Offset:Discovery.exe+0x1DB65B0
	class UIEmbarkOnlineManifestModel* GetManifestModel();//Offset:Discovery.exe+0x1DB65E0
	class UIEmbarkOnlineInventoryModel* GetInventoryModel();//Offset:Discovery.exe+0x1DB6610
	class UIEmbarkOnlineIdentityModel* GetIdentityModel();//Offset:Discovery.exe+0x1DB6640
	class UIEmbarkOnlineGameSettingsModel* GetGameSettingsModel();//Offset:Discovery.exe+0x1B15590
	class UIEmbarkOnlineFriendsModel* GetFriendsModel();//Offset:Discovery.exe+0x1DB6670
	class UEmbarkApiContext* GetContext();//Offset:Discovery.exe+0x1DB6700
	class UIEmbarkOnlineBuildModel* GetBuildModel();//Offset:Discovery.exe+0x1DB6550
	class UIEmbarkOnlineBattlePassModel* GetBattlePassModel();//Offset:Discovery.exe+0x1DB66A0
	class UIEmbarkOnlineAnnouncementsModel* GetAnnouncementsModel();//Offset:Discovery.exe+0x1DB66D0
	class UIEmbarkOnlineAchievementsModel* GetAchievementsModel();//Offset:Discovery.exe+0x1DB6520
	class UIEmbarkOnlineClientServices* STATIC_Get(class UObject* InObj);//Offset:Discovery.exe+0x1DB6480
	void Deinitialize();//Offset:Discovery.exe+0x1DB6730
};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineInventoryModel
// 0x0040 (0x0068 - 0x0028)
class UIEmbarkOnlineInventoryModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnSyncInventoryComplete;                                  // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInventoryChanged;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUserInventoryChanged;                                   // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyInventoriesCompleted;                              // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineInventoryModel"));
		return ptr;
	}


	void SyncPartyInventories();//Offset:Discovery.exe+0x11B97D0
	void SyncInventory();//Offset:Discovery.exe+0x1DB5730
	class UInventoryServiceInventory* GetPartyMemberInventory(const struct FUniqueNetIdRepl& PartyMemberNetId);//Offset:Discovery.exe+0x1DC0150
	class UInventoryServiceInventory* GetInventory();//Offset:Discovery.exe+0x11B97F0
};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineServerServices
// 0x00F8 (0x0120 - 0x0028)
class UIEmbarkOnlineServerServices : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnTweakablesChanged;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReportDisconnectedPlayerCompleted;                      // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UEmbarkApiContext*                           GatewayContext;                                           // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UServiceManifest*                            ManifestData;                                             // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FApiGatewaySharedServerTweakables>   Tweakables;                                               // 0x0058(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0068(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineServerServices"));
		return ptr;
	}


	void ReportPlayerDisconnected(const struct FString& MatchId, const struct FUniqueNetIdRepl& PlayerId);//Offset:Discovery.exe+0x1DC5A80
	bool RegisterSquadsFromAnnotation(const struct FString& JsonBlob);//Offset:Discovery.exe+0x1DC6360
	bool RegisterPlayerToSquad(const struct FString& SquadId, const struct FUniqueNetIdRepl& NetId);//Offset:Discovery.exe+0x1DC6200
	void QuerySquadVoipChannelsForRegisteredSquads();//Offset:Discovery.exe+0x11BDAF0
	void QuerySquadVoipChannelsBySquadIds(TArray<struct FString> SquadIds);//Offset:Discovery.exe+0x1DC5FF0
	void QuerySquadVoipChannelsByPlayerId(const struct FString& SquadId, const struct FUniqueNetIdRepl& NetId);//Offset:Discovery.exe+0x1DC5E90
	void KickPlayerFromSquadVoipChannel(const struct FUniqueNetIdRepl& NetId);//Offset:Discovery.exe+0x1DC5D90
	bool STATIC_IsInTestMode();//Offset:Discovery.exe+0x1DB6450
	class UIEmbarkOnlineServerServices* Initialize();//Offset:Discovery.exe+0x1DB6700
	bool GetTweakablesAsync(const struct FString& ArtifactId);//Offset:Discovery.exe+0x1DC6410
	bool GetSquadVoipChannel(const struct FUniqueNetIdRepl& NetId, struct FVoiceChannelInfo* OutVoiceChannelInfo);//Offset:Discovery.exe+0x1DC5BE0
	bool GetRegisteredSquads(TMap<struct FString, struct FOnlineSquadInfo>* OutSquads);//Offset:Discovery.exe+0x1DC60E0
	class UServiceManifest* GetManifest();//Offset:Discovery.exe+0x1DB6670
	class UEmbarkApiContext* GetContext();//Offset:Discovery.exe+0x1DB66A0
	class UIEmbarkOnlineServerServices* STATIC_Get(class UObject* WorldContextObject);//Offset:Discovery.exe+0x1DC59E0
	void Deinitialize();//Offset:Discovery.exe+0x1B057D0
	bool ApplyManifest(const struct FString& ManifestContent);//Offset:Discovery.exe+0x1DC64C0
};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel
// 0x0030 (0x0058 - 0x0028)
class UIEmbarkOnlineStoreModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    StoreRecommendationsChanged;                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StorePurchaseCompleted;                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRedeemOutstandingThirdPartyPurchase;                    // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineStoreModel"));
		return ptr;
	}


	void SyncStoreRecommendations();//Offset:Discovery.exe+0x1DC8E90
	void RedeemOutstandingThirdPartyPurchases(const struct FString& InTransactionId, bool bForceQueryReceipts);//Offset:Discovery.exe+0x1DC8B90
	void PurchaseThirdPartyStoreOffer(const struct FString& InTransactionId, const struct FString& InThirdPartyOfferId);//Offset:Discovery.exe+0x1DC8C90
	void PurchaseStoreOffer(const struct FString& InTransactionId, int64_t InOfferId);//Offset:Discovery.exe+0x1DC8D90
	void LeaveStore();//Offset:Discovery.exe+0x11BA100
	bool HasStoreRecommendations();//Offset:Discovery.exe+0x147F910
	bool HasPurchasedItemsCache();//Offset:Discovery.exe+0x1DC1480
	struct FString GetThirdPartyStoreTelemetryName();//Offset:Discovery.exe+0x1DC8A90
	class UStoreRecommendations* GetStoreRecommendations();//Offset:Discovery.exe+0x1DB66D0
	TArray<class UStorePurchasedItem*> GetPurchasedItemsCache();//Offset:Discovery.exe+0x1DC8B10
	void EnterStore();//Offset:Discovery.exe+0x11B97D0
	void ClearPurchasedItemsCache();//Offset:Discovery.exe+0x11BDAF0
};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineAchievementsModel
// 0x0010 (0x0038 - 0x0028)
class UIEmbarkOnlineAchievementsModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnAchievementsChanged;                                    // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineAchievementsModel"));
		return ptr;
	}


	void SyncAchievements();//Offset:Discovery.exe+0x11BDAF0
	void SetAchievementProgress(const struct FString& AchievementId, int TimesToTrigger);//Offset:Discovery.exe+0x1DB5100
	bool ResetAchievements();//Offset:Discovery.exe+0x1461900
	void AddAchievementProgress(const struct FString& AchievementId, int TimesToTrigger);//Offset:Discovery.exe+0x11B96D0
};


// Class OnlineSubsystemAngelscript.DefaultAchievementsModel
// 0x0008 (0x0040 - 0x0038)
class UDefaultAchievementsModel : public UIEmbarkOnlineAchievementsModel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.DefaultAchievementsModel"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineAnnouncementsModel
// 0x0010 (0x0038 - 0x0028)
class UIEmbarkOnlineAnnouncementsModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnSyncAnnouncementsCompleted;                             // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineAnnouncementsModel"));
		return ptr;
	}


	void SyncAnnouncements();//Offset:Discovery.exe+0x1DB5730
	class UServiceAnnouncements* GetAnnouncements();//Offset:Discovery.exe+0x1DB5750
};


// Class OnlineSubsystemAngelscript.DefaultAnnouncementsModel
// 0x0008 (0x0040 - 0x0038)
class UDefaultAnnouncementsModel : public UIEmbarkOnlineAnnouncementsModel
{
public:
	class UServiceAnnouncements*                       Announcements;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.DefaultAnnouncementsModel"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineBattlePassModel
// 0x0030 (0x0058 - 0x0028)
class UIEmbarkOnlineBattlePassModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnSyncBattlePassCompleted;                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClaimBattlePassEntryCompleted;                          // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpgradeBattlepassLevelCompleted;                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineBattlePassModel"));
		return ptr;
	}


	void UpgradeBattlePassLevel(const struct FString& ItemId, int NextLevel);//Offset:Discovery.exe+0x1DB5AF0
	void SyncBattlePass();//Offset:Discovery.exe+0x11B97D0
	class UServiceBattlePass* GetBattlePass();//Offset:Discovery.exe+0x11B97F0
	void ClaimBattlePassEntry(int64_t ProductId);//Offset:Discovery.exe+0x1DB5BF0
};


// Class OnlineSubsystemAngelscript.DefaultBattlePassModel
// 0x0008 (0x0060 - 0x0058)
class UDefaultBattlePassModel : public UIEmbarkOnlineBattlePassModel
{
public:
	class UServiceBattlePass*                          BattlePass;                                               // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.DefaultBattlePassModel"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineBuildModel
// 0x0010 (0x0038 - 0x0028)
class UIEmbarkOnlineBuildModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnGetLatestBuildComplete;                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineBuildModel"));
		return ptr;
	}


	void RequestLatestBuild();//Offset:Discovery.exe+0x11BA100
	bool IsBuildOutdated();//Offset:Discovery.exe+0x1461900
};


// Class OnlineSubsystemAngelscript.DefaultBuildModel
// 0x0028 (0x0060 - 0x0038)
class UDefaultBuildModel : public UIEmbarkOnlineBuildModel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FString                                     StartupBuildId;                                           // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     RequestBuildId;                                           // 0x0050(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.DefaultBuildModel"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel
// 0x0170 (0x0198 - 0x0028)
class UIEmbarkOnlineFriendsModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnFriendsListChanged;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSuggestedFriendsListChanged;                            // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRecentPlayersChanged;                                   // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyCreated;                                           // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyRestored;                                          // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyInvitationSent;                                    // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIncomingPartyInvitation;                                // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIncomingPartyInvitationsChanged;                        // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOutgoingPartyInvitationsChanged;                        // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFriendRequestSent;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFriendRequestReceived;                                  // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFriendRequestCompleted;                                 // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyInviteCompleted;                                   // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnKickPartyMemberCompleted;                               // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyJoinCompleted;                                     // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyJoined;                                            // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyLeft;                                              // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMemberJoined;                                      // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMemberRemoved;                                     // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMembersChanged;                                    // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlockedPlayersChanged;                                  // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlockPlayerCompleted;                                   // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUnblockPlayerCompleted;                                 // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineFriendsModel"));
		return ptr;
	}


	void ShowPlatformProfileUI(const struct FUniqueNetIdRepl& Requestor, const struct FUniqueNetIdRepl& Requestee);//Offset:Discovery.exe+0x1DB8730
	void SetRichPresenceStatus(const struct FString& RichPresenceStatus);//Offset:Discovery.exe+0x1DB89F0
	void SetCrossPlayEnabled(bool bEnabled);//Offset:Discovery.exe+0x1DB8590
	void RequestFriendshipByName(const struct FString& DisplayName, const struct FString& DisplayNameDiscriminator);//Offset:Discovery.exe+0x1DB90F0
	void ReportPlayer(const struct FUniqueNetIdRepl& EmbarkID, enum class EReportPlayerReason ReportReason, const struct FString& Message);//Offset:Discovery.exe+0x1DB8AA0
	void LeaveParty();//Offset:Discovery.exe+0x155C080
	void KickFromParty(const struct FUniqueNetIdRepl& UserId);//Offset:Discovery.exe+0x1DB8DB0
	void JoinParty(const struct FString& PartyId);//Offset:Discovery.exe+0x1DB8D00
	bool IsPartyLeader(const struct FUniqueNetIdRepl& MemberTenancyId);//Offset:Discovery.exe+0x1DB88E0
	void InviteToPartyById(const struct FUniqueNetIdRepl& UserId);//Offset:Discovery.exe+0x1DB8EB0
	void InviteToParty(class UServiceFriend* Friend);//Offset:Discovery.exe+0x1DB8FB0
	bool HasTriedBootToGame();//Offset:Discovery.exe+0x11BE930
	class UServiceFriendsList* GetSuggestedFriendsList();//Offset:Discovery.exe+0x11B5A00
	class UServiceRecentPlayersList* GetRecentPlayersList();//Offset:Discovery.exe+0x11B59A0
	class UServiceParty* GetParty();//Offset:Discovery.exe+0x11B5970
	class UServicePartyInvitationsInfo* GetInvitationsInfo();//Offset:Discovery.exe+0x11B5940
	class UServiceFriendsList* GetFriendsList();//Offset:Discovery.exe+0x11B5A30
	class UServiceFriendsList* GetBlockedPlayersList();//Offset:Discovery.exe+0x11B59D0
	void DeleteFriendship(class UServiceFriend* Friend);//Offset:Discovery.exe+0x1DB9050
	void DeclineInvitation(const struct FString& PartyId);//Offset:Discovery.exe+0x1DB8C50
	void BlockPlayer(const struct FUniqueNetIdRepl& TenancyUserId);//Offset:Discovery.exe+0x1DB8630
	void AcceptFriendship(class UServiceFriend* Friend);//Offset:Discovery.exe+0x1DB91F0
};


// Class OnlineSubsystemAngelscript.DefaultFriendsModel
// 0x0160 (0x02F8 - 0x0198)
class UDefaultFriendsModel : public UIEmbarkOnlineFriendsModel
{
public:
	class UServiceFriendsList*                         FriendsList;                                              // 0x0198(0x0008) (ZeroConstructor, IsPlainOldData)
	class UServiceFriendsList*                         SuggestedFriendsList;                                     // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UServiceFriendsList*                         BlockedPlayersList;                                       // 0x01A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UServiceRecentPlayersList*                   RecentPlayersList;                                        // 0x01B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UServiceParty*                               Party;                                                    // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UServicePartyInvitationsInfo*                PartyInvitations;                                         // 0x01C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayerReporting*                            PlayerReporting;                                          // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkSocialManager*                        SocialManager;                                            // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkSocialToolkit*                        SocialToolkit;                                            // 0x01D8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bTriedBootToGame;                                         // 0x01E0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x117];                                     // 0x01E1(0x0117) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.DefaultFriendsModel"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineGameSettingsModel
// 0x0010 (0x0038 - 0x0028)
class UIEmbarkOnlineGameSettingsModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnSyncGameSettingsCompleted;                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineGameSettingsModel"));
		return ptr;
	}


	void SyncGameSettings();//Offset:Discovery.exe+0x1DB5730
	class UEmbarkOnlineGameSettings* GetGameSettings();//Offset:Discovery.exe+0x1DB5750
};


// Class OnlineSubsystemAngelscript.DefaultGameSettingsModel
// 0x0008 (0x0040 - 0x0038)
class UDefaultGameSettingsModel : public UIEmbarkOnlineGameSettingsModel
{
public:
	class UEmbarkOnlineGameSettings*                   GameSettings;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.DefaultGameSettingsModel"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel
// 0x0050 (0x0078 - 0x0028)
class UIEmbarkOnlineIdentityModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnLoginChanged;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLoginComplete;                                          // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetPlayerProfileComplete;                               // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnConnectionStatusDidChange;                              // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCrossPlaySettingChanged;                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineIdentityModel"));
		return ptr;
	}


	void UpdateProfile(bool bUpdateEmail, const struct FString& Email, bool bUpdateTosVersionSeen, const struct FString& TosVersionSeen, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x1DBD4F0
	void UpdatePlayingMultiplayerOnline(bool bIsPlayingMultiplayerOnline);//Offset:Discovery.exe+0x1DB8590
	void SyncPlayerProfile();//Offset:Discovery.exe+0x1DBE380
	bool ShowWebURL(const struct FString& URL, bool bRequestPredeterminedContent);//Offset:Discovery.exe+0x1DBD730
	void RequestProfilesByTenancyUserIds(TArray<struct FEmbarkUserHandle> Ids, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x1DBDC80
	void RequestProfilesByEmbarkAccountIds(TArray<struct FEmbarkAccountHandle> Ids, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x1DBDB00
	void Logout();//Offset:Discovery.exe+0x1DBE270
	void LoginWithLink(bool bLink);//Offset:Discovery.exe+0x1DBE290
	void Login();//Offset:Discovery.exe+0x1B054E0
	bool IsWebUrlPredeterminedContent(const struct FString& URL);//Offset:Discovery.exe+0x1DBD830
	bool IsLoggedIn();//Offset:Discovery.exe+0x1DBE240
	bool IsCrossPlayEnabled();//Offset:Discovery.exe+0x1DBDAA0
	bool HasEmail();//Offset:Discovery.exe+0x1573C90
	bool HasCrossPlayPrivilege();//Offset:Discovery.exe+0x147F8E0
	TArray<struct FString> GetWebUrlPredeterminedContent();//Offset:Discovery.exe+0x1DBD8E0
	struct FString GetUserId();//Offset:Discovery.exe+0x1DBDFC0
	struct FUniqueNetIdRepl GetUniqueNetId();//Offset:Discovery.exe+0x1DBE0C0
	int GetRetryAfterSeconds();//Offset:Discovery.exe+0x1DBD9D0
	class UServicePlayerProfile* GetProfileByTenancyUserId(const struct FEmbarkUserHandle& ID);//Offset:Discovery.exe+0x1DBDEE0
	class UServicePlayerProfile* GetProfileByEmbarkAccountId(const struct FEmbarkAccountHandle& ID);//Offset:Discovery.exe+0x1DBDE00
	class UServicePlayerProfile* GetProfile();//Offset:Discovery.exe+0x1DBE350
	int GetLocalPlayerNum();//Offset:Discovery.exe+0x1DBE210
	struct FEmbarkLinkingCode GetLinkingCode();//Offset:Discovery.exe+0x1DBDA00
	struct FString GetDisplayName();//Offset:Discovery.exe+0x1DBE040
	bool CanCommunicateOnline();//Offset:Discovery.exe+0x1DBDAD0
	void AutoLogin();//Offset:Discovery.exe+0x1DBE330
};


// Class OnlineSubsystemAngelscript.DefaultIdentityModel
// 0x0120 (0x0198 - 0x0078)
class UDefaultIdentityModel : public UIEmbarkOnlineIdentityModel
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0078(0x0080) MISSED OFFSET
	TMap<int64_t, class UServicePlayerProfile*>        ByTenancyIdCache;                                         // 0x00F8(0x0050)
	TMap<int64_t, class UServicePlayerProfile*>        ByAccountIdCache;                                         // 0x0148(0x0050)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.DefaultIdentityModel"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel
// 0x0010 (0x0038 - 0x0028)
class UIEmbarkOnlineManifestModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnSyncManifestCompleteResult;                             // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineManifestModel"));
		return ptr;
	}


	void SyncManifest();//Offset:Discovery.exe+0x1DC09C0
	void SetManifestDeferredOverride(bool bIsDeferred);//Offset:Discovery.exe+0x1DC0920
	void OverrideManifest();//Offset:Discovery.exe+0x11BA100
	bool IsUpToDate();//Offset:Discovery.exe+0x1461900
	class UServiceManifest* GetManifest();//Offset:Discovery.exe+0x11B97F0
};


// Class OnlineSubsystemAngelscript.DefaultManifestModel
// 0x0018 (0x0050 - 0x0038)
class UDefaultManifestModel : public UIEmbarkOnlineManifestModel
{
public:
	class UServiceManifest*                            CurrentManifest;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UServiceManifest*                            CachedManifest;                                           // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.DefaultManifestModel"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel
// 0x00C0 (0x00E8 - 0x0028)
class UIEmbarkOnlineMatchmakingModel : public UEmbarkOnlineServiceBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMatchmakingStarted;                                     // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMatchmakingChanged;                                     // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMatchmakingCompleted;                                   // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestingServerStarted;                                // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMatchmakingStopped;                                     // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMatchmakingStatusChanged;                               // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMatchmakingInfoReceived;                           // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMatchmakingCompleted;                              // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRefreshTimeEstimatesCompleted;                          // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineMatchmakingModel"));
		return ptr;
	}


	bool StartMatchmaking(const struct FMatchmakingParameters& Parameters);//Offset:Discovery.exe+0x1DC1630
	bool SkipMatchmaking();//Offset:Discovery.exe+0x1DC1450
	bool RefreshMatchmakingTimeEstimates(TArray<struct FString> Scenarios);//Offset:Discovery.exe+0x1DC11C0
	bool Reconnect(const struct FGameServer& GameServer);//Offset:Discovery.exe+0x1DC14B0
	bool JoinSession();//Offset:Discovery.exe+0x1DBDAD0
	bool JoinLocalServer();//Offset:Discovery.exe+0x1DBDAA0
	bool IsSkipMatchmakingPending();//Offset:Discovery.exe+0x1DC1420
	bool IsMatchmaking();//Offset:Discovery.exe+0x1DC1600
	bool IsAboveLatencyThreshold();//Offset:Discovery.exe+0x1461900
	struct FMatchmakingTimeEstimates GetMatchmakingTimeEstimates();//Offset:Discovery.exe+0x1DC18D0
	enum class EMatchmakingStatus GetMatchmakingStatus();//Offset:Discovery.exe+0x11BB1D0
	struct FMatchmakingSession GetMatchmakingSession();//Offset:Discovery.exe+0x1DC1A80
	struct FGameServer GetMatchmakingServer();//Offset:Discovery.exe+0x1DC1A10
	struct FMatchmakingParameters GetMatchmakingParameters();//Offset:Discovery.exe+0x1DC1BD0
	bool ConfirmPartyMatchmaking(const struct FString& MatchId, const struct FString& Region, bool bEnableVoice);//Offset:Discovery.exe+0x1DC12C0
	bool CanStartMatchmaking(const struct FMatchmakingParameters& Parameters);//Offset:Discovery.exe+0x1DC1780
	bool CanSkipMatchmaking();//Offset:Discovery.exe+0x1DC1480
	bool CanJoinSession();//Offset:Discovery.exe+0x147F8E0
	bool CancelMatchmaking();//Offset:Discovery.exe+0x147F910
	bool CanCancelMatchmaking();//Offset:Discovery.exe+0x1DC15D0
};


// Class OnlineSubsystemAngelscript.DefaultMatchmakingModel
// 0x02C0 (0x03A8 - 0x00E8)
class UDefaultMatchmakingModel : public UIEmbarkOnlineMatchmakingModel
{
public:
	unsigned char                                      UnknownData00[0x2C0];                                     // 0x00E8(0x02C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.DefaultMatchmakingModel"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel
// 0x0020 (0x0048 - 0x0028)
class UIEmbarkOnlinePersistentPlayerKeysModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnGetPersistentPlayerKeysCompleted;                       // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSetPersistentPlayerKeyCompleted;                        // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlinePersistentPlayerKeysModel"));
		return ptr;
	}


	void SetPersistentPlayerKey(const struct FGameplayTag& Key, const struct FString& Value);//Offset:Discovery.exe+0x1DC4B60
	bool HasPersistentPlayerKey(const struct FGameplayTag& Key);//Offset:Discovery.exe+0x1DC4D60
	void GetPersistentPlayerKeys();//Offset:Discovery.exe+0x11B68C0
	struct FString GetPersistentPlayerKey(const struct FGameplayTag& Key);//Offset:Discovery.exe+0x1DC4C70
	void ClearPersistentPlayerKeys();//Offset:Discovery.exe+0x1DB5730
	void ClearPersistentPlayerKey(const struct FGameplayTag& Key);//Offset:Discovery.exe+0x1DC4AB0
};


// Class OnlineSubsystemAngelscript.DefaultPersistentPlayerKeysModel
// 0x0058 (0x00A0 - 0x0048)
class UDefaultPersistentPlayerKeysModel : public UIEmbarkOnlinePersistentPlayerKeysModel
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.DefaultPersistentPlayerKeysModel"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineRewardModel
// 0x0010 (0x0038 - 0x0028)
class UIEmbarkOnlineRewardModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnProgressionRewardsChanged;                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineRewardModel"));
		return ptr;
	}


	void SyncProgressionRewards();//Offset:Discovery.exe+0x11BA100
	class UServiceProgressionRewards* GetProgressionRewards();//Offset:Discovery.exe+0x11BA0D0
};


// Class OnlineSubsystemAngelscript.DefaultRewardModel
// 0x0008 (0x0040 - 0x0038)
class UDefaultRewardModel : public UIEmbarkOnlineRewardModel
{
public:
	class UServiceProgressionRewards*                  ProgressionRewards;                                       // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.DefaultRewardModel"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel
// 0x00B0 (0x00D8 - 0x0028)
class UIEmbarkOnlineVoiceChatModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnAvailableAudioDevicesChanged;                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMuteUpdate;                                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlockUpdate;                                            // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnToggleRoom;                                             // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRoomCreated;                                            // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRoomJoined;                                             // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRoomLeft;                                               // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRoomEnabledUpdate;                                      // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRoomParticipantsUpdate;                                 // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRoomParticipantStatusUpdate;                            // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRoomParticipantTalkingUpdate;                           // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineVoiceChatModel"));
		return ptr;
	}


	void SetSquadVoiceChannelInfo(const struct FVoiceChannelInfo& VoiceChannelInfo);//Offset:Discovery.exe+0x1DCA340
	void SetPlayerMuted(const struct FUniqueNetIdRepl& PlayerId, bool bIsMuted);//Offset:Discovery.exe+0x1DCACB0
	void SetPlayerBlocked(const struct FUniqueNetIdRepl& PlayerId, bool bIsBlocked);//Offset:Discovery.exe+0x1DCA930
	void SetOutputVolume(float Volume);//Offset:Discovery.exe+0x1DCAE10
	void SetOutputDeviceId(const struct FString& InputDeviceId);//Offset:Discovery.exe+0x1DCB1B0
	void SetMode(enum class EVoiceChatMode InMode);//Offset:Discovery.exe+0x1DCA420
	void SetInputVolume(float Volume);//Offset:Discovery.exe+0x1DCAEE0
	void SetInputDeviceId(const struct FString& InputDeviceId);//Offset:Discovery.exe+0x1DCB260
	void SetEnabled(bool Enabled);//Offset:Discovery.exe+0x1DCB790
	void SelectVoiceModPreset(const struct FString& Preset);//Offset:Discovery.exe+0x1DCA540
	void LeaveVoiceChat(enum class EVoiceChannel Channel);//Offset:Discovery.exe+0x1DCB5E0
	void JoinVoiceChat(enum class EVoiceChannel Channel, enum class EVoiceChannelType Type);//Offset:Discovery.exe+0x1DCB680
	bool IsVoiceModEnabled();//Offset:Discovery.exe+0x1DBDAA0
	bool IsVoiceModAvailable();//Offset:Discovery.exe+0x147F8E0
	bool IsPlayerMuted(const struct FUniqueNetIdRepl& PlayerId);//Offset:Discovery.exe+0x1DCABA0
	bool IsPlayerBlocked(const struct FUniqueNetIdRepl& PlayerId);//Offset:Discovery.exe+0x1DCA820
	bool IsInVoiceChat();//Offset:Discovery.exe+0x1DCB510
	bool IsEnabled();//Offset:Discovery.exe+0x1DCB760
	bool IsConsolePlayerMuted(const struct FUniqueNetIdRepl& PlayerId);//Offset:Discovery.exe+0x1DCAA90
	class UInputComponent* GetVoipInputBindings();//Offset:Discovery.exe+0x1DB6550
	TArray<struct FString> GetVoiceModPresets();//Offset:Discovery.exe+0x1DBD8E0
	struct FString GetSelectedVoiceModPreset();//Offset:Discovery.exe+0x1DCA4C0
	class UEmbarkVoiceRoom* GetRoom(enum class EVoiceChannel Channel);//Offset:Discovery.exe+0x1DCA690
	float GetOutputVolume();//Offset:Discovery.exe+0x1DCAEB0
	struct FString GetOutputDeviceId();//Offset:Discovery.exe+0x1DCB030
	float GetInputVolume();//Offset:Discovery.exe+0x1DCAF80
	struct FString GetInputDeviceId();//Offset:Discovery.exe+0x1DCB130
	struct FString GetDefaultOutputDeviceId();//Offset:Discovery.exe+0x1DCAFB0
	struct FString GetDefaultInputDeviceId();//Offset:Discovery.exe+0x1DCB0B0
	void GetAvailableOutputDevices(TArray<struct FVoiceDeviceInfo>* Output);//Offset:Discovery.exe+0x1DCB310
	void GetAvailableInputDevices(TArray<struct FVoiceDeviceInfo>* Output);//Offset:Discovery.exe+0x1DCB410
	void EnableVoiceMod(bool Enabled);//Offset:Discovery.exe+0x1DCA5F0
	void EnableRoom(enum class EVoiceChannel Channel, bool bEnable);//Offset:Discovery.exe+0x1DCA730
	void DeleteChannelInfo(enum class EVoiceChannel Channel);//Offset:Discovery.exe+0x1DCB540
	void CanChatWith(TArray<struct FUniqueNetIdRepl> OtherUsersEmbark);//Offset:Discovery.exe+0x1DCA220
};


// Class OnlineSubsystemAngelscript.DefaultVoiceChatModel
// 0x0318 (0x03F0 - 0x00D8)
class UDefaultVoiceChatModel : public UIEmbarkOnlineVoiceChatModel
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x00D8(0x00C8) MISSED OFFSET
	TMap<enum class EVoiceChannel, class UEmbarkVoiceRoom*> AllRooms;                                                 // 0x01A0(0x0050) (Transient)
	unsigned char                                      UnknownData01[0x1F0];                                     // 0x01F0(0x01F0) MISSED OFFSET
	class UInputComponent*                             VoipInputBindings;                                        // 0x03E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.DefaultVoiceChatModel"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.EmbarkID
// 0x0000 (0x0028 - 0x0028)
class UEmbarkID : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.EmbarkID"));
		return ptr;
	}


	int64_t STATIC_ToInt64(const struct FUniqueNetIdRepl& Value);//Offset:Discovery.exe+0x1DB4730
	struct FUniqueNetIdRepl STATIC_Invalid();//Offset:Discovery.exe+0x1DB4830
	struct FUniqueNetIdRepl STATIC_CreateFromString(const struct FString& Value);//Offset:Discovery.exe+0x1DB4980
	struct FUniqueNetIdRepl STATIC_Create(int64_t Value);//Offset:Discovery.exe+0x1DB4B30
};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineClientServicesFactory
// 0x0000 (0x0028 - 0x0028)
class UIEmbarkOnlineClientServicesFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineClientServicesFactory"));
		return ptr;
	}


	bool GetDependencies(TArray<class UClass*>* Dependencies);//Offset:Discovery.exe+0x1DB7AF0
	class UIEmbarkOnlineClientServices* Create(class ULocalPlayer* InLocalPlayer);//Offset:Discovery.exe+0x1DB7A50
};


// Class OnlineSubsystemAngelscript.EmbarkOnlineDeveloperSettings
// 0x0040 (0x0078 - 0x0038)
class UEmbarkOnlineDeveloperSettings : public UDeveloperSettings
{
public:
	int64_t                                            ManifestId;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     BuildIdentifier;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	int                                                NumAutoPlayClient;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     AutoPlayIdentity;                                         // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     TenancyOverride;                                          // 0x0068(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.EmbarkOnlineDeveloperSettings"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.EmbarkOnlineGameSettings
// 0x0010 (0x0038 - 0x0028)
class UEmbarkOnlineGameSettings : public UObject
{
public:
	TArray<struct FApiGatewaySharedGameSettingEntry>   Entries;                                                  // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.EmbarkOnlineGameSettings"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.IEmbarkOnlineServerServicesFactory
// 0x0000 (0x0028 - 0x0028)
class UIEmbarkOnlineServerServicesFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.IEmbarkOnlineServerServicesFactory"));
		return ptr;
	}


	bool GetDependencies(TArray<class UClass*>* Dependencies);//Offset:Discovery.exe+0x1DB7AF0
	class UIEmbarkOnlineServerServices* Create();//Offset:Discovery.exe+0x1B15590
};


// Class OnlineSubsystemAngelscript.EmbarkOnlineServerSubsystem
// 0x0008 (0x0038 - 0x0030)
class UEmbarkOnlineServerSubsystem : public UGameInstanceSubsystem
{
public:
	class UIEmbarkOnlineServerServices*                ServerServices;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.EmbarkOnlineServerSubsystem"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.EmbarkOnlineSubSystemHelper
// 0x0000 (0x0028 - 0x0028)
class UEmbarkOnlineSubSystemHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.EmbarkOnlineSubSystemHelper"));
		return ptr;
	}


	struct FString STATIC_RequestAuthToken(class UWorld* InWorld);//Offset:Discovery.exe+0x1DC9C70
	struct FString STATIC_GetSimulationServiceUrl();//Offset:Discovery.exe+0x1DC9BF0
};


// Class OnlineSubsystemAngelscript.GameplayEventAPI
// 0x0000 (0x0028 - 0x0028)
class UGameplayEventAPI : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.GameplayEventAPI"));
		return ptr;
	}


	void STATIC_LogPlayerUseWeapon(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& PlayerId, const struct FVector& PlayerPosition, const struct FQuat& PlayerView, bool bIsZoomed, bool bIsMelee, const struct FString& WeaponName);//Offset:Discovery.exe+0x1DCF3B0
	void STATIC_LogPlayerUseAbility(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& PlayerId, uint32_t AbilityId, uint32_t DurationMs, uint32_t CooldownMs);//Offset:Discovery.exe+0x1DCF180
	void STATIC_LogPlayerTick(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& PlayerId, const struct FVector& PlayerPosition, const struct FQuat& PlayerView, bool bIsZoomed, float Health);//Offset:Discovery.exe+0x1DCF6F0
	void STATIC_LogPlayerTakeDamage(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& AttackerId, const struct FVector& AttackerLocation, const struct FQuat& AttackerRotation, const struct FUniqueNetIdRepl& VictimPlayerId, const struct FVector& VictimLocation, const struct FQuat& VictimRotation, float DamageTaken, float HealthRemaining);//Offset:Discovery.exe+0x1DCED10
	void STATIC_LogPlayerSpawn(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& PlayerId, uint32_t TeamId, uint32_t CharacterId);//Offset:Discovery.exe+0x1DCFD00
	void STATIC_LogPlayerRevive(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& RevivedPlayerId, const struct FUniqueNetIdRepl& ReviverPlayerId);//Offset:Discovery.exe+0x1DCF9D0
	void STATIC_LogPlayerDespawn(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& PlayerId);//Offset:Discovery.exe+0x1DCFBC0
	void STATIC_LogGameRoundStart(class UObject* WorldContextObject, const struct FString& LevelName, const struct FString& ModeName, uint32_t RoundTimeSeconds);//Offset:Discovery.exe+0x1DCFFC0
	void STATIC_LogGameRoundEnd(class UObject* WorldContextObject, uint32_t WinningTeamId);//Offset:Discovery.exe+0x1DCFEE0
};


// Class OnlineSubsystemAngelscript.EmbarkOnlineClientSubsystem
// 0x0008 (0x0038 - 0x0030)
class UEmbarkOnlineClientSubsystem : public ULocalPlayerSubsystem
{
public:
	class UIEmbarkOnlineClientServices*                ClientServices;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.EmbarkOnlineClientSubsystem"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.ServiceAnnouncements
// 0x0010 (0x0038 - 0x0028)
class UServiceAnnouncements : public UObject
{
public:
	TArray<struct FApiGatewaySharedAnnouncement>       Announcements;                                            // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.ServiceAnnouncements"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.ServiceBattlePass
// 0x0070 (0x0098 - 0x0028)
class UServiceBattlePass : public UObject
{
public:
	struct FServiceBattlePassPack                      Pack;                                                     // 0x0028(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FServiceBattlePassState                     State;                                                    // 0x0050(0x0038) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     EndDate;                                                  // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.ServiceBattlePass"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.ServiceFriend
// 0x0010 (0x0038 - 0x0028)
class UServiceFriend : public UObject
{
public:
	class UServicePlayerProfile*                       Profile;                                                  // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EServiceFriendshipType                  FriendshipType;                                           // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEmbarkFriend;                                          // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlatformFriend;                                        // 0x0032(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0033(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.ServiceFriend"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.ServiceFriendsList
// 0x0050 (0x0078 - 0x0028)
class UServiceFriendsList : public UObject
{
public:
	TMap<struct FUniqueNetIdRepl, class UServiceFriend*> Friends;                                                  // 0x0028(0x0050)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.ServiceFriendsList"));
		return ptr;
	}


	bool Remove(const struct FUniqueNetIdRepl& ID);//Offset:Discovery.exe+0x1DD14A0
	TMap<struct FUniqueNetIdRepl, class UServiceFriend*> GetFriends();//Offset:Discovery.exe+0x1DD11A0
	bool FindFriendByName(const struct FString& DisplayName, const struct FString& DisplayNameDiscriminator, class UServiceFriend** Result);//Offset:Discovery.exe+0x1DD11D0
	bool Find(const struct FUniqueNetIdRepl& ID, class UServiceFriend** Result);//Offset:Discovery.exe+0x1DD1330
	void Add(class UServiceFriend* Friend);//Offset:Discovery.exe+0x1DD15B0
};


// Class OnlineSubsystemAngelscript.ServiceRecentPlayersList
// 0x0050 (0x0078 - 0x0028)
class UServiceRecentPlayersList : public UObject
{
public:
	TMap<struct FUniqueNetIdRepl, class UServicePlayerProfile*> RecentPlayers;                                            // 0x0028(0x0050) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.ServiceRecentPlayersList"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.ServicePartyInvitation
// 0x0018 (0x0040 - 0x0028)
class UServicePartyInvitation : public UObject
{
public:
	struct FString                                     PartyId;                                                  // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UServicePlayerProfile*                       Profile;                                                  // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.ServicePartyInvitation"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.ServicePartyInvitationsInfo
// 0x0020 (0x0048 - 0x0028)
class UServicePartyInvitationsInfo : public UObject
{
public:
	TArray<class UServicePartyInvitation*>             IncomingInvitations;                                      // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UServiceFriend*>                      OutgoingInvitations;                                      // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.ServicePartyInvitationsInfo"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.ServiceParty
// 0x00C8 (0x00F0 - 0x0028)
class UServiceParty : public UObject
{
public:
	struct FString                                     PartyId;                                                  // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FUniqueNetIdRepl                            LeaderId;                                                 // 0x0038(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FUniqueNetIdRepl                            LeaderTenancyId;                                          // 0x0068(0x0030) (BlueprintVisible, BlueprintReadOnly)
	TMap<struct FUniqueNetIdRepl, class UServicePlayerProfile*> PartyMembers;                                             // 0x0098(0x0050) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsJoinable;                                              // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.ServiceParty"));
		return ptr;
	}


	bool IsValid();//Offset:Discovery.exe+0x1DD1E00
};


// Class OnlineSubsystemAngelscript.ServicePlayerProfile
// 0x0110 (0x0138 - 0x0028)
class UServicePlayerProfile : public UObject
{
public:
	struct FUniqueNetIdRepl                            EmbarkID;                                                 // 0x0028(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FUniqueNetIdRepl                            PlatformId;                                               // 0x0058(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FUniqueNetIdRepl                            TenancyId;                                                // 0x0088(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     TenancyName;                                              // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayNameDiscriminator;                                 // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Platform;                                                 // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PlatformDisplayName;                                      // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	enum class EServicePlayerOnlineState               OnlineState;                                              // 0x0108(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EServicePlayerOnlineState               PlatformOnlineState;                                      // 0x0109(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLocalPlayer;                                           // 0x010A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x010B(0x0005) MISSED OFFSET
	class UTexture2D*                                  Avatar;                                                   // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     EmailAddress;                                             // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TosVersionSeen;                                           // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.ServicePlayerProfile"));
		return ptr;
	}


	bool IsOnlineOnPlatform();//Offset:Discovery.exe+0x1DD2530
	struct FString GetPreferredDisplayName();//Offset:Discovery.exe+0x1DD2560
};


// Class OnlineSubsystemAngelscript.SyncedInventoriesResult
// 0x0018 (0x0040 - 0x0028)
class USyncedInventoriesResult : public UObject
{
public:
	TArray<class USyncedNamedInventoryData*>           PlayerInventories;                                        // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	enum class EInventorySyncInventoryReason           Reason;                                                   // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.SyncedInventoriesResult"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.SyncedNamedInventoryData
// 0x0020 (0x0048 - 0x0028)
class USyncedNamedInventoryData : public UObject
{
public:
	struct FString                                     PlayerId;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UInventoryServiceItemBase*>           Items;                                                    // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.SyncedNamedInventoryData"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.InventoryServiceInventory
// 0x0100 (0x0128 - 0x0028)
class UInventoryServiceInventory : public UObject
{
public:
	TArray<class UInventoryServiceItemBase*>           Items;                                                    // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, class UInventoryServiceItemBase*> ItemByItemIdMap;                                          // 0x0038(0x0050) (Transient)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0088(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.InventoryServiceInventory"));
		return ptr;
	}


	bool UpdateDerivedProperties();//Offset:Discovery.exe+0x1DD3300
	bool HasItemsByItemType(class UStruct* ItemType);//Offset:Discovery.exe+0x1DD2EC0
	bool HasItemsByAssetId(int64_t AssetId);//Offset:Discovery.exe+0x1DD3100
	bool HasItemByItemId(const struct FString& ItemId);//Offset:Discovery.exe+0x1DD3250
	void GetItemsByItemType(class UStruct* ItemType, TArray<class UInventoryServiceItemBase*>* OutItems);//Offset:Discovery.exe+0x1DD2D20
	void GetItemsByAssetId(int64_t AssetId, TArray<class UInventoryServiceItemBase*>* OutItems);//Offset:Discovery.exe+0x1DD2F60
	class UInventoryServiceItemBase* GetItemByItemType(class UStruct* ItemType);//Offset:Discovery.exe+0x1DD2E20
	class UInventoryServiceItemBase* GetItemByItemId(const struct FString& ItemId);//Offset:Discovery.exe+0x1DD31A0
	class UInventoryServiceItemBase* GetItemByAssetId(int64_t AssetId);//Offset:Discovery.exe+0x1DD3060
};


// Class OnlineSubsystemAngelscript.ServiceManifest
// 0x00F8 (0x0120 - 0x0028)
class UServiceManifest : public UObject
{
public:
	int64_t                                            ID;                                                       // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     BuildId;                                                  // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int64_t                                            PlaytestId;                                               // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     PartitioningHash;                                         // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     NonPartitioningHash;                                      // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, struct FString>               PartitioningBody;                                         // 0x0068(0x0050) (BlueprintVisible, BlueprintReadOnly)
	TMap<struct FString, struct FString>               NonPartitioningBody;                                      // 0x00B8(0x0050) (BlueprintVisible, BlueprintReadOnly)
	int64_t                                            RetrievedAt;                                              // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            ValidFrom;                                                // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            ValidUntil;                                               // 0x0118(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.ServiceManifest"));
		return ptr;
	}


	void ParseAndApplyFlags();//Offset:Discovery.exe+0x1DD3B00
};


// Class OnlineSubsystemAngelscript.ServiceProgressionReward
// 0x0040 (0x0068 - 0x0028)
class UServiceProgressionReward : public UObject
{
public:
	class UServiceProgressionReward*                   Last;                                                     // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UServiceProgressionReward*                   Next;                                                     // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            Rank;                                                     // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            RequiredXP;                                               // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            LastRequiredXP;                                           // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            NextRequiredXP;                                           // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FServiceProgressionRewardItem>       Items;                                                    // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.ServiceProgressionReward"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.ServiceProgressionRewardBucket
// 0x0080 (0x00A8 - 0x0028)
class UServiceProgressionRewardBucket : public UObject
{
public:
	struct FString                                     BucketId;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int64_t                                            XPSlot;                                                   // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            RankSlot;                                                 // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UServiceProgressionReward*>           Rewards;                                                  // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0058(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.ServiceProgressionRewardBucket"));
		return ptr;
	}


	bool UpdateDerivedProperties();//Offset:Discovery.exe+0x1DD65D0
	bool HasRewardsByItemAssetId(int64_t AssetId);//Offset:Discovery.exe+0x1DD62B0
	bool HasRewardByXP(int64_t CurrentXP);//Offset:Discovery.exe+0x1DD63F0
	bool HasRewardByRank(int64_t Rank);//Offset:Discovery.exe+0x1DD6530
	void GetRewardsByItemAssetId(int64_t AssetId, TArray<class UServiceProgressionReward*>* OutRewards);//Offset:Discovery.exe+0x1DD61B0
	class UServiceProgressionReward* GetRewardByXP(int64_t CurrentXP);//Offset:Discovery.exe+0x1DD6350
	class UServiceProgressionReward* GetRewardByRank(int64_t Rank);//Offset:Discovery.exe+0x1DD6490
	class UServiceProgressionReward* GetFirstRewardByItemAssetId(int64_t AssetId);//Offset:Discovery.exe+0x1DD6110
};


// Class OnlineSubsystemAngelscript.ServiceProgressionRewards
// 0x0060 (0x0088 - 0x0028)
class UServiceProgressionRewards : public UObject
{
public:
	TArray<class UServiceProgressionRewardBucket*>     Buckets;                                                  // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.ServiceProgressionRewards"));
		return ptr;
	}


	bool UpdateDerivedProperties();//Offset:Discovery.exe+0x1DD6C60
	bool HasBucketByBucketId(const struct FString& BucketId);//Offset:Discovery.exe+0x1DD3250
	class UServiceProgressionRewardBucket* GetBucketByBucketId(const struct FString& BucketId);//Offset:Discovery.exe+0x1DD31A0
};


// Class OnlineSubsystemAngelscript.StorePurchasedItem
// 0x0010 (0x0038 - 0x0028)
class UStorePurchasedItem : public UObject
{
public:
	int64_t                                            ItemProductId;                                            // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            ItemQuantity;                                             // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.StorePurchasedItem"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.StoreItem
// 0x0018 (0x0040 - 0x0028)
class UStoreItem : public UObject
{
public:
	int64_t                                            ItemProductId;                                            // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            ItemQuantity;                                             // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOwned;                                                   // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.StoreItem"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.StoreThirdPartyProduct
// 0x0088 (0x00B0 - 0x0028)
class UStoreThirdPartyProduct : public UObject
{
public:
	int64_t                                            ThirdPartyProductId;                                      // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EStoreThirdPartyStoreId                 ThirdPartyStoreId;                                        // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     ThirdPartyOfferId;                                        // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ThirdPartyItemId;                                         // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsFree;                                                  // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FText                                       DisplayCost;                                              // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Title;                                                    // 0x0078(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0090(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  Image;                                                    // 0x00A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.StoreThirdPartyProduct"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.StoreEmbarkProduct
// 0x0018 (0x0040 - 0x0028)
class UStoreEmbarkProduct : public UObject
{
public:
	int64_t                                            EmbarkProductId;                                          // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UStoreItem*>                          CostList;                                                 // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.StoreEmbarkProduct"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.StoreOffer
// 0x0040 (0x0068 - 0x0028)
class UStoreOffer : public UObject
{
public:
	int64_t                                            AssetId;                                                  // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStoreEmbarkProduct*                         EmbarkProduct;                                            // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStoreThirdPartyProduct*                     ThirdPartyProduct;                                        // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UStoreItem*>                          ItemList;                                                 // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bOwned;                                                   // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	int64_t                                            StartTime;                                                // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            EndTime;                                                  // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.StoreOffer"));
		return ptr;
	}


	bool HasThirdPartyProduct();//Offset:Discovery.exe+0x1DD7660
	bool HasEmbarkProduct();//Offset:Discovery.exe+0x1DD7680
};


// Class OnlineSubsystemAngelscript.StoreViewLayout
// 0x0018 (0x0040 - 0x0028)
class UStoreViewLayout : public UObject
{
public:
	int64_t                                            ViewLayoutId;                                             // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UStoreOffer*>                         OfferList;                                                // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.StoreViewLayout"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.StoreView
// 0x0068 (0x0090 - 0x0028)
class UStoreView : public UObject
{
public:
	int64_t                                            ViewId;                                                   // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UStoreViewLayout*>                    ViewLayouts;                                              // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int64_t, class UStoreViewLayout*>             ViewLayoutMap;                                            // 0x0040(0x0050) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.StoreView"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.StoreRecommendations
// 0x0018 (0x0040 - 0x0028)
class UStoreRecommendations : public UObject
{
public:
	TArray<class UStoreView*>                          Views;                                                    // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int64_t                                            NewTimestamp;                                             // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.StoreRecommendations"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.PlayerReporting
// 0x0018 (0x0040 - 0x0028)
class UPlayerReporting : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.PlayerReporting"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.RegexHelper
// 0x0000 (0x0028 - 0x0028)
class URegexHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.RegexHelper"));
		return ptr;
	}


	bool STATIC_Match(const struct FString& Pattern, const struct FString& Subject);//Offset:Discovery.exe+0x1DD81A0
};


// Class OnlineSubsystemAngelscript.VoiceChatDevices
// 0x0060 (0x0098 - 0x0038)
class UVoiceChatDevices : public UIEmbarkDynamicEnum
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET
	struct FText                                       NoDevicesText;                                            // 0x0080(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.VoiceChatDevices"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.VoiceChatInputDevices
// 0x0018 (0x00B0 - 0x0098)
class UVoiceChatInputDevices : public UVoiceChatDevices
{
public:
	struct FText                                       NoMicrophoneFoundText;                                    // 0x0098(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.VoiceChatInputDevices"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.VoiceChatModeSetting
// 0x0058 (0x00B8 - 0x0060)
class UVoiceChatModeSetting : public UIEmbarkOptionEnum
{
public:
	struct FText                                       InvalidDisplayText;                                       // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       OpenMicText;                                              // 0x0078(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       PushToTalkText;                                           // 0x0090(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.VoiceChatModeSetting"));
		return ptr;
	}


	enum class EVoiceChatMode GetCurrentMode();//Offset:Discovery.exe+0x1DD87A0
};


// Class OnlineSubsystemAngelscript.VoiceChatOutputDevices
// 0x0018 (0x00B0 - 0x0098)
class UVoiceChatOutputDevices : public UVoiceChatDevices
{
public:
	struct FText                                       NoSpeakerFoundText;                                       // 0x0098(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.VoiceChatOutputDevices"));
		return ptr;
	}

};


// Class OnlineSubsystemAngelscript.EmbarkVoiceRoom
// 0x0118 (0x0140 - 0x0028)
class UEmbarkVoiceRoom : public UObject
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0028(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemAngelscript.EmbarkVoiceRoom"));
		return ptr;
	}


	void SetAutoEnable(bool bInAutoEnable);//Offset:Discovery.exe+0x1DD8EF0
	bool IsPlayerTalking(const struct FUniqueNetIdRepl& PlayerId);//Offset:Discovery.exe+0x1DD8DE0
	bool IsPlayerInRoom(const struct FUniqueNetIdRepl& PlayerId);//Offset:Discovery.exe+0x1DD8CD0
	bool IsPlayerActive(const struct FUniqueNetIdRepl& PlayerId);//Offset:Discovery.exe+0x1DD8BC0
	enum class EVoiceRoomState GetState();//Offset:Discovery.exe+0x1DD9030
	struct FString GetRoomId();//Offset:Discovery.exe+0x1DD9060
	void Enable(bool bShouldEnable);//Offset:Discovery.exe+0x1DD8F90
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
