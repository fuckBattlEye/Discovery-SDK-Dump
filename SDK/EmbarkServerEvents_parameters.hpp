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

// Function EmbarkServerEvents.EmbarkServerEventsSubsystem.IsReady
struct UEmbarkServerEventsSubsystem_IsReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EmbarkServerEventUtil.ServerShutdown
struct UEmbarkServerEventUtil_ServerShutdown_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ShutdownMessage;                                          // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EmbarkServerEventUtil.RoundCompleted
struct UEmbarkServerEventUtil_RoundCompleted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EmbarkServerEventUtil.FlushEvents
struct UEmbarkServerEventUtil_FlushEvents_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.WorldActivityStarted
struct UEventAPI_WorldActivityStarted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ActivityName;                                             // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.WorldActivitySpawned
struct UEventAPI_WorldActivitySpawned_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ActivityName;                                             // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.WorldActivityFinished
struct UEventAPI_WorldActivityFinished_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ActivityName;                                             // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.WorldActivityARCProbeLooted
struct UEventAPI_WorldActivityARCProbeLooted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AssetName;                                                // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.WeaponReload
struct UEventAPI_WeaponReload_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Weapon;                                                   // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            BulletsBefore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            BulletsAfter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.WeaponModSet2
struct UEventAPI_WeaponModSet2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            WeaponGameAssetId;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WeaponName;                                               // (Parm, ZeroConstructor)
	int64_t                                            ModGameAssetId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModName;                                                  // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.WeaponModSet
struct UEventAPI_WeaponModSet_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            WeaponGameAssetId;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WeaponName;                                               // (Parm, ZeroConstructor)
	int64_t                                            ModGameAssetId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModName;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.WeaponModRemoved2
struct UEventAPI_WeaponModRemoved2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            WeaponGameAssetId;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WeaponName;                                               // (Parm, ZeroConstructor)
	int64_t                                            ModGameAssetId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModName;                                                  // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.WeaponModRemoved
struct UEventAPI_WeaponModRemoved_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            WeaponGameAssetId;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WeaponName;                                               // (Parm, ZeroConstructor)
	int64_t                                            ModGameAssetId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModName;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.WeaponHit2
struct UEventAPI_WeaponHit2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Weapon;                                                   // (Parm, ZeroConstructor)
	bool                                               bIsImpactDamage;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Target;                                                   // (Parm, ZeroConstructor)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            EnemySpawnId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Payload;                                                  // (Parm, ZeroConstructor)
	int64_t                                            PayloadId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.WeaponFired
struct UEventAPI_WeaponFired_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Weapon;                                                   // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            BulletsAfter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsingCamera;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.UpdateFameAmount2
struct UEventAPI_UpdateFameAmount2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FameInstanceId;                                           // (Parm, ZeroConstructor)
	int64_t                                            Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            FameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.UnrealServerTime2
struct UEventAPI_UnrealServerTime2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            UnrealTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.TryActivateAbility
struct UEventAPI_TryActivateAbility_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Ability;                                                  // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.TournamentState
struct UEventAPI_TournamentState_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TournamentId;                                             // (Parm, ZeroConstructor)
	struct FString                                     MatchId;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.TelemetryStartup
struct UEventAPI_TelemetryStartup_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerSessionId;                                          // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.SteamApp
struct UEventAPI_SteamApp_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SteamAppId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BranchName;                                               // (Parm, ZeroConstructor)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.StaticSpawnerSpawnEnemy2
struct UEventAPI_StaticSpawnerSpawnEnemy2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Enemy;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Spawner;                                                  // (Parm, ZeroConstructor)
	int64_t                                            EnemySpawnId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SpawnerUuid;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.StaticSpawnerDestroyEnemy2
struct UEventAPI_StaticSpawnerDestroyEnemy2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Enemy;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Spawner;                                                  // (Parm, ZeroConstructor)
	int64_t                                            EnemySpawnId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SpawnerUuid;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.StaticSpawnerDeactivate2
