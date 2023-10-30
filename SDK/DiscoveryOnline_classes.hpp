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

// Class DiscoveryOnline.IEmbarkOnlineRoundStatModel
// 0x0020 (0x0048 - 0x0028)
class UIEmbarkOnlineRoundStatModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnRequestRoundStatCompleted;                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestRoundStatSummaryCompleted;                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.IEmbarkOnlineRoundStatModel"));
		return ptr;
	}


	void RequestRoundStatSummary();//Offset:Discovery.exe+0x11B97D0
	void RequestRoundStat();//Offset:Discovery.exe+0x11BDAF0
	struct FApiGatewayDiscoveryRoundStatSummary GetRoundStatSummary(enum class EServiceRoundStatSummaryType Type);//Offset:Discovery.exe+0x11BD660
	TArray<struct FApiGatewayDiscoveryRoundStats> GetRoundStats();//Offset:Discovery.exe+0x11BD9C0
};


// Class DiscoveryOnline.DefaultRoundStatModel
// 0x05B0 (0x05F8 - 0x0048)
class UDefaultRoundStatModel : public UIEmbarkOnlineRoundStatModel
{
public:
	unsigned char                                      UnknownData00[0x5B0];                                     // 0x0048(0x05B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DefaultRoundStatModel"));
		return ptr;
	}

};


// Class DiscoveryOnline.IEmbarkOnlineSurveySettingsModel
// 0x0010 (0x0038 - 0x0028)
class UIEmbarkOnlineSurveySettingsModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnRequestSurveySettingsCompleted;                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.IEmbarkOnlineSurveySettingsModel"));
		return ptr;
	}


	void RequestSurveySettings(const struct FString& Locale);//Offset:Discovery.exe+0x11BE180
	struct FApiGatewaySharedGetSurveySettingsResponse GetSurveySettings();//Offset:Discovery.exe+0x11BE090
};


// Class DiscoveryOnline.DefaultSurveySettingsModel
// 0x0010 (0x0048 - 0x0038)
class UDefaultSurveySettingsModel : public UIEmbarkOnlineSurveySettingsModel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DefaultSurveySettingsModel"));
		return ptr;
	}

};


// Class DiscoveryOnline.IEmbarkOnlineTournamentsModel
// 0x0060 (0x0088 - 0x0028)
class UIEmbarkOnlineTournamentsModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnJoinTournamentMatchStarted;                             // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJoinTournamentMatchUpdated;                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJoinTournamentMatchStopped;                             // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMonitorTournamentCompleted;                             // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetTournamentSessionCompleted;                          // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAbandonTournamentCompleted;                             // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.IEmbarkOnlineTournamentsModel"));
		return ptr;
	}


	bool TravelToTierMatch(const struct FApiGatewayDiscoveryGameServer& TournamentGameServer);//Offset:Discovery.exe+0x11BE960
	void MonitorTournament(const struct FString& TournamentId);//Offset:Discovery.exe+0x11BEA60
	void JoinTournamentMatch();//Offset:Discovery.exe+0x11B68C0
	bool IsJoiningTournament();//Offset:Discovery.exe+0x11BE930
	void GetTournamentSession();//Offset:Discovery.exe+0x11BDAF0
	void AbandonTournament(const struct FString& TournamentId);//Offset:Discovery.exe+0x11BE880
};


