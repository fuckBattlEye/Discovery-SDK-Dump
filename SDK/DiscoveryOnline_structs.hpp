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

// Enum DiscoveryOnline.ESanctionType
enum class ESanctionType : uint8_t
{
	UNSPECIFIED                    = 0,
	TOURNAMENT_ABANDON             = 1,
	ESanctionType_MAX              = 2
};


// Enum DiscoveryOnline.EServiceRoundStatSummaryType
enum class EServiceRoundStatSummaryType : uint8_t
{
	Unknown                        = 0,
	Ranked                         = 1,
	Casual                         = 2,
	Total                          = 3,
	EServiceRoundStatSummaryType_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DiscoveryOnline.DiscoveryOnlineTournamentSession
// 0x0020
struct FDiscoveryOnlineTournamentSession
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct DiscoveryOnline.DiscoveryOnlineJoinTournamentUpdate
// 0x0070
struct FDiscoveryOnlineJoinTournamentUpdate
{
	struct FString                                     TournamentId;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	struct FApiGatewayDiscoveryGameServer              GameServer;                                               // 0x0028(0x0048)
};

// ScriptStruct DiscoveryOnline.DiscoveryOnlineMonitorTournament
// 0x0050
struct FDiscoveryOnlineMonitorTournament
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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