struct UEventAPI_StaticSpawnerDeactivate2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Spawner;                                                  // (Parm, ZeroConstructor)
	struct FString                                     SpawnerUuid;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.StaticSpawnerCreated2
struct UEventAPI_StaticSpawnerCreated2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Spawner;                                                  // (Parm, ZeroConstructor)
	struct FString                                     SpawnerParent;                                            // (Parm, ZeroConstructor)
	struct FString                                     EnemyTable;                                               // (Parm, ZeroConstructor)
	struct FString                                     SpawnerUuid;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.StaticSpawnerActivate2
struct UEventAPI_StaticSpawnerActivate2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Spawner;                                                  // (Parm, ZeroConstructor)
	struct FString                                     SpawnerUuid;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.SoundTrapActivated
struct UEventAPI_SoundTrapActivated_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     TrapName;                                                 // (Parm, ZeroConstructor)
	float                                              ElevationChangedTime;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.SessionModifier
struct UEventAPI_SessionModifier_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int64_t>                                    ModifierIds;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkServerEvents.EventAPI.ServerShutdown
struct UEventAPI_ServerShutdown_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.ServerPerformance2
struct UEventAPI_ServerPerformance2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Frametimes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              TotalSaturatedConnections;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                NumBadFrams;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartingFrameNum;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.ServerPerformance
struct UEventAPI_ServerPerformance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Frametimes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                NumBadFrams;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartingFrameNum;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.ServerManifest
struct UEventAPI_ServerManifest_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ServerManifestId;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.ServerAgonesReady
struct UEventAPI_ServerAgonesReady_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            UnrealTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.RoundWin
struct UEventAPI_RoundWin_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WinReason;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.RoundStarted
struct UEventAPI_RoundStarted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            UnrealTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.RoundDefeat
struct UEventAPI_RoundDefeat_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DefeatReason;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.RoundCompleted
struct UEventAPI_RoundCompleted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            UnrealTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.ProjectileValidationFailed
struct UEventAPI_ProjectileValidationFailed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerPing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetPlayerPing;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AimingLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PelvisLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bIsCrouching;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
	float                                              FailingValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerSurrender
struct UEventAPI_PlayerSurrender_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerStateChange
struct UEventAPI_PlayerStateChange_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerSpawn4
struct UEventAPI_PlayerSpawn4_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            SquadId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Squad;                                                    // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            CharacterId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Difficulty;                                               // (Parm, ZeroConstructor)
	struct FString                                     GameMap;                                                  // (Parm, ZeroConstructor)
	struct FString                                     MapLocation;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.PlayerSpawn3
struct UEventAPI_PlayerSpawn3_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            SquadId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Squad;                                                    // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            CharacterId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Difficulty;                                               // (Parm, ZeroConstructor)
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.PlayerRevive2
struct UEventAPI_PlayerRevive2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              TargetHealTaken;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetDbnoHealth;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemUsed;                                                 // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerPosition5
struct UEventAPI_PlayerPosition5_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Stance;                                                   // (Parm, ZeroConstructor)
	struct FString                                     MovementMode;                                             // (Parm, ZeroConstructor)
	struct FVector                                     ForwardVector;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Stamina;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ArmorHealth;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ArmorMitigationValue;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ArmorType;                                                // (Parm, ZeroConstructor)
	int                                                UsedLoadoutSlots;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UsedBackpackSlots;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UsedBeltSlots;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UsedSafePocketSlots;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerPosition
struct UEventAPI_PlayerPosition_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerNetworkLatency
struct UEventAPI_PlayerNetworkLatency_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NetworkLatency;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerInitialized
struct UEventAPI_PlayerInitialized_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerHeal2
struct UEventAPI_PlayerHeal2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealTaken;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealthAfter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ItemUsed;                                                 // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerExtractionStarted
struct UEventAPI_PlayerExtractionStarted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ExtractionPointName;                                      // (Parm, ZeroConstructor)
	struct FString                                     ExtractionPointType;                                      // (Parm, ZeroConstructor)
	int                                                ExtractionCycle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerExtractionFinalized
struct UEventAPI_PlayerExtractionFinalized_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ExtractionPointName;                                      // (Parm, ZeroConstructor)
	struct FString                                     ExtractionPointType;                                      // (Parm, ZeroConstructor)
	int                                                ExtractionCycle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerExtractionCanceled
struct UEventAPI_PlayerExtractionCanceled_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ExtractionPointName;                                      // (Parm, ZeroConstructor)
	struct FString                                     ExtractionPointType;                                      // (Parm, ZeroConstructor)
	int                                                ExtractionCycle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerDisconnect
struct UEventAPI_PlayerDisconnect_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerDie
struct UEventAPI_PlayerDie_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerDamagePlayer2
struct UEventAPI_PlayerDamagePlayer2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              HealthBefore;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealthAfter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageCauser;                                             // (Parm, ZeroConstructor)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDbno;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BoneHit;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.PlayerConnectTelemetry
struct UEventAPI_PlayerConnectTelemetry_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.PlayerConnect3
struct UEventAPI_PlayerConnect3_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ManifestId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ClientUuid;                                               // (Parm, ZeroConstructor)
	int64_t                                            ClientPlatform;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.Pinging
struct UEventAPI_Pinging_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PingIntent;                                               // (Parm, ZeroConstructor)
	struct FString                                     PingTagname;                                              // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PingLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.OnlineTelemetry
struct UEventAPI_OnlineTelemetry_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.MoveItem
struct UEventAPI_MoveItem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
	struct FString                                     PreviousContainer;                                        // (Parm, ZeroConstructor)
	struct FString                                     NewContainer;                                             // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.MLAgentMovement
struct UEventAPI_MLAgentMovement_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Enemy;                                                    // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     MoveToLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     FocusOnLocation;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              MoveToDeltaAngle;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FocusOnDeltaAngle;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetTurnSpeed;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.MissedInput
struct UEventAPI_MissedInput_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.MeleeSwingStart
struct UEventAPI_MeleeSwingStart_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SwingTag;                                                 // (Parm, ZeroConstructor)
	struct FString                                     AttackTag;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.MeleeSwingEnd
struct UEventAPI_MeleeSwingEnd_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SwingTag;                                                 // (Parm, ZeroConstructor)
	struct FString                                     AttackTag;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.MeleeLounge
struct UEventAPI_MeleeLounge_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SwingTag;                                                 // (Parm, ZeroConstructor)
	struct FString                                     AttackTag;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.MeleeHit
struct UEventAPI_MeleeHit_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SwingTag;                                                 // (Parm, ZeroConstructor)
	struct FString                                     AttackTag;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.MatchmakingScenario
struct UEventAPI_MatchmakingScenario_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ScenarioId;                                               // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.MatchId
struct UEventAPI_MatchId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchId;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.LootSpawn
struct UEventAPI_LootSpawn_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            SourceId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	int64_t                                            ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ItemType;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Rarity;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.LootCrateSpawn
struct UEventAPI_LootCrateSpawn_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     LootCrate;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.LootCrateOpen2
struct UEventAPI_LootCrateOpen2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     LootCrate;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.LightingConditionSet
struct UEventAPI_LightingConditionSet_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LightingCondition;                                        // (Parm, ZeroConstructor)
	bool                                               bOverridden;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.KillStealer
struct UEventAPI_KillStealer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                TransferPointId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cash;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.KillBoxCarrier
struct UEventAPI_KillBoxCarrier_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                TicketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cash;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.ItemUsed
struct UEventAPI_ItemUsed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.ItemInventoryChange6
struct UEventAPI_ItemInventoryChange6_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemType;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Rarity;                                                   // (Parm, ZeroConstructor)
	int                                                Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemSource;                                               // (Parm, ZeroConstructor)
	int                                                AmountBefore;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmountAfter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
	struct FString                                     Container;                                                // (Parm, ZeroConstructor)
	int                                                StackValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int64_t>                                    WeaponModAssets;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkServerEvents.EventAPI.ItemInventoryChange5