// Class DiscoveryOnline.DefaultTournamentsModel
// 0x0008 (0x0090 - 0x0088)
class UDefaultTournamentsModel : public UIEmbarkOnlineTournamentsModel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DefaultTournamentsModel"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceItemSkin
// 0x0000 (0x0058 - 0x0058)
class UInventoryServiceItemSkin : public UInventoryServiceItemBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceItemSkin"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceSchematicItem
// 0x0010 (0x0068 - 0x0058)
class UInventoryServiceSchematicItem : public UInventoryServiceItemBase
{
public:
	TArray<int64_t>                                    SelectedItemIds;                                          // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceSchematicItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceLoadoutItem
// 0x0048 (0x00A0 - 0x0058)
class UInventoryServiceLoadoutItem : public UInventoryServiceItemBase
{
public:
	TArray<struct FString>                             SchematicIds;                                             // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UInventoryServiceSchematicItem*>      Schematics;                                               // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CharacterId;                                              // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UInventoryServiceCharacterItem*              Character;                                                // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceLoadoutItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceCurrencyItem
// 0x0000 (0x0058 - 0x0058)
class UInventoryServiceCurrencyItem : public UInventoryServiceItemBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceCurrencyItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceCharacterItem
// 0x0040 (0x0098 - 0x0058)
class UInventoryServiceCharacterItem : public UInventoryServiceItemBase
{
public:
	TArray<struct FString>                             SelectedSkinIds;                                          // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UInventoryServiceCharacterSkinItem*>  SelectedSkins;                                            // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             SelectedSchematicIds;                                     // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UInventoryServiceSchematicItem*>      SelectedSchematics;                                       // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceCharacterItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceCharacterSkinItem
// 0x0000 (0x0058 - 0x0058)
class UInventoryServiceCharacterSkinItem : public UInventoryServiceItemBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceCharacterSkinItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceBucketItem
// 0x0010 (0x0068 - 0x0058)
class UInventoryServiceBucketItem : public UInventoryServiceItemBase
{
public:
	struct FString                                     BucketId;                                                 // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceBucketItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceBattlepassItem
// 0x0000 (0x0058 - 0x0058)
class UInventoryServiceBattlepassItem : public UInventoryServiceItemBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceBattlepassItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceFameItem
// 0x0000 (0x0058 - 0x0058)
class UInventoryServiceFameItem : public UInventoryServiceItemBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceFameItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceItemCharmItem
// 0x0000 (0x0058 - 0x0058)
class UInventoryServiceItemCharmItem : public UInventoryServiceItemBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceItemCharmItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceItemStickerItem
// 0x0000 (0x0058 - 0x0058)
class UInventoryServiceItemStickerItem : public UInventoryServiceItemBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceItemStickerItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceSprayItem
// 0x0000 (0x0058 - 0x0058)
class UInventoryServiceSprayItem : public UInventoryServiceItemBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceSprayItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceEmoticonItem
// 0x0000 (0x0058 - 0x0058)
class UInventoryServiceEmoticonItem : public UInventoryServiceItemBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceEmoticonItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceSkillItem
// 0x0000 (0x0058 - 0x0058)
class UInventoryServiceSkillItem : public UInventoryServiceItemBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceSkillItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceSanctionItem
// 0x0028 (0x0080 - 0x0058)
class UInventoryServiceSanctionItem : public UInventoryServiceItemBase
{
public:
	enum class ESanctionType                           SanctionType;                                             // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	int                                                Tier;                                                     // 0x005C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            TimeOfSanction;                                           // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            Duration;                                                 // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceSanctionItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceQuestItem
// 0x0010 (0x0068 - 0x0058)
class UInventoryServiceQuestItem : public UInventoryServiceItemBase
{
public:
	int64_t                                            ExpiresAtTime;                                            // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Week;                                                     // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceQuestItem"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceItemAttachment
// 0x0058 (0x0080 - 0x0028)
class UInventoryServiceItemAttachment : public UObject
{
public:
	struct FString                                     ItemId;                                                   // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UInventoryServiceSchematicItem*              Item;                                                     // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             AttachedItemIds;                                          // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UInventoryServiceItemSkin*>           AttachedItems;                                            // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UInventoryServiceItemCharmItem*>      AttachedCharms;                                           // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UInventoryServiceItemStickerItem*>    AttachedStickers;                                         // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceItemAttachment"));
		return ptr;
	}

};


// Class DiscoveryOnline.InventoryServiceDiscoveryContestantPackItem
// 0x0150 (0x01A8 - 0x0058)
class UInventoryServiceDiscoveryContestantPackItem : public UInventoryServiceItemBase
{
public:
	struct FString                                     ArchetypeId;                                              // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UInventoryServiceCharacterItem*              Archetype;                                                // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             FirstHandIds;                                             // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UInventoryServiceItemBase*>           FirstHandItems;                                           // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             ReservedIds;                                              // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UInventoryServiceItemBase*>           ReservedItems;                                            // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             CustomizationIds;                                         // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UInventoryServiceCharacterSkinItem*>  CustomizationItems;                                       // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UInventoryServiceItemAttachment*>     ItemAttachments;                                          // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     SprayItemId;                                              // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UInventoryServiceSprayItem*                  SprayItem;                                                // 0x00F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ActionWheel01ItemIds;                                     // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UInventoryServiceItemBase*>           ActionWheel01Items;                                       // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             ActionWheel02ItemIds;                                     // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UInventoryServiceItemBase*>           ActionWheel02Items;                                       // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             ActionWheel03ItemIds;                                     // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UInventoryServiceItemBase*>           ActionWheel03Items;                                       // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     IntroPoseItemId;                                          // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UInventoryServiceCharacterSkinItem*          IntroPoseItem;                                            // 0x0168(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     VictoryPoseItemId;                                        // 0x0170(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UInventoryServiceCharacterSkinItem*          VictoryPoseItem;                                          // 0x0180(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0188(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Title;                                                    // 0x0198(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.InventoryServiceDiscoveryContestantPackItem"));
		return ptr;
	}


