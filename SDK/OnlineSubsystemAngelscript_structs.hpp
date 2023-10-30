#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemAngelscript.EServiceFriendRequestResult
enum class EServiceFriendRequestResult : uint8_t
{
	Success                        = 0,
	Fail                           = 1,
	NotFound                       = 2,
	AlreadyFriends                 = 3,
	AlreadySent                    = 4,
	SelfRequest                    = 5,
	EServiceFriendRequestResult_MAX = 6
};


// Enum OnlineSubsystemAngelscript.EServiceKickPartyMemberResult
enum class EServiceKickPartyMemberResult : uint8_t
{
	Success                        = 0,
	Fail                           = 1,
	NotInParty                     = 2,
	NotPartyLeader                 = 3,
	EServiceKickPartyMemberResult_MAX = 4
};


// Enum OnlineSubsystemAngelscript.EClientModelState
enum class EClientModelState : uint8_t
{
	Down                           = 0,
	LoggingIn                      = 1,
	Up                             = 2,
	EClientModelState_MAX          = 3
};


// Enum OnlineSubsystemAngelscript.EAuthErrorCode
enum class EAuthErrorCode : uint8_t
{
	UnknownError                   = 0,
	NetworkError                   = 1,
	AuthenticationError            = 2,
	UserNotSignedIn                = 3,
	UserSuspended                  = 4,
	NoAccountLinked                = 5,
	InLoginQueue                   = 6,
	EAuthErrorCode_MAX             = 7
};


// Enum OnlineSubsystemAngelscript.EMatchmakingResult
enum class EMatchmakingResult : uint8_t
{
	Success                        = 0,
	Redirected                     = 1,
	Fail                           = 2,
	InvalidParameters              = 3,
	BackendSystemError             = 4,
	PermissionDenied               = 5,
	Restricted                     = 6,
	EMatchmakingResult_MAX         = 7
};


// Enum OnlineSubsystemAngelscript.EMatchmakingEstimationStatus
enum class EMatchmakingEstimationStatus : uint8_t
{
	NotAvailable                   = 0,
	Valid                          = 1,
	Faulty                         = 2,
	NoData                         = 3,
	EMatchmakingEstimationStatus_MAX = 4
};


// Enum OnlineSubsystemAngelscript.EMatchmakingStatus
enum class EMatchmakingStatus : uint8_t
{
	Idle                           = 0,
	Waiting                        = 1,
	Matching                       = 2,
	Completed                      = 3,
	RequestingServer               = 4,
	Skipping                       = 5,
	Cancelling                     = 6,
	EMatchmakingStatus_MAX         = 7
};


// Enum OnlineSubsystemAngelscript.EServicePartyInviteResult
enum class EServicePartyInviteResult : uint8_t
{
	Success                        = 0,
	Fail                           = 1,
	PartyFull                      = 2,
	EServicePartyInviteResult_MAX  = 3
};


// Enum OnlineSubsystemAngelscript.EServicePartyJoinResult
enum class EServicePartyJoinResult : uint8_t
{
	Success                        = 0,
	Fail                           = 1,
	PartyFull                      = 2,
	EServicePartyJoinResult_MAX    = 3
};


// Enum OnlineSubsystemAngelscript.EPartyMatchmakingCompletedResult
enum class EPartyMatchmakingCompletedResult : uint8_t
{
	Success                        = 0,
	Cancelled                      = 1,
	PartyNotReady                  = 2,
	PartyTooLarge                  = 3,
	ManifestIsInvalid              = 4,
	EPartyMatchmakingCompletedResult_MAX = 5
};


// Enum OnlineSubsystemAngelscript.EServicePartyMemberRemovedReason
enum class EServicePartyMemberRemovedReason : uint8_t
{
	Left                           = 0,
	Kicked                         = 1,
	Unknown                        = 2,
	EServicePartyMemberRemovedReason_MAX = 3
};


// Enum OnlineSubsystemAngelscript.EStorePurchaseResult
enum class EStorePurchaseResult : uint8_t
{
	Success                        = 0,
	Cancelled                      = 1,
	PreventedByMatchmaking         = 2,
	Failed                         = 3,
	NotAllowed                     = 4,
	EStorePurchaseResult_MAX       = 5
};