struct UEventAPI_ItemInventoryChange5_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemType;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Rarity;                                                   // (Parm, ZeroConstructor)
	int                                                Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemSource;                                               // (Parm, ZeroConstructor)
	int64_t                                            AmountBefore;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            AmountAfter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
	struct FString                                     Container;                                                // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int64_t>                                    WeaponModAssets;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkServerEvents.EventAPI.ItemEquipped
struct UEventAPI_ItemEquipped_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemName;                                                 // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     EquipMethod;                                              // (Parm, ZeroConstructor)
	int64_t                                            ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.InputMethodChanged
struct UEventAPI_InputMethodChanged_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InputDevice;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.InputBufferOverflow
struct UEventAPI_InputBufferOverflow_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.HitscanValidationFailed
struct UEventAPI_HitscanValidationFailed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerPing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetPlayerPing;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AimingLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     PelvisLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bIsCrouching;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
	float                                              FailingValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ExtraContext;                                             // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.HealthChange3
struct UEventAPI_HealthChange3_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              HealthBefore;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealthAfter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageCauser;                                             // (Parm, ZeroConstructor)
	bool                                               bIsDbno;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BoneHit;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.GameplayOver
struct UEventAPI_GameplayOver_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            UnrealTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.GameModeEnd
struct UEventAPI_GameModeEnd_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.GameMode2
struct UEventAPI_GameMode2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Mode;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Difficulty;                                               // (Parm, ZeroConstructor)
	struct FString                                     Severity;                                                 // (Parm, ZeroConstructor)
	struct FString                                     LocationTag;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.FoundStartLocation
struct UEventAPI_FoundStartLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PointName;                                                // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              NearestEnemySquared;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NearestObjectiveSquared;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.FallDamage
struct UEventAPI_FallDamage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealthBefore;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealthAfter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.ExtractionTimerStarted
struct UEventAPI_ExtractionTimerStarted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                ExtractionCycle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.ExtractionFinalized
struct UEventAPI_ExtractionFinalized_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                PlayerAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExtractionCycle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.ExtractedInventorySlot2
struct UEventAPI_ExtractedInventorySlot2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
	struct FString                                     Container;                                                // (Parm, ZeroConstructor)
	int64_t                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.ExtractedInventorySlot
struct UEventAPI_ExtractedInventorySlot_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
	struct FString                                     Container;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.ExpectedPlayersProxy
struct UEventAPI_ExpectedPlayersProxy_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int64_t>                                    ExpectedPlayerIds;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkServerEvents.EventAPI.EOSProductUserId
struct UEventAPI_EOSProductUserId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ProductUserId;                                            // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.EnemyWeaponFired2
struct UEventAPI_EnemyWeaponFired2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Weapon;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ProjectileClass;                                          // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Enemy;                                                    // (Parm, ZeroConstructor)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            TargetGameAssetId;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.EnemyWeaponFired
struct UEventAPI_EnemyWeaponFired_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Weapon;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ProjectileClass;                                          // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Enemy;                                                    // (Parm, ZeroConstructor)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            TargetPlayerId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            TargetGameAssetId;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.EnemySpawned3
struct UEventAPI_EnemySpawned3_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Enemy;                                                    // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            GroupId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            EnemySpawnId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Alertness;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.EnemySpawned2
struct UEventAPI_EnemySpawned2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Enemy;                                                    // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            GroupId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            EnemySpawnId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.EnemyScavengeLooted
struct UEventAPI_EnemyScavengeLooted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ScavengeName;                                             // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.EnemyScavengeCreated
struct UEventAPI_EnemyScavengeCreated_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ScavengeName;                                             // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.EnemyPosition
struct UEventAPI_EnemyPosition_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            EnemySpawnId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Enemy;                                                    // (Parm, ZeroConstructor)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.EnemyPhysicsKill
struct UEventAPI_EnemyPhysicsKill_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     DamageCauser;                                             // (Parm, ZeroConstructor)
	struct FString                                     Target;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.EnemyPhysicsDamage