	bool IsEmpty();//Offset:Discovery.exe+0x11B4920
};


// Class DiscoveryOnline.DiscoveryOnlineClientAdmin
// 0x0008 (0x0030 - 0x0028)
class UDiscoveryOnlineClientAdmin : public UObject
{
public:
	class UEmbarkApiContext*                           Context;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryOnlineClientAdmin"));
		return ptr;
	}


	void ResetRoundStats(const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x11B4EA0
	void ResetProgression(const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x11B4EA0
	void ResetInventory(const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x11B4EA0
	void HasAccess(const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x11B4EA0
	void ClearReconnect(const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x11B4EA0
	void ClearBan(const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x11B4EA0
	void AbandonMatch(const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x11B4EA0
};


// Class DiscoveryOnline.IDiscoveryOnlineClientServices
// 0x0000 (0x0028 - 0x0028)
class UIDiscoveryOnlineClientServices : public UIEmbarkOnlineClientServices
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.IDiscoveryOnlineClientServices"));
		return ptr;
	}


	class UIEmbarkOnlineTournamentsModel* GetTournamentsModel();//Offset:Discovery.exe+0x11B59D0
	class UIEmbarkOnlineSurveySettingsModel* GetSurveySettingsModel();//Offset:Discovery.exe+0x11B5970
	class UIDiscoveryOnlineScenarioModel* GetScenarioModel();//Offset:Discovery.exe+0x11B5910
	class UIEmbarkOnlineRoundStatModel* GetRoundStatModel();//Offset:Discovery.exe+0x11B5A00
	class UIDiscoveryOnlineRankModel* GetRankModel();//Offset:Discovery.exe+0x11B5940
	class UIDiscoveryOnlineClientServices* STATIC_GetDiscoveryOnlineClientServices(class UObject* InObj);//Offset:Discovery.exe+0x11B5870
	class UIDiscoveryOnlineInventoryModel* GetDiscoveryInventoryModel();//Offset:Discovery.exe+0x11B5A30
	class UIDiscoveryOnlineContestantPackModel* GetContestantPackModel();//Offset:Discovery.exe+0x11B59A0
};


// Class DiscoveryOnline.DiscoveryOnlineClientServices
// 0x00B0 (0x00D8 - 0x0028)
class UDiscoveryOnlineClientServices : public UIDiscoveryOnlineClientServices
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UEmbarkApiContext*                           GatewayContext;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineAnnouncementsModel*            AnnouncementsModel;                                       // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineGameSettingsModel*             GameSettingsModel;                                        // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineBattlePassModel*               BattlePassModel;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineFriendsModel*                  FriendsModel;                                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineIdentityModel*                 IdentityModel;                                            // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIDiscoveryOnlineInventoryModel*             InventoryModel;                                           // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineManifestModel*                 ManifestModel;                                            // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineMatchmakingModel*              MatchmakingModel;                                         // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineSurveySettingsModel*           SurveySettingsModel;                                      // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineRoundStatModel*                RoundStatModel;                                           // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineStoreModel*                    StoreModel;                                               // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineTournamentsModel*              TournamentsModel;                                         // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineVoiceChatModel*                VoiceChatModel;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineBuildModel*                    BuildModel;                                               // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineRewardModel*                   RewardModel;                                              // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlinePersistentPlayerKeysModel*     PersistentPlayerKeysModel;                                // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIDiscoveryOnlineScenarioModel*              ScenarioModel;                                            // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIDiscoveryOnlineRankModel*                  RankModel;                                                // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIDiscoveryOnlineContestantPackModel*        ContestantPackModel;                                      // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UIEmbarkOnlineAchievementsModel*             AchievementsModel;                                        // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryOnlineClientServices"));
		return ptr;
	}

};


// Class DiscoveryOnline.IDiscoveryOnlineContestantPackModel
// 0x0050 (0x0078 - 0x0028)
class UIDiscoveryOnlineContestantPackModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnRequestContestantPacksCompleted;                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddContestantPackCompleted;                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveContestantPackCompleted;                          // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateContestantPackCompleted;                          // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBatchUpdateContestantPacksCompleted;                    // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.IDiscoveryOnlineContestantPackModel"));
		return ptr;
	}


	void RequestUpdateContestantPack(const struct FApiGatewayDiscoveryPlayerPersistenceContestantPack& Pack);//Offset:Discovery.exe+0x11B65A0
	void RequestRemoveContestantPack(const struct FString& InstanceId, const struct FString& Etag);//Offset:Discovery.exe+0x11B66C0
	void RequestContestantPacks();//Offset:Discovery.exe+0x11B68C0
	void RequestBatchUpdateContestantPacks(TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> packs);//Offset:Discovery.exe+0x11B64C0
	void RequestAddContestantPack(const struct FApiGatewayDiscoveryCreateContestantPackRequest& req);//Offset:Discovery.exe+0x11B67C0
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> GetContestantPacks();//Offset:Discovery.exe+0x11B63F0
};


// Class DiscoveryOnline.DiscoveryOnlineContestantPackModel
// 0x0010 (0x0088 - 0x0078)
class UDiscoveryOnlineContestantPackModel : public UIDiscoveryOnlineContestantPackModel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryOnlineContestantPackModel"));
		return ptr;
	}

};


// Class DiscoveryOnline.IDiscoveryOnlineInventoryModel
// 0x0050 (0x00B8 - 0x0068)
class UIDiscoveryOnlineInventoryModel : public UIEmbarkOnlineInventoryModel
{
public:
	struct FScriptMulticastDelegate                    OnMutateInventoryComplete;                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddContestantPackComplete;                              // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveContestantPackComplete;                           // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateContestantPackComplete;                           // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBatchUpdateContestantPacksComplete;                     // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.IDiscoveryOnlineInventoryModel"));
		return ptr;
	}


