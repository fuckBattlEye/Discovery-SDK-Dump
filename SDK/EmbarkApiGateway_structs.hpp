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

// Enum EmbarkApiGateway.EApiGatewayDiscoveryJoinTournamentStatus
enum class EApiGatewayDiscoveryJoinTournamentStatus : uint8_t
{
	JOIN_TOURNAMENT_STATUS_UNSPECIFIED = 0,
	JOIN_TOURNAMENT_STATUS_PLAYING = 1,
	JOIN_TOURNAMENT_STATUS_FINISHED = 2,
	JOIN_TOURNAMENT_STATUS_MAX     = 3
};


// Enum EmbarkApiGateway.EApiGatewayDiscoveryTournamentMatchStatus
enum class EApiGatewayDiscoveryTournamentMatchStatus : uint8_t
{
	MATCH_STATUS_UNSPECIFIED       = 0,
	MATCH_STATUS_PENDING           = 1,
	MATCH_STATUS_CONNECTING        = 2,
	MATCH_STATUS_PLAYING           = 3,
	MATCH_STATUS_FINISHED          = 4,
	MATCH_STATUS_ABANDONED         = 5,
	MATCH_STATUS_FAILED            = 6,
	MATCH_STATUS_EXPIRED           = 7,
	MATCH_STATUS_SKIPPED           = 8,
	MATCH_STATUS_MAX               = 9
};


// Enum EmbarkApiGateway.EApiGatewayDiscoveryTournamentTeamResultValue
enum class EApiGatewayDiscoveryTournamentTeamResultValue : uint8_t
{
	TOURNAMENT_TEAM_RESULT_UNSPECIFIED = 0,
	TOURNAMENT_TEAM_RESULT_WIN     = 1,
	TOURNAMENT_TEAM_RESULT_LOSS    = 2,
	TOURNAMENT_TEAM_RESULT_MAX     = 3
};


// Enum EmbarkApiGateway.EApiGatewaySharedSurveySettingsType
enum class EApiGatewaySharedSurveySettingsType : uint8_t
{
	EARLYFEEDBACK                  = 0,
	HEALTHPOLL                     = 1,
	BETAIMPRESSIONS                = 2,
	EApiGatewaySharedSurveySettingsType_MAX = 3
};


// Enum EmbarkApiGateway.EApiGatewayDiscoveryServerSanctionType
enum class EApiGatewayDiscoveryServerSanctionType : uint8_t
{
	UNSPECIFIED                    = 0,
	TOURNAMENT_ABANDON             = 1,
	EApiGatewayDiscoveryServerSanctionType_MAX = 2
};


// Enum EmbarkApiGateway.EApiGatewayDiscoverySanctionType
enum class EApiGatewayDiscoverySanctionType : uint8_t
{
	UNSPECIFIED                    = 0,
	TOURNAMENT_ABANDON             = 1,
	EApiGatewayDiscoverySanctionType_MAX = 2
};


// Enum EmbarkApiGateway.EApiGatewayDiscoveryGameStoreProvider
enum class EApiGatewayDiscoveryGameStoreProvider : uint8_t
{
	UNSPECIFIED                    = 0,
	EMBARK                         = 1,
	EPIC                           = 2,
	STEAM                          = 3,
	MICROSOFT                      = 4,
	PLAYSTATION                    = 5,
	EApiGatewayDiscoveryGameStoreProvider_MAX = 6
};


// Enum EmbarkApiGateway.EApiGatewayDiscoveryDistributionPlatform
enum class EApiGatewayDiscoveryDistributionPlatform : uint8_t
{
	UNSPECIFIED                    = 0,
	EPIC                           = 1,
	STEAM                          = 2,
	XBOX                           = 3,
	PLAYSTATION                    = 4,
	EApiGatewayDiscoveryDistributionPlatform_MAX = 5
};


// Enum EmbarkApiGateway.EApiGatewayDiscoveryGetGameStoreAccessTokenRequestType
enum class EApiGatewayDiscoveryGetGameStoreAccessTokenRequestType : uint8_t
{
	COLLECTION                     = 0,
	EApiGatewayDiscoveryGetGameStoreAccessTokenRequestType_MAX = 1
};


// Enum EmbarkApiGateway.EApiGatewayDiscoveryRewardItemType
enum class EApiGatewayDiscoveryRewardItemType : uint8_t
{
	UNKNOWN                        = 0,
	SCHEMATIC                      = 1,
	EApiGatewayDiscoveryRewardItemType_MAX = 2
};


// Enum EmbarkApiGateway.EApiGatewayPioneerAdminResetResource
enum class EApiGatewayPioneerAdminResetResource : uint8_t
{
	RESET_ALL                      = 0,
	RESET_INVENTORY_ITEMS          = 1,
	RESET_QUESTS                   = 2,
	RESET_OFFERS                   = 3,
	RESET_BUCKETS                  = 4,
	RESET_MAX                      = 5
};


// Enum EmbarkApiGateway.EApiGatewayPioneerAdminQuestState
enum class EApiGatewayPioneerAdminQuestState : uint8_t
{
	QUEST_STATE_UNSPECIFIED        = 0,
	QUEST_STATE_AWAITING           = 1,
	QUEST_STATE_ACCEPTED           = 2,
	QUEST_STATE_COMPLETED          = 3,
	QUEST_STATE_MAX                = 4
};


// Enum EmbarkApiGateway.EApiGatewayPioneerGameStoreProvider
enum class EApiGatewayPioneerGameStoreProvider : uint8_t
{
	EMBARK                         = 0,
	EPIC                           = 1,
	STEAM                          = 2,
	MICROSOFT                      = 3,
	PLAYSTATION                    = 4,
	EApiGatewayPioneerGameStoreProvider_MAX = 5
};


// Enum EmbarkApiGateway.EApiGatewayPioneerQuestCadence
enum class EApiGatewayPioneerQuestCadence : uint8_t
{
	UNKNOWN                        = 0,
	DAILY                          = 1,
	WEEKLY                         = 2,
	NARRATIVE                      = 3,
	EApiGatewayPioneerQuestCadence_MAX = 4
};


// Enum EmbarkApiGateway.EApiGatewayPioneerQuestDescriptionObjectiveType
enum class EApiGatewayPioneerQuestDescriptionObjectiveType : uint8_t
{
	UNKNOWN                        = 0,
	DELIVER                        = 1,
	OBTAIN                         = 2,
	DESTROY                        = 3,
	VISIT                          = 4,
	GAMESERVER                     = 5,
	EApiGatewayPioneerQuestDescriptionObjectiveType_MAX = 6
};


// Enum EmbarkApiGateway.EApiGatewayPioneerQuestState
enum class EApiGatewayPioneerQuestState : uint8_t
{
	UNKNOWN                        = 0,
	AWAITING                       = 1,
	ACCEPTED                       = 2,
	COMPLETED                      = 3,
	EApiGatewayPioneerQuestState_MAX = 4
};


// Enum EmbarkApiGateway.EApiGatewayPioneerRewardItemType
enum class EApiGatewayPioneerRewardItemType : uint8_t
{
	UNKNOWN                        = 0,
	SCHEMATIC                      = 1,
	CURRENCY                       = 2,
	CHARACTER                      = 3,
	CHARACTER_SKIN                 = 4,
	CHARACTER_MILESTONE            = 5,
	CHARACTER_TALENT               = 6,
	EApiGatewayPioneerRewardItemType_MAX = 7
};


// Enum EmbarkApiGateway.EApiGatewaySharedGameStoreType
enum class EApiGatewaySharedGameStoreType : uint8_t
{
	UNSPECIFIED                    = 0,
	EPIC                           = 1,
	STEAM                          = 2,
	EApiGatewaySharedGameStoreType_MAX = 3
};


// Enum EmbarkApiGateway.EApiGatewaySharedRewardItemType
enum class EApiGatewaySharedRewardItemType : uint8_t
{
	UNKNOWN                        = 0,
	SCHEMATIC                      = 1,
	CURRENCY                       = 2,
	CHARACTER                      = 3,
	CHARACTER_SKIN                 = 4,
	CHARACTER_MILESTONE            = 5,
	CHARACTER_TALENT               = 6,
	EApiGatewaySharedRewardItemType_MAX = 7
};


// Enum EmbarkApiGateway.EApiGatewaySharedFriendshipInfoFriendshipType
enum class EApiGatewaySharedFriendshipInfoFriendshipType : uint8_t
{
	UNKNOWN                        = 0,
	MUTUAL                         = 1,
	NON_MUTUAL_OUTGOING            = 2,
	NON_MUTUAL_INCOMING            = 3,
	EApiGatewaySharedFriendshipInfoFriendshipType_MAX = 4
};


// Enum EmbarkApiGateway.EApiGatewaySharedMatchmakingPlatform
enum class EApiGatewaySharedMatchmakingPlatform : uint8_t
{
	ALL                            = 0,
	XBOX                           = 1,
	PLAYSTATION                    = 2,
	PC                             = 3,
	EApiGatewaySharedMatchmakingPlatform_MAX = 4
};


// Enum EmbarkApiGateway.EApiGatewaySharedMatchmakingMatchState
enum class EApiGatewaySharedMatchmakingMatchState : uint8_t
{
	UNSPECIFIED                    = 0,
	MATCHING                       = 1,
	COMPLETED                      = 2,
	FAILED                         = 3,
	EApiGatewaySharedMatchmakingMatchState_MAX = 4
};


// Enum EmbarkApiGateway.EApiGatewaySharedMatchRedirectTarget
enum class EApiGatewaySharedMatchRedirectTarget : uint8_t
{
	TOURNAMENTS                    = 0,
	GAMESERVER                     = 1,
	EApiGatewaySharedMatchRedirectTarget_MAX = 2
};


// Enum EmbarkApiGateway.EApiGatewaySharedMatchTimeEstimateState
enum class EApiGatewaySharedMatchTimeEstimateState : uint8_t
{
	NOT_AVAILABLE                  = 0,
	VALID                          = 1,
	FAULTY                         = 2,
	NO_DATA                        = 3,
	EApiGatewaySharedMatchTimeEstimateState_MAX = 4
};


// Enum EmbarkApiGateway.EApiGatewaySharedGameserverState
enum class EApiGatewaySharedGameserverState : uint8_t
{
	UNSPECIFIED                    = 0,
	WAITING                        = 1,
	AVAILABLE                      = 2,
	EXPIRED                        = 3,
	EApiGatewaySharedGameserverState_MAX = 4
};