struct UEventAPI_EnemyPhysicsDamage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PartHit;                                                  // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bIsCriticalPart;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageCauser;                                             // (Parm, ZeroConstructor)
	struct FString                                     Target;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.EnemyKill2
struct UEventAPI_EnemyKill2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ProjectileId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     DamageCauser;                                             // (Parm, ZeroConstructor)
	struct FString                                     Target;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.EnemyEvict2
struct UEventAPI_EnemyEvict2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Enemy;                                                    // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInCombat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
	int64_t                                            EnemySpawnId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.EnemyDestroyed
struct UEventAPI_EnemyDestroyed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            EnemySpawnId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Target;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.EnemyDamagePlayer2
struct UEventAPI_EnemyDamagePlayer2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Enemy;                                                    // (Parm, ZeroConstructor)
	struct FVector                                     EnemyLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              HealthBefore;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealthAfter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageCauser;                                             // (Parm, ZeroConstructor)
	bool                                               bIsDbno;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BoneHit;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.EnemyDamage2
struct UEventAPI_EnemyDamage2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     DamageCauser;                                             // (Parm, ZeroConstructor)
	int64_t                                            WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Weapon;                                                   // (Parm, ZeroConstructor)
	int64_t                                            ProjectileId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Target;                                                   // (Parm, ZeroConstructor)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            PartID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PartHit;                                                  // (Parm, ZeroConstructor)
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCriticalPart;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.EnemyDamage
struct UEventAPI_EnemyDamage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ProjectileId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PartHit;                                                  // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Weapon;                                                   // (Parm, ZeroConstructor)
	bool                                               bIsCriticalPart;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageCauser;                                             // (Parm, ZeroConstructor)
	struct FString                                     Target;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.EnemyAlert2
struct UEventAPI_EnemyAlert2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Enemy;                                                    // (Parm, ZeroConstructor)
	struct FString                                     NewAlertness;                                             // (Parm, ZeroConstructor)
	struct FString                                     OldAlertness;                                             // (Parm, ZeroConstructor)
	struct FString                                     AlertnessSource;                                          // (Parm, ZeroConstructor)
	struct FString                                     Sense;                                                    // (Parm, ZeroConstructor)
	struct FString                                     LastTag;                                                  // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.EnemyAbilityActivated
struct UEventAPI_EnemyAbilityActivated_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Enemy;                                                    // (Parm, ZeroConstructor)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AbilityTag;                                               // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DropItem
struct UEventAPI_DropItem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
	struct FString                                     Container;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DisregardItem
struct UEventAPI_DisregardItem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
	int                                                StackSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LootContainer;                                            // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DisqualifiedRespawnPoint2
struct UEventAPI_DisqualifiedRespawnPoint2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PointName;                                                // (Parm, ZeroConstructor)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DistanceSquared;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Ctx;                                                      // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DisqualifiedRespawnPoint
struct UEventAPI_DisqualifiedRespawnPoint_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PointName;                                                // (Parm, ZeroConstructor)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DistanceSquared;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoXpRewardTelemetry
struct UEventAPI_DiscoXpRewardTelemetry_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            BucketId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventTag;                                                 // (Parm, ZeroConstructor)
	int64_t                                            ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoWeaponHitThing2
struct UEventAPI_DiscoWeaponHitThing2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Weapon;                                                   // (Parm, ZeroConstructor)
	int64_t                                            WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Target;                                                   // (Parm, ZeroConstructor)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoWeaponHitPlayer3
struct UEventAPI_DiscoWeaponHitPlayer3_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Weapon;                                                   // (Parm, ZeroConstructor)
	int64_t                                            WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bIsEnemy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHeadshot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoVaultSpawned2