	void RemoveContestantPack(const struct FString& InstanceId, const struct FString& Etag);//Offset:Discovery.exe+0x11B7100
	bool MutateInventoryItem(class UInventoryServiceItemBase* Item);//Offset:Discovery.exe+0x11B73E0
	void BatchUpdateContestantPacks(TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> ContestantPacks);//Offset:Discovery.exe+0x11B7300
	void AddContestantPack(const struct FApiGatewayDiscoveryCreateContestantPackRequest& req);//Offset:Discovery.exe+0x11B7200
};


// Class DiscoveryOnline.DiscoveryOnlineInventoryModel
// 0x0100 (0x01B8 - 0x00B8)
class UDiscoveryOnlineInventoryModel : public UIDiscoveryOnlineInventoryModel
{
public:
	class UInventoryServiceInventory*                  Inventory;                                                // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<int64_t, class UInventoryServiceInventory*>   PartyInventories;                                         // 0x00C0(0x0050)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0110(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryOnlineInventoryModel"));
		return ptr;
	}

};


// Class DiscoveryOnline.IDiscoveryOnlineRankModel
// 0x0030 (0x0058 - 0x0028)
class UIDiscoveryOnlineRankModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnRanksChanged;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpgradeItemCompleted;                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActivateItemRankCompleted;                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.IDiscoveryOnlineRankModel"));
		return ptr;
	}


	void UpgradeItem(const struct FString& ItemId, int NextLevel);//Offset:Discovery.exe+0x11B96D0
	void SyncPlayerRanks();//Offset:Discovery.exe+0x11B97D0
	class UDiscoveryPlayerRankInfo* GetPlayerRankInfo();//Offset:Discovery.exe+0x11B97F0
	void ActivateItemRank(const struct FString& ItemId, const struct FString& Etag);//Offset:Discovery.exe+0x11B95D0
};


