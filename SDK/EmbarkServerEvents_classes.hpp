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

// Class EmbarkServerEvents.EmbarkServerEventsSubsystem
// 0x0078 (0x00A8 - 0x0030)
class UEmbarkServerEventsSubsystem : public UGameInstanceSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnRewardGained;                                           // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRankChange;                                             // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEventPipelineCompleted;                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0060(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkServerEvents.EmbarkServerEventsSubsystem"));
		return ptr;
	}


	bool IsReady();//Offset:Discovery.exe+0x5D7E750
};


// Class EmbarkServerEvents.RewardGainedEvent
// 0x0038 (0x0060 - 0x0028)
class URewardGainedEvent : public UObject
{
public:
	int                                                PlayerId;                                                 // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	int64_t                                            GameAssetId;                                              // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            Amount;                                                   // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            Generation;                                               // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bHasSeen;                                                 // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkServerEvents.RewardGainedEvent"));
		return ptr;
	}

};


// Class EmbarkServerEvents.RankChangeEvent
// 0x0028 (0x0050 - 0x0028)
class URankChangeEvent : public UObject
{
public:
	int                                                PlayerId;                                                 // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	int64_t                                            PreviousRank;                                             // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            CurrentRank;                                              // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     BucketId;                                                 // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkServerEvents.RankChangeEvent"));
		return ptr;
	}

};


// Class EmbarkServerEvents.EmbarkServerEventUtil
// 0x0000 (0x0028 - 0x0028)
class UEmbarkServerEventUtil : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkServerEvents.EmbarkServerEventUtil"));
		return ptr;
	}


	void STATIC_ServerShutdown(class UObject* WorldContextObject, const struct FString& ShutdownMessage);//Offset:Discovery.exe+0x5D7EB40
	void STATIC_RoundCompleted(class UObject* WorldContextObject);//Offset:Discovery.exe+0x5D7EC30
	void STATIC_FlushEvents(class UObject* WorldContextObject);//Offset:Discovery.exe+0x5D7ECC0
};