struct UEventAPI_DiscoVaultSpawned2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Cash;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            VaultIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoVaultOpenStarted
struct UEventAPI_DiscoVaultOpenStarted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                VaultIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoVaultOpened
struct UEventAPI_DiscoVaultOpened_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                VaultIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                CaseAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoUseRespawnCredit
struct UEventAPI_DiscoUseRespawnCredit_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RemainingRespawnCredits;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoUpdatedLoadoutItem
struct UEventAPI_DiscoUpdatedLoadoutItem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Item;                                                     // (Parm, ZeroConstructor)
	int64_t                                            ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LoadoutUpdateId;                                          // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DiscoUIRoundStateChange
struct UEventAPI_DiscoUIRoundStateChange_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     State;                                                    // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DiscoTriggerRemoteItem
struct UEventAPI_DiscoTriggerRemoteItem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ProjectileName;                                           // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoTransferPointSpawned
struct UEventAPI_DiscoTransferPointSpawned_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TransferPointId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoTransferPointPosition
struct UEventAPI_DiscoTransferPointPosition_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TransferPointId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoTransferPointDespawned
struct UEventAPI_DiscoTransferPointDespawned_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TransferPointId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoTransferCompleted
struct UEventAPI_DiscoTransferCompleted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                TransferPointId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cash;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SquadIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoTournamentWon
struct UEventAPI_DiscoTournamentWon_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoTombstoneRespawn
struct UEventAPI_DiscoTombstoneRespawn_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoTicketSpawn2
struct UEventAPI_DiscoTicketSpawn2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TicketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Cash;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoTicketPosition2
struct UEventAPI_DiscoTicketPosition2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TicketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoTicketPickup2
struct UEventAPI_DiscoTicketPickup2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                TicketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoTicketInserted2
struct UEventAPI_DiscoTicketInserted2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TicketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                TransferPointId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cash;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoTicketDrop2
struct UEventAPI_DiscoTicketDrop2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                TicketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoStartTraining
struct UEventAPI_DiscoStartTraining_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoSquadWiped
struct UEventAPI_DiscoSquadWiped_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoSquadRoundCurrencyChanged
struct UEventAPI_DiscoSquadRoundCurrencyChanged_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SquadId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PreviousRoundCurrency;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentRoundCurrency;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RoundCurrencyDelta;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoSelfDamage2
struct UEventAPI_DiscoSelfDamage2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Causer;                                                   // (Parm, ZeroConstructor)
	int64_t                                            CauserId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousHealth;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDbno;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageTypeTag;                                            // (Parm, ZeroConstructor)
	struct FString                                     SourceTag;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DiscoSelfDamage
struct UEventAPI_DiscoSelfDamage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Causer;                                                   // (Parm, ZeroConstructor)
	int64_t                                            CauserId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousHealth;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDbno;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageTypeTag;                                            // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DiscoSelectedSpray
struct UEventAPI_DiscoSelectedSpray_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoSelectedPose
struct UEventAPI_DiscoSelectedPose_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PoseType;                                                 // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DiscoRoundCurrencyChanged
struct UEventAPI_DiscoRoundCurrencyChanged_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PreviousRoundCurrency;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentRoundCurrency;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RoundCurrencyDelta;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoRespawn
struct UEventAPI_DiscoRespawn_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                RemainingRespawnCredits;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoReserveItem
struct UEventAPI_DiscoReserveItem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Item;                                                     // (Parm, ZeroConstructor)
	int64_t                                            ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoQuestCompleted
struct UEventAPI_DiscoQuestCompleted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     QuestInstanceId;                                          // (Parm, ZeroConstructor)
	int64_t                                            QuestAssetId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoPreLoginEvent
struct UEventAPI_DiscoPreLoginEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAllowedToConnect;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoPlayerStartSteal
struct UEventAPI_DiscoPlayerStartSteal_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TransferPointId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cash;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoPlayerSpawn2
struct UEventAPI_DiscoPlayerSpawn2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            SquadId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Squad;                                                    // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     CharacterArchetype;                                       // (Parm, ZeroConstructor)
	struct FString                                     GameMode;                                                 // (Parm, ZeroConstructor)
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Deck;                                                     // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DiscoPlayerReconnect
struct UEventAPI_DiscoPlayerReconnect_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoPlayerHealPlayer
struct UEventAPI_DiscoPlayerHealPlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AmountHealed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoPlayerHeal
struct UEventAPI_DiscoPlayerHeal_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Causer;                                                   // (Parm, ZeroConstructor)
	float                                              AmountHealed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousHealth;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDbno;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoPlayerFinishSteal
struct UEventAPI_DiscoPlayerFinishSteal_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TransferPointId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cash;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoPlayerEliminated
struct UEventAPI_DiscoPlayerEliminated_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoPlayerDisconnect
struct UEventAPI_DiscoPlayerDisconnect_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DiscoPlayerDie
struct UEventAPI_DiscoPlayerDie_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoPlayerDepartedTournament
struct UEventAPI_DiscoPlayerDepartedTournament_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoPlayerAbandonedTournament
struct UEventAPI_DiscoPlayerAbandonedTournament_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoLoadoutItem2
struct UEventAPI_DiscoLoadoutItem2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Item;                                                     // (Parm, ZeroConstructor)
	int64_t                                            ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoKillAssist
struct UEventAPI_DiscoKillAssist_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoItemUse
struct UEventAPI_DiscoItemUse_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int64_t                                            ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmountBefore;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmountNow;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoItemUsageStat
struct UEventAPI_DiscoItemUsageStat_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Tag;                                                      // (Parm, ZeroConstructor)
	float                                              Modifier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Usage;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Description;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DiscoHealthChanged2
struct UEventAPI_DiscoHealthChanged2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Causer;                                                   // (Parm, ZeroConstructor)
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousHealth;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDbno;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageTypeTag;                                            // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DiscoGameModeStart
struct UEventAPI_DiscoGameModeStart_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EnvironmentalCondition;                                   // (Parm, ZeroConstructor)
	struct FString                                     VariantName;                                              // (Parm, ZeroConstructor)
	TArray<struct FString>                             SpawnTypes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             RandomGameShowEvents;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkServerEvents.EventAPI.DiscoGameModeRequest
struct UEventAPI_DiscoGameModeRequest_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DesiredGameMode;                                          // (Parm, ZeroConstructor)
	struct FString                                     ResultingGameMode;                                        // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DiscoEquipItem
struct UEventAPI_DiscoEquipItem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemName;                                                 // (Parm, ZeroConstructor)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoEnemyKilled
struct UEventAPI_DiscoEnemyKilled_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoEnemyDamage7
struct UEventAPI_DiscoEnemyDamage7_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Causer;                                                   // (Parm, ZeroConstructor)
	int64_t                                            CauserId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousHealth;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDbno;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageTypeTag;                                            // (Parm, ZeroConstructor)
	bool                                               bIsHeadshot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SourceTag;                                                // (Parm, ZeroConstructor)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoEnemyDamage6
struct UEventAPI_DiscoEnemyDamage6_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Causer;                                                   // (Parm, ZeroConstructor)
	int64_t                                            CauserId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousHealth;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDbno;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageTypeTag;                                            // (Parm, ZeroConstructor)
	bool                                               bIsHeadshot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SourceTag;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DiscoEnemyDamage5
struct UEventAPI_DiscoEnemyDamage5_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Causer;                                                   // (Parm, ZeroConstructor)
	int64_t                                            CauserId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousHealth;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDbno;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageTypeTag;                                            // (Parm, ZeroConstructor)
	bool                                               bIsHeadshot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoEnemyDamage4
struct UEventAPI_DiscoEnemyDamage4_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Causer;                                                   // (Parm, ZeroConstructor)
	int64_t                                            CauserId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousHealth;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDbno;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageTypeTag;                                            // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DiscoDefibRespawn