// Class DiscoveryOnline.DiscoveryOnlineRankModel
// 0x0008 (0x0060 - 0x0058)
class UDiscoveryOnlineRankModel : public UIDiscoveryOnlineRankModel
{
public:
	class UDiscoveryPlayerRankInfo*                    PlayerRankInfo;                                           // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryOnlineRankModel"));
		return ptr;
	}

};


// Class DiscoveryOnline.IDiscoveryOnlineScenarioModel
// 0x0010 (0x0038 - 0x0028)
class UIDiscoveryOnlineScenarioModel : public UEmbarkOnlineServiceBase
{
public:
	struct FScriptMulticastDelegate                    OnScenariosChanged;                                       // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.IDiscoveryOnlineScenarioModel"));
		return ptr;
	}


	void SyncScenarioList();//Offset:Discovery.exe+0x11BA100
	class UDiscoveryScenarioList* GetScenarioList();//Offset:Discovery.exe+0x11BA0D0
};


// Class DiscoveryOnline.DiscoveryOnlineScenarioModel
// 0x0008 (0x0040 - 0x0038)
class UDiscoveryOnlineScenarioModel : public UIDiscoveryOnlineScenarioModel
{
public:
	class UDiscoveryScenarioList*                      ScenarioList;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryOnlineScenarioModel"));
		return ptr;
	}

};


// Class DiscoveryOnline.IDiscoveryOnlineServerServices
// 0x0030 (0x0150 - 0x0120)
class UIDiscoveryOnlineServerServices : public UIEmbarkOnlineServerServices
{
public:
	struct FScriptMulticastDelegate                    OnInventoryChanged;                                       // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReportAbandonedPlayerCompleted;                         // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetActivatedItemRanksCompleted;                         // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.IDiscoveryOnlineServerServices"));
		return ptr;
	}


	bool SyncInventories(TArray<struct FUniqueNetIdRepl> UniqueNetIdRepls);//Offset:Discovery.exe+0x11BB5A0
	bool SubmitMatchReport(const struct FString& MatchId, const struct FString& ScenarioId, TArray<struct FOnlineSquadInfo> ParticipatedSquads, TMap<struct FString, int> SquadScores);//Offset:Discovery.exe+0x11BA730
	bool SendMatchHeartbeat(const struct FString& TournamentId, const struct FString& MatchId);//Offset:Discovery.exe+0x11BAA30
	bool ReportTournamentMatchResult(const struct FString& TournamentId, const struct FString& MatchId, TArray<int> WinningTeamIds, TMap<struct FString, struct FString> TravelData);//Offset:Discovery.exe+0x11BAF70
	bool ReportTournamentMatchProgress(const struct FString& TournamentId, const struct FString& MatchId, int ExpectedEndTime, const struct FString& MatchProgressData);//Offset:Discovery.exe+0x11BADB0
	void ReportPlayerAbandoned(const struct FUniqueNetIdRepl& PlayerId, const struct FString& TournamentId, int64_t TimeOfAbandon, bool bImposeSanction, const struct FString& GameServer);//Offset:Discovery.exe+0x11BAB40
	bool HasInventories();//Offset:Discovery.exe+0x11BB460
	bool HasActivatedItemRanks();//Offset:Discovery.exe+0x11BB1D0
	class UInventoryServiceInventory* GetInventory(const struct FUniqueNetIdRepl& PlayerId);//Offset:Discovery.exe+0x11BB490
	bool GetActivatedItemRanks(TArray<struct FUniqueNetIdRepl> UniqueNetIdRepls);//Offset:Discovery.exe+0x11BB340
	struct FString GetActivatedItemRank(const struct FUniqueNetIdRepl& PlayerId);//Offset:Discovery.exe+0x11BB200
};