// Enum OnlineSubsystemAngelscript.ESyncInventoryResult
enum class ESyncInventoryResult : uint8_t
{
	Success                        = 0,
	InvalidRealm                   = 1,
	InvalidFunctionCall            = 2,
	InvalidParameters              = 3,
	SerializationError             = 4,
	BackendSystemError             = 5,
	BackendRequestError            = 6,
	Failed                         = 7,
	ESyncInventoryResult_MAX       = 8
};


// Enum OnlineSubsystemAngelscript.ESyncManifestResult
enum class ESyncManifestResult : uint8_t
{
	Success                        = 0,
	NoManifest                     = 1,
	BackendSystemError             = 2,
	PlaytestNotActive              = 3,
	ESyncManifestResult_MAX        = 4
};


// Enum OnlineSubsystemAngelscript.EVoiceChannel
enum class EVoiceChannel : uint8_t
{
	None                           = 0,
	Party                          = 1,
	Squad                          = 2,
	EVoiceChannel_MAX              = 3
};


// Enum OnlineSubsystemAngelscript.EVoiceRoomParticipantStatus
enum class EVoiceRoomParticipantStatus : uint8_t
{
	None                           = 0,
	Idle                           = 1,
	Active                         = 2,
	EVoiceRoomParticipantStatus_MAX = 3
};


// Enum OnlineSubsystemAngelscript.EUpdateProfileErrorCode
enum class EUpdateProfileErrorCode : uint8_t
{
	UnknownError                   = 0,
	EmailValidationError           = 1,
	EmailConflictError             = 2,
	EUpdateProfileErrorCode_MAX    = 3
};


// Enum OnlineSubsystemAngelscript.EMutateInventoryResult
enum class EMutateInventoryResult : uint8_t
{
	Success                        = 0,
	InvalidRealm                   = 1,
	InvalidFunctionCall            = 2,
	InvalidParameters              = 3,
	ValidationError                = 4,
	SerializationError             = 5,
	BackendSystemError             = 6,
	BackendRequestError            = 7,
	EMutateInventoryResult_MAX     = 8
};


// Enum OnlineSubsystemAngelscript.EServiceFriendshipType
enum class EServiceFriendshipType : uint8_t
{
	Unknown                        = 0,
	Mutual                         = 1,
	NonMutualOutgoing              = 2,
	NonMutualIncoming              = 3,
	Blocked                        = 4,
	Suggested                      = 5,
	EServiceFriendshipType_MAX     = 6
};


// Enum OnlineSubsystemAngelscript.EServiceFriendUpdateType
enum class EServiceFriendUpdateType : uint8_t
{
	Unknown                        = 0,
	Added                          = 1,
	Removed                        = 2,
	OnlineState                    = 3,
	EServiceFriendUpdateType_MAX   = 4
};


// Enum OnlineSubsystemAngelscript.EServicePlayerOnlineState
enum class EServicePlayerOnlineState : uint8_t
{
	Unknown                        = 0,
	Online                         = 1,
	Offline                        = 2,
	EServicePlayerOnlineState_MAX  = 3
};


// Enum OnlineSubsystemAngelscript.EInventorySyncInventoryReason
enum class EInventorySyncInventoryReason : uint8_t
{
	InitialSync                    = 0,
	ExplicitSync                   = 1,
	MutationSync                   = 2,
	EInventorySyncInventoryReason_MAX = 3
};


// Enum OnlineSubsystemAngelscript.EMatchmakingPlatform
enum class EMatchmakingPlatform : uint8_t
{
	All                            = 0,
	XBox                           = 1,
	PlayStation                    = 2,
	Pc                             = 3,
	EMatchmakingPlatform_MAX       = 4
};


// Enum OnlineSubsystemAngelscript.EMatchmakingStoppedReason
enum class EMatchmakingStoppedReason : uint8_t
{
	Unknown                        = 0,
	BadRequest                     = 1,
	Forbidden                      = 2,
	NotFound                       = 3,
	ServerError                    = 4,
	InvalidTenancyUser             = 5,
	InvalidManifestId              = 6,
	InvalidScenarioId              = 7,
	TicketNotFound                 = 8,
	InvalidTicketOwner             = 9,
	PartyNotFound                  = 10,
	PartyTenancyUsersNotFound      = 11,
	MatchmakingUnavailable         = 12,
	MatchmakingUnhandledError      = 13,
	MatchmakingUnsupportedPlatform = 14,
	MatchmakingRestricted          = 15,
	EMatchmakingStoppedReason_MAX  = 16
};