struct UEventAPI_DiscoDefibRespawn_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoCloakedBackHit
struct UEventAPI_DiscoCloakedBackHit_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoCharacterCustomizationItem
struct UEventAPI_DiscoCharacterCustomizationItem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Item;                                                     // (Parm, ZeroConstructor)
	int64_t                                            ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoCaseSpawned
struct UEventAPI_DiscoCaseSpawned_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoCasePickup
struct UEventAPI_DiscoCasePickup_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     CaseLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                PreviousCash;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CaseValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoBankItTransferStarted
struct UEventAPI_DiscoBankItTransferStarted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                TransferPointId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TransferPointLocation;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Cash;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SquadIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoBankItTransferCompleted
struct UEventAPI_DiscoBankItTransferCompleted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                TransferPointId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TransferPointLocation;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Cash;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SquadIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiscoAssignPlayerSquad
struct UEventAPI_DiscoAssignPlayerSquad_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            SquadId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Squad;                                                    // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DiscoAddRankBucketRewardXp
struct UEventAPI_DiscoAddRankBucketRewardXp_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            BucketId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiedInventorySlot2
struct UEventAPI_DiedInventorySlot2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
	struct FString                                     Container;                                                // (Parm, ZeroConstructor)
	int64_t                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DiedInventorySlot
struct UEventAPI_DiedInventorySlot_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
	struct FString                                     Container;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DevInstanceKey
struct UEventAPI_DevInstanceKey_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DevInstanceKey;                                           // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.DestructionStartSimulate
struct UEventAPI_DestructionStartSimulate_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DestructionCutConnection
struct UEventAPI_DestructionCutConnection_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            StrainConnects;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            BrokenLinks;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DestructionBoneDestroyed
struct UEventAPI_DestructionBoneDestroyed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.DefibReviveFailed
struct UEventAPI_DefibReviveFailed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              PlayerPing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetPlayerPing;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.CompleteTutorialObjective
struct UEventAPI_CompleteTutorialObjective_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Objective;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.AutobotSpawned
struct UEventAPI_AutobotSpawned_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsServerBot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.ArmorDamage
struct UEventAPI_ArmorDamage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Armor;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Enemy;                                                    // (Parm, ZeroConstructor)
	float                                              ArmorBefore;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ArmorAfter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DamageCauser;                                             // (Parm, ZeroConstructor)
	int64_t                                            EnemyId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ArmorId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.AppInfo
struct UEventAPI_AppInfo_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AppId;                                                    // (Parm, ZeroConstructor)
	struct FString                                     BranchName;                                               // (Parm, ZeroConstructor)
	struct FString                                     CountryCode;                                              // (Parm, ZeroConstructor)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.AntiCheatPlayerActionRequiredServer
struct UEventAPI_AntiCheatPlayerActionRequiredServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ClientAction;                                             // (Parm, ZeroConstructor)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Details;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.AngelscriptServerError
struct UEventAPI_AngelscriptServerError_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.AimingValidationFailed
struct UEventAPI_AimingValidationFailed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerPing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClientAimingLocation;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkServerEvents.EventAPI.AimBasedForceApplication
struct UEventAPI_AimBasedForceApplication_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForceMagnitude;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Target;                                                   // (Parm, ZeroConstructor)
	int64_t                                            TargetId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.AddQuestProgress2
struct UEventAPI_AddQuestProgress2_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     QuestInstanceId;                                          // (Parm, ZeroConstructor)
	int64_t                                            Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            QuestAssetId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkServerEvents.EventAPI.AddPersistedItem
struct UEventAPI_AddPersistedItem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AssetType;                                                // (Parm, ZeroConstructor)
	int64_t                                            Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int64_t>                                    Breakthroughs;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkServerEvents.EventAPI.ActivatedAbility
struct UEventAPI_ActivatedAbility_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Ability;                                                  // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