// Class DiscoveryOnline.DiscoveryOnlineServerServices
// 0x00F8 (0x0248 - 0x0150)
class UDiscoveryOnlineServerServices : public UIDiscoveryOnlineServerServices
{
public:
	TMap<int64_t, class UInventoryServiceInventory*>   Inventories;                                              // 0x0150(0x0050) (Transient)
	TMap<int64_t, struct FString>                      ActivatedItemRanks;                                       // 0x01A0(0x0050) (Transient)
	bool                                               bHasActivatedItemRanks;                                   // 0x01F0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	TMap<struct FString, struct FApiGatewayDiscoveryGetTournamentSessionResponse> PlayerTournamentSessions;                                 // 0x01F8(0x0050) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryOnlineServerServices"));
		return ptr;
	}

};


// Class DiscoveryOnline.DiscoveryOnlineStoreModel
// 0x0090 (0x00E8 - 0x0058)
class UDiscoveryOnlineStoreModel : public UIEmbarkOnlineStoreModel
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0058(0x0060) MISSED OFFSET
	class UStoreRecommendations*                       StoreRecommendations;                                     // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00C0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryOnlineStoreModel"));
		return ptr;
	}

};


// Class DiscoveryOnline.DiscoveryRankInfo
// 0x0030 (0x0058 - 0x0028)
class UDiscoveryRankInfo : public UObject
{
public:
	struct FString                                     BucketId;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int64_t                                            TotalXP;                                                  // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            CurrentRank;                                              // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryRankInfo"));
		return ptr;
	}

};


// Class DiscoveryOnline.DiscoveryPlayerRankInfo
// 0x0080 (0x00A8 - 0x0028)
class UDiscoveryPlayerRankInfo : public UObject
{
public:
	struct FString                                     User;                                                     // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UDiscoveryRankInfo*>                  Ranks;                                                    // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ActiveItemRankBucketId;                                   // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0058(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryPlayerRankInfo"));
		return ptr;
	}


	bool UpdateDerivedProperties();//Offset:Discovery.exe+0x11BCE40
	bool HasRankInfoByBucketId(const struct FString& BucketId);//Offset:Discovery.exe+0x11BCD90
	class UDiscoveryRankInfo* GetRankInfoByBucketId(const struct FString& BucketId);//Offset:Discovery.exe+0x11BCCE0
};


// Class DiscoveryOnline.DiscoveryScenarioUISettings
// 0x0008 (0x0030 - 0x0028)
class UDiscoveryScenarioUISettings : public UObject
{
public:
	bool                                               ButtonVisible;                                            // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ButtonDisabled;                                           // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryScenarioUISettings"));
		return ptr;
	}

};


// Class DiscoveryOnline.DiscoveryScenarioConditions
// 0x0008 (0x0030 - 0x0028)
class UDiscoveryScenarioConditions : public UObject
{
public:
	enum class ESanctionType                           SanctionType;                                             // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryScenarioConditions"));
		return ptr;
	}

};


// Class DiscoveryOnline.DiscoveryScenarioMatchmakingParameters
// 0x0070 (0x0098 - 0x0028)
class UDiscoveryScenarioMatchmakingParameters : public UObject
{
public:
	struct FString                                     GameMode;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FString, bool>                         FeatureFlags;                                             // 0x0048(0x0050) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryScenarioMatchmakingParameters"));
		return ptr;
	}

};


// Class DiscoveryOnline.DiscoveryScenario
// 0x0028 (0x0050 - 0x0028)
class UDiscoveryScenario : public UObject
{
public:
	struct FString                                     ScenarioName;                                             // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UDiscoveryScenarioConditions*                Conditions;                                               // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDiscoveryScenarioUISettings*                UISettings;                                               // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDiscoveryScenarioMatchmakingParameters*     Parameters;                                               // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryScenario"));
		return ptr;
	}

};


// Class DiscoveryOnline.DiscoveryScenarioList
// 0x0010 (0x0038 - 0x0028)
class UDiscoveryScenarioList : public UObject
{
public:
	TArray<class UDiscoveryScenario*>                  Scenarios;                                                // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DiscoveryOnline.DiscoveryScenarioList"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
