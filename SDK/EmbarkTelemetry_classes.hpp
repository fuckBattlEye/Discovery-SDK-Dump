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

// Class EmbarkTelemetry.EmbarkRoundPerformanceTelemetry
// 0x0000 (0x0028 - 0x0028)
class UEmbarkRoundPerformanceTelemetry : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkTelemetry.EmbarkRoundPerformanceTelemetry"));
		return ptr;
	}


	void STATIC_StartTrackingRoundPerformance();//Offset:Discovery.exe+0x1F3E860
	void STATIC_FinishTrackingRoundPerformance();//Offset:Discovery.exe+0x1F3E840
};


// Class EmbarkTelemetry.EmbarkTelemetryAPI
// 0x0000 (0x0028 - 0x0028)
class UEmbarkTelemetryAPI : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkTelemetry.EmbarkTelemetryAPI"));
		return ptr;
	}


	void STATIC_VoiceEnabledChanged(bool bEnabled);//Offset:Discovery.exe+0x1F3EC30
	void STATIC_VideoSkip();//Offset:Discovery.exe+0x1F3ECC0
	void STATIC_VideoEnd();//Offset:Discovery.exe+0x1F3ECE0
	void STATIC_UpgradeChamberGenerator2(int64_t OfferId, int64_t OldGeneratorAssetId, const struct FString& OldGeneratorInstanceId, const struct FString& OldGeneratorName, int64_t NewGeneratorAssetId, const struct FString& NewGeneratorInstanceId, int64_t ChamberAssetId, const struct FString& ChamberInstanceId, TArray<int64_t> ConsumesGameAssetIds, TArray<int64_t> ConsumesAmounts, TArray<int64_t> ProducesGameAssetIds, TArray<int64_t> ProducesAmounts);//Offset:Discovery.exe+0x1F3ED00
	void STATIC_UpgradeChamberGenerator(int64_t OfferId, int64_t OldGeneratorAssetId, const struct FString& OldGeneratorInstanceId, int64_t NewGeneratorAssetId, const struct FString& NewGeneratorInstanceId, const struct FString& GeneratorName, int64_t ChamberAssetId, const struct FString& ChamberInstanceId);//Offset:Discovery.exe+0x1F3F240
	void STATIC_UpdateDeckSlot(const struct FString& FirstSlotId, int64_t FirstGameAssetId, const struct FString& FirstSlotType, int64_t SecondAssetId, bool bIsDrafting);//Offset:Discovery.exe+0x1F3F570
	void STATIC_ThirdPartyProductViewLoad2(const struct FString& StoreSessionId, const struct FString& ThirdPartyStoreId, int64_t ThirdPartyProductId);//Offset:Discovery.exe+0x1F3F760
	void STATIC_TestEvent(const struct FString& Stuff);//Offset:Discovery.exe+0x1F3F8A0
	void STATIC_TamperAction(int Value);//Offset:Discovery.exe+0x1F3F940
	void STATIC_SwapDeckSlot(const struct FString& FirstSlotId, int64_t FirstGameAssetId, const struct FString& FirstSlotType, const struct FString& SecondSlotId, int64_t SecondAssetId, const struct FString& SecondSlotType, bool bIsDrafting);//Offset:Discovery.exe+0x1F3F9D0
	void STATIC_SurveyOpen3(const struct FString& SurveyId, const struct FString& SurveyType, const struct FString& URL);//Offset:Discovery.exe+0x1F3FCA0
	void STATIC_StoreViewLoad2(const struct FString& StoreSessionId, int64_t ViewId, TArray<int64_t> LayoutIds, TArray<int64_t> EmbarkProductIds, const struct FString& ThirdPartyStoreId, TArray<int64_t> ThirdPartyProductIds);//Offset:Discovery.exe+0x1F3FDF0
	void STATIC_StoreSessionDone(const struct FString& StoreSessionId);//Offset:Discovery.exe+0x1F400A0
	void STATIC_StoreSessionBegin2(const struct FString& StoreSessionId, const struct FString& ScreenName);//Offset:Discovery.exe+0x1F40140
	void STATIC_StashStatus(int64_t Currency, TArray<int64_t> GameAssetIds, TArray<int64_t> ItemAmounts, int64_t StashValue);//Offset:Discovery.exe+0x1F40240
	void STATIC_StartGameMode2(int64_t PowerRating, const struct FString& GameMode, const struct FString& GameModeIdentifier, const struct FString& Severity);//Offset:Discovery.exe+0x1F40400
	void STATIC_StartGameMode(int64_t PowerRating, const struct FString& GameMode, const struct FString& GameModeIdentifier, const struct FString& Severity);//Offset:Discovery.exe+0x1F405A0
	void STATIC_StartChamberGeneratorCraft2(int64_t OfferId, const struct FString& OfferInstanceId, int64_t GeneratorAssetId, const struct FString& GeneratorInstanceId, const struct FString& GeneratorName, TArray<int64_t> ConsumesGameAssetIds, TArray<int64_t> ConsumesAmounts, TArray<int64_t> ProducesGameAssetIds, TArray<int64_t> ProducesAmounts);//Offset:Discovery.exe+0x1F40740
	void STATIC_StartChamberGeneratorCraft(int64_t OfferId, const struct FString& OfferInstanceId, const struct FString& GeneratorName);//Offset:Discovery.exe+0x1F40B50
	void STATIC_SettingsChanged(const struct FString& Tag, const struct FString& OldValue, const struct FString& NewValue);//Offset:Discovery.exe+0x1F40C90
	void STATIC_SelectedRegion(const struct FString& Region);//Offset:Discovery.exe+0x1F40DE0
	void STATIC_ScrapItem(int64_t TypeId, const struct FString& InstanceId, int64_t Amount, float Durability);//Offset:Discovery.exe+0x1F40E80
	void STATIC_RoundPerformanceFrameStats(const struct FString& MeasurmentId, int64_t GameThreadBoundCount, int64_t RenderThreadBoundCount, int64_t RhiThreadBoundCount, int64_t GpuBoundCount, int64_t TotalHitchCount, int64_t GameThreadHitchCount, int64_t RenderThreadHitchCount, int64_t RhiThreadHitchCount, int64_t GpuHitchCount);//Offset:Discovery.exe+0x1F41000
	void STATIC_RoundPerformanceBin(const struct FString& MeasurmentId, float MinValue, float MaxValue, int64_t Count, float Sum);//Offset:Discovery.exe+0x1F413C0
	void STATIC_RoundPerformance(const struct FString& MeasurmentId, const struct FString& StatName, int64_t TotalCount, float TotalSum);//Offset:Discovery.exe+0x1F41590
	void STATIC_RHITelemetry(const struct FString& LoadedRhiName, const struct FString& ForcedRhiName);//Offset:Discovery.exe+0x1F41820
	void STATIC_RegionChanged(const struct FString& OldRegion, const struct FString& NewRegion);//Offset:Discovery.exe+0x1F41720
	void STATIC_QuilkinRegionLatency(const struct FString& Endpoint, const struct FString& Region, float Latency);//Offset:Discovery.exe+0x1F41920
	void STATIC_QualityPreset(int QualityPreset);//Offset:Discovery.exe+0x1F41A60
	void STATIC_PredictionBufferOverflow();//Offset:Discovery.exe+0x1F41AF0
	void STATIC_PlayerReportPlayer2(const struct FString& TargetPlayer, const struct FString& Reason);//Offset:Discovery.exe+0x1F41B10
	void STATIC_ModalDestroyed(const struct FString& Name, const struct FString& Screen);//Offset:Discovery.exe+0x1F41C10
	void STATIC_ModalDeactivated(const struct FString& Name, const struct FString& Screen);//Offset:Discovery.exe+0x1F41D10
	void STATIC_ModalCreated(const struct FString& Name, const struct FString& Screen);//Offset:Discovery.exe+0x1F41E10
	void STATIC_MatchmakingStatus(const struct FString& TicketId, const struct FString& PreviousStatus, const struct FString& NewStatus);//Offset:Discovery.exe+0x1F41F10
	void STATIC_MatchmakingGameserverAvailable(const struct FString& TicketId, const struct FString& GameserverName, const struct FString& GameserverHost, int GameserverPort);//Offset:Discovery.exe+0x1F42060
	void STATIC_MapInteraction2(const struct FString& Interaction);//Offset:Discovery.exe+0x1F42200
	void STATIC_MainMenuQuickPurchase(int64_t AssetId, int64_t ProductId);//Offset:Discovery.exe+0x1F422A0
	void STATIC_MainMenuOffer(int64_t AssetId, int64_t ProductId);//Offset:Discovery.exe+0x1F42380
	void STATIC_LocalizationSetting(const struct FString& Locale);//Offset:Discovery.exe+0x1F42460
	void STATIC_KeyboardBindingsChange(const struct FString& Action, const struct FString& Key);//Offset:Discovery.exe+0x1F42500
	void STATIC_ItemUnlockStart(int64_t GameAssetId);//Offset:Discovery.exe+0x1F426B0
	void STATIC_ItemsNotBroughtToSession(TArray<int64_t> GameAssetIds);//Offset:Discovery.exe+0x1F42600
	void STATIC_HardwareScore(float CpuScore, float GpuScore);//Offset:Discovery.exe+0x1F42740
	struct FString STATIC_GetClientUuid();//Offset:Discovery.exe+0x1F3EBB0
	void STATIC_FallbackLoadout(int64_t LoadoutId, TArray<int64_t> Items);//Offset:Discovery.exe+0x1F42820
	void STATIC_ExpandChamber(int64_t ChamberAssetId, const struct FString& ChamberName);//Offset:Discovery.exe+0x1F42920
	void STATIC_EnterScreenView3(const struct FString& CurrentScreenName, const struct FString& FromScreenName, const struct FString& MapName, const struct FString& Payload);//Offset:Discovery.exe+0x1F42A10
	void STATIC_EnterScreenView2(const struct FString& CurrentScreenName, const struct FString& FromScreenName, const struct FString& MapName);//Offset:Discovery.exe+0x1F42BC0
	void STATIC_EnterGameModeScreen2(int64_t PowerRating);//Offset:Discovery.exe+0x1F42D10
	void STATIC_EmbarkStoreProductViewLoad(const struct FString& StoreSessionId, int64_t EmbarkProductId);//Offset:Discovery.exe+0x1F42DA0
	void STATIC_EditPack(bool bIsNew);//Offset:Discovery.exe+0x1F42F90
	void STATIC_EditorToolUsage(const struct FString& ToolName, const struct FString& FunctionName);//Offset:Discovery.exe+0x1F42E90
	void STATIC_DropPinDebug3(const struct FVector& Location, float Pitch, float Roll, float Yaw, const struct FString& Category);//Offset:Discovery.exe+0x1F43020
	void STATIC_DismantleChamberGenerator2(int64_t OfferId, int64_t GeneratorAssetId, const struct FString& GeneratorInstanceId, const struct FString& GeneratorName, int64_t ChamberAssetId, const struct FString& ChamberInstanceId, TArray<int64_t> ConsumesGameAssetIds, TArray<int64_t> ConsumesAmounts, TArray<int64_t> ProducesGameAssetIds, TArray<int64_t> ProducesAmounts);//Offset:Discovery.exe+0x1F43210
	void STATIC_DismantleChamberGenerator(int64_t OfferId, int64_t GeneratorAssetId, const struct FString& GeneratorInstanceId, const struct FString& GeneratorName, int64_t ChamberAssetId, const struct FString& ChamberInstanceId);//Offset:Discovery.exe+0x1F43680
	void STATIC_DiscoUpdatePack(const struct FString& DefaultPackId, const struct FString& PackId, const struct FString& Name, int64_t RemainingCredits, TArray<int64_t> LoadoutItemIds, TArray<int64_t> ReserveItemIds);//Offset:Discovery.exe+0x1F438E0
	void STATIC_DiscoTravelToNextTier(const struct FString& HostName);//Offset:Discovery.exe+0x1F43B80
	void STATIC_DiscoTournamentMatchUpdate(const struct FString& Status);//Offset:Discovery.exe+0x1F43C20
	void STATIC_DiscoToggleWeaponSticker2(int64_t GameAssetId, bool bEquip);//Offset:Discovery.exe+0x1F43CC0
	void STATIC_DiscoToggleWeaponCharm2(int64_t GameAssetId, bool bEquip);//Offset:Discovery.exe+0x1F43DA0
	void STATIC_DiscoToggleSprayItem(int64_t GameAssetId, bool bEquip);//Offset:Discovery.exe+0x1F43E80
	void STATIC_DiscoTogglePoseItem(int64_t GameAssetId, bool bEquip);//Offset:Discovery.exe+0x1F43F60
	void STATIC_DiscoToggleEmoteItem(int64_t GameAssetId, bool bEquip);//Offset:Discovery.exe+0x1F44040
	void STATIC_DiscoToggleCosmeticItem(int64_t GameAssetId, bool bEquip);//Offset:Discovery.exe+0x1F44120
	void STATIC_DiscoSelectWeaponSticker2(int64_t GameAssetId);//Offset:Discovery.exe+0x1F44200
	void STATIC_DiscoSelectWeaponSkin2(int64_t GameAssetId);//Offset:Discovery.exe+0x1F44290
	void STATIC_DiscoSelectWeaponCharm2(int64_t GameAssetId);//Offset:Discovery.exe+0x1F44320
	void STATIC_DiscoSelectSprayItem(int64_t GameAssetId);//Offset:Discovery.exe+0x1F443B0
	void STATIC_DiscoSelectPoseItem(int64_t GameAssetId);//Offset:Discovery.exe+0x1F44440
	void STATIC_DiscoSelectPack2(const struct FString& PackId, TArray<int64_t> LoadoutItemIds, TArray<int64_t> ReserveItemIds);//Offset:Discovery.exe+0x1F444D0
	void STATIC_DiscoSelectEmoteItem(int64_t GameAssetId);//Offset:Discovery.exe+0x1F44640
	void STATIC_DiscoSelectCosmeticItem(int64_t GameAssetId);//Offset:Discovery.exe+0x1F446D0
	void STATIC_DiscoEquipWeaponSkin2(int64_t GameAssetId);//Offset:Discovery.exe+0x1F44760
	void STATIC_DiscoConnectedToServer2(const struct FString& HostName);//Offset:Discovery.exe+0x1F447F0
	void STATIC_CompleteChamberGeneratorCraft2(int64_t OfferId, const struct FString& OfferInstanceId, int64_t GeneratorAssetId, const struct FString& GeneratorInstanceId, const struct FString& GeneratorName, TArray<int64_t> ConsumesGameAssetIds, TArray<int64_t> ConsumesAmounts, TArray<int64_t> ProducesGameAssetIds, TArray<int64_t> ProducesAmounts);//Offset:Discovery.exe+0x1F44890
	void STATIC_CompleteChamberGeneratorCraft(int64_t OfferId, const struct FString& OfferInstanceId, const struct FString& GeneratorName);//Offset:Discovery.exe+0x1F44CA0
	void STATIC_ClientUserLoginDetails(const struct FString& TamperId, const struct FString& EOSProductUserId);//Offset:Discovery.exe+0x1F44EE0
	void STATIC_ClientUserLogin3(const struct FString& CountryCode, const struct FString& Region);//Offset:Discovery.exe+0x1F44DE0
	void STATIC_ClientThirdPartyStoreTransactionError2(const struct FString& StoreSessionId, const struct FString& ClientRequestId, const struct FString& ThirdPartyStoreId, int64_t ThirdPartyProductId, const struct FString& ResultCode, const struct FString& ErrorMessage);//Offset:Discovery.exe+0x1F44FE0
	void STATIC_ClientThirdPartyStoreTransactionDone2(const struct FString& StoreSessionId, const struct FString& ClientRequestId, const struct FString& ThirdPartyStoreId, int64_t ThirdPartyProductId, const struct FString& ResultCode);//Offset:Discovery.exe+0x1F45260
	void STATIC_ClientThirdPartyStoreTransactionBegin2(const struct FString& StoreSessionId, const struct FString& ClientRequestId, const struct FString& ThirdPartyStoreId, int64_t ThirdPartyProductId);//Offset:Discovery.exe+0x1F45470
	void STATIC_ClientSetting(const struct FString& SettingName, const struct FString& SettingValue, const struct FString& Description, int64_t SettingBatchId);//Offset:Discovery.exe+0x1F45610
	void STATIC_ClientOnlineTelemetry(const struct FString& Message);//Offset:Discovery.exe+0x1F457B0
	void STATIC_ClientHeartbeat3(const struct FString& Activity, const struct FString& Region);//Offset:Discovery.exe+0x1F45850
	void STATIC_ClientEmbarkStoreTransactionError(const struct FString& StoreSessionId, const struct FString& ClientRequestId, int64_t EmbarkProductId, const struct FString& ResultCode, const struct FString& ErrorMessage);//Offset:Discovery.exe+0x1F45950
	void STATIC_ClientEmbarkStoreTransactionDone(const struct FString& StoreSessionId, const struct FString& ClientRequestId, int64_t EmbarkProductId, const struct FString& ResultCode);//Offset:Discovery.exe+0x1F45B60
	void STATIC_ClientEmbarkStoreTransactionBegin(const struct FString& StoreSessionId, const struct FString& ClientRequestId, int64_t EmbarkProductId);//Offset:Discovery.exe+0x1F45D00
	void STATIC_ClientDeviceInfo3(const struct FString& InternalDriver, const struct FString& UserDriver, int64_t TotalRam, const struct FString& CpuModelDescriptor, const struct FString& GpuName, const struct FString& OsMajorVersion, const struct FString& DefaultLanguage, const struct FString& LoginId, int CpuCores, int CpuHyperThreads, int64_t VideoMemory);//Offset:Discovery.exe+0x1F45E40
	void STATIC_ClientCpuDetails(const struct FString& CpuidBase64);//Offset:Discovery.exe+0x1F462C0
	void STATIC_ClientBackendGameTransformationError2(const struct FString& InstanceId, int64_t AssetId, const struct FString& ErrorCode, const struct FString& DetailedInfo);//Offset:Discovery.exe+0x1F46360
	void STATIC_ClientAppInfo(const struct FString& AppId, const struct FString& BranchName, const struct FString& CountryCode);//Offset:Discovery.exe+0x1F46500
	void STATIC_ChamberGeneratorDeploymentChange(int64_t GeneratorAssetId, const struct FString& GeneratorName, int64_t ChamberAssetId, const struct FString& ChamberName, const struct FString& NewDeploymentStatus);//Offset:Discovery.exe+0x1F46650
	void STATIC_CancelChamberGeneratorCraft2(int64_t OfferId, const struct FString& OfferInstanceId, int64_t GeneratorAssetId, const struct FString& GeneratorInstanceId, const struct FString& GeneratorName, TArray<int64_t> ConsumesGameAssetIds, TArray<int64_t> ConsumesAmounts, TArray<int64_t> ProducesGameAssetIds, TArray<int64_t> ProducesAmounts);//Offset:Discovery.exe+0x1F46850
	void STATIC_CancelChamberGeneratorCraft(int64_t OfferId, const struct FString& OfferInstanceId, const struct FString& GeneratorName);//Offset:Discovery.exe+0x1F46C60
	void STATIC_ButtonPressed(const struct FString& Name, const struct FString& ParentName);//Offset:Discovery.exe+0x1F46DA0
	void STATIC_BuildChamberGenerator2(int64_t OfferId, int64_t GeneratorAssetId, const struct FString& GeneratorInstanceId, const struct FString& GeneratorName, int64_t ChamberAssetId, const struct FString& ChamberInstanceId, TArray<int64_t> ConsumesGameAssetIds, TArray<int64_t> ConsumesAmounts, TArray<int64_t> ProducesGameAssetIds, TArray<int64_t> ProducesAmounts);//Offset:Discovery.exe+0x1F46EA0
	void STATIC_BuildChamberGenerator(int64_t OfferId, int64_t GeneratorAssetId, const struct FString& GeneratorInstanceId, const struct FString& GeneratorName, int64_t ChamberAssetId, const struct FString& ChamberInstanceId);//Offset:Discovery.exe+0x1F47310
	void STATIC_BattlepassPromotionPlatePressed(int64_t AssetId, int64_t ProductId);//Offset:Discovery.exe+0x1F47570
	void STATIC_AntiCheatUntrustedModule(const struct FString& ModuleName);//Offset:Discovery.exe+0x1F47650
	void STATIC_AntiCheatUnknownModule(const struct FString& ModuleName);//Offset:Discovery.exe+0x1F476F0
	void STATIC_AntiCheatTheiaProcessIntegrity(const struct FString& CrashCode, int64_t TimeSpentSuspended);//Offset:Discovery.exe+0x1F47790
	void STATIC_AntiCheatTheiaMachineIntegrity(const struct FString& CrashCode);//Offset:Discovery.exe+0x1F47880
	void STATIC_AntiCheatTheiaBadware(const struct FString& CrashCode, const struct FString& BadwareProduct, const struct FString& DeviceName);//Offset:Discovery.exe+0x1F47920
	void STATIC_AntiCheatTheiaAntiVM(const struct FString& CrashCode);//Offset:Discovery.exe+0x1F47A70
	void STATIC_AntiCheatTheiaAntiDebug(const struct FString& CrashCode, int64_t HeapFlags, int64_t HeapForceFlags);//Offset:Discovery.exe+0x1F47B10
	void STATIC_AntiCheatRejectModule(const struct FString& ModuleName);//Offset:Discovery.exe+0x1F47C50
	void STATIC_AntiCheatPlayerViolation(const struct FString& Violation, const struct FString& Message);//Offset:Discovery.exe+0x1F47CF0
	void STATIC_AntiCheatPlayerActionRequiredClient(const struct FString& ClientAction, const struct FString& Reason, const struct FString& Details);//Offset:Discovery.exe+0x1F47DF0
	void STATIC_AntiCheatHazard(const struct FString& Name);//Offset:Discovery.exe+0x1F47F40
	void STATIC_AntiCheatDebuggerDetected();//Offset:Discovery.exe+0x1F47FE0
	void STATIC_AngelscriptClientError(const struct FString& Source, const struct FString& Message);//Offset:Discovery.exe+0x1F48000
	void STATIC_AccountLinked();//Offset:Discovery.exe+0x1F48100
	void STATIC_AccountCreated();//Offset:Discovery.exe+0x1F48120
};


// Class EmbarkTelemetry.EmbarkTelemetryUtil
// 0x0000 (0x0028 - 0x0028)
class UEmbarkTelemetryUtil : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkTelemetry.EmbarkTelemetryUtil"));
		return ptr;
	}


	void STATIC_SetRegion(const struct FString& Region);//Offset:Discovery.exe+0x1F4BEE0
	void STATIC_SetClientStatusActivity(TEnumAsByte<ETelemetryClientActivity> Activity);//Offset:Discovery.exe+0x1F4C080
	struct FString STATIC_GetClientUuid();//Offset:Discovery.exe+0x1F4C000
	int64_t STATIC_GetClientPlatform();//Offset:Discovery.exe+0x1F4BFD0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