// Class EmbarkServerEvents.EventAPI
// 0x0000 (0x0028 - 0x0028)
class UEventAPI : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkServerEvents.EventAPI"));
		return ptr;
	}


	void STATIC_WorldActivityStarted(class UObject* WorldContextObject, int64_t Player, const struct FString& ActivityName, const struct FVector& Location);//Offset:Discovery.exe+0x5D7F0D0
	void STATIC_WorldActivitySpawned(class UObject* WorldContextObject, const struct FString& ActivityName, const struct FVector& Location);//Offset:Discovery.exe+0x5D7F260
	void STATIC_WorldActivityFinished(class UObject* WorldContextObject, int64_t Player, const struct FString& ActivityName, const struct FVector& Location);//Offset:Discovery.exe+0x5D7F3A0
	void STATIC_WorldActivityARCProbeLooted(class UObject* WorldContextObject, int64_t Player, const struct FString& AssetName, const struct FVector& Location);//Offset:Discovery.exe+0x5D7F530
	void STATIC_WeaponReload(class UObject* WorldContextObject, int64_t Player, const struct FString& Weapon, const struct FVector& Location, int64_t BulletsBefore, int64_t BulletsAfter, int64_t WeaponId);//Offset:Discovery.exe+0x5D7F6C0
	void STATIC_WeaponModSet2(class UObject* WorldContextObject, int64_t Player, int64_t WeaponGameAssetId, const struct FString& WeaponName, int64_t ModGameAssetId, const struct FString& ModName, int Value);//Offset:Discovery.exe+0x5D7F960
	void STATIC_WeaponModSet(class UObject* WorldContextObject, int64_t Player, int64_t WeaponGameAssetId, const struct FString& WeaponName, int64_t ModGameAssetId, const struct FString& ModName);//Offset:Discovery.exe+0x5D7FC00
	void STATIC_WeaponModRemoved2(class UObject* WorldContextObject, int64_t Player, int64_t WeaponGameAssetId, const struct FString& WeaponName, int64_t ModGameAssetId, const struct FString& ModName, int Value);//Offset:Discovery.exe+0x5D7FE40
	void STATIC_WeaponModRemoved(class UObject* WorldContextObject, int64_t Player, int64_t WeaponGameAssetId, const struct FString& WeaponName, int64_t ModGameAssetId, const struct FString& ModName);//Offset:Discovery.exe+0x5D800E0
	void STATIC_WeaponHit2(class UObject* WorldContextObject, int64_t Player, const struct FString& Weapon, bool bIsImpactDamage, const struct FString& Target, const struct FVector& TargetLocation, int64_t WeaponId, int64_t EnemyId, int64_t EnemySpawnId, const struct FString& Payload, int64_t PayloadId);//Offset:Discovery.exe+0x5D80320
	void STATIC_WeaponFired(class UObject* WorldContextObject, int64_t Player, const struct FString& Weapon, const struct FVector& Location, const struct FVector& Direction, int64_t BulletsAfter, bool bUsingCamera, int64_t WeaponId);//Offset:Discovery.exe+0x5D80770
	void STATIC_UpdateFameAmount2(class UObject* WorldContextObject, int64_t Player, const struct FString& FameInstanceId, int64_t Amount, int64_t FameAssetId, const struct FString& Reason);//Offset:Discovery.exe+0x5D80A80
	void STATIC_UnrealServerTime2(class UObject* WorldContextObject, int64_t UnrealTime);//Offset:Discovery.exe+0x5D80CC0
	void STATIC_TryActivateAbility(class UObject* WorldContextObject, int64_t Player, const struct FString& Ability, const struct FVector& Location);//Offset:Discovery.exe+0x5D80DA0
	void STATIC_TournamentState(class UObject* WorldContextObject, const struct FString& TournamentId, const struct FString& MatchId);//Offset:Discovery.exe+0x5D80F30
	void STATIC_TelemetryStartup(class UObject* WorldContextObject, const struct FString& ServerSessionId);//Offset:Discovery.exe+0x5D81070
	void STATIC_SteamApp(class UObject* WorldContextObject, int SteamAppId, const struct FString& BranchName, int64_t Player);//Offset:Discovery.exe+0x5D81160
	void STATIC_StaticSpawnerSpawnEnemy2(class UObject* WorldContextObject, const struct FString& Enemy, const struct FString& Spawner, int64_t EnemySpawnId, const struct FString& SpawnerUuid);//Offset:Discovery.exe+0x5D812E0
	void STATIC_StaticSpawnerDestroyEnemy2(class UObject* WorldContextObject, const struct FString& Enemy, const struct FString& Spawner, int64_t EnemySpawnId, const struct FString& SpawnerUuid);//Offset:Discovery.exe+0x5D814E0
	void STATIC_StaticSpawnerDeactivate2(class UObject* WorldContextObject, const struct FVector& Location, const struct FString& Spawner, const struct FString& SpawnerUuid);//Offset:Discovery.exe+0x5D816E0
	void STATIC_StaticSpawnerCreated2(class UObject* WorldContextObject, const struct FVector& Location, const struct FString& Spawner, const struct FString& SpawnerParent, const struct FString& EnemyTable, const struct FString& SpawnerUuid);//Offset:Discovery.exe+0x5D81880
	void STATIC_StaticSpawnerActivate2(class UObject* WorldContextObject, const struct FVector& Location, int64_t Player, const struct FVector& PlayerLocation, const struct FString& Spawner, const struct FString& SpawnerUuid);//Offset:Discovery.exe+0x5D81AF0
	void STATIC_SoundTrapActivated(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& TrapName, float ElevationChangedTime);//Offset:Discovery.exe+0x5D81D50
	void STATIC_SessionModifier(class UObject* WorldContextObject, TArray<int64_t> ModifierIds);//Offset:Discovery.exe+0x5D81F30
	void STATIC_ServerShutdown(class UObject* WorldContextObject, const struct FString& Reason);//Offset:Discovery.exe+0x5D82030
	void STATIC_ServerPerformance2(class UObject* WorldContextObject, TArray<unsigned char> Frametimes, TArray<unsigned char> TotalSaturatedConnections, int NumBadFrams, int StartingFrameNum);//Offset:Discovery.exe+0x5D82120
	void STATIC_ServerPerformance(class UObject* WorldContextObject, TArray<unsigned char> Frametimes, int NumBadFrams, int StartingFrameNum);//Offset:Discovery.exe+0x5D82320
	void STATIC_ServerManifest(class UObject* WorldContextObject, int64_t ServerManifestId);//Offset:Discovery.exe+0x5D824B0
	void STATIC_ServerAgonesReady(class UObject* WorldContextObject, int64_t UnrealTime);//Offset:Discovery.exe+0x5D82590
	void STATIC_RoundWin(class UObject* WorldContextObject, int64_t Player, int WinReason);//Offset:Discovery.exe+0x5D82670
	void STATIC_RoundStarted(class UObject* WorldContextObject, int64_t UnrealTime);//Offset:Discovery.exe+0x5D827A0
	void STATIC_RoundDefeat(class UObject* WorldContextObject, int64_t Player, int DefeatReason);//Offset:Discovery.exe+0x5D82880
	void STATIC_RoundCompleted(class UObject* WorldContextObject, int64_t UnrealTime);//Offset:Discovery.exe+0x5D829B0
	void STATIC_ProjectileValidationFailed(class UObject* WorldContextObject, int64_t Player, int64_t TargetPlayer, float PlayerPing, float TargetPlayerPing, const struct FVector& AimingLocation, const struct FVector& ActorLocation, const struct FVector& HitLocation, const struct FVector& PelvisLocation, bool bIsCrouching, const struct FString& Reason, float FailingValue);//Offset:Discovery.exe+0x5D82A90
	void STATIC_PlayerSurrender(class UObject* WorldContextObject, int64_t Player);//Offset:Discovery.exe+0x5D82F40
	void STATIC_PlayerStateChange(class UObject* WorldContextObject, int64_t Player, int OldState, int NewState);//Offset:Discovery.exe+0x5D83020
	void STATIC_PlayerSpawn4(class UObject* WorldContextObject, int64_t Player, int64_t SquadId, const struct FString& Squad, const struct FVector& Location, int64_t CharacterId, const struct FString& Difficulty, const struct FString& GameMap, const struct FString& MapLocation);//Offset:Discovery.exe+0x5D83190
	void STATIC_PlayerSpawn3(class UObject* WorldContextObject, int64_t Player, int64_t SquadId, const struct FString& Squad, const struct FVector& Location, int64_t CharacterId, const struct FString& Difficulty, const struct FString& MapName);//Offset:Discovery.exe+0x5D83530
	void STATIC_PlayerRevive2(class UObject* WorldContextObject, int64_t Player, int64_t TargetPlayer, const struct FVector& TargetLocation, float TargetHealTaken, float TargetDbnoHealth, const struct FString& ItemUsed, const struct FVector& Location);//Offset:Discovery.exe+0x5D83860
	void STATIC_PlayerPosition5(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& Stance, const struct FString& MovementMode, const struct FVector& ForwardVector, const struct FVector& Velocity, float Stamina, float Weight, float Health, float ArmorHealth, float ArmorMitigationValue, const struct FString& ArmorType, int UsedLoadoutSlots, int UsedBackpackSlots, int UsedBeltSlots, int UsedSafePocketSlots);//Offset:Discovery.exe+0x5D83B70
	void STATIC_PlayerPosition(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FVector& ForwardVector, const struct FVector& Velocity);//Offset:Discovery.exe+0x5D84220
	void STATIC_PlayerNetworkLatency(class UObject* WorldContextObject, int64_t Player, float NetworkLatency);//Offset:Discovery.exe+0x5D84410
	void STATIC_PlayerInitialized(class UObject* WorldContextObject, int64_t Player);//Offset:Discovery.exe+0x5D84540
	void STATIC_PlayerHeal2(class UObject* WorldContextObject, int64_t Player, int64_t TargetPlayer, int64_t ItemId, float HealTaken, float HealthAfter, const struct FVector& TargetLocation, const struct FString& ItemUsed, const struct FVector& Location);//Offset:Discovery.exe+0x5D84620
	void STATIC_PlayerExtractionStarted(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& ExtractionPointName, const struct FString& ExtractionPointType, int ExtractionCycle);//Offset:Discovery.exe+0x5D849A0
	void STATIC_PlayerExtractionFinalized(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& ExtractionPointName, const struct FString& ExtractionPointType, int ExtractionCycle);//Offset:Discovery.exe+0x5D84C00
	void STATIC_PlayerExtractionCanceled(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& ExtractionPointName, const struct FString& ExtractionPointType, int ExtractionCycle);//Offset:Discovery.exe+0x5D84E60
	void STATIC_PlayerDisconnect(class UObject* WorldContextObject, int64_t Player);//Offset:Discovery.exe+0x5D850C0
	void STATIC_PlayerDie(class UObject* WorldContextObject, int64_t Player);//Offset:Discovery.exe+0x5D851A0
	void STATIC_PlayerDamagePlayer2(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, float HealthBefore, float HealthAfter, const struct FString& DamageCauser, int64_t GameAssetId, bool bIsDbno, const struct FString& BoneHit);//Offset:Discovery.exe+0x5D85280
	void STATIC_PlayerConnectTelemetry(class UObject* WorldContextObject, int64_t Player);//Offset:Discovery.exe+0x5D858A0
	void STATIC_PlayerConnect3(class UObject* WorldContextObject, int64_t Player, int64_t ManifestId, const struct FString& ClientUuid, int64_t ClientPlatform);//Offset:Discovery.exe+0x5D856D0
	void STATIC_Pinging(class UObject* WorldContextObject, int64_t Player, const struct FString& PingIntent, const struct FString& PingTagname, const struct FVector& Location, const struct FVector& PingLocation);//Offset:Discovery.exe+0x5D85980
	void STATIC_OnlineTelemetry(class UObject* WorldContextObject, int64_t Player, const struct FString& Message);//Offset:Discovery.exe+0x5D85BE0
	void STATIC_MoveItem(class UObject* WorldContextObject, int64_t Player, int64_t Amount, const struct FVector& Location, int64_t GameAssetId, const struct FString& InstanceId, const struct FString& PreviousContainer, const struct FString& NewContainer);//Offset:Discovery.exe+0x5D85D20
	void STATIC_MLAgentMovement(class UObject* WorldContextObject, const struct FString& Enemy, const struct FVector& Location, const struct FVector& MoveToLocation, const struct FVector& FocusOnLocation, float MoveToDeltaAngle, float FocusOnDeltaAngle, float TargetSpeed, float TargetTurnSpeed, int64_t EnemyId);//Offset:Discovery.exe+0x5D86D20
	void STATIC_MissedInput(class UObject* WorldContextObject, int64_t Player);//Offset:Discovery.exe+0x5D86050
	void STATIC_MeleeSwingStart(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t GameAssetId, const struct FString& SwingTag, const struct FString& AttackTag);//Offset:Discovery.exe+0x5D86130
	void STATIC_MeleeSwingEnd(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t GameAssetId, const struct FString& SwingTag, const struct FString& AttackTag);//Offset:Discovery.exe+0x5D86380
	void STATIC_MeleeLounge(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t GameAssetId, const struct FString& SwingTag, const struct FString& AttackTag);//Offset:Discovery.exe+0x5D865D0
	void STATIC_MeleeHit(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, int64_t GameAssetId, const struct FString& SwingTag, const struct FString& AttackTag);//Offset:Discovery.exe+0x5D86820
	void STATIC_MatchmakingScenario(class UObject* WorldContextObject, const struct FString& ScenarioId);//Offset:Discovery.exe+0x5D86B40
	void STATIC_MatchId(class UObject* WorldContextObject, const struct FString& MatchId);//Offset:Discovery.exe+0x5D86C30
	void STATIC_LootSpawn(class UObject* WorldContextObject, int64_t SourceId, const struct FString& Source, int64_t ItemId, const struct FVector& Location, const struct FString& ItemType, const struct FString& Rarity);//Offset:Discovery.exe+0x5D870E0
	void STATIC_LootCrateSpawn(class UObject* WorldContextObject, int Rarity, const struct FVector& Location, const struct FString& LootCrate);//Offset:Discovery.exe+0x5D873B0
	void STATIC_LootCrateOpen2(class UObject* WorldContextObject, int64_t Player, int Rarity, const struct FVector& Location, const struct FString& LootCrate);//Offset:Discovery.exe+0x5D87540
	void STATIC_LightingConditionSet(class UObject* WorldContextObject, const struct FString& LightingCondition, bool bOverridden);//Offset:Discovery.exe+0x5D87720
	void STATIC_KillStealer(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, int TransferPointId, int Cash);//Offset:Discovery.exe+0x5D87860
	void STATIC_KillBoxCarrier(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, int TicketIndex, int Cash);//Offset:Discovery.exe+0x5D87AF0
	void STATIC_ItemUsed(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t GameAssetId, const struct FString& Name);//Offset:Discovery.exe+0x5D87D80
	void STATIC_ItemInventoryChange6(class UObject* WorldContextObject, int64_t Player, const struct FString& ItemType, const struct FString& Rarity, int Tier, const struct FString& ItemSource, int AmountBefore, int AmountAfter, const struct FVector& Location, int64_t ItemId, const struct FString& InstanceId, const struct FString& Container, int StackValue, int ItemValue, TArray<int64_t> WeaponModAssets);//Offset:Discovery.exe+0x5D87F60
	void STATIC_ItemInventoryChange5(class UObject* WorldContextObject, int64_t Player, const struct FString& ItemType, const struct FString& Rarity, int Tier, const struct FString& ItemSource, int64_t AmountBefore, int64_t AmountAfter, const struct FVector& Location, int64_t ItemId, const struct FString& InstanceId, const struct FString& Container, int Value, TArray<int64_t> WeaponModAssets);//Offset:Discovery.exe+0x5D88580
	void STATIC_ItemEquipped(class UObject* WorldContextObject, int64_t Player, const struct FString& ItemName, const struct FVector& Location, const struct FString& EquipMethod, int64_t ItemId);//Offset:Discovery.exe+0x5D88B40
	void STATIC_InputMethodChanged(class UObject* WorldContextObject, int64_t Player, const struct FString& InputDevice);//Offset:Discovery.exe+0x5D88DA0
	void STATIC_InputBufferOverflow(class UObject* WorldContextObject, int64_t Player);//Offset:Discovery.exe+0x5D88EE0
	void STATIC_HitscanValidationFailed(class UObject* WorldContextObject, int64_t Player, int64_t TargetPlayer, float PlayerPing, float TargetPlayerPing, const struct FVector& AimingLocation, const struct FVector& ActorLocation, const struct FVector& HitLocation, const struct FVector& PelvisLocation, bool bIsCrouching, const struct FString& Reason, float FailingValue, const struct FString& ExtraContext);//Offset:Discovery.exe+0x5D88FC0
	void STATIC_HealthChange3(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, float HealthBefore, float HealthAfter, const struct FString& DamageCauser, bool bIsDbno, const struct FString& BoneHit);//Offset:Discovery.exe+0x5D894E0
	void STATIC_GameplayOver(class UObject* WorldContextObject, int64_t UnrealTime);//Offset:Discovery.exe+0x5D897F0
	void STATIC_GameModeEnd(class UObject* WorldContextObject, const struct FString& Reason);//Offset:Discovery.exe+0x5D89AD0
	void STATIC_GameMode2(class UObject* WorldContextObject, const struct FString& Mode, const struct FString& Difficulty, const struct FString& Severity, const struct FString& LocationTag);//Offset:Discovery.exe+0x5D898D0
	void STATIC_FoundStartLocation(class UObject* WorldContextObject, int64_t Player, const struct FString& PointName, const struct FVector& Location, float NearestEnemySquared, float NearestObjectiveSquared);//Offset:Discovery.exe+0x5D89BC0
	void STATIC_FallDamage(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, float DamageTaken, float HealthBefore, float HealthAfter);//Offset:Discovery.exe+0x5D89DF0
	void STATIC_ExtractionTimerStarted(class UObject* WorldContextObject, const struct FString& Name, int ExtractionCycle);//Offset:Discovery.exe+0x5D8A010
	void STATIC_ExtractionFinalized(class UObject* WorldContextObject, const struct FString& Name, int PlayerAmount, int ExtractionCycle);//Offset:Discovery.exe+0x5D8A150
	void STATIC_ExtractedInventorySlot2(class UObject* WorldContextObject, int64_t Player, int64_t Amount, int64_t GameAssetId, const struct FString& InstanceId, const struct FString& Container, int64_t Value);//Offset:Discovery.exe+0x5D8A2D0
	void STATIC_ExtractedInventorySlot(class UObject* WorldContextObject, int64_t Player, int64_t Amount, int64_t GameAssetId, const struct FString& InstanceId, const struct FString& Container);//Offset:Discovery.exe+0x5D8A570
	void STATIC_ExpectedPlayersProxy(class UObject* WorldContextObject, int64_t Amount, TArray<int64_t> ExpectedPlayerIds);//Offset:Discovery.exe+0x5D8A7B0
	void STATIC_EOSProductUserId(class UObject* WorldContextObject, int64_t Player, const struct FString& ProductUserId);//Offset:Discovery.exe+0x5D8DAF0
	void STATIC_EnemyWeaponFired2(class UObject* WorldContextObject, const struct FString& Weapon, const struct FString& ProjectileClass, const struct FVector& Location, const struct FVector& Direction, const struct FString& Enemy, int64_t EnemyId, int64_t TargetPlayer, int64_t TargetGameAssetId);//Offset:Discovery.exe+0x5D8A8F0
	void STATIC_EnemyWeaponFired(class UObject* WorldContextObject, const struct FString& Weapon, const struct FString& ProjectileClass, const struct FVector& Location, const struct FVector& Direction, const struct FString& Enemy, int64_t EnemyId, int64_t TargetPlayerId, int64_t TargetGameAssetId);//Offset:Discovery.exe+0x5D8AC70
	void STATIC_EnemySpawned3(class UObject* WorldContextObject, const struct FString& Enemy, const struct FVector& Location, int64_t GroupId, int64_t EnemyId, int64_t EnemySpawnId, const struct FString& Alertness);//Offset:Discovery.exe+0x5D8AFF0
	void STATIC_EnemySpawned2(class UObject* WorldContextObject, const struct FString& Enemy, const struct FVector& Location, int64_t GroupId, int64_t EnemyId, int64_t EnemySpawnId);//Offset:Discovery.exe+0x5D8B2A0
	void STATIC_EnemyScavengeLooted(class UObject* WorldContextObject, const struct FString& ScavengeName);//Offset:Discovery.exe+0x5D8B4E0
	void STATIC_EnemyScavengeCreated(class UObject* WorldContextObject, const struct FString& ScavengeName);//Offset:Discovery.exe+0x5D8B5D0
	void STATIC_EnemyPosition(class UObject* WorldContextObject, int64_t EnemySpawnId, const struct FVector& Location, const struct FVector& ForwardVector, const struct FVector& Velocity, const struct FString& Enemy, int64_t EnemyId);//Offset:Discovery.exe+0x5D8B6C0
	void STATIC_EnemyPhysicsKill(class UObject* WorldContextObject, int64_t EnemyId, const struct FVector& Location, const struct FString& DamageCauser, const struct FString& Target);//Offset:Discovery.exe+0x5D8B980
	void STATIC_EnemyPhysicsDamage(class UObject* WorldContextObject, int64_t EnemyId, float DamageTaken, const struct FString& PartHit, const struct FVector& Location, bool bIsCriticalPart, const struct FString& DamageCauser, const struct FString& Target);//Offset:Discovery.exe+0x5D8BB80
	void STATIC_EnemyKill2(class UObject* WorldContextObject, int64_t Player, int64_t EnemyId, int64_t WeaponId, int64_t ProjectileId, const struct FVector& Location, const struct FString& DamageCauser, const struct FString& Target);//Offset:Discovery.exe+0x5D8BEB0
	void STATIC_EnemyEvict2(class UObject* WorldContextObject, const struct FString& Enemy, const struct FVector& Location, int64_t EnemyId, bool bInCombat, const struct FString& Reason, int64_t EnemySpawnId);//Offset:Discovery.exe+0x5D8C1D0
	void STATIC_EnemyDestroyed(class UObject* WorldContextObject, int64_t EnemySpawnId, int64_t EnemyId, const struct FVector& Location, const struct FString& Target);//Offset:Discovery.exe+0x5D8C490
	void STATIC_EnemyDamagePlayer2(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t GameAssetId, const struct FString& Enemy, const struct FVector& EnemyLocation, float HealthBefore, float HealthAfter, const struct FString& DamageCauser, bool bIsDbno, const struct FString& BoneHit);//Offset:Discovery.exe+0x5D8CC00
	void STATIC_EnemyDamage2(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& DamageCauser, int64_t WeaponId, const struct FString& Weapon, int64_t ProjectileId, const struct FString& Target, const struct FVector& TargetLocation, int64_t EnemyId, int64_t PartID, const struct FString& PartHit, float DamageTaken, bool bIsCriticalPart);//Offset:Discovery.exe+0x5D8C670
	void STATIC_EnemyDamage(class UObject* WorldContextObject, int64_t Player, int64_t EnemyId, int64_t WeaponId, int64_t ProjectileId, float DamageTaken, const struct FString& PartHit, const struct FVector& Location, const struct FString& Weapon, bool bIsCriticalPart, const struct FString& DamageCauser, const struct FString& Target);//Offset:Discovery.exe+0x5D8D060
	void STATIC_EnemyAlert2(class UObject* WorldContextObject, const struct FString& Enemy, const struct FString& NewAlertness, const struct FString& OldAlertness, const struct FString& AlertnessSource, const struct FString& Sense, const struct FString& LastTag, const struct FVector& Location, int64_t EnemyId);//Offset:Discovery.exe+0x5D8D530
	void STATIC_EnemyAbilityActivated(class UObject* WorldContextObject, const struct FString& Enemy, int64_t EnemyId, const struct FString& AbilityTag, const struct FVector& Location);//Offset:Discovery.exe+0x5D8D900
	void STATIC_DropItem(class UObject* WorldContextObject, int64_t Player, int64_t Amount, const struct FVector& Location, int64_t GameAssetId, const struct FString& InstanceId, const struct FString& Container);//Offset:Discovery.exe+0x5D8DC30
	void STATIC_DisregardItem(class UObject* WorldContextObject, int64_t PlayerId, int64_t GameAssetId, const struct FString& InstanceId, int StackSize, const struct FString& LootContainer);//Offset:Discovery.exe+0x5D8DEF0
	void STATIC_DisqualifiedRespawnPoint2(class UObject* WorldContextObject, int64_t Player, const struct FString& PointName, const struct FString& Reason, const struct FVector& Location, float DistanceSquared, const struct FString& Ctx);//Offset:Discovery.exe+0x5D8E130
	void STATIC_DisqualifiedRespawnPoint(class UObject* WorldContextObject, int64_t Player, const struct FString& PointName, const struct FString& Reason, const struct FVector& Location, float DistanceSquared);//Offset:Discovery.exe+0x5D8E400
	void STATIC_DiscoXpRewardTelemetry(class UObject* WorldContextObject, int64_t Player, int64_t BucketId, int64_t Amount, const struct FString& EventTag, int64_t ItemId);//Offset:Discovery.exe+0x5D8E650
	void STATIC_DiscoWeaponHitThing2(class UObject* WorldContextObject, int64_t Player, const struct FString& Weapon, int64_t WeaponId, const struct FString& Target, const struct FVector& TargetLocation);//Offset:Discovery.exe+0x5D8E880
	void STATIC_DiscoWeaponHitPlayer3(class UObject* WorldContextObject, int64_t Player, const struct FString& Weapon, int64_t WeaponId, int64_t TargetPlayer, const struct FVector& TargetLocation, bool bIsEnemy, bool bIsHeadshot);//Offset:Discovery.exe+0x5D8EAE0
	void STATIC_DiscoVaultSpawned2(class UObject* WorldContextObject, const struct FVector& Location, int Cash, int64_t VaultIndex);//Offset:Discovery.exe+0x5D8EDD0
	void STATIC_DiscoVaultOpenStarted(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int VaultIndex);//Offset:Discovery.exe+0x5D8F0D0
	void STATIC_DiscoVaultOpened(class UObject* WorldContextObject, int VaultIndex, const struct FVector& Location, int CaseAmount);//Offset:Discovery.exe+0x5D8EF50
	void STATIC_DiscoUseRespawnCredit(class UObject* WorldContextObject, int64_t Player, int RemainingRespawnCredits);//Offset:Discovery.exe+0x5D8F250
	void STATIC_DiscoUpdatedLoadoutItem(class UObject* WorldContextObject, int64_t Player, const struct FString& Item, int64_t ItemId, const struct FString& LoadoutUpdateId);//Offset:Discovery.exe+0x5D8F380
	void STATIC_DiscoUIRoundStateChange(class UObject* WorldContextObject, const struct FString& State);//Offset:Discovery.exe+0x5D8F570
	void STATIC_DiscoTriggerRemoteItem(class UObject* WorldContextObject, int64_t Player, const struct FString& ProjectileName, const struct FVector& Location);//Offset:Discovery.exe+0x5D8F660
	void STATIC_DiscoTransferPointSpawned(class UObject* WorldContextObject, int TransferPointId, const struct FVector& Location);//Offset:Discovery.exe+0x5D8F7F0
	void STATIC_DiscoTransferPointPosition(class UObject* WorldContextObject, int TransferPointId, const struct FVector& Location);//Offset:Discovery.exe+0x5D8F920
	void STATIC_DiscoTransferPointDespawned(class UObject* WorldContextObject, int TransferPointId, const struct FVector& Location);//Offset:Discovery.exe+0x5D8FA50
	void STATIC_DiscoTransferCompleted(class UObject* WorldContextObject, const struct FVector& Location, int TransferPointId, int Cash, int SquadIndex);//Offset:Discovery.exe+0x5D8FB80
	void STATIC_DiscoTournamentWon(class UObject* WorldContextObject, int64_t Player);//Offset:Discovery.exe+0x5D8FD50
	void STATIC_DiscoTombstoneRespawn(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation);//Offset:Discovery.exe+0x5D8FE30
	void STATIC_DiscoTicketSpawn2(class UObject* WorldContextObject, int TicketIndex, const struct FVector& Location, int Cash);//Offset:Discovery.exe+0x5D90000
	void STATIC_DiscoTicketPosition2(class UObject* WorldContextObject, int TicketIndex, const struct FVector& Location);//Offset:Discovery.exe+0x5D90180
	void STATIC_DiscoTicketPickup2(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int TicketIndex);//Offset:Discovery.exe+0x5D902B0
	void STATIC_DiscoTicketInserted2(class UObject* WorldContextObject, int64_t Player, int TicketIndex, const struct FVector& Location, int TransferPointId, int Cash);//Offset:Discovery.exe+0x5D90430
	void STATIC_DiscoTicketDrop2(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int TicketIndex);//Offset:Discovery.exe+0x5D90650
	void STATIC_DiscoStartTraining(class UObject* WorldContextObject, int64_t Player);//Offset:Discovery.exe+0x5D907D0
	void STATIC_DiscoSquadWiped(class UObject* WorldContextObject, int64_t Player);//Offset:Discovery.exe+0x5D908B0
	void STATIC_DiscoSquadRoundCurrencyChanged(class UObject* WorldContextObject, int SquadId, int PreviousRoundCurrency, int CurrentRoundCurrency, int RoundCurrencyDelta);//Offset:Discovery.exe+0x5D90990
	void STATIC_DiscoSelfDamage2(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& Causer, int64_t CauserId, float DamageTaken, float PreviousHealth, float CurrentHealth, int DamageType, bool bIsDbno, const struct FString& DamageTypeTag, const struct FString& SourceTag);//Offset:Discovery.exe+0x5D90B50
	void STATIC_DiscoSelfDamage(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& Causer, int64_t CauserId, float DamageTaken, float PreviousHealth, float CurrentHealth, int DamageType, bool bIsDbno, const struct FString& DamageTypeTag);//Offset:Discovery.exe+0x5D91010
	void STATIC_DiscoSelectedSpray(class UObject* WorldContextObject, int64_t Player, const struct FString& Name, int64_t GameAssetId);//Offset:Discovery.exe+0x5D91440
	void STATIC_DiscoSelectedPose(class UObject* WorldContextObject, int64_t Player, const struct FString& Name, int64_t GameAssetId, const struct FString& PoseType);//Offset:Discovery.exe+0x5D915C0
	void STATIC_DiscoRoundCurrencyChanged(class UObject* WorldContextObject, int64_t Player, int PreviousRoundCurrency, int CurrentRoundCurrency, int RoundCurrencyDelta);//Offset:Discovery.exe+0x5D917B0
	void STATIC_DiscoRespawn(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int RemainingRespawnCredits);//Offset:Discovery.exe+0x5D91970
	void STATIC_DiscoReserveItem(class UObject* WorldContextObject, int64_t Player, const struct FString& Item, int64_t ItemId);//Offset:Discovery.exe+0x5D91AF0
	void STATIC_DiscoQuestCompleted(class UObject* WorldContextObject, int64_t Player, const struct FString& QuestInstanceId, int64_t QuestAssetId);//Offset:Discovery.exe+0x5D91C70
	void STATIC_DiscoPreLoginEvent(class UObject* WorldContextObject, int64_t Player, bool bIsAllowedToConnect);//Offset:Discovery.exe+0x5D91DF0
	void STATIC_DiscoPlayerStartSteal(class UObject* WorldContextObject, int64_t Player, int TransferPointId, int Cash);//Offset:Discovery.exe+0x5D91F20
	void STATIC_DiscoPlayerSpawn2(class UObject* WorldContextObject, int64_t Player, int64_t SquadId, const struct FString& Squad, const struct FVector& Location, const struct FString& CharacterArchetype, const struct FString& GameMode, const struct FString& MapName, const struct FString& Deck);//Offset:Discovery.exe+0x5D92090
	void STATIC_DiscoPlayerReconnect(class UObject* WorldContextObject, int64_t Player);//Offset:Discovery.exe+0x5D92440
	void STATIC_DiscoPlayerHealPlayer(class UObject* WorldContextObject, int64_t Player, int64_t TargetPlayer, int64_t GameAssetId, float AmountHealed);//Offset:Discovery.exe+0x5D92520
	void STATIC_DiscoPlayerHeal(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, const struct FString& Causer, float AmountHealed, float PreviousHealth, float CurrentHealth, bool bIsDbno);//Offset:Discovery.exe+0x5D926F0
	void STATIC_DiscoPlayerFinishSteal(class UObject* WorldContextObject, int64_t Player, int TransferPointId, int Cash);//Offset:Discovery.exe+0x5D92AB0
	void STATIC_DiscoPlayerEliminated(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location);//Offset:Discovery.exe+0x5D92C20
	void STATIC_DiscoPlayerDisconnect(class UObject* WorldContextObject, int64_t Player, const struct FString& Reason);//Offset:Discovery.exe+0x5D92D50
	void STATIC_DiscoPlayerDie(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location);//Offset:Discovery.exe+0x5D92E90
	void STATIC_DiscoPlayerDepartedTournament(class UObject* WorldContextObject, int64_t Player);//Offset:Discovery.exe+0x5D92FC0
	void STATIC_DiscoPlayerAbandonedTournament(class UObject* WorldContextObject, int64_t Player);//Offset:Discovery.exe+0x5D930A0
	void STATIC_DiscoLoadoutItem2(class UObject* WorldContextObject, int64_t Player, const struct FString& Item, int64_t ItemId);//Offset:Discovery.exe+0x5D93180
	void STATIC_DiscoKillAssist(class UObject* WorldContextObject, int64_t Player, int64_t TargetPlayer);//Offset:Discovery.exe+0x5D93300
	void STATIC_DiscoItemUse(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& Name, int64_t ItemId, int AmountBefore, int AmountNow);//Offset:Discovery.exe+0x5D93430
	void STATIC_DiscoItemUsageStat(class UObject* WorldContextObject, int64_t Player, int64_t ItemId, const struct FString& Tag, float Modifier, float Usage, const struct FString& Description);//Offset:Discovery.exe+0x5D936D0
	void STATIC_DiscoHealthChanged2(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& Causer, float DamageTaken, float PreviousHealth, float CurrentHealth, int DamageType, bool bIsDbno, const struct FString& DamageTypeTag);//Offset:Discovery.exe+0x5D93970
	void STATIC_DiscoGameModeStart(class UObject* WorldContextObject, const struct FString& EnvironmentalCondition, const struct FString& VariantName, TArray<struct FString> SpawnTypes, TArray<struct FString> RandomGameShowEvents);//Offset:Discovery.exe+0x5D93D30
	void STATIC_DiscoGameModeRequest(class UObject* WorldContextObject, const struct FString& DesiredGameMode, const struct FString& ResultingGameMode);//Offset:Discovery.exe+0x5D93FD0
	void STATIC_DiscoEquipItem(class UObject* WorldContextObject, int64_t Player, const struct FString& ItemName, int64_t GameAssetId);//Offset:Discovery.exe+0x5D94110
	void STATIC_DiscoEnemyKilled(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation);//Offset:Discovery.exe+0x5D94290
	void STATIC_DiscoEnemyDamage7(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, const struct FString& Causer, int64_t CauserId, float DamageTaken, float PreviousHealth, float CurrentHealth, int DamageType, bool bIsDbno, const struct FString& DamageTypeTag, bool bIsHeadshot, const struct FString& SourceTag, float Distance);//Offset:Discovery.exe+0x5D94460
	void STATIC_DiscoEnemyDamage6(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, const struct FString& Causer, int64_t CauserId, float DamageTaken, float PreviousHealth, float CurrentHealth, int DamageType, bool bIsDbno, const struct FString& DamageTypeTag, bool bIsHeadshot, const struct FString& SourceTag);//Offset:Discovery.exe+0x5D94AB0
	void STATIC_DiscoEnemyDamage5(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, const struct FString& Causer, int64_t CauserId, float DamageTaken, float PreviousHealth, float CurrentHealth, int DamageType, bool bIsDbno, const struct FString& DamageTypeTag, bool bIsHeadshot);//Offset:Discovery.exe+0x5D950B0
	void STATIC_DiscoEnemyDamage4(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, const struct FString& Causer, int64_t CauserId, float DamageTaken, float PreviousHealth, float CurrentHealth, int DamageType, bool bIsDbno, const struct FString& DamageTypeTag);//Offset:Discovery.exe+0x5D95630
	void STATIC_DiscoDefibRespawn(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation);//Offset:Discovery.exe+0x5D95B50
	void STATIC_DiscoCloakedBackHit(class UObject* WorldContextObject, int64_t Player);//Offset:Discovery.exe+0x5D95D20
	void STATIC_DiscoCharacterCustomizationItem(class UObject* WorldContextObject, int64_t Player, const struct FString& Item, int64_t ItemId);//Offset:Discovery.exe+0x5D95E00
	void STATIC_DiscoCaseSpawned(class UObject* WorldContextObject, const struct FVector& Location);//Offset:Discovery.exe+0x5D95F80
	void STATIC_DiscoCasePickup(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FVector& CaseLocation, int PreviousCash, int CaseValue);//Offset:Discovery.exe+0x5D96060
	void STATIC_DiscoBankItTransferStarted(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int TransferPointId, const struct FVector& TransferPointLocation, int Cash, int SquadIndex);//Offset:Discovery.exe+0x5D96290
	void STATIC_DiscoBankItTransferCompleted(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int TransferPointId, const struct FVector& TransferPointLocation, int Cash, int SquadIndex);//Offset:Discovery.exe+0x5D96520
	void STATIC_DiscoAssignPlayerSquad(class UObject* WorldContextObject, int64_t Player, int64_t SquadId, const struct FString& Squad);//Offset:Discovery.exe+0x5D967B0
	void STATIC_DiscoAddRankBucketRewardXp(class UObject* WorldContextObject, int64_t Player, int64_t BucketId, int64_t Amount);//Offset:Discovery.exe+0x5D96930
	void STATIC_DiedInventorySlot2(class UObject* WorldContextObject, int64_t Player, int64_t Amount, int64_t GameAssetId, const struct FString& InstanceId, const struct FString& Container, int64_t Value);//Offset:Discovery.exe+0x5D96AA0
	void STATIC_DiedInventorySlot(class UObject* WorldContextObject, int64_t Player, int64_t Amount, int64_t GameAssetId, const struct FString& InstanceId, const struct FString& Container);//Offset:Discovery.exe+0x5D96D40
	void STATIC_DevInstanceKey(class UObject* WorldContextObject, const struct FString& DevInstanceKey);//Offset:Discovery.exe+0x5D96F80
	void STATIC_DestructionStartSimulate(class UObject* WorldContextObject, int64_t Size, const struct FVector& Location);//Offset:Discovery.exe+0x5D97070
	void STATIC_DestructionCutConnection(class UObject* WorldContextObject, int64_t StrainConnects, int64_t BrokenLinks);//Offset:Discovery.exe+0x5D971A0
	void STATIC_DestructionBoneDestroyed(class UObject* WorldContextObject, const struct FVector& Location);//Offset:Discovery.exe+0x5D972D0
	void STATIC_DefibReviveFailed(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, int64_t TargetPlayer, const struct FVector& TargetLocation, float PlayerPing, float TargetPlayerPing, const struct FString& Reason);//Offset:Discovery.exe+0x5D973B0
	void STATIC_CompleteTutorialObjective(class UObject* WorldContextObject, int64_t Player, const struct FString& Objective);//Offset:Discovery.exe+0x5D976C0
	void STATIC_AutobotSpawned(class UObject* WorldContextObject, int64_t Player, bool bIsServerBot);//Offset:Discovery.exe+0x5D97800
	void STATIC_ArmorDamage(class UObject* WorldContextObject, int64_t Player, const struct FVector& Location, const struct FString& Armor, const struct FString& Enemy, float ArmorBefore, float ArmorAfter, const struct FString& DamageCauser, int64_t EnemyId, int64_t ArmorId);//Offset:Discovery.exe+0x5D97930
	void STATIC_AppInfo(class UObject* WorldContextObject, const struct FString& AppId, const struct FString& BranchName, const struct FString& CountryCode, int64_t Player);//Offset:Discovery.exe+0x5D97D10
	void STATIC_AntiCheatPlayerActionRequiredServer(class UObject* WorldContextObject, int64_t Player, const struct FString& ClientAction, const struct FString& Reason, const struct FString& Details);//Offset:Discovery.exe+0x5D97F00
	void STATIC_AngelscriptServerError(class UObject* WorldContextObject, const struct FString& Source, const struct FString& Message);//Offset:Discovery.exe+0x5D98100
	void STATIC_AimingValidationFailed(class UObject* WorldContextObject, int64_t Player, float PlayerPing, const struct FVector& ClientAimingLocation, const struct FString& Reason);//Offset:Discovery.exe+0x5D98240
	void STATIC_AimBasedForceApplication(class UObject* WorldContextObject, int64_t Player, float ForceMagnitude, const struct FVector& Location, const struct FString& Target, int64_t TargetId);//Offset:Discovery.exe+0x5D98420
	void STATIC_AddQuestProgress2(class UObject* WorldContextObject, int64_t Player, const struct FString& QuestInstanceId, int64_t Amount, int64_t QuestAssetId);//Offset:Discovery.exe+0x5D98660
	void STATIC_AddPersistedItem(class UObject* WorldContextObject, int64_t Player, const struct FString& Source, int64_t GameAssetId, const struct FString& AssetType, int64_t Amount, TArray<int64_t> Breakthroughs);//Offset:Discovery.exe+0x5D98830
	void STATIC_ActivatedAbility(class UObject* WorldContextObject, int64_t Player, const struct FString& Ability, const struct FVector& Location);//Offset:Discovery.exe+0x5D98B00
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