// Enum OnlineSubsystemAngelscript.EStoreRedeemOutstandingThirdPartyPurchasesResult
enum class EStoreRedeemOutstandingThirdPartyPurchasesResult : uint8_t
{
	Success                        = 0,
	Failed                         = 1,
	EStoreRedeemOutstandingThirdPartyPurchasesResult_MAX = 2
};


// Enum OnlineSubsystemAngelscript.EStoreThirdPartyStoreId
enum class EStoreThirdPartyStoreId : uint8_t
{
	Epic                           = 0,
	Microsoft                      = 1,
	PlayStation                    = 2,
	Steam                          = 3,
	Unspecified                    = 4,
	EStoreThirdPartyStoreId_MAX    = 5
};


// Enum OnlineSubsystemAngelscript.EVoiceChatMode
enum class EVoiceChatMode : uint8_t
{
	OpenMic                        = 0,
	PushToTalk                     = 1,
	EVoiceChatMode_MAX             = 2
};


// Enum OnlineSubsystemAngelscript.EVoiceChannelType
enum class EVoiceChannelType : uint8_t
{
	NonPositional                  = 0,
	Positional                     = 1,
	Echo                           = 2,
	EVoiceChannelType_MAX          = 3
};


// Enum OnlineSubsystemAngelscript.EVoiceChatGameState
enum class EVoiceChatGameState : uint8_t
{
	FrontEnd                       = 0,
	Game                           = 1,
	EVoiceChatGameState_MAX        = 2
};


// Enum OnlineSubsystemAngelscript.EVoiceRoomState
enum class EVoiceRoomState : uint8_t
{
	None                           = 0,
	Joining                        = 1,
	Idle                           = 2,
	Active                         = 3,
	Leaving                        = 4,
	EVoiceRoomState_MAX            = 5
};


// Enum OnlineSubsystemAngelscript.EReportPlayerReason
enum class EReportPlayerReason : uint8_t
{
	Cheating                       = 0,
	Exploiting                     = 1,
	OffensiveProfile               = 2,
	VerbalAbuse                    = 3,
	Scamming                       = 4,
	Spamming                       = 5,
	Other                          = 6,
	EReportPlayerReason_MAX        = 7
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemAngelscript.OnlineSquadInfo
// 0x0060
struct FOnlineSquadInfo
{
	struct FString                                     SquadId;                                                  // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) UNKNOWN PROPERTY: MemberIds
};

// ScriptStruct OnlineSubsystemAngelscript.MatchmakingParameters
// 0x0070
struct FMatchmakingParameters
{
	struct FString                                     MatchmakingScenarioName;                                  // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FString>               PartitioningGameServerSettings;                           // 0x0010(0x0050) (BlueprintVisible)
	int64_t                                            PreferredSquadSize;                                       // 0x0060(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableVoice;                                             // 0x0068(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemAngelscript.InGameVoiceChannel
// 0x0038
struct FInGameVoiceChannel
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     RoomId;                                                   // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     AccessToken;                                              // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     ClientBaseUrl;                                            // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct OnlineSubsystemAngelscript.GameServer
// 0x00B8
struct FGameServer
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Host;                                                     // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     SecretKey;                                                // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     RoutingToken;                                             // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FInGameVoiceChannel                         SquadChannel;                                             // 0x0048(0x0038) (BlueprintVisible)
	struct FInGameVoiceChannel                         ServerChannel;                                            // 0x0080(0x0038) (BlueprintVisible)
};

// ScriptStruct OnlineSubsystemAngelscript.MatchmakingTimeEstimateEntry
// 0x0010
struct FMatchmakingTimeEstimateEntry
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int64_t                                            Estimate;                                                 // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OnlineSubsystemAngelscript.MatchmakingTimeEstimates
// 0x00A8
struct FMatchmakingTimeEstimates
{
	TMap<struct FString, struct FMatchmakingTimeEstimateEntry> Entries;                                                  // 0x0000(0x0050) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	TMap<struct FString, int64_t>                      Estimates;                                                // 0x0058(0x0050) (BlueprintVisible)
};

// ScriptStruct OnlineSubsystemAngelscript.MatchmakingSessionPlayer
// 0x0058
struct FMatchmakingSessionPlayer
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     PlayerName;                                               // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bIsLocalPlayer;                                           // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FUniqueNetIdRepl                            PlayerUniqueNetId;                                        // 0x0028(0x0030) (BlueprintVisible)
};