// Enum EmbarkApiGateway.EApiErrorCode
enum class EApiErrorCode : uint8_t
{
	Unknown                        = 0,
	Continue                       = 1,
	SwitchProtocol                 = 2,
	Ok                             = 3,
	Created                        = 4,
	Accepted                       = 5,
	Partial                        = 6,
	NoContent                      = 7,
	ResetContent                   = 8,
	PartialContent                 = 9,
	Ambiguous                      = 10,
	Moved                          = 11,
	Redirect                       = 12,
	RedirectMethod                 = 13,
	NotModified                    = 14,
	UseProxy                       = 15,
	RedirectKeepVerb               = 16,
	BadRequest                     = 17,
	Denied                         = 18,
	PaymentReq                     = 19,
	Forbidden                      = 20,
	NotFound                       = 21,
	BadMethod                      = 22,
	NoneAcceptable                 = 23,
	ProxyAuthReq                   = 24,
	RequestTimeout                 = 25,
	Conflict                       = 26,
	Gone                           = 27,
	LengthRequired                 = 28,
	PrecondFailed                  = 29,
	RequestTooLarge                = 30,
	UriTooLong                     = 31,
	UnsupportedMedia               = 32,
	TooManyRequests                = 33,
	RetryWith                      = 34,
	ClientClosedRequest            = 35,
	ServerError                    = 36,
	NotSupported                   = 37,
	BadGateway                     = 38,
	ServiceUnavail                 = 39,
	GatewayTimeout                 = 40,
	VersionNotSup                  = 41,
	EApiErrorCode_MAX              = 42
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkApiGateway.EmbarkUserHandle
// 0x0010
struct FEmbarkUserHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerUserActiveItemRank
// 0x0020
struct FApiGatewayDiscoveryServerUserActiveItemRank
{
	struct FEmbarkUserHandle                           UserId;                                                   // 0x0000(0x0010)
	struct FString                                     RankBucketId;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceContestantPackItemAttachment
// 0x0020
struct FApiGatewayDiscoveryPlayerPersistenceContestantPackItemAttachment
{
	struct FString                                     ItemInstanceId;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             AttachedItemInstanceIds;                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceContestantPackSlot
// 0x0020
struct FApiGatewayDiscoveryPlayerPersistenceContestantPackSlot
{
	struct FString                                     SlotName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ItemInstanceIds;                                          // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceContestantPack
// 0x00D8
struct FApiGatewayDiscoveryPlayerPersistenceContestantPack
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     ArchetypeInstanceId;                                      // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FirstHandInstanceIds;                                     // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ReservedInstanceIds;                                      // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FString>                             CustomizationItemInstanceIds;                             // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPackItemAttachment> ItemAttachments;                                          // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     SprayItemInstanceId;                                      // 0x0088(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ExpressionItemInstanceIds;                                // 0x0098(0x0010) (ZeroConstructor)
	TArray<struct FString>                             SprayWheelItemInstanceIds;                                // 0x00A8(0x0010) (ZeroConstructor)
	TArray<struct FString>                             EmoteWheelItemInstanceIds;                                // 0x00B8(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPackSlot> Slots;                                                    // 0x00C8(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGameServer
// 0x0048
struct FApiGatewayDiscoveryGameServer
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Host;                                                     // 0x0010(0x0010) (ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     SecretKey;                                                // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     RoutingToken;                                             // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryTournamentPlayer
// 0x0020
struct FApiGatewayDiscoveryTournamentPlayer
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryTournamentTeam
// 0x0018
struct FApiGatewayDiscoveryTournamentTeam
{
	int                                                TeamIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BrandIndex;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FApiGatewayDiscoveryTournamentPlayer> Players;                                                  // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryTournamentTeamResult
// 0x0001
struct FApiGatewayDiscoveryTournamentTeamResult
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryTournamentMatch
// 0x0050
struct FApiGatewayDiscoveryTournamentMatch
{
	int                                                Tier;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Position;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Teams;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryTournamentTeamResult> Results;                                                  // 0x0018(0x0010) (ZeroConstructor)
	int                                                ExpectedEndTime;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ExpectedWinningTeams;                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ExpectedPlayingTeams;                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     ProgressData;                                             // 0x0038(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryTournamentTier
// 0x0018
struct FApiGatewayDiscoveryTournamentTier
{
	TArray<int>                                        Matches;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int                                                Tier;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFirstTier;                                              // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFinalTier;                                              // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsQualifyingTier;                                         // 0x0016(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedServerTweakables
// 0x0030
struct FApiGatewaySharedServerTweakables
{
	struct FString                                     ObjectPathName;                                           // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PropertyName;                                             // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     PropertyValue;                                            // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryRoundStats
// 0x0090
struct FApiGatewayDiscoveryRoundStats
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     RoundId;                                                  // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     SquadName;                                                // 0x0020(0x0010) (ZeroConstructor)
	int64_t                                            Kills;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Deaths;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Dbnos;                                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Respawns;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DamageDone;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	int64_t                                            RevivesDone;                                              // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            RespawnsDone;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MapVariant;                                               // 0x0068(0x0010) (ZeroConstructor)
	bool                                               RoundWon;                                                 // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               TournamentWon;                                            // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x007A(0x0006) MISSED OFFSET
	int64_t                                            StartTime;                                                // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            EndTime;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryRoundStatSummary
// 0x01E0
struct FApiGatewayDiscoveryRoundStatSummary
{
	int64_t                                            Kills;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Deaths;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, int64_t>                      KillsPerItem;                                             // 0x0010(0x0050)
	TMap<struct FString, float>                        DamagePerItem;                                            // 0x0060(0x0050)
	int64_t                                            TimePlayed;                                               // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, int64_t>                      TimePlayedPerArchetype;                                   // 0x00B8(0x0050)
	float                                              RoundWinRate;                                             // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	TMap<struct FString, float>                        RoundWinRatePerArchetype;                                 // 0x0110(0x0050)
	float                                              TournamentWinRate;                                        // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	TMap<struct FString, float>                        TournamentWinRatePerArchetype;                            // 0x0168(0x0050)
	int64_t                                            HighestFameAmount;                                        // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            RoundsPlayed;                                             // 0x01C0(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            RoundsCompleted;                                          // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            RevivesDone;                                              // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            TotalCashOut;                                             // 0x01D8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGetRoundStatSummaryResponse
// 0x05A0
struct FApiGatewayDiscoveryGetRoundStatSummaryResponse
{
	struct FApiGatewayDiscoveryRoundStatSummary        Casual;                                                   // 0x0000(0x01E0)
	struct FApiGatewayDiscoveryRoundStatSummary        Ranked;                                                   // 0x01E0(0x01E0)
	struct FApiGatewayDiscoveryRoundStatSummary        Total;                                                    // 0x03C0(0x01E0)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedSurveySettings
// 0x0020
struct FApiGatewaySharedSurveySettings
{
	struct FString                                     URL;                                                      // 0x0000(0x0010) (ZeroConstructor)
	bool                                               IsActive;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                Rounds;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGetSurveySettingsResponse
// 0x0010
struct FApiGatewaySharedGetSurveySettingsResponse
{
	TArray<struct FApiGatewaySharedSurveySettings>     Surveys;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerUserRequest
// 0x0010
struct FApiGatewayDiscoveryServerUserRequest
{
	TArray<struct FEmbarkUserHandle>                   UserIds;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerTweakables
// 0x0030
struct FApiGatewayDiscoveryServerTweakables
{
	struct FString                                     ObjectPathName;                                           // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PropertyName;                                             // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     PropertyValue;                                            // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerTweakablesRequest
// 0x0010
struct FApiGatewayDiscoveryServerTweakablesRequest
{
	struct FString                                     ArtifactId;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerTweakablesResponse
// 0x0010
struct FApiGatewayDiscoveryServerTweakablesResponse
{
	TArray<struct FApiGatewayDiscoveryServerTweakables> Tweakables;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerAbandonPlayerRequest
// 0x0030
struct FApiGatewayDiscoveryServerAbandonPlayerRequest
{
	struct FEmbarkUserHandle                           UserId;                                                   // 0x0000(0x0010)
	int64_t                                            TimeOfAbandon;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ImposeSanction;                                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     GameServer;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerAbandonPlayerRequestV2
// 0x0040
struct FApiGatewayDiscoveryServerAbandonPlayerRequestV2
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FEmbarkUserHandle                           UserId;                                                   // 0x0010(0x0010)
	int64_t                                            TimeOfAbandon;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ImposeSanction;                                           // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     GameServer;                                               // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerAbandonPlayerResponse
// 0x0008
struct FApiGatewayDiscoveryServerAbandonPlayerResponse
{
	int64_t                                            SanctionDuration;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerKeyValuePair
// 0x0020
struct FApiGatewayDiscoveryServerKeyValuePair
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerReportMatchResultRequest
// 0x0050
struct FApiGatewayDiscoveryServerReportMatchResultRequest
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        WinningTeams;                                             // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerKeyValuePair> TravelData;                                               // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     GameServer;                                               // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerReportMatchResultResponse
// 0x0020
struct FApiGatewayDiscoveryServerReportMatchResultResponse
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerReportMatchProgressRequest
// 0x0048
struct FApiGatewayDiscoveryServerReportMatchProgressRequest
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     MatchProgressData;                                        // 0x0020(0x0010) (ZeroConstructor)
	int                                                ExpectedEndTime;                                          // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     GameServer;                                               // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerReportMatchProgressResponse
// 0x0020
struct FApiGatewayDiscoveryServerReportMatchProgressResponse
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerReportHeartbeatRequest
// 0x0030
struct FApiGatewayDiscoveryServerReportHeartbeatRequest
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     GameServer;                                               // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerReportHeartbeatResponse
// 0x0020
struct FApiGatewayDiscoveryServerReportHeartbeatResponse
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceGameItem
// 0x0038
struct FApiGatewayDiscoveryServerPlayerPersistenceGameItem
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	int64_t                                            Amount;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               HasSeen;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceArchetype
// 0x0048
struct FApiGatewayDiscoveryServerPlayerPersistenceArchetype
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FString>                             GameItemInstanceIds;                                      // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FString>                             SkinInstanceIds;                                          // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceCurrency
// 0x0030
struct FApiGatewayDiscoveryServerPlayerPersistenceCurrency
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	int64_t                                            Amount;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceBattlePass
// 0x0028
struct FApiGatewayDiscoveryServerPlayerPersistenceBattlePass
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceCustomizationItem
// 0x0030
struct FApiGatewayDiscoveryServerPlayerPersistenceCustomizationItem
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	bool                                               HasSeen;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceWeaponSkin
// 0x0030
struct FApiGatewayDiscoveryServerPlayerPersistenceWeaponSkin
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	bool                                               HasSeen;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceLoadout
// 0x0030
struct FApiGatewayDiscoveryServerPlayerPersistenceLoadout
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     SelectedContestantPackInstanceId;                         // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceSanction
// 0x0038
struct FApiGatewayDiscoveryServerPlayerPersistenceSanction
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0020(0x0004) MISSED OFFSET
	int                                                Tier;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int64_t                                            TimeOfSanction;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Duration;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceQuest
// 0x0040
struct FApiGatewayDiscoveryServerPlayerPersistenceQuest
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	int64_t                                            Amount;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ExpiresAt;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Week;                                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceContestantPackItemAttachment
// 0x0020
struct FApiGatewayDiscoveryServerPlayerPersistenceContestantPackItemAttachment
{
	struct FString                                     ItemInstanceId;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             AttachedItemInstanceIds;                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceContestantPackSlot
// 0x0020
struct FApiGatewayDiscoveryServerPlayerPersistenceContestantPackSlot
{
	struct FString                                     SlotName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ItemInstanceIds;                                          // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceContestantPack
// 0x00D8
struct FApiGatewayDiscoveryServerPlayerPersistenceContestantPack
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     ArchetypeInstanceId;                                      // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FirstHandInstanceIds;                                     // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ReservedInstanceIds;                                      // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FString>                             CustomizationItemInstanceIds;                             // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceContestantPackItemAttachment> ItemAttachments;                                          // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     SprayItemInstanceId;                                      // 0x0088(0x0010) (ZeroConstructor)
	TArray<struct FString>                             SprayWheelItemInstanceIds;                                // 0x0098(0x0010) (ZeroConstructor)
	TArray<struct FString>                             EmoteWheelItemInstanceIds;                                // 0x00A8(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ExpressionItemInstanceIds;                                // 0x00B8(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceContestantPackSlot> Slots;                                                    // 0x00C8(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceFame
// 0x0020
struct FApiGatewayDiscoveryServerPlayerPersistenceFame
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceWeaponCharm
// 0x0030
struct FApiGatewayDiscoveryServerPlayerPersistenceWeaponCharm
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	bool                                               HasSeen;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceWeaponSticker
// 0x0030
struct FApiGatewayDiscoveryServerPlayerPersistenceWeaponSticker
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	bool                                               HasSeen;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceSpray
// 0x0030
struct FApiGatewayDiscoveryServerPlayerPersistenceSpray
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	bool                                               HasSeen;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceEmoticon
// 0x0030
struct FApiGatewayDiscoveryServerPlayerPersistenceEmoticon
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	bool                                               HasSeen;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerPlayerPersistenceSkill
// 0x0038
struct FApiGatewayDiscoveryServerPlayerPersistenceSkill
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	int64_t                                            Amount;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               HasSeen;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerGetInventoryResponse
// 0x0130
struct FApiGatewayDiscoveryServerGetInventoryResponse
{
	struct FApiGatewayDiscoveryServerPlayerPersistenceLoadout Loadout;                                                  // 0x0000(0x0030)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceSanction> Sanctions;                                                // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceGameItem> GameItems;                                                // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceContestantPack> ContestantPacks;                                          // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceArchetype> Archetypes;                                               // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceCurrency> Currencies;                                               // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceWeaponSkin> WeaponSkins;                                              // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceCustomizationItem> CustomizationItems;                                       // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceBattlePass> BattlePasses;                                             // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceQuest> Quests;                                                   // 0x00B0(0x0010) (ZeroConstructor)
	struct FApiGatewayDiscoveryServerPlayerPersistenceFame Fame;                                                     // 0x00C0(0x0020)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceWeaponCharm> WeaponCharms;                                             // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceWeaponSticker> WeaponStickers;                                           // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceSpray> Sprays;                                                   // 0x0100(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceSkill> Skills;                                                   // 0x0110(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryServerPlayerPersistenceEmoticon> Emoticons;                                                // 0x0120(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerUserInventory
// 0x0140
struct FApiGatewayDiscoveryServerUserInventory
{
	struct FEmbarkUserHandle                           UserId;                                                   // 0x0000(0x0010)
	struct FApiGatewayDiscoveryServerGetInventoryResponse Inventory;                                                // 0x0010(0x0130)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerUserInventories
// 0x0010
struct FApiGatewayDiscoveryServerUserInventories
{
	TArray<struct FApiGatewayDiscoveryServerUserInventory> Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerGetActiveItemRankResponse
// 0x0010
struct FApiGatewayDiscoveryServerGetActiveItemRankResponse
{
	TArray<struct FApiGatewayDiscoveryServerUserActiveItemRank> ItemRanks;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerSquad
// 0x0018
struct FApiGatewayDiscoveryServerSquad
{
	TArray<struct FEmbarkUserHandle>                   Players;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            Cash;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryServerSubmitMatchReportRequest
// 0x0040
struct FApiGatewayDiscoveryServerSubmitMatchReportRequest
{
	TArray<struct FApiGatewayDiscoveryServerSquad>     Squads;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ScenarioId;                                               // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     GacMatchId;                                               // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     RequestID;                                                // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceGameItem
// 0x0038
struct FApiGatewayDiscoveryPlayerPersistenceGameItem
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	int64_t                                            Amount;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               HasSeen;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceArchetype
// 0x0048
struct FApiGatewayDiscoveryPlayerPersistenceArchetype
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FString>                             GameItemInstanceIds;                                      // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FString>                             SkinInstanceIds;                                          // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceCurrency
// 0x0030
struct FApiGatewayDiscoveryPlayerPersistenceCurrency
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	int64_t                                            Amount;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceBattlePass
// 0x0028
struct FApiGatewayDiscoveryPlayerPersistenceBattlePass
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceCustomizationItem
// 0x0030
struct FApiGatewayDiscoveryPlayerPersistenceCustomizationItem
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	bool                                               HasSeen;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceWeaponSkin
// 0x0030
struct FApiGatewayDiscoveryPlayerPersistenceWeaponSkin
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	bool                                               HasSeen;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceLoadout
// 0x0030
struct FApiGatewayDiscoveryPlayerPersistenceLoadout
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     SelectedContestantPackInstanceId;                         // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceSanction
// 0x0038
struct FApiGatewayDiscoveryPlayerPersistenceSanction
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0020(0x0004) MISSED OFFSET
	int                                                Tier;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int64_t                                            TimeOfSanction;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Duration;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceQuest
// 0x0040
struct FApiGatewayDiscoveryPlayerPersistenceQuest
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	int64_t                                            Amount;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ExpiresAt;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Week;                                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGetContestantPacksResponse
// 0x0010
struct FApiGatewayDiscoveryGetContestantPacksResponse
{
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> ContestantPacks;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryCreateContestantPackRequest
// 0x00B0
struct FApiGatewayDiscoveryCreateContestantPackRequest
{
	struct FString                                     Title;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ArchetypeInstanceId;                                      // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FirstHandInstanceIds;                                     // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ReservedInstanceIds;                                      // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FString>                             CustomizationItemInstanceIds;                             // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPackItemAttachment> ItemAttachments;                                          // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     SprayItemInstanceId;                                      // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ExpressItemInstanceIds;                                   // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FString>                             SprayWheelItemInstanceIds;                                // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FString>                             EmoteWheelItemInstanceIds;                                // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPackSlot> Slots;                                                    // 0x00A0(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryDeleteContestantPackRequest
// 0x0020
struct FApiGatewayDiscoveryDeleteContestantPackRequest
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryBatchUpdateContestantPacksRequest
// 0x0010
struct FApiGatewayDiscoveryBatchUpdateContestantPacksRequest
{
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> ContestantPacks;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryBatchUpdateContestantPacksResponse
// 0x0010
struct FApiGatewayDiscoveryBatchUpdateContestantPacksResponse
{
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> ContestantPacks;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceFame
// 0x0020
struct FApiGatewayDiscoveryPlayerPersistenceFame
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceWeaponCharm
// 0x0030
struct FApiGatewayDiscoveryPlayerPersistenceWeaponCharm
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	bool                                               HasSeen;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceWeaponSticker
// 0x0030
struct FApiGatewayDiscoveryPlayerPersistenceWeaponSticker
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	bool                                               HasSeen;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceSpray
// 0x0030
struct FApiGatewayDiscoveryPlayerPersistenceSpray
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	bool                                               HasSeen;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceEmoticon
// 0x0030
struct FApiGatewayDiscoveryPlayerPersistenceEmoticon
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	bool                                               HasSeen;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerPersistenceSkill
// 0x0038
struct FApiGatewayDiscoveryPlayerPersistenceSkill
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
	int64_t                                            Amount;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               HasSeen;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGetInventoryResponse
// 0x0130
struct FApiGatewayDiscoveryGetInventoryResponse
{
	struct FApiGatewayDiscoveryPlayerPersistenceLoadout Loadout;                                                  // 0x0000(0x0030)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceSanction> Sanctions;                                                // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceGameItem> GameItems;                                                // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceContestantPack> ContestantPacks;                                          // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceArchetype> Archetypes;                                               // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceCurrency> Currencies;                                               // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceWeaponSkin> WeaponSkins;                                              // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceCustomizationItem> CustomizationItems;                                       // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceBattlePass> BattlePasses;                                             // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceQuest> Quests;                                                   // 0x00B0(0x0010) (ZeroConstructor)
	struct FApiGatewayDiscoveryPlayerPersistenceFame   Fame;                                                     // 0x00C0(0x0020)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceWeaponCharm> WeaponCharms;                                             // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceWeaponSticker> WeaponStickers;                                           // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceSpray> Sprays;                                                   // 0x0100(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceSkill> Skills;                                                   // 0x0110(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryPlayerPersistenceEmoticon> Emoticons;                                                // 0x0120(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGameItem
// 0x0010
struct FApiGatewayDiscoveryGameItem
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryBattlePassEntry
// 0x0050
struct FApiGatewayDiscoveryBattlePassEntry
{
	int64_t                                            ProductId;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Category;                                                 // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     Style;                                                    // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryGameItem>        Rewards;                                                  // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryGameItem>        Costs;                                                    // 0x0038(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryBattlePassPage
// 0x0038
struct FApiGatewayDiscoveryBattlePassPage
{
	TArray<struct FApiGatewayDiscoveryBattlePassEntry> Entries;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            RequiredLevel;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            RequiredClaimedAmount;                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Style;                                                    // 0x0020(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryBattlePassCategory
// 0x0018
struct FApiGatewayDiscoveryBattlePassCategory
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Category;                                                 // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryBattlePassLevelPurchasePricing
// 0x0008
struct FApiGatewayDiscoveryBattlePassLevelPurchasePricing
{
	int64_t                                            CostPerLevel;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryBattlePassPack
// 0x0028
struct FApiGatewayDiscoveryBattlePassPack
{
	TArray<struct FApiGatewayDiscoveryBattlePassPage>  Pages;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryBattlePassCategory> Categories;                                               // 0x0010(0x0010) (ZeroConstructor)
	struct FApiGatewayDiscoveryBattlePassLevelPurchasePricing LevelPurchasePricing;                                     // 0x0020(0x0008)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryBattlePassState
// 0x0028
struct FApiGatewayDiscoveryBattlePassState
{
	TArray<struct FString>                             ClaimedCategories;                                        // 0x0000(0x0010) (ZeroConstructor)
	TArray<int64_t>                                    ClaimedEntries;                                           // 0x0010(0x0010) (ZeroConstructor)
	int64_t                                            ClaimedPageAmount;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGetBattlePassResponse
// 0x0060
struct FApiGatewayDiscoveryGetBattlePassResponse
{
	struct FApiGatewayDiscoveryBattlePassPack          Pack;                                                     // 0x0000(0x0028)
	struct FApiGatewayDiscoveryBattlePassState         State;                                                    // 0x0028(0x0028)
	struct FString                                     EndDate;                                                  // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryClaimBattlePassEntryRequest
// 0x0008
struct FApiGatewayDiscoveryClaimBattlePassEntryRequest
{
	int64_t                                            ProductId;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryClaimBattlePassEntryResponse
// 0x0028
struct FApiGatewayDiscoveryClaimBattlePassEntryResponse
{
	struct FApiGatewayDiscoveryBattlePassState         State;                                                    // 0x0000(0x0028)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGetRoundStatsResponse
// 0x0010
struct FApiGatewayDiscoveryGetRoundStatsResponse
{
	TArray<struct FApiGatewayDiscoveryRoundStats>      RoundStats;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.EmbarkAccountHandle
// 0x0010
struct FEmbarkAccountHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerRequest
// 0x0010
struct FApiGatewayDiscoveryPlayerRequest
{
	TArray<struct FEmbarkAccountHandle>                AccountIds;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerInventory
// 0x0140
struct FApiGatewayDiscoveryPlayerInventory
{
	struct FEmbarkAccountHandle                        AccountId;                                                // 0x0000(0x0010)
	struct FApiGatewayDiscoveryGetInventoryResponse    Inventory;                                                // 0x0010(0x0130)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerInventories
// 0x0010
struct FApiGatewayDiscoveryPlayerInventories
{
	TArray<struct FApiGatewayDiscoveryPlayerInventory> Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGetGameStoreAccessTokenRequest
// 0x0002
struct FApiGatewayDiscoveryGetGameStoreAccessTokenRequest
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGetGameStoreAccessTokenResponse
// 0x0010
struct FApiGatewayDiscoveryGetGameStoreAccessTokenResponse
{
	struct FString                                     Raw;                                                      // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPurchaseGameStoreProductRequest
// 0x0018
struct FApiGatewayDiscoveryPurchaseGameStoreProductRequest
{
	int64_t                                            ProductId;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     RequestID;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPurchaseGameStoreProductResponse
// 0x0001
struct FApiGatewayDiscoveryPurchaseGameStoreProductResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryReconcileGameStoreTransactionsRequest
// 0x0018
struct FApiGatewayDiscoveryReconcileGameStoreTransactionsRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     PlatformData;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryReconcileGameStoreTransactionsResponse
// 0x0001
struct FApiGatewayDiscoveryReconcileGameStoreTransactionsResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryListGameStoreProductsRequest
// 0x0030
struct FApiGatewayDiscoveryListGameStoreProductsRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     Filter;                                                   // 0x0008(0x0010) (ZeroConstructor)
	int                                                PageSize;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     PageToken;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGameStorePackageItem
// 0x0018
struct FApiGatewayDiscoveryGameStorePackageItem
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               Owned;                                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGameStoreEmbarkAttributes
// 0x0010
struct FApiGatewayDiscoveryGameStoreEmbarkAttributes
{
	TArray<struct FApiGatewayDiscoveryGameStorePackageItem> CostPackageItems;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGameStoreEpicAttributes
// 0x0010
struct FApiGatewayDiscoveryGameStoreEpicAttributes
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGameStorePlaystationAttributes
// 0x0010
struct FApiGatewayDiscoveryGameStorePlaystationAttributes
{
	struct FString                                     EntitlementLabel;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGameStoreProduct
// 0x0090
struct FApiGatewayDiscoveryGameStoreProduct
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int64_t                                            ProductId;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            LayoutId;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ViewId;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameStoreOfferId;                                         // 0x0028(0x0010) (ZeroConstructor)
	bool                                               Acquired;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FApiGatewayDiscoveryGameStorePackageItem> EntitlementPackageItems;                                  // 0x0040(0x0010) (ZeroConstructor)
	struct FApiGatewayDiscoveryGameStoreEmbarkAttributes EmbarkAttributes;                                         // 0x0050(0x0010)
	struct FApiGatewayDiscoveryGameStoreEpicAttributes EpicAttributes;                                           // 0x0060(0x0010)
	struct FApiGatewayDiscoveryGameStorePlaystationAttributes PlaystationAttributes;                                    // 0x0070(0x0010)
	int64_t                                            StartTime;                                                // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            EndTime;                                                  // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGameStore
// 0x0010
struct FApiGatewayDiscoveryGameStore
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int64_t                                            NextProductReleaseTime;                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryListGameStoreProductsResponse
// 0x0030
struct FApiGatewayDiscoveryListGameStoreProductsResponse
{
	TArray<struct FApiGatewayDiscoveryGameStoreProduct> Products;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     NextPageToken;                                            // 0x0010(0x0010) (ZeroConstructor)
	struct FApiGatewayDiscoveryGameStore               Gamestore;                                                // 0x0020(0x0010)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryJoinTournamentRequest
// 0x0001
struct FApiGatewayDiscoveryJoinTournamentRequest
{
	bool                                               UseGameServerProxy;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryJoinTournamentResponse
// 0x0070
struct FApiGatewayDiscoveryJoinTournamentResponse
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	struct FApiGatewayDiscoveryGameServer              GameServer;                                               // 0x0028(0x0048)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryMonitorTournamentRequest
// 0x0010
struct FApiGatewayDiscoveryMonitorTournamentRequest
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryMonitorTournamentResponse
// 0x0050
struct FApiGatewayDiscoveryMonitorTournamentResponse
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                CurrentTier;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FApiGatewayDiscoveryTournamentTier>  Tiers;                                                    // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryTournamentMatch> Matches;                                                  // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryTournamentTeam>  Teams;                                                    // 0x0038(0x0010) (ZeroConstructor)
	int                                                LocalMatchIndex;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocalTeamIndex;                                           // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGetTournamentSessionResponse
// 0x0020
struct FApiGatewayDiscoveryGetTournamentSessionResponse
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryAbandonPlayerRequest
// 0x0010
struct FApiGatewayDiscoveryAbandonPlayerRequest
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryRank
// 0x0030
struct FApiGatewayDiscoveryRank
{
	int64_t                                            TotalXP;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            CurrentRank;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BucketId;                                                 // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerRank
// 0x0030
struct FApiGatewayDiscoveryPlayerRank
{
	struct FEmbarkAccountHandle                        AccountId;                                                // 0x0000(0x0010)
	TArray<struct FApiGatewayDiscoveryRank>            Ranks;                                                    // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     ActiveItemRankBucketId;                                   // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryRewardItem
// 0x0018
struct FApiGatewayDiscoveryRewardItem
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryReward
// 0x0020
struct FApiGatewayDiscoveryReward
{
	int64_t                                            Rank;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            RequiredXP;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FApiGatewayDiscoveryRewardItem>      Items;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryRewardBucket
// 0x0020
struct FApiGatewayDiscoveryRewardBucket
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayDiscoveryReward>          Rewards;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryPlayerReward
// 0x0020
struct FApiGatewayDiscoveryPlayerReward
{
	struct FEmbarkAccountHandle                        AccountId;                                                // 0x0000(0x0010)
	TArray<struct FApiGatewayDiscoveryRewardBucket>    Buckets;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryEnhanceItemRequest
// 0x0018
struct FApiGatewayDiscoveryEnhanceItemRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            NextRank;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryEnhanceItemResponse
// 0x0048
struct FApiGatewayDiscoveryEnhanceItemResponse
{
	struct FApiGatewayDiscoveryPlayerRank              NewRank;                                                  // 0x0000(0x0030)
	struct FApiGatewayDiscoveryRewardItem              Cost;                                                     // 0x0030(0x0018)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryActivateItemRankRequest
// 0x0020
struct FApiGatewayDiscoveryActivateItemRankRequest
{
	struct FString                                     BucketId;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryActivateItemRankResponse
// 0x0010
struct FApiGatewayDiscoveryActivateItemRankResponse
{
	TArray<struct FApiGatewayDiscoveryRank>            UpdatedRanks;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGetActiveItemRankResponse
// 0x0030
struct FApiGatewayDiscoveryGetActiveItemRankResponse
{
	struct FApiGatewayDiscoveryRank                    Rank;                                                     // 0x0000(0x0030)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGetTotalFameResponse
// 0x0008
struct FApiGatewayDiscoveryGetTotalFameResponse
{
	int64_t                                            TotalFame;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGetDiscoveryScenariosRequest
// 0x0010
struct FApiGatewayDiscoveryGetDiscoveryScenariosRequest
{
	struct FString                                     Region;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryUISettings
// 0x0002
struct FApiGatewayDiscoveryUISettings
{
	bool                                               Visible;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Disabled;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryConditions
// 0x0001
struct FApiGatewayDiscoveryConditions
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryMatchmakingParameters
// 0x0070
struct FApiGatewayDiscoveryMatchmakingParameters
{
	struct FString                                     GameMode;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TMap<struct FString, bool>                         FeatureFlags;                                             // 0x0020(0x0050)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryDiscoveryScenario
// 0x0088
struct FApiGatewayDiscoveryDiscoveryScenario
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FApiGatewayDiscoveryUISettings              UISettings;                                               // 0x0010(0x0002)
	struct FApiGatewayDiscoveryConditions              Conditions;                                               // 0x0012(0x0001)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
	struct FApiGatewayDiscoveryMatchmakingParameters   Parameters;                                               // 0x0018(0x0070)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoveryGetDiscoveryScenariosResponse
// 0x0010
struct FApiGatewayDiscoveryGetDiscoveryScenariosResponse
{
	TArray<struct FApiGatewayDiscoveryDiscoveryScenario> DiscoveryScenarios;                                       // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoverySyncTenancyUserRequest
// 0x0001
struct FApiGatewayDiscoverySyncTenancyUserRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayDiscoverySyncTenancyUserResponse
// 0x0001
struct FApiGatewayDiscoverySyncTenancyUserResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAdminCreateInventoryItemMutation
// 0x0038
struct FApiGatewayPioneerAdminCreateInventoryItemMutation
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             Durability;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Slots;                                                    // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAdminUpdateInventoryItemMutation
// 0x0040
struct FApiGatewayPioneerAdminUpdateInventoryItemMutation
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            Amount;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Slots;                                                    // 0x0018(0x0010) (ZeroConstructor)
	double                                             Durability;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAdminDeleteInventoryItemMutation
// 0x0020
struct FApiGatewayPioneerAdminDeleteInventoryItemMutation
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAdminMutateInventoryItemMutation
// 0x0098
struct FApiGatewayPioneerAdminMutateInventoryItemMutation
{
	struct FApiGatewayPioneerAdminCreateInventoryItemMutation Create;                                                   // 0x0000(0x0038)
	struct FApiGatewayPioneerAdminUpdateInventoryItemMutation Update;                                                   // 0x0038(0x0040)
	struct FApiGatewayPioneerAdminDeleteInventoryItemMutation Delete;                                                   // 0x0078(0x0020)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAdminMutateInventoryItemsRequest
// 0x0020
struct FApiGatewayPioneerAdminMutateInventoryItemsRequest
{
	TArray<struct FApiGatewayPioneerAdminMutateInventoryItemMutation> Mutations;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     RequestID;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAdminInventoryItem
// 0x0048
struct FApiGatewayPioneerAdminInventoryItem
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Slots;                                                    // 0x0020(0x0010) (ZeroConstructor)
	double                                             Durability;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAdminMutatedInventoryItems
// 0x0030
struct FApiGatewayPioneerAdminMutatedInventoryItems
{
	TArray<struct FApiGatewayPioneerAdminInventoryItem> Created;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerAdminInventoryItem> Updated;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Deleted;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAdminMutateInventoryItemsResponse
// 0x0040
struct FApiGatewayPioneerAdminMutateInventoryItemsResponse
{
	struct FApiGatewayPioneerAdminMutatedInventoryItems MutatedItems;                                             // 0x0000(0x0030)
	TArray<struct FApiGatewayPioneerAdminInventoryItem> Items;                                                    // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAdminResetRequest
// 0x0010
struct FApiGatewayPioneerAdminResetRequest
{
	TArray<enum class EApiGatewayPioneerAdminResetResource> Resources;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAdminQuestObjective
// 0x0010
struct FApiGatewayPioneerAdminQuestObjective
{
	int64_t                                            Amount;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAdminQuest
// 0x0028
struct FApiGatewayPioneerAdminQuest
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	TArray<struct FApiGatewayPioneerAdminQuestObjective> Objectives;                                               // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAdminUpdateQuestsRequest
// 0x0010
struct FApiGatewayPioneerAdminUpdateQuestsRequest
{
	TArray<struct FApiGatewayPioneerAdminQuest>        Quests;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAdminUpdateQuestsResponse
// 0x0010
struct FApiGatewayPioneerAdminUpdateQuestsResponse
{
	TArray<struct FApiGatewayPioneerAdminQuest>        Quests;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerUserRequest
// 0x0010
struct FApiGatewayPioneerServerUserRequest
{
	TArray<struct FEmbarkUserHandle>                   UserIds;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerGetInventoriesRequest
// 0x0010
struct FApiGatewayPioneerServerGetInventoriesRequest
{
	TArray<struct FEmbarkUserHandle>                   UserIds;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerInventoryItem
// 0x0048
struct FApiGatewayPioneerServerInventoryItem
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Slots;                                                    // 0x0020(0x0010) (ZeroConstructor)
	double                                             Durability;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerUserInventory
// 0x0020
struct FApiGatewayPioneerServerUserInventory
{
	struct FEmbarkUserHandle                           UserId;                                                   // 0x0000(0x0010)
	TArray<struct FApiGatewayPioneerServerInventoryItem> Items;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerGetInventoriesResponse
// 0x0010
struct FApiGatewayPioneerServerGetInventoriesResponse
{
	TArray<struct FApiGatewayPioneerServerUserInventory> Inventories;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerCreateInventoryItemMutation
// 0x0030
struct FApiGatewayPioneerServerCreateInventoryItemMutation
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Slots;                                                    // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerUpdateInventoryItemMutation
// 0x0038
struct FApiGatewayPioneerServerUpdateInventoryItemMutation
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            Amount;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Slots;                                                    // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerDeleteInventoryItemMutation
// 0x0020
struct FApiGatewayPioneerServerDeleteInventoryItemMutation
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerMutateInventoryItemMutation
// 0x0088
struct FApiGatewayPioneerServerMutateInventoryItemMutation
{
	struct FApiGatewayPioneerServerCreateInventoryItemMutation Create;                                                   // 0x0000(0x0030)
	struct FApiGatewayPioneerServerUpdateInventoryItemMutation Update;                                                   // 0x0030(0x0038)
	struct FApiGatewayPioneerServerDeleteInventoryItemMutation Delete;                                                   // 0x0068(0x0020)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerUserInventoryMutation
// 0x0020
struct FApiGatewayPioneerServerUserInventoryMutation
{
	struct FEmbarkUserHandle                           UserId;                                                   // 0x0000(0x0010)
	TArray<struct FApiGatewayPioneerServerMutateInventoryItemMutation> ItemMutations;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerMutateInventoriesRequest
// 0x0020
struct FApiGatewayPioneerServerMutateInventoriesRequest
{
	TArray<struct FApiGatewayPioneerServerUserInventoryMutation> UserMutations;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     RequestID;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerMutatedInventoryItems
// 0x0030
struct FApiGatewayPioneerServerMutatedInventoryItems
{
	TArray<struct FApiGatewayPioneerServerInventoryItem> Created;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerServerInventoryItem> Updated;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Deleted;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerUserMutatedItems
// 0x0040
struct FApiGatewayPioneerServerUserMutatedItems
{
	struct FEmbarkUserHandle                           UserId;                                                   // 0x0000(0x0010)
	struct FApiGatewayPioneerServerMutatedInventoryItems MutatedItems;                                             // 0x0010(0x0030)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerMutateInventoriesResponse
// 0x0020
struct FApiGatewayPioneerServerMutateInventoriesResponse
{
	TArray<struct FApiGatewayPioneerServerUserInventory> Inventories;                                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerServerUserMutatedItems> Mutated;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerQuestObjective
// 0x0020
struct FApiGatewayPioneerServerQuestObjective
{
	struct FString                                     QuestInstanceId;                                          // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            TargetAmount;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            TargetGameAssetId;                                        // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerUserQuestObjectives
// 0x0020
struct FApiGatewayPioneerServerUserQuestObjectives
{
	struct FEmbarkUserHandle                           UserId;                                                   // 0x0000(0x0010)
	TArray<struct FApiGatewayPioneerServerQuestObjective> QuestObjectives;                                          // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerListQuestObjectivesResponse
// 0x0010
struct FApiGatewayPioneerServerListQuestObjectivesResponse
{
	TArray<struct FApiGatewayPioneerServerUserQuestObjectives> UserQuestObjectivesSet;                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerUpdateQuestObjectivesRequest
// 0x0010
struct FApiGatewayPioneerServerUpdateQuestObjectivesRequest
{
	TArray<struct FApiGatewayPioneerServerUserQuestObjectives> UserQuestObjectivesCollection;                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerUpdateQuestObjectivesResponse
// 0x0010
struct FApiGatewayPioneerServerUpdateQuestObjectivesResponse
{
	TArray<struct FApiGatewayPioneerServerUserQuestObjectives> UserQuestObjectivesSet;                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerEnemyGroup
// 0x0020
struct FApiGatewayPioneerServerEnemyGroup
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     GroupList;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerServerGetEnemyGroupsResponse
// 0x0010
struct FApiGatewayPioneerServerGetEnemyGroupsResponse
{
	TArray<struct FApiGatewayPioneerServerEnemyGroup>  Entries;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerPlayerRequest
// 0x0010
struct FApiGatewayPioneerPlayerRequest
{
	TArray<struct FEmbarkAccountHandle>                AccountIds;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerPurchaseGameStoreProductRequest
// 0x0018
struct FApiGatewayPioneerPurchaseGameStoreProductRequest
{
	int64_t                                            ProductId;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     RequestID;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerPurchaseGameStoreProductResponse
// 0x0001
struct FApiGatewayPioneerPurchaseGameStoreProductResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerReconcileGameStoreTransactionsRequest
// 0x0001
struct FApiGatewayPioneerReconcileGameStoreTransactionsRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerReconcileGameStoreTransactionsResponse
// 0x0001
struct FApiGatewayPioneerReconcileGameStoreTransactionsResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerListGameStoreProductsRequest
// 0x0030
struct FApiGatewayPioneerListGameStoreProductsRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     Filter;                                                   // 0x0008(0x0010) (ZeroConstructor)
	int                                                PageSize;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     PageToken;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerGameStorePackageItem
// 0x0018
struct FApiGatewayPioneerGameStorePackageItem
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               Owned;                                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerGameStoreEmbarkAttributes
// 0x0010
struct FApiGatewayPioneerGameStoreEmbarkAttributes
{
	TArray<struct FApiGatewayPioneerGameStorePackageItem> CostPackageItems;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerGameStoreEpicAttributes
// 0x0010
struct FApiGatewayPioneerGameStoreEpicAttributes
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerGameStoreProduct
// 0x0080
struct FApiGatewayPioneerGameStoreProduct
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int64_t                                            ProductId;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            LayoutId;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ViewId;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameStoreOfferId;                                         // 0x0028(0x0010) (ZeroConstructor)
	bool                                               Acquired;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FApiGatewayPioneerGameStorePackageItem> EntitlementPackageItems;                                  // 0x0040(0x0010) (ZeroConstructor)
	struct FApiGatewayPioneerGameStoreEmbarkAttributes EmbarkAttributes;                                         // 0x0050(0x0010)
	struct FApiGatewayPioneerGameStoreEpicAttributes   EpicAttributes;                                           // 0x0060(0x0010)
	int64_t                                            StartTime;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            EndTime;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerListGameStoreProductsResponse
// 0x0020
struct FApiGatewayPioneerListGameStoreProductsResponse
{
	TArray<struct FApiGatewayPioneerGameStoreProduct>  Products;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     NextPageToken;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerRank
// 0x0020
struct FApiGatewayPioneerRank
{
	int64_t                                            TotalXP;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            CurrentRank;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BucketId;                                                 // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerPlayerRank
// 0x0020
struct FApiGatewayPioneerPlayerRank
{
	struct FEmbarkAccountHandle                        AccountId;                                                // 0x0000(0x0010)
	TArray<struct FApiGatewayPioneerRank>              Ranks;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerRewardItem
// 0x0018
struct FApiGatewayPioneerRewardItem
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerReward
// 0x0020
struct FApiGatewayPioneerReward
{
	int64_t                                            Rank;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            RequiredXP;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FApiGatewayPioneerRewardItem>        Items;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerRewardBucket
// 0x0020
struct FApiGatewayPioneerRewardBucket
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerReward>            Rewards;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerPlayerReward
// 0x0020
struct FApiGatewayPioneerPlayerReward
{
	struct FEmbarkAccountHandle                        AccountId;                                                // 0x0000(0x0010)
	TArray<struct FApiGatewayPioneerRewardBucket>      Buckets;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerEnhanceItemRequest
// 0x0018
struct FApiGatewayPioneerEnhanceItemRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            NextRank;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerEnhanceItemResponse
// 0x0038
struct FApiGatewayPioneerEnhanceItemResponse
{
	struct FApiGatewayPioneerPlayerRank                NewRank;                                                  // 0x0000(0x0020)
	struct FApiGatewayPioneerRewardItem                Cost;                                                     // 0x0020(0x0018)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerPlayerRanks
// 0x0010
struct FApiGatewayPioneerPlayerRanks
{
	TArray<struct FApiGatewayPioneerPlayerRank>        Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerCreateInventoryItemMutation
// 0x0030
struct FApiGatewayPioneerCreateInventoryItemMutation
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Slots;                                                    // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerUpdateInventoryItemMutation
// 0x0038
struct FApiGatewayPioneerUpdateInventoryItemMutation
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            Amount;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Slots;                                                    // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerDeleteInventoryItemMutation
// 0x0020
struct FApiGatewayPioneerDeleteInventoryItemMutation
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerScrapInventoryItemMutation
// 0x0020
struct FApiGatewayPioneerScrapInventoryItemMutation
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerMutateInventoryItemMutation
// 0x00A8
struct FApiGatewayPioneerMutateInventoryItemMutation
{
	struct FApiGatewayPioneerCreateInventoryItemMutation Create;                                                   // 0x0000(0x0030)
	struct FApiGatewayPioneerUpdateInventoryItemMutation Update;                                                   // 0x0030(0x0038)
	struct FApiGatewayPioneerDeleteInventoryItemMutation Delete;                                                   // 0x0068(0x0020)
	struct FApiGatewayPioneerScrapInventoryItemMutation Scrap;                                                    // 0x0088(0x0020)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerMutateInventoryItemsRequest
// 0x0020
struct FApiGatewayPioneerMutateInventoryItemsRequest
{
	TArray<struct FApiGatewayPioneerMutateInventoryItemMutation> Mutations;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     RequestID;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerInventoryItem
// 0x0048
struct FApiGatewayPioneerInventoryItem
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Slots;                                                    // 0x0020(0x0010) (ZeroConstructor)
	double                                             Durability;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerMutatedInventoryItems
// 0x0050
struct FApiGatewayPioneerMutatedInventoryItems
{
	TArray<struct FApiGatewayPioneerInventoryItem>     UpdatedItems;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             DeletedItems;                                             // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerInventoryItem>     Created;                                                  // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerInventoryItem>     Updated;                                                  // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Deleted;                                                  // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerMutateInventoryItemsResponse
// 0x0060
struct FApiGatewayPioneerMutateInventoryItemsResponse
{
	struct FApiGatewayPioneerMutatedInventoryItems     MutatedItems;                                             // 0x0000(0x0050)
	TArray<struct FApiGatewayPioneerInventoryItem>     Items;                                                    // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerScrapInventoryItem
// 0x0020
struct FApiGatewayPioneerScrapInventoryItem
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerScrapInventoryItemsRequest
// 0x0020
struct FApiGatewayPioneerScrapInventoryItemsRequest
{
	TArray<struct FApiGatewayPioneerScrapInventoryItem> Scraps;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     RequestID;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerScrapInventoryItemsResponse
// 0x0050
struct FApiGatewayPioneerScrapInventoryItemsResponse
{
	struct FApiGatewayPioneerMutatedInventoryItems     MutatedItems;                                             // 0x0000(0x0050)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerGetInventoryItemsResponse
// 0x0010
struct FApiGatewayPioneerGetInventoryItemsResponse
{
	TArray<struct FApiGatewayPioneerInventoryItem>     Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerQuestObjective
// 0x0010
struct FApiGatewayPioneerQuestObjective
{
	int64_t                                            Amount;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerQuestEdge
// 0x0018
struct FApiGatewayPioneerQuestEdge
{
	struct FString                                     QuestInstanceId;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerQuest
// 0x0050
struct FApiGatewayPioneerQuest
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	TArray<struct FApiGatewayPioneerQuestObjective>    Objectives;                                               // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerQuestEdge>         Edges;                                                    // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerListQuestsResponse
// 0x0010
struct FApiGatewayPioneerListQuestsResponse
{
	TArray<struct FApiGatewayPioneerQuest>             Quests;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerQuestDescriptionRewardItem
// 0x0018
struct FApiGatewayPioneerQuestDescriptionRewardItem
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             Durability;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerQuestDescriptionReward
// 0x0018
struct FApiGatewayPioneerQuestDescriptionReward
{
	struct FApiGatewayPioneerQuestDescriptionRewardItem RewardItem;                                               // 0x0000(0x0018)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerQuestDescriptionEdge
// 0x0010
struct FApiGatewayPioneerQuestDescriptionEdge
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int64_t                                            QuestGameAssetId;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerQuestDescriptionObjectiveTarget
// 0x0010
struct FApiGatewayPioneerQuestDescriptionObjectiveTarget
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerQuestDescriptionObjective
// 0x0018
struct FApiGatewayPioneerQuestDescriptionObjective
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FApiGatewayPioneerQuestDescriptionObjectiveTarget Target;                                                   // 0x0008(0x0010)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerQuestDescription
// 0x0090
struct FApiGatewayPioneerQuestDescription
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	int64_t                                            OwnerGameAssetId;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     Description;                                              // 0x0028(0x0010) (ZeroConstructor)
	int64_t                                            ImageId;                                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ToolTip;                                                  // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerQuestDescriptionReward> AcceptRewards;                                            // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerQuestDescriptionReward> CompleteRewards;                                          // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerQuestDescriptionEdge> QuestEdges;                                               // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerQuestDescriptionObjective> QuestObjectives;                                          // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerGetQuestsDescriptionResponse
// 0x0010
struct FApiGatewayPioneerGetQuestsDescriptionResponse
{
	TArray<struct FApiGatewayPioneerQuestDescription>  QuestDescriptions;                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAcceptQuestRequest
// 0x0010
struct FApiGatewayPioneerAcceptQuestRequest
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAcceptQuestResponse
// 0x0118
struct FApiGatewayPioneerAcceptQuestResponse
{
	struct FApiGatewayPioneerMutatedInventoryItems     MutatedItems;                                             // 0x0000(0x0050)
	struct FApiGatewayPioneerQuest                     UpdatedQuest;                                             // 0x0050(0x0050)
	struct FApiGatewayPioneerMutatedInventoryItems     Items;                                                    // 0x00A0(0x0050)
	struct FString                                     QuestInstanceId;                                          // 0x00F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	struct FString                                     QuestEtag;                                                // 0x0108(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerCompleteQuestRequest
// 0x0010
struct FApiGatewayPioneerCompleteQuestRequest
{
	struct FString                                     InstanceId;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerCompleteQuestResponse
// 0x0118
struct FApiGatewayPioneerCompleteQuestResponse
{
	struct FApiGatewayPioneerMutatedInventoryItems     MutatedItems;                                             // 0x0000(0x0050)
	struct FApiGatewayPioneerQuest                     UpdatedQuest;                                             // 0x0050(0x0050)
	struct FApiGatewayPioneerMutatedInventoryItems     Items;                                                    // 0x00A0(0x0050)
	struct FString                                     QuestInstanceId;                                          // 0x00F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	struct FString                                     QuestEtag;                                                // 0x0108(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerOfferRequirement
// 0x0008
struct FApiGatewayPioneerOfferRequirement
{
	int64_t                                            ItemGameAssetId;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerOfferItem
// 0x0018
struct FApiGatewayPioneerOfferItem
{
	int64_t                                            ItemGameAssetId;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             Durability;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerOffer
// 0x0058
struct FApiGatewayPioneerOffer
{
	int64_t                                            OfferId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // 0x0008(0x0010) (ZeroConstructor)
	int64_t                                            OwnerGameAssetId;                                         // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FApiGatewayPioneerOfferRequirement>  RequiredItems;                                            // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerOfferItem>         ConsumedItems;                                            // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerOfferItem>         ProducedItems;                                            // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerTimedOffer
// 0x0060
struct FApiGatewayPioneerTimedOffer
{
	int64_t                                            OfferId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // 0x0008(0x0010) (ZeroConstructor)
	int64_t                                            OwnerGameAssetId;                                         // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            DurationInSeconds;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FApiGatewayPioneerOfferRequirement>  RequiredItems;                                            // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerOfferItem>         ConsumedItems;                                            // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerOfferItem>         ProducedItems;                                            // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerListAggregatedOffersResponse
// 0x0020
struct FApiGatewayPioneerListAggregatedOffersResponse
{
	TArray<struct FApiGatewayPioneerOffer>             Offers;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewayPioneerTimedOffer>        TimedOffers;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAcceptOffersRequest
// 0x0020
struct FApiGatewayPioneerAcceptOffersRequest
{
	int64_t                                            OfferId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FApiGatewayPioneerInventoryItem>     ItemsToConsume;                                           // 0x0008(0x0010) (ZeroConstructor)
	int64_t                                            Amount;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAcceptBuildOfferRequest
// 0x0028
struct FApiGatewayPioneerAcceptBuildOfferRequest
{
	int64_t                                            OfferId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FApiGatewayPioneerInventoryItem>     ItemsToConsume;                                           // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     SlotInstanceId;                                           // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAcceptUpgradeOfferRequest
// 0x0018
struct FApiGatewayPioneerAcceptUpgradeOfferRequest
{
	int64_t                                            OfferId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FApiGatewayPioneerInventoryItem>     ItemsToConsume;                                           // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAcceptOffersResponse
// 0x0070
struct FApiGatewayPioneerAcceptOffersResponse
{
	TArray<struct FApiGatewayPioneerInventoryItem>     Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             DeletedItems;                                             // 0x0010(0x0010) (ZeroConstructor)
	struct FApiGatewayPioneerMutatedInventoryItems     MutatedItems;                                             // 0x0020(0x0050)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAcceptBuildOfferResponse
// 0x0060
struct FApiGatewayPioneerAcceptBuildOfferResponse
{
	struct FApiGatewayPioneerMutatedInventoryItems     MutatedItems;                                             // 0x0000(0x0050)
	struct FString                                     BuiltItem;                                                // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAcceptUpgradeOfferResponse
// 0x0060
struct FApiGatewayPioneerAcceptUpgradeOfferResponse
{
	struct FApiGatewayPioneerMutatedInventoryItems     MutatedItems;                                             // 0x0000(0x0050)
	struct FString                                     BuiltItem;                                                // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerTimedOfferTransaction
// 0x0038
struct FApiGatewayPioneerTimedOfferTransaction
{
	int64_t                                            OfferId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TransactionId;                                            // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     OwnerInstanceId;                                          // 0x0018(0x0010) (ZeroConstructor)
	int64_t                                            StartTime;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            DurationInSeconds;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerListTimedOfferTransactionsResponse
// 0x0010
struct FApiGatewayPioneerListTimedOfferTransactionsResponse
{
	TArray<struct FApiGatewayPioneerTimedOfferTransaction> TimedOfferTransactions;                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAcceptTimedOfferRequest
// 0x0028
struct FApiGatewayPioneerAcceptTimedOfferRequest
{
	int64_t                                            OfferId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FApiGatewayPioneerInventoryItem>     ItemsToConsume;                                           // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     OwnerInstanceId;                                          // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerAcceptTimedOfferResponse
// 0x00A8
struct FApiGatewayPioneerAcceptTimedOfferResponse
{
	TArray<struct FApiGatewayPioneerInventoryItem>     Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             DeletedItems;                                             // 0x0010(0x0010) (ZeroConstructor)
	struct FApiGatewayPioneerMutatedInventoryItems     MutatedItems;                                             // 0x0020(0x0050)
	struct FApiGatewayPioneerTimedOfferTransaction     TimedOfferTransaction;                                    // 0x0070(0x0038)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerCompleteTimedOfferRequest
// 0x0010
struct FApiGatewayPioneerCompleteTimedOfferRequest
{
	struct FString                                     OfferTransactionId;                                       // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerCompleteTimedOfferResponse
// 0x0060
struct FApiGatewayPioneerCompleteTimedOfferResponse
{
	TArray<struct FApiGatewayPioneerInventoryItem>     Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FApiGatewayPioneerMutatedInventoryItems     MutatedItems;                                             // 0x0010(0x0050)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerCancelTimedOfferRequest
// 0x0010
struct FApiGatewayPioneerCancelTimedOfferRequest
{
	struct FString                                     OfferTransactionId;                                       // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerSellInventoryItemRequest
// 0x0028
struct FApiGatewayPioneerSellInventoryItemRequest
{
	struct FString                                     RequestID;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     InstanceId;                                               // 0x0010(0x0010) (ZeroConstructor)
	int64_t                                            Amount;                                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerSellInventoryItemResponse
// 0x0060
struct FApiGatewayPioneerSellInventoryItemResponse
{
	TArray<struct FApiGatewayPioneerInventoryItem>     Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FApiGatewayPioneerMutatedInventoryItems     MutatedItems;                                             // 0x0010(0x0050)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerGeneratedLoadoutItem
// 0x0018
struct FApiGatewayPioneerGeneratedLoadoutItem
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             Durability;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerGeneratedLoadout
// 0x0030
struct FApiGatewayPioneerGeneratedLoadout
{
	int64_t                                            LoadoutId;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0008(0x0010) (ZeroConstructor)
	double                                             Probability;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FApiGatewayPioneerGeneratedLoadoutItem> Items;                                                    // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewayPioneerGeneratedLoadoutResponse
// 0x0010
struct FApiGatewayPioneerGeneratedLoadoutResponse
{
	TArray<struct FApiGatewayPioneerGeneratedLoadout>  Entries;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedAdminMatchStartEarlyRequest
// 0x0010
struct FApiGatewaySharedAdminMatchStartEarlyRequest
{
	struct FString                                     TicketId;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedAdminResetDistributionPlatformAchievementsRequest
// 0x0010
struct FApiGatewaySharedAdminResetDistributionPlatformAchievementsRequest
{
	struct FString                                     RequestID;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedServerTweakablesRequest
// 0x0010
struct FApiGatewaySharedServerTweakablesRequest
{
	struct FString                                     ArtifactId;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedServerTweakablesResponse
// 0x0010
struct FApiGatewaySharedServerTweakablesResponse
{
	TArray<struct FApiGatewaySharedServerTweakables>   Tweakables;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedServerProfileRequest
// 0x0010
struct FApiGatewaySharedServerProfileRequest
{
	struct FEmbarkUserHandle                           TenancyUserId;                                            // 0x0000(0x0010)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedServerDisplayName
// 0x0020
struct FApiGatewaySharedServerDisplayName
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Discriminator;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedServerProfile
// 0x0040
struct FApiGatewaySharedServerProfile
{
	struct FEmbarkUserHandle                           TenancyUserId;                                            // 0x0000(0x0010)
	struct FEmbarkAccountHandle                        AccountId;                                                // 0x0010(0x0010)
	struct FApiGatewaySharedServerDisplayName          DisplayName;                                              // 0x0020(0x0020)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedServerReportPlayerDisconnectRequest
// 0x0020
struct FApiGatewaySharedServerReportPlayerDisconnectRequest
{
	struct FString                                     MatchId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FEmbarkUserHandle                           TenancyUserId;                                            // 0x0010(0x0010)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedServerReportPlayerDisconnectResponse
// 0x0001
struct FApiGatewaySharedServerReportPlayerDisconnectResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedServerSquad
// 0x0020
struct FApiGatewaySharedServerSquad
{
	struct FString                                     SquadId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FEmbarkUserHandle>                   Members;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedServerCreateSquadVoIPChannelRequest
// 0x0020
struct FApiGatewaySharedServerCreateSquadVoIPChannelRequest
{
	struct FString                                     BaseId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewaySharedServerSquad>        Squads;                                                   // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedServerVoIPChannel
// 0x0030
struct FApiGatewaySharedServerVoIPChannel
{
	struct FString                                     RoomId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     AccessToken;                                              // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     ClientBaseUrl;                                            // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedServerCreateSquadVoIPChannelResponse
// 0x0050
struct FApiGatewaySharedServerCreateSquadVoIPChannelResponse
{
	TMap<struct FString, struct FApiGatewaySharedServerVoIPChannel> Channels;                                                 // 0x0000(0x0050)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedProfilesByEmbarkAccountIdsRequest
// 0x0028
struct FApiGatewaySharedProfilesByEmbarkAccountIdsRequest
{
	TArray<struct FEmbarkAccountHandle>                Ids;                                                      // 0x0000(0x0010) (ZeroConstructor)
	bool                                               IncludeThirdPartyId;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Provider;                                                 // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedProfilesByTenancyUserIdsRequest
// 0x0028
struct FApiGatewaySharedProfilesByTenancyUserIdsRequest
{
	TArray<struct FEmbarkUserHandle>                   Ids;                                                      // 0x0000(0x0010) (ZeroConstructor)
	bool                                               IncludeThirdPartyId;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Provider;                                                 // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedThirdPartyUserIds
// 0x0020
struct FApiGatewaySharedThirdPartyUserIds
{
	struct FString                                     Provider;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Ids;                                                      // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedDisplayName
// 0x0020
struct FApiGatewaySharedDisplayName
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Discriminator;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGameSettingEntry
// 0x0020
struct FApiGatewaySharedGameSettingEntry
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGameSettings
// 0x0010
struct FApiGatewaySharedGameSettings
{
	TArray<struct FApiGatewaySharedGameSettingEntry>   Entries;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedAnnouncementContent
// 0x0020
struct FApiGatewaySharedAnnouncementContent
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedAnnouncement
// 0x0050
struct FApiGatewaySharedAnnouncement
{
	int64_t                                            ID;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Order;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ViewId;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FApiGatewaySharedAnnouncementContent> Contents;                                                 // 0x0018(0x0010) (ZeroConstructor)
	bool                                               Active;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     StartAt;                                                  // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     EndAt;                                                    // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedListAnnouncementsResponse
// 0x0010
struct FApiGatewaySharedListAnnouncementsResponse
{
	TArray<struct FApiGatewaySharedAnnouncement>       Announcements;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGetManifestRequest
// 0x0050
struct FApiGatewaySharedGetManifestRequest
{
	struct FString                                     BuildId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            PlaytestId;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ArtifactId;                                               // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     StoreDeploymentTarget;                                    // 0x0028(0x0010) (ZeroConstructor)
	int64_t                                            ManifestId;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     AppId;                                                    // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedManifest
// 0x00F8
struct FApiGatewaySharedManifest
{
	int64_t                                            ID;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BuildId;                                                  // 0x0008(0x0010) (ZeroConstructor)
	int64_t                                            PlaytestId;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PartitioningHash;                                         // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     NonPartitioningHash;                                      // 0x0030(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FString>               PartitioningBody;                                         // 0x0040(0x0050)
	TMap<struct FString, struct FString>               NonPartitioningBody;                                      // 0x0090(0x0050)
	int64_t                                            RetrievedAt;                                              // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ValidUntil;                                               // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ValidFrom;                                                // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGetLatestBuildRequest
// 0x0018
struct FApiGatewaySharedGetLatestBuildRequest
{
	struct FString                                     GameStoreTarget;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedBuild
// 0x0010
struct FApiGatewaySharedBuild
{
	struct FString                                     BuildId;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedBlockPlayerRequest
// 0x0010
struct FApiGatewaySharedBlockPlayerRequest
{
	struct FEmbarkUserHandle                           PlayerId;                                                 // 0x0000(0x0010)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedUnblockPlayerRequest
// 0x0010
struct FApiGatewaySharedUnblockPlayerRequest
{
	struct FEmbarkUserHandle                           PlayerId;                                                 // 0x0000(0x0010)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedBlockedPlayersResponse
// 0x0018
struct FApiGatewaySharedBlockedPlayersResponse
{
	int64_t                                            MaxNumBlockedUsers;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FEmbarkUserHandle>                   PlayerIds;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedRank
// 0x0020
struct FApiGatewaySharedRank
{
	int64_t                                            TotalXP;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            CurrentRank;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BucketId;                                                 // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedPlayerRank
// 0x0020
struct FApiGatewaySharedPlayerRank
{
	struct FEmbarkAccountHandle                        AccountId;                                                // 0x0000(0x0010)
	TArray<struct FApiGatewaySharedRank>               Ranks;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedRewardItem
// 0x0018
struct FApiGatewaySharedRewardItem
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedReward
// 0x0020
struct FApiGatewaySharedReward
{
	int64_t                                            Rank;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            RequiredXP;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FApiGatewaySharedRewardItem>         Items;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedRewardBucket
// 0x0020
struct FApiGatewaySharedRewardBucket
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewaySharedReward>             Rewards;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedPlayerReward
// 0x0020
struct FApiGatewaySharedPlayerReward
{
	struct FEmbarkAccountHandle                        AccountId;                                                // 0x0000(0x0010)
	TArray<struct FApiGatewaySharedRewardBucket>       Buckets;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedEnhanceItemRequest
// 0x0018
struct FApiGatewaySharedEnhanceItemRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            NextRank;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedEnhanceItemResponse
// 0x0038
struct FApiGatewaySharedEnhanceItemResponse
{
	struct FApiGatewaySharedPlayerRank                 NewRank;                                                  // 0x0000(0x0020)
	struct FApiGatewaySharedRewardItem                 Cost;                                                     // 0x0020(0x0018)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedPlayerRequest
// 0x0010
struct FApiGatewaySharedPlayerRequest
{
	TArray<struct FEmbarkAccountHandle>                AccountIds;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedPlayerRanks
// 0x0010
struct FApiGatewaySharedPlayerRanks
{
	TArray<struct FApiGatewaySharedPlayerRank>         Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedProfile
// 0x00A0
struct FApiGatewaySharedProfile
{
	struct FEmbarkUserHandle                           TenancyUserId;                                            // 0x0000(0x0010)
	struct FEmbarkAccountHandle                        AccountId;                                                // 0x0010(0x0010)
	int64_t                                            CreatedAt;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FApiGatewaySharedDisplayName                DisplayName;                                              // 0x0028(0x0020)
	int64_t                                            DisplayNameCooldownEndsAt;                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Email;                                                    // 0x0050(0x0010) (ZeroConstructor)
	bool                                               EmailIsVerified;                                          // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	int64_t                                            EmailVerifiedAt;                                          // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ThirdPartyUserId;                                         // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     ThirdPartyLastSeenAccountName;                            // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     TosVersionSeen;                                           // 0x0090(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedProfiles
// 0x0010
struct FApiGatewaySharedProfiles
{
	TArray<struct FApiGatewaySharedProfile>            Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedProfilesByThirdPartyId
// 0x0050
struct FApiGatewaySharedProfilesByThirdPartyId
{
	TMap<struct FString, struct FApiGatewaySharedProfile> Profiles;                                                 // 0x0000(0x0050)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedTenancyUserIdProfilePair
// 0x00B0
struct FApiGatewaySharedTenancyUserIdProfilePair
{
	struct FEmbarkUserHandle                           TenancyUserId;                                            // 0x0000(0x0010)
	struct FApiGatewaySharedProfile                    Profile;                                                  // 0x0010(0x00A0)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedProfilesByTenancyUserIds
// 0x0010
struct FApiGatewaySharedProfilesByTenancyUserIds
{
	TArray<struct FApiGatewaySharedTenancyUserIdProfilePair> Profiles;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedUpdateProfileRequest
// 0x0030
struct FApiGatewaySharedUpdateProfileRequest
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Email;                                                    // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     TosVersionSeen;                                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedRequestFriendshipRequest
// 0x0010
struct FApiGatewaySharedRequestFriendshipRequest
{
	struct FEmbarkUserHandle                           TargetTenancyUserId;                                      // 0x0000(0x0010)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedRequestFriendshipResponse
// 0x0001
struct FApiGatewaySharedRequestFriendshipResponse
{
	bool                                               IsMutual;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedDeleteFriendshipRequest
// 0x0010
struct FApiGatewaySharedDeleteFriendshipRequest
{
	struct FEmbarkUserHandle                           TargetTenancyUserId;                                      // 0x0000(0x0010)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedDeleteFriendshipResponse
// 0x0001
struct FApiGatewaySharedDeleteFriendshipResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedFriendshipInfo
// 0x00A8
struct FApiGatewaySharedFriendshipInfo
{
	struct FApiGatewaySharedProfile                    Profile;                                                  // 0x0000(0x00A0)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGetFriendsResponse
// 0x0010
struct FApiGatewaySharedGetFriendsResponse
{
	TArray<struct FApiGatewaySharedFriendshipInfo>     Friends;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedPartyMember
// 0x00A0
struct FApiGatewaySharedPartyMember
{
	struct FApiGatewaySharedProfile                    Profile;                                                  // 0x0000(0x00A0)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedParty
// 0x0030
struct FApiGatewaySharedParty
{
	struct FString                                     PartyId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FEmbarkUserHandle                           LeaderTenancyUserId;                                      // 0x0010(0x0010)
	TArray<struct FApiGatewaySharedPartyMember>        PartyMembers;                                             // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedPartyResponse
// 0x0030
struct FApiGatewaySharedPartyResponse
{
	struct FApiGatewaySharedParty                      Party;                                                    // 0x0000(0x0030)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedJoinPartyRequest
// 0x0028
struct FApiGatewaySharedJoinPartyRequest
{
	struct FString                                     PartyId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	bool                                               CanUserCrossPlay;                                         // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     CrossPlayPlatform;                                        // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedLeavePartyResponse
// 0x0001
struct FApiGatewaySharedLeavePartyResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedInviteToPartyRequest
// 0x0020
struct FApiGatewaySharedInviteToPartyRequest
{
	struct FEmbarkUserHandle                           TargetTenancyUserId;                                      // 0x0000(0x0010)
	struct FString                                     Provider;                                                 // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedInviteToPartyResponse
// 0x0001
struct FApiGatewaySharedInviteToPartyResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedKickFromPartyRequest
// 0x0010
struct FApiGatewaySharedKickFromPartyRequest
{
	struct FEmbarkUserHandle                           TargetTenancyUserId;                                      // 0x0000(0x0010)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedKickFromPartyResponse
// 0x0001
struct FApiGatewaySharedKickFromPartyResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedVoiceChannel
// 0x0030
struct FApiGatewaySharedVoiceChannel
{
	struct FString                                     RoomId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     AccessToken;                                              // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     ClientBaseUrl;                                            // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGetAccessKeyResponse
// 0x0018
struct FApiGatewaySharedGetAccessKeyResponse
{
	struct FString                                     Token;                                                    // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            Expiry;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGetPresenceRequest
// 0x0010
struct FApiGatewaySharedGetPresenceRequest
{
	TArray<struct FEmbarkUserHandle>                   TenancyUserIds;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedPresence
// 0x0048
struct FApiGatewaySharedPresence
{
	struct FEmbarkUserHandle                           TenancyUserId;                                            // 0x0000(0x0010)
	struct FEmbarkAccountHandle                        EmbarkUserId;                                             // 0x0010(0x0010)
	bool                                               IsOnline;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FString                                     RichPresence;                                             // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     Platform;                                                 // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGetPresenceResponse
// 0x0010
struct FApiGatewaySharedGetPresenceResponse
{
	TArray<struct FApiGatewaySharedPresence>           UsersRichPresence;                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedSetRichPresenceRequest
// 0x0020
struct FApiGatewaySharedSetRichPresenceRequest
{
	struct FString                                     RichPresence;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Platform;                                                 // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedSetRichPresenceResponse
// 0x0001
struct FApiGatewaySharedSetRichPresenceResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGameItem
// 0x0010
struct FApiGatewaySharedGameItem
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedBattlePassEntry
// 0x0050
struct FApiGatewaySharedBattlePassEntry
{
	int64_t                                            ProductId;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Category;                                                 // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     Style;                                                    // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewaySharedGameItem>           Rewards;                                                  // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewaySharedGameItem>           Costs;                                                    // 0x0038(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedBattlePassPage
// 0x0038
struct FApiGatewaySharedBattlePassPage
{
	TArray<struct FApiGatewaySharedBattlePassEntry>    Entries;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            RequiredLevel;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            RequiredClaimedAmount;                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Style;                                                    // 0x0020(0x0010) (ZeroConstructor)
	int64_t                                            GameAssetId;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedBattlePassCategory
// 0x0018
struct FApiGatewaySharedBattlePassCategory
{
	int64_t                                            GameAssetId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Category;                                                 // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedBattlePassLevelPurchasePricing
// 0x0008
struct FApiGatewaySharedBattlePassLevelPurchasePricing
{
	int64_t                                            CostPerLevel;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedBattlePassPack
// 0x0028
struct FApiGatewaySharedBattlePassPack
{
	TArray<struct FApiGatewaySharedBattlePassPage>     Pages;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewaySharedBattlePassCategory> Categories;                                               // 0x0010(0x0010) (ZeroConstructor)
	struct FApiGatewaySharedBattlePassLevelPurchasePricing LevelPurchasePricing;                                     // 0x0020(0x0008)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedBattlePassState
// 0x0038
struct FApiGatewaySharedBattlePassState
{
	TArray<struct FString>                             ClaimedCategories;                                        // 0x0000(0x0010) (ZeroConstructor)
	TArray<int64_t>                                    ClaimedEntries;                                           // 0x0010(0x0010) (ZeroConstructor)
	int64_t                                            ClaimedPageAmount;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Level;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            TotalXP;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGetBattlePassResponse
// 0x0070
struct FApiGatewaySharedGetBattlePassResponse
{
	struct FApiGatewaySharedBattlePassPack             Pack;                                                     // 0x0000(0x0028)
	struct FApiGatewaySharedBattlePassState            State;                                                    // 0x0028(0x0038)
	struct FString                                     EndDate;                                                  // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedClaimBattlePassEntryRequest
// 0x0008
struct FApiGatewaySharedClaimBattlePassEntryRequest
{
	int64_t                                            ProductId;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedClaimBattlePassEntryResponse
// 0x0038
struct FApiGatewaySharedClaimBattlePassEntryResponse
{
	struct FApiGatewaySharedBattlePassState            State;                                                    // 0x0000(0x0038)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedStartMatchRequest
// 0x00A8
struct FApiGatewaySharedStartMatchRequest
{
	struct FString                                     GameMode;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MatchmakingScenario;                                      // 0x0010(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FString>               Tags;                                                     // 0x0020(0x0050)
	struct FString                                     Region;                                                   // 0x0070(0x0010) (ZeroConstructor)
	int                                                PreferredSquadSize;                                       // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<enum class EApiGatewaySharedMatchmakingPlatform> Platforms;                                                // 0x0088(0x0010) (ZeroConstructor)
	TArray<int64_t>                                    PartyMemberIds;                                           // 0x0098(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedMatchStatusRequest
// 0x0010
struct FApiGatewaySharedMatchStatusRequest
{
	struct FString                                     TicketId;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedCancelMatchRequest
// 0x0010
struct FApiGatewaySharedCancelMatchRequest
{
	struct FString                                     TicketId;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedConfirmPartyMatchRequest
// 0x0010
struct FApiGatewaySharedConfirmPartyMatchRequest
{
	struct FString                                     TicketId;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedMatchRedirectInfo
// 0x0018
struct FApiGatewaySharedMatchRedirectInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     MatchId;                                                  // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedMatchStatusResponse
// 0x0078
struct FApiGatewaySharedMatchStatusResponse
{
	struct FString                                     TicketId;                                                 // 0x0000(0x0010) (ZeroConstructor)
	double                                             PollingInterval;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	int64_t                                            MatchTimeEstimate;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FApiGatewaySharedMatchRedirectInfo          RedirectInfo;                                             // 0x0028(0x0018)
	TArray<int64_t>                                    PartyMemberIds;                                           // 0x0040(0x0010) (ZeroConstructor)
	TArray<int64_t>                                    ConfirmedPartyMemberIds;                                  // 0x0050(0x0010) (ZeroConstructor)
	int64_t                                            CancellingPartyMemberId;                                  // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ScenarioName;                                             // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedMatchTimeEstimatesRequest
// 0x0020
struct FApiGatewaySharedMatchTimeEstimatesRequest
{
	struct FString                                     Region;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Scenarios;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedMatchTimeEstimateEntry
// 0x0010
struct FApiGatewaySharedMatchTimeEstimateEntry
{
	int64_t                                            Estimate;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedMatchTimeEstimatesResponse
// 0x00A8
struct FApiGatewaySharedMatchTimeEstimatesResponse
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TMap<struct FString, int64_t>                      Estimates;                                                // 0x0008(0x0050)
	TMap<struct FString, struct FApiGatewaySharedMatchTimeEstimateEntry> Entries;                                                  // 0x0058(0x0050)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGameserverStatusRequest
// 0x0010
struct FApiGatewaySharedGameserverStatusRequest
{
	struct FString                                     MatchId;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGameServer
// 0x0048
struct FApiGatewaySharedGameServer
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Host;                                                     // 0x0010(0x0010) (ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     SecretKey;                                                // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     RoutingToken;                                             // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGameserverStatusResponse
// 0x0068
struct FApiGatewaySharedGameserverStatusResponse
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     MatchId;                                                  // 0x0008(0x0010) (ZeroConstructor)
	double                                             PollingInterval;                                          // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FApiGatewaySharedGameServer                 GameServer;                                               // 0x0020(0x0048)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedProxy
// 0x0028
struct FApiGatewaySharedProxy
{
	struct FString                                     Host;                                                     // 0x0000(0x0010) (ZeroConstructor)
	int                                                TrafficPort;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                QcmpPort;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Region;                                                   // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedProxies
// 0x0010
struct FApiGatewaySharedProxies
{
	TArray<struct FApiGatewaySharedProxy>              Endpoints;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedSquadMember
// 0x00A0
struct FApiGatewaySharedSquadMember
{
	struct FApiGatewaySharedProfile                    Profile;                                                  // 0x0000(0x00A0)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedSquad
// 0x0020
struct FApiGatewaySharedSquad
{
	struct FString                                     SquadId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FApiGatewaySharedSquadMember>        SquadMembers;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedSquadLayoutResponse
// 0x0020
struct FApiGatewaySharedSquadLayoutResponse
{
	TArray<struct FApiGatewaySharedSquad>              Squads;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int                                                MaxPlayers;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxSquadSize;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxSquads;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGetMatchmakingScenariosRequest
// 0x0010
struct FApiGatewaySharedGetMatchmakingScenariosRequest
{
	struct FString                                     Region;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedMatchmakingParameters
// 0x0070
struct FApiGatewaySharedMatchmakingParameters
{
	struct FString                                     GameMode;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TMap<struct FString, bool>                         FeatureFlags;                                             // 0x0020(0x0050)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedMatchmakingScenario
// 0x0088
struct FApiGatewaySharedMatchmakingScenario
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	bool                                               Visible;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Disabled;                                                 // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FApiGatewaySharedMatchmakingParameters      Parameters;                                               // 0x0018(0x0070)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGetMatchmakingScenariosResponse
// 0x0010
struct FApiGatewaySharedGetMatchmakingScenariosResponse
{
	TArray<struct FApiGatewaySharedMatchmakingScenario> MatchmakingScenarios;                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedSquadVoiceChannelRequest
// 0x0010
struct FApiGatewaySharedSquadVoiceChannelRequest
{
	struct FString                                     TicketId;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedSquadLayoutRequest
// 0x0010
struct FApiGatewaySharedSquadLayoutRequest
{
	struct FString                                     TicketId;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGetSurveySettingsRequest
// 0x0010
struct FApiGatewaySharedGetSurveySettingsRequest
{
	struct FString                                     Locale;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedPersistentPlayerKey
// 0x0030
struct FApiGatewaySharedPersistentPlayerKey
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGetPersistentPlayerKeysRequest
// 0x0001
struct FApiGatewaySharedGetPersistentPlayerKeysRequest
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGetPersistentPlayerKeysResponse
// 0x0010
struct FApiGatewaySharedGetPersistentPlayerKeysResponse
{
	TArray<struct FApiGatewaySharedPersistentPlayerKey> PersistentPlayerKeys;                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedSetPersistentPlayerKeyRequest
// 0x0030
struct FApiGatewaySharedSetPersistentPlayerKeyRequest
{
	struct FApiGatewaySharedPersistentPlayerKey        PersistentPlayerKey;                                      // 0x0000(0x0030)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedSetPersistentPlayerKeyResponse
// 0x0030
struct FApiGatewaySharedSetPersistentPlayerKeyResponse
{
	struct FApiGatewaySharedPersistentPlayerKey        PersistentPlayerKey;                                      // 0x0000(0x0030)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedDistributionPlatformAchievement
// 0x0038
struct FApiGatewaySharedDistributionPlatformAchievement
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	double                                             Progress;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CompletedTime;                                            // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     Etag;                                                     // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedGetDistributionPlatformAchievementsResponse
// 0x0010
struct FApiGatewaySharedGetDistributionPlatformAchievementsResponse
{
	TArray<struct FApiGatewaySharedDistributionPlatformAchievement> Achievements;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedUpdateDistributionPlatformAchievementItem
// 0x0028
struct FApiGatewaySharedUpdateDistributionPlatformAchievementItem
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	double                                             Progress;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Etag;                                                     // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedUpdateDistributionPlatformAchievementsRequest
// 0x0020
struct FApiGatewaySharedUpdateDistributionPlatformAchievementsRequest
{
	TArray<struct FApiGatewaySharedUpdateDistributionPlatformAchievementItem> Achievements;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     RequestID;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedUpdateDistributionPlatformAchievementsResponse
// 0x0010
struct FApiGatewaySharedUpdateDistributionPlatformAchievementsResponse
{
	TArray<struct FApiGatewaySharedDistributionPlatformAchievement> Achievements;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedUpdatePartyDataRequest
// 0x0030
struct FApiGatewaySharedUpdatePartyDataRequest
{
	struct FString                                     PartyId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PlatformSessions;                                         // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     PrivacySettings;                                          // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedUpdatePartyDataResponse
// 0x0001
struct FApiGatewaySharedUpdatePartyDataResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedUpdatePartyMemberDataRequest
// 0x0038
struct FApiGatewaySharedUpdatePartyMemberDataRequest
{
	struct FString                                     PartyId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            UpdatedMemberTenancyUserId;                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlatformData;                                             // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     CrossplayPreference;                                      // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedUpdatePartyMemberDataResponse
// 0x0001
struct FApiGatewaySharedUpdatePartyMemberDataResponse
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedCustomBuildRequest
// 0x0020
struct FApiGatewaySharedCustomBuildRequest
{
	struct FString                                     BuildId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Signature;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedCustomBuildResponse
// 0x0020
struct FApiGatewaySharedCustomBuildResponse
{
	struct FString                                     SignedLink;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Uid;                                                      // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiGatewaySharedReportPlayerRequest
// 0x0030
struct FApiGatewaySharedReportPlayerRequest
{
	struct FEmbarkUserHandle                           ReportedUserId;                                           // 0x0000(0x0010)
	struct FString                                     Reason;                                                   // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     Message;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkApiGateway.ApiError
// 0x0018
struct FApiError
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     Message;                                                  // 0x0008(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