// ScriptStruct OnlineSubsystemAngelscript.MatchmakingSessionSquad
// 0x0018
struct FMatchmakingSessionSquad
{
	int                                                SquadId;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FMatchmakingSessionPlayer>           Players;                                                  // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct OnlineSubsystemAngelscript.MatchmakingTimeEstimate
// 0x0010
struct FMatchmakingTimeEstimate
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int64_t                                            EstimatedTimeSeconds;                                     // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OnlineSubsystemAngelscript.MatchmakingSession
// 0x0040
struct FMatchmakingSession
{
	int                                                PlayerCount;                                              // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlayerCountMax;                                           // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SquadSize;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SquadCountMax;                                            // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FMatchmakingSessionSquad>            Squads;                                                   // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FMatchmakingTimeEstimate                    MatchmakingTimeEstimate;                                  // 0x0020(0x0010) (BlueprintVisible)
	struct FString                                     ScenarioName;                                             // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct OnlineSubsystemAngelscript.VoiceChannelInfo
// 0x0030
struct FVoiceChannelInfo
{
	struct FString                                     RoomId;                                                   // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     AccessToken;                                              // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     ClientBaseUrl;                                            // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct OnlineSubsystemAngelscript.VoiceDeviceInfo
// 0x0020
struct FVoiceDeviceInfo
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ID;                                                       // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OnlineSubsystemAngelscript.ServiceBattlePassGameItem
// 0x0010
struct FServiceBattlePassGameItem
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OnlineSubsystemAngelscript.ServiceBattlePassEntry
// 0x0050
struct FServiceBattlePassEntry
{
	int64_t                                            ProductId;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Category;                                                 // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     Style;                                                    // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FServiceBattlePassGameItem>          Rewards;                                                  // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FServiceBattlePassGameItem>          Costs;                                                    // 0x0038(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OnlineSubsystemAngelscript.ServiceBattlePassPage
// 0x0038
struct FServiceBattlePassPage
{
	TArray<struct FServiceBattlePassEntry>             Entries;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            RequiredLevel;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            RequiredClaimedAmount;                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Style;                                                    // 0x0020(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OnlineSubsystemAngelscript.ServiceBattlePassCategory
// 0x0018
struct FServiceBattlePassCategory
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Category;                                                 // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystemAngelscript.ServiceBattlePassLevelPurchasePricing
// 0x0008
struct FServiceBattlePassLevelPurchasePricing
{
	int64_t                                            CostPerLevel;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OnlineSubsystemAngelscript.ServiceBattlePassPack
// 0x0028
struct FServiceBattlePassPack
{
	TArray<struct FServiceBattlePassPage>              Pages;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FServiceBattlePassCategory>          Categories;                                               // 0x0010(0x0010) (ZeroConstructor)
	struct FServiceBattlePassLevelPurchasePricing      LevelPurchasePricing;                                     // 0x0020(0x0008)
};

// ScriptStruct OnlineSubsystemAngelscript.ServiceBattlePassState
// 0x0038
struct FServiceBattlePassState
{
	TArray<struct FString>                             ClaimedCategories;                                        // 0x0000(0x0010) (ZeroConstructor)
	TArray<int64_t>                                    ClaimedEntries;                                           // 0x0010(0x0010) (ZeroConstructor)
	int64_t                                            ClaimedPageAmount;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Level;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            TotalXP;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OnlineSubsystemAngelscript.ServiceProgressionRewardItem
// 0x0010
struct FServiceProgressionRewardItem
{
	int64_t                                            AssetId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
