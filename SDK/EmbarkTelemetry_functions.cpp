//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function EmbarkTelemetry.EmbarkRoundPerformanceTelemetry.StartTrackingRoundPerformance
// (Final, Native, Static, Public, BlueprintCallable)

void UEmbarkRoundPerformanceTelemetry::STATIC_StartTrackingRoundPerformance()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkRoundPerformanceTelemetry.StartTrackingRoundPerformance"));

	UEmbarkRoundPerformanceTelemetry_StartTrackingRoundPerformance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkRoundPerformanceTelemetry.FinishTrackingRoundPerformance
// (Final, Native, Static, Public, BlueprintCallable)

void UEmbarkRoundPerformanceTelemetry::STATIC_FinishTrackingRoundPerformance()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkRoundPerformanceTelemetry.FinishTrackingRoundPerformance"));

	UEmbarkRoundPerformanceTelemetry_FinishTrackingRoundPerformance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.VoiceEnabledChanged
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_VoiceEnabledChanged(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.VoiceEnabledChanged"));

	UEmbarkTelemetryAPI_VoiceEnabledChanged_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.VideoSkip
// (Final, Native, Static, Public, BlueprintCallable)

void UEmbarkTelemetryAPI::STATIC_VideoSkip()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.VideoSkip"));

	UEmbarkTelemetryAPI_VideoSkip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.VideoEnd
// (Final, Native, Static, Public, BlueprintCallable)

void UEmbarkTelemetryAPI::STATIC_VideoEnd()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.VideoEnd"));

	UEmbarkTelemetryAPI_VideoEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.UpgradeChamberGenerator2
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int64_t                        OfferId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        OldGeneratorAssetId            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OldGeneratorInstanceId         (Parm, ZeroConstructor)
// struct FString                 OldGeneratorName               (Parm, ZeroConstructor)
// int64_t                        NewGeneratorAssetId            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewGeneratorInstanceId         (Parm, ZeroConstructor)
// int64_t                        ChamberAssetId                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ChamberInstanceId              (Parm, ZeroConstructor)
// TArray<int64_t>                ConsumesGameAssetIds           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ConsumesAmounts                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ProducesGameAssetIds           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ProducesAmounts                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkTelemetryAPI::STATIC_UpgradeChamberGenerator2(int64_t OfferId, int64_t OldGeneratorAssetId, const struct FString& OldGeneratorInstanceId, const struct FString& OldGeneratorName, int64_t NewGeneratorAssetId, const struct FString& NewGeneratorInstanceId, int64_t ChamberAssetId, const struct FString& ChamberInstanceId, TArray<int64_t> ConsumesGameAssetIds, TArray<int64_t> ConsumesAmounts, TArray<int64_t> ProducesGameAssetIds, TArray<int64_t> ProducesAmounts)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.UpgradeChamberGenerator2"));

	UEmbarkTelemetryAPI_UpgradeChamberGenerator2_Params params;
	params.OfferId = OfferId;
	params.OldGeneratorAssetId = OldGeneratorAssetId;
	params.OldGeneratorInstanceId = OldGeneratorInstanceId;
	params.OldGeneratorName = OldGeneratorName;
	params.NewGeneratorAssetId = NewGeneratorAssetId;
	params.NewGeneratorInstanceId = NewGeneratorInstanceId;
	params.ChamberAssetId = ChamberAssetId;
	params.ChamberInstanceId = ChamberInstanceId;
	params.ConsumesGameAssetIds = ConsumesGameAssetIds;
	params.ConsumesAmounts = ConsumesAmounts;
	params.ProducesGameAssetIds = ProducesGameAssetIds;
	params.ProducesAmounts = ProducesAmounts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.UpgradeChamberGenerator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        OfferId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        OldGeneratorAssetId            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OldGeneratorInstanceId         (Parm, ZeroConstructor)
// int64_t                        NewGeneratorAssetId            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewGeneratorInstanceId         (Parm, ZeroConstructor)
// struct FString                 GeneratorName                  (Parm, ZeroConstructor)
// int64_t                        ChamberAssetId                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ChamberInstanceId              (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_UpgradeChamberGenerator(int64_t OfferId, int64_t OldGeneratorAssetId, const struct FString& OldGeneratorInstanceId, int64_t NewGeneratorAssetId, const struct FString& NewGeneratorInstanceId, const struct FString& GeneratorName, int64_t ChamberAssetId, const struct FString& ChamberInstanceId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.UpgradeChamberGenerator"));

	UEmbarkTelemetryAPI_UpgradeChamberGenerator_Params params;
	params.OfferId = OfferId;
	params.OldGeneratorAssetId = OldGeneratorAssetId;
	params.OldGeneratorInstanceId = OldGeneratorInstanceId;
	params.NewGeneratorAssetId = NewGeneratorAssetId;
	params.NewGeneratorInstanceId = NewGeneratorInstanceId;
	params.GeneratorName = GeneratorName;
	params.ChamberAssetId = ChamberAssetId;
	params.ChamberInstanceId = ChamberInstanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.UpdateDeckSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FirstSlotId                    (Parm, ZeroConstructor)
// int64_t                        FirstGameAssetId               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FirstSlotType                  (Parm, ZeroConstructor)
// int64_t                        SecondAssetId                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDrafting                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_UpdateDeckSlot(const struct FString& FirstSlotId, int64_t FirstGameAssetId, const struct FString& FirstSlotType, int64_t SecondAssetId, bool bIsDrafting)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.UpdateDeckSlot"));

	UEmbarkTelemetryAPI_UpdateDeckSlot_Params params;
	params.FirstSlotId = FirstSlotId;
	params.FirstGameAssetId = FirstGameAssetId;
	params.FirstSlotType = FirstSlotType;
	params.SecondAssetId = SecondAssetId;
	params.bIsDrafting = bIsDrafting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ThirdPartyProductViewLoad2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 StoreSessionId                 (Parm, ZeroConstructor)
// struct FString                 ThirdPartyStoreId              (Parm, ZeroConstructor)
// int64_t                        ThirdPartyProductId            (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_ThirdPartyProductViewLoad2(const struct FString& StoreSessionId, const struct FString& ThirdPartyStoreId, int64_t ThirdPartyProductId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ThirdPartyProductViewLoad2"));

	UEmbarkTelemetryAPI_ThirdPartyProductViewLoad2_Params params;
	params.StoreSessionId = StoreSessionId;
	params.ThirdPartyStoreId = ThirdPartyStoreId;
	params.ThirdPartyProductId = ThirdPartyProductId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.TestEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Stuff                          (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_TestEvent(const struct FString& Stuff)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.TestEvent"));

	UEmbarkTelemetryAPI_TestEvent_Params params;
	params.Stuff = Stuff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.TamperAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_TamperAction(int Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.TamperAction"));

	UEmbarkTelemetryAPI_TamperAction_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.SwapDeckSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FirstSlotId                    (Parm, ZeroConstructor)
// int64_t                        FirstGameAssetId               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FirstSlotType                  (Parm, ZeroConstructor)
// struct FString                 SecondSlotId                   (Parm, ZeroConstructor)
// int64_t                        SecondAssetId                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SecondSlotType                 (Parm, ZeroConstructor)
// bool                           bIsDrafting                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_SwapDeckSlot(const struct FString& FirstSlotId, int64_t FirstGameAssetId, const struct FString& FirstSlotType, const struct FString& SecondSlotId, int64_t SecondAssetId, const struct FString& SecondSlotType, bool bIsDrafting)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.SwapDeckSlot"));

	UEmbarkTelemetryAPI_SwapDeckSlot_Params params;
	params.FirstSlotId = FirstSlotId;
	params.FirstGameAssetId = FirstGameAssetId;
	params.FirstSlotType = FirstSlotType;
	params.SecondSlotId = SecondSlotId;
	params.SecondAssetId = SecondAssetId;
	params.SecondSlotType = SecondSlotType;
	params.bIsDrafting = bIsDrafting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.SurveyOpen3
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SurveyId                       (Parm, ZeroConstructor)
// struct FString                 SurveyType                     (Parm, ZeroConstructor)
// struct FString                 URL                            (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_SurveyOpen3(const struct FString& SurveyId, const struct FString& SurveyType, const struct FString& URL)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.SurveyOpen3"));

	UEmbarkTelemetryAPI_SurveyOpen3_Params params;
	params.SurveyId = SurveyId;
	params.SurveyType = SurveyType;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.StoreViewLoad2
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 StoreSessionId                 (Parm, ZeroConstructor)
// int64_t                        ViewId                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int64_t>                LayoutIds                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                EmbarkProductIds               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ThirdPartyStoreId              (Parm, ZeroConstructor)
// TArray<int64_t>                ThirdPartyProductIds           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkTelemetryAPI::STATIC_StoreViewLoad2(const struct FString& StoreSessionId, int64_t ViewId, TArray<int64_t> LayoutIds, TArray<int64_t> EmbarkProductIds, const struct FString& ThirdPartyStoreId, TArray<int64_t> ThirdPartyProductIds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.StoreViewLoad2"));

	UEmbarkTelemetryAPI_StoreViewLoad2_Params params;
	params.StoreSessionId = StoreSessionId;
	params.ViewId = ViewId;
	params.LayoutIds = LayoutIds;
	params.EmbarkProductIds = EmbarkProductIds;
	params.ThirdPartyStoreId = ThirdPartyStoreId;
	params.ThirdPartyProductIds = ThirdPartyProductIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.StoreSessionDone
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 StoreSessionId                 (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_StoreSessionDone(const struct FString& StoreSessionId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.StoreSessionDone"));

	UEmbarkTelemetryAPI_StoreSessionDone_Params params;
	params.StoreSessionId = StoreSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.StoreSessionBegin2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 StoreSessionId                 (Parm, ZeroConstructor)
// struct FString                 ScreenName                     (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_StoreSessionBegin2(const struct FString& StoreSessionId, const struct FString& ScreenName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.StoreSessionBegin2"));

	UEmbarkTelemetryAPI_StoreSessionBegin2_Params params;
	params.StoreSessionId = StoreSessionId;
	params.ScreenName = ScreenName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.StashStatus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int64_t                        Currency                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int64_t>                GameAssetIds                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ItemAmounts                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int64_t                        StashValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_StashStatus(int64_t Currency, TArray<int64_t> GameAssetIds, TArray<int64_t> ItemAmounts, int64_t StashValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.StashStatus"));

	UEmbarkTelemetryAPI_StashStatus_Params params;
	params.Currency = Currency;
	params.GameAssetIds = GameAssetIds;
	params.ItemAmounts = ItemAmounts;
	params.StashValue = StashValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.StartGameMode2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        PowerRating                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GameMode                       (Parm, ZeroConstructor)
// struct FString                 GameModeIdentifier             (Parm, ZeroConstructor)
// struct FString                 Severity                       (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_StartGameMode2(int64_t PowerRating, const struct FString& GameMode, const struct FString& GameModeIdentifier, const struct FString& Severity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.StartGameMode2"));

	UEmbarkTelemetryAPI_StartGameMode2_Params params;
	params.PowerRating = PowerRating;
	params.GameMode = GameMode;
	params.GameModeIdentifier = GameModeIdentifier;
	params.Severity = Severity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.StartGameMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        PowerRating                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GameMode                       (Parm, ZeroConstructor)
// struct FString                 GameModeIdentifier             (Parm, ZeroConstructor)
// struct FString                 Severity                       (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_StartGameMode(int64_t PowerRating, const struct FString& GameMode, const struct FString& GameModeIdentifier, const struct FString& Severity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.StartGameMode"));

	UEmbarkTelemetryAPI_StartGameMode_Params params;
	params.PowerRating = PowerRating;
	params.GameMode = GameMode;
	params.GameModeIdentifier = GameModeIdentifier;
	params.Severity = Severity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.StartChamberGeneratorCraft2
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int64_t                        OfferId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OfferInstanceId                (Parm, ZeroConstructor)
// int64_t                        GeneratorAssetId               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GeneratorInstanceId            (Parm, ZeroConstructor)
// struct FString                 GeneratorName                  (Parm, ZeroConstructor)
// TArray<int64_t>                ConsumesGameAssetIds           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ConsumesAmounts                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ProducesGameAssetIds           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ProducesAmounts                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkTelemetryAPI::STATIC_StartChamberGeneratorCraft2(int64_t OfferId, const struct FString& OfferInstanceId, int64_t GeneratorAssetId, const struct FString& GeneratorInstanceId, const struct FString& GeneratorName, TArray<int64_t> ConsumesGameAssetIds, TArray<int64_t> ConsumesAmounts, TArray<int64_t> ProducesGameAssetIds, TArray<int64_t> ProducesAmounts)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.StartChamberGeneratorCraft2"));

	UEmbarkTelemetryAPI_StartChamberGeneratorCraft2_Params params;
	params.OfferId = OfferId;
	params.OfferInstanceId = OfferInstanceId;
	params.GeneratorAssetId = GeneratorAssetId;
	params.GeneratorInstanceId = GeneratorInstanceId;
	params.GeneratorName = GeneratorName;
	params.ConsumesGameAssetIds = ConsumesGameAssetIds;
	params.ConsumesAmounts = ConsumesAmounts;
	params.ProducesGameAssetIds = ProducesGameAssetIds;
	params.ProducesAmounts = ProducesAmounts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.StartChamberGeneratorCraft
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        OfferId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OfferInstanceId                (Parm, ZeroConstructor)
// struct FString                 GeneratorName                  (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_StartChamberGeneratorCraft(int64_t OfferId, const struct FString& OfferInstanceId, const struct FString& GeneratorName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.StartChamberGeneratorCraft"));

	UEmbarkTelemetryAPI_StartChamberGeneratorCraft_Params params;
	params.OfferId = OfferId;
	params.OfferInstanceId = OfferInstanceId;
	params.GeneratorName = GeneratorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.SettingsChanged
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Tag                            (Parm, ZeroConstructor)
// struct FString                 OldValue                       (Parm, ZeroConstructor)
// struct FString                 NewValue                       (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_SettingsChanged(const struct FString& Tag, const struct FString& OldValue, const struct FString& NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.SettingsChanged"));

	UEmbarkTelemetryAPI_SettingsChanged_Params params;
	params.Tag = Tag;
	params.OldValue = OldValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.SelectedRegion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Region                         (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_SelectedRegion(const struct FString& Region)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.SelectedRegion"));

	UEmbarkTelemetryAPI_SelectedRegion_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ScrapItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        TypeId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceId                     (Parm, ZeroConstructor)
// int64_t                        Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Durability                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_ScrapItem(int64_t TypeId, const struct FString& InstanceId, int64_t Amount, float Durability)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ScrapItem"));

	UEmbarkTelemetryAPI_ScrapItem_Params params;
	params.TypeId = TypeId;
	params.InstanceId = InstanceId;
	params.Amount = Amount;
	params.Durability = Durability;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.RoundPerformanceFrameStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MeasurmentId                   (Parm, ZeroConstructor)
// int64_t                        GameThreadBoundCount           (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        RenderThreadBoundCount         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        RhiThreadBoundCount            (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        GpuBoundCount                  (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        TotalHitchCount                (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        GameThreadHitchCount           (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        RenderThreadHitchCount         (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        RhiThreadHitchCount            (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        GpuHitchCount                  (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_RoundPerformanceFrameStats(const struct FString& MeasurmentId, int64_t GameThreadBoundCount, int64_t RenderThreadBoundCount, int64_t RhiThreadBoundCount, int64_t GpuBoundCount, int64_t TotalHitchCount, int64_t GameThreadHitchCount, int64_t RenderThreadHitchCount, int64_t RhiThreadHitchCount, int64_t GpuHitchCount)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.RoundPerformanceFrameStats"));

	UEmbarkTelemetryAPI_RoundPerformanceFrameStats_Params params;
	params.MeasurmentId = MeasurmentId;
	params.GameThreadBoundCount = GameThreadBoundCount;
	params.RenderThreadBoundCount = RenderThreadBoundCount;
	params.RhiThreadBoundCount = RhiThreadBoundCount;
	params.GpuBoundCount = GpuBoundCount;
	params.TotalHitchCount = TotalHitchCount;
	params.GameThreadHitchCount = GameThreadHitchCount;
	params.RenderThreadHitchCount = RenderThreadHitchCount;
	params.RhiThreadHitchCount = RhiThreadHitchCount;
	params.GpuHitchCount = GpuHitchCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.RoundPerformanceBin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MeasurmentId                   (Parm, ZeroConstructor)
// float                          MinValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxValue                       (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Count                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Sum                            (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_RoundPerformanceBin(const struct FString& MeasurmentId, float MinValue, float MaxValue, int64_t Count, float Sum)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.RoundPerformanceBin"));

	UEmbarkTelemetryAPI_RoundPerformanceBin_Params params;
	params.MeasurmentId = MeasurmentId;
	params.MinValue = MinValue;
	params.MaxValue = MaxValue;
	params.Count = Count;
	params.Sum = Sum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.RoundPerformance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MeasurmentId                   (Parm, ZeroConstructor)
// struct FString                 StatName                       (Parm, ZeroConstructor)
// int64_t                        TotalCount                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalSum                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_RoundPerformance(const struct FString& MeasurmentId, const struct FString& StatName, int64_t TotalCount, float TotalSum)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.RoundPerformance"));

	UEmbarkTelemetryAPI_RoundPerformance_Params params;
	params.MeasurmentId = MeasurmentId;
	params.StatName = StatName;
	params.TotalCount = TotalCount;
	params.TotalSum = TotalSum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.RHITelemetry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 LoadedRhiName                  (Parm, ZeroConstructor)
// struct FString                 ForcedRhiName                  (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_RHITelemetry(const struct FString& LoadedRhiName, const struct FString& ForcedRhiName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.RHITelemetry"));

	UEmbarkTelemetryAPI_RHITelemetry_Params params;
	params.LoadedRhiName = LoadedRhiName;
	params.ForcedRhiName = ForcedRhiName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.RegionChanged
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 OldRegion                      (Parm, ZeroConstructor)
// struct FString                 NewRegion                      (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_RegionChanged(const struct FString& OldRegion, const struct FString& NewRegion)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.RegionChanged"));

	UEmbarkTelemetryAPI_RegionChanged_Params params;
	params.OldRegion = OldRegion;
	params.NewRegion = NewRegion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.QuilkinRegionLatency
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Endpoint                       (Parm, ZeroConstructor)
// struct FString                 Region                         (Parm, ZeroConstructor)
// float                          Latency                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_QuilkinRegionLatency(const struct FString& Endpoint, const struct FString& Region, float Latency)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.QuilkinRegionLatency"));

	UEmbarkTelemetryAPI_QuilkinRegionLatency_Params params;
	params.Endpoint = Endpoint;
	params.Region = Region;
	params.Latency = Latency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.QualityPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            QualityPreset                  (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_QualityPreset(int QualityPreset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.QualityPreset"));

	UEmbarkTelemetryAPI_QualityPreset_Params params;
	params.QualityPreset = QualityPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.PredictionBufferOverflow
// (Final, Native, Static, Public, BlueprintCallable)

void UEmbarkTelemetryAPI::STATIC_PredictionBufferOverflow()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.PredictionBufferOverflow"));

	UEmbarkTelemetryAPI_PredictionBufferOverflow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.PlayerReportPlayer2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 TargetPlayer                   (Parm, ZeroConstructor)
// struct FString                 Reason                         (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_PlayerReportPlayer2(const struct FString& TargetPlayer, const struct FString& Reason)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.PlayerReportPlayer2"));

	UEmbarkTelemetryAPI_PlayerReportPlayer2_Params params;
	params.TargetPlayer = TargetPlayer;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ModalDestroyed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Screen                         (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ModalDestroyed(const struct FString& Name, const struct FString& Screen)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ModalDestroyed"));

	UEmbarkTelemetryAPI_ModalDestroyed_Params params;
	params.Name = Name;
	params.Screen = Screen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ModalDeactivated
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Screen                         (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ModalDeactivated(const struct FString& Name, const struct FString& Screen)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ModalDeactivated"));

	UEmbarkTelemetryAPI_ModalDeactivated_Params params;
	params.Name = Name;
	params.Screen = Screen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ModalCreated
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Screen                         (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ModalCreated(const struct FString& Name, const struct FString& Screen)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ModalCreated"));

	UEmbarkTelemetryAPI_ModalCreated_Params params;
	params.Name = Name;
	params.Screen = Screen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.MatchmakingStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 TicketId                       (Parm, ZeroConstructor)
// struct FString                 PreviousStatus                 (Parm, ZeroConstructor)
// struct FString                 NewStatus                      (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_MatchmakingStatus(const struct FString& TicketId, const struct FString& PreviousStatus, const struct FString& NewStatus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.MatchmakingStatus"));

	UEmbarkTelemetryAPI_MatchmakingStatus_Params params;
	params.TicketId = TicketId;
	params.PreviousStatus = PreviousStatus;
	params.NewStatus = NewStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.MatchmakingGameserverAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 TicketId                       (Parm, ZeroConstructor)
// struct FString                 GameserverName                 (Parm, ZeroConstructor)
// struct FString                 GameserverHost                 (Parm, ZeroConstructor)
// int                            GameserverPort                 (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_MatchmakingGameserverAvailable(const struct FString& TicketId, const struct FString& GameserverName, const struct FString& GameserverHost, int GameserverPort)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.MatchmakingGameserverAvailable"));

	UEmbarkTelemetryAPI_MatchmakingGameserverAvailable_Params params;
	params.TicketId = TicketId;
	params.GameserverName = GameserverName;
	params.GameserverHost = GameserverHost;
	params.GameserverPort = GameserverPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.MapInteraction2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Interaction                    (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_MapInteraction2(const struct FString& Interaction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.MapInteraction2"));

	UEmbarkTelemetryAPI_MapInteraction2_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.MainMenuQuickPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        AssetId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ProductId                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_MainMenuQuickPurchase(int64_t AssetId, int64_t ProductId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.MainMenuQuickPurchase"));

	UEmbarkTelemetryAPI_MainMenuQuickPurchase_Params params;
	params.AssetId = AssetId;
	params.ProductId = ProductId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.MainMenuOffer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        AssetId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ProductId                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_MainMenuOffer(int64_t AssetId, int64_t ProductId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.MainMenuOffer"));

	UEmbarkTelemetryAPI_MainMenuOffer_Params params;
	params.AssetId = AssetId;
	params.ProductId = ProductId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.LocalizationSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Locale                         (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_LocalizationSetting(const struct FString& Locale)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.LocalizationSetting"));

	UEmbarkTelemetryAPI_LocalizationSetting_Params params;
	params.Locale = Locale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.KeyboardBindingsChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Action                         (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_KeyboardBindingsChange(const struct FString& Action, const struct FString& Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.KeyboardBindingsChange"));

	UEmbarkTelemetryAPI_KeyboardBindingsChange_Params params;
	params.Action = Action;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ItemUnlockStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_ItemUnlockStart(int64_t GameAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ItemUnlockStart"));

	UEmbarkTelemetryAPI_ItemUnlockStart_Params params;
	params.GameAssetId = GameAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ItemsNotBroughtToSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int64_t>                GameAssetIds                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkTelemetryAPI::STATIC_ItemsNotBroughtToSession(TArray<int64_t> GameAssetIds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ItemsNotBroughtToSession"));

	UEmbarkTelemetryAPI_ItemsNotBroughtToSession_Params params;
	params.GameAssetIds = GameAssetIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.HardwareScore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          CpuScore                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          GpuScore                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_HardwareScore(float CpuScore, float GpuScore)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.HardwareScore"));

	UEmbarkTelemetryAPI_HardwareScore_Params params;
	params.CpuScore = CpuScore;
	params.GpuScore = GpuScore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.GetClientUuid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkTelemetryAPI::STATIC_GetClientUuid()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.GetClientUuid"));

	UEmbarkTelemetryAPI_GetClientUuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.FallbackLoadout
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int64_t                        LoadoutId                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int64_t>                Items                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkTelemetryAPI::STATIC_FallbackLoadout(int64_t LoadoutId, TArray<int64_t> Items)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.FallbackLoadout"));

	UEmbarkTelemetryAPI_FallbackLoadout_Params params;
	params.LoadoutId = LoadoutId;
	params.Items = Items;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ExpandChamber
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        ChamberAssetId                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ChamberName                    (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ExpandChamber(int64_t ChamberAssetId, const struct FString& ChamberName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ExpandChamber"));

	UEmbarkTelemetryAPI_ExpandChamber_Params params;
	params.ChamberAssetId = ChamberAssetId;
	params.ChamberName = ChamberName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.EnterScreenView3
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CurrentScreenName              (Parm, ZeroConstructor)
// struct FString                 FromScreenName                 (Parm, ZeroConstructor)
// struct FString                 MapName                        (Parm, ZeroConstructor)
// struct FString                 Payload                        (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_EnterScreenView3(const struct FString& CurrentScreenName, const struct FString& FromScreenName, const struct FString& MapName, const struct FString& Payload)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.EnterScreenView3"));

	UEmbarkTelemetryAPI_EnterScreenView3_Params params;
	params.CurrentScreenName = CurrentScreenName;
	params.FromScreenName = FromScreenName;
	params.MapName = MapName;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.EnterScreenView2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CurrentScreenName              (Parm, ZeroConstructor)
// struct FString                 FromScreenName                 (Parm, ZeroConstructor)
// struct FString                 MapName                        (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_EnterScreenView2(const struct FString& CurrentScreenName, const struct FString& FromScreenName, const struct FString& MapName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.EnterScreenView2"));

	UEmbarkTelemetryAPI_EnterScreenView2_Params params;
	params.CurrentScreenName = CurrentScreenName;
	params.FromScreenName = FromScreenName;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.EnterGameModeScreen2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        PowerRating                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_EnterGameModeScreen2(int64_t PowerRating)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.EnterGameModeScreen2"));

	UEmbarkTelemetryAPI_EnterGameModeScreen2_Params params;
	params.PowerRating = PowerRating;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.EmbarkStoreProductViewLoad
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 StoreSessionId                 (Parm, ZeroConstructor)
// int64_t                        EmbarkProductId                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_EmbarkStoreProductViewLoad(const struct FString& StoreSessionId, int64_t EmbarkProductId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.EmbarkStoreProductViewLoad"));

	UEmbarkTelemetryAPI_EmbarkStoreProductViewLoad_Params params;
	params.StoreSessionId = StoreSessionId;
	params.EmbarkProductId = EmbarkProductId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.EditPack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bIsNew                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_EditPack(bool bIsNew)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.EditPack"));

	UEmbarkTelemetryAPI_EditPack_Params params;
	params.bIsNew = bIsNew;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.EditorToolUsage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ToolName                       (Parm, ZeroConstructor)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_EditorToolUsage(const struct FString& ToolName, const struct FString& FunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.EditorToolUsage"));

	UEmbarkTelemetryAPI_EditorToolUsage_Params params;
	params.ToolName = ToolName;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DropPinDebug3
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Category                       (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_DropPinDebug3(const struct FVector& Location, float Pitch, float Roll, float Yaw, const struct FString& Category)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DropPinDebug3"));

	UEmbarkTelemetryAPI_DropPinDebug3_Params params;
	params.Location = Location;
	params.Pitch = Pitch;
	params.Roll = Roll;
	params.Yaw = Yaw;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DismantleChamberGenerator2
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int64_t                        OfferId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        GeneratorAssetId               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GeneratorInstanceId            (Parm, ZeroConstructor)
// struct FString                 GeneratorName                  (Parm, ZeroConstructor)
// int64_t                        ChamberAssetId                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ChamberInstanceId              (Parm, ZeroConstructor)
// TArray<int64_t>                ConsumesGameAssetIds           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ConsumesAmounts                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ProducesGameAssetIds           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ProducesAmounts                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkTelemetryAPI::STATIC_DismantleChamberGenerator2(int64_t OfferId, int64_t GeneratorAssetId, const struct FString& GeneratorInstanceId, const struct FString& GeneratorName, int64_t ChamberAssetId, const struct FString& ChamberInstanceId, TArray<int64_t> ConsumesGameAssetIds, TArray<int64_t> ConsumesAmounts, TArray<int64_t> ProducesGameAssetIds, TArray<int64_t> ProducesAmounts)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DismantleChamberGenerator2"));

	UEmbarkTelemetryAPI_DismantleChamberGenerator2_Params params;
	params.OfferId = OfferId;
	params.GeneratorAssetId = GeneratorAssetId;
	params.GeneratorInstanceId = GeneratorInstanceId;
	params.GeneratorName = GeneratorName;
	params.ChamberAssetId = ChamberAssetId;
	params.ChamberInstanceId = ChamberInstanceId;
	params.ConsumesGameAssetIds = ConsumesGameAssetIds;
	params.ConsumesAmounts = ConsumesAmounts;
	params.ProducesGameAssetIds = ProducesGameAssetIds;
	params.ProducesAmounts = ProducesAmounts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DismantleChamberGenerator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        OfferId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        GeneratorAssetId               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GeneratorInstanceId            (Parm, ZeroConstructor)
// struct FString                 GeneratorName                  (Parm, ZeroConstructor)
// int64_t                        ChamberAssetId                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ChamberInstanceId              (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_DismantleChamberGenerator(int64_t OfferId, int64_t GeneratorAssetId, const struct FString& GeneratorInstanceId, const struct FString& GeneratorName, int64_t ChamberAssetId, const struct FString& ChamberInstanceId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DismantleChamberGenerator"));

	UEmbarkTelemetryAPI_DismantleChamberGenerator_Params params;
	params.OfferId = OfferId;
	params.GeneratorAssetId = GeneratorAssetId;
	params.GeneratorInstanceId = GeneratorInstanceId;
	params.GeneratorName = GeneratorName;
	params.ChamberAssetId = ChamberAssetId;
	params.ChamberInstanceId = ChamberInstanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoUpdatePack
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 DefaultPackId                  (Parm, ZeroConstructor)
// struct FString                 PackId                         (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int64_t                        RemainingCredits               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int64_t>                LoadoutItemIds                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ReserveItemIds                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkTelemetryAPI::STATIC_DiscoUpdatePack(const struct FString& DefaultPackId, const struct FString& PackId, const struct FString& Name, int64_t RemainingCredits, TArray<int64_t> LoadoutItemIds, TArray<int64_t> ReserveItemIds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoUpdatePack"));

	UEmbarkTelemetryAPI_DiscoUpdatePack_Params params;
	params.DefaultPackId = DefaultPackId;
	params.PackId = PackId;
	params.Name = Name;
	params.RemainingCredits = RemainingCredits;
	params.LoadoutItemIds = LoadoutItemIds;
	params.ReserveItemIds = ReserveItemIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoTravelToNextTier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 HostName                       (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_DiscoTravelToNextTier(const struct FString& HostName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoTravelToNextTier"));

	UEmbarkTelemetryAPI_DiscoTravelToNextTier_Params params;
	params.HostName = HostName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoTournamentMatchUpdate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Status                         (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_DiscoTournamentMatchUpdate(const struct FString& Status)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoTournamentMatchUpdate"));

	UEmbarkTelemetryAPI_DiscoTournamentMatchUpdate_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleWeaponSticker2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquip                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_DiscoToggleWeaponSticker2(int64_t GameAssetId, bool bEquip)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleWeaponSticker2"));

	UEmbarkTelemetryAPI_DiscoToggleWeaponSticker2_Params params;
	params.GameAssetId = GameAssetId;
	params.bEquip = bEquip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleWeaponCharm2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquip                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_DiscoToggleWeaponCharm2(int64_t GameAssetId, bool bEquip)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleWeaponCharm2"));

	UEmbarkTelemetryAPI_DiscoToggleWeaponCharm2_Params params;
	params.GameAssetId = GameAssetId;
	params.bEquip = bEquip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleSprayItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquip                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_DiscoToggleSprayItem(int64_t GameAssetId, bool bEquip)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleSprayItem"));

	UEmbarkTelemetryAPI_DiscoToggleSprayItem_Params params;
	params.GameAssetId = GameAssetId;
	params.bEquip = bEquip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoTogglePoseItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquip                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_DiscoTogglePoseItem(int64_t GameAssetId, bool bEquip)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoTogglePoseItem"));

	UEmbarkTelemetryAPI_DiscoTogglePoseItem_Params params;
	params.GameAssetId = GameAssetId;
	params.bEquip = bEquip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleEmoteItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquip                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_DiscoToggleEmoteItem(int64_t GameAssetId, bool bEquip)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleEmoteItem"));

	UEmbarkTelemetryAPI_DiscoToggleEmoteItem_Params params;
	params.GameAssetId = GameAssetId;
	params.bEquip = bEquip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleCosmeticItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquip                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_DiscoToggleCosmeticItem(int64_t GameAssetId, bool bEquip)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleCosmeticItem"));

	UEmbarkTelemetryAPI_DiscoToggleCosmeticItem_Params params;
	params.GameAssetId = GameAssetId;
	params.bEquip = bEquip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectWeaponSticker2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_DiscoSelectWeaponSticker2(int64_t GameAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectWeaponSticker2"));

	UEmbarkTelemetryAPI_DiscoSelectWeaponSticker2_Params params;
	params.GameAssetId = GameAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectWeaponSkin2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_DiscoSelectWeaponSkin2(int64_t GameAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectWeaponSkin2"));

	UEmbarkTelemetryAPI_DiscoSelectWeaponSkin2_Params params;
	params.GameAssetId = GameAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectWeaponCharm2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_DiscoSelectWeaponCharm2(int64_t GameAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectWeaponCharm2"));

	UEmbarkTelemetryAPI_DiscoSelectWeaponCharm2_Params params;
	params.GameAssetId = GameAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectSprayItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_DiscoSelectSprayItem(int64_t GameAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectSprayItem"));

	UEmbarkTelemetryAPI_DiscoSelectSprayItem_Params params;
	params.GameAssetId = GameAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectPoseItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_DiscoSelectPoseItem(int64_t GameAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectPoseItem"));

	UEmbarkTelemetryAPI_DiscoSelectPoseItem_Params params;
	params.GameAssetId = GameAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectPack2
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 PackId                         (Parm, ZeroConstructor)
// TArray<int64_t>                LoadoutItemIds                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ReserveItemIds                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkTelemetryAPI::STATIC_DiscoSelectPack2(const struct FString& PackId, TArray<int64_t> LoadoutItemIds, TArray<int64_t> ReserveItemIds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectPack2"));

	UEmbarkTelemetryAPI_DiscoSelectPack2_Params params;
	params.PackId = PackId;
	params.LoadoutItemIds = LoadoutItemIds;
	params.ReserveItemIds = ReserveItemIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectEmoteItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_DiscoSelectEmoteItem(int64_t GameAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectEmoteItem"));

	UEmbarkTelemetryAPI_DiscoSelectEmoteItem_Params params;
	params.GameAssetId = GameAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectCosmeticItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_DiscoSelectCosmeticItem(int64_t GameAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectCosmeticItem"));

	UEmbarkTelemetryAPI_DiscoSelectCosmeticItem_Params params;
	params.GameAssetId = GameAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoEquipWeaponSkin2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GameAssetId                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_DiscoEquipWeaponSkin2(int64_t GameAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoEquipWeaponSkin2"));

	UEmbarkTelemetryAPI_DiscoEquipWeaponSkin2_Params params;
	params.GameAssetId = GameAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoConnectedToServer2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 HostName                       (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_DiscoConnectedToServer2(const struct FString& HostName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoConnectedToServer2"));

	UEmbarkTelemetryAPI_DiscoConnectedToServer2_Params params;
	params.HostName = HostName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.CompleteChamberGeneratorCraft2
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int64_t                        OfferId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OfferInstanceId                (Parm, ZeroConstructor)
// int64_t                        GeneratorAssetId               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GeneratorInstanceId            (Parm, ZeroConstructor)
// struct FString                 GeneratorName                  (Parm, ZeroConstructor)
// TArray<int64_t>                ConsumesGameAssetIds           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ConsumesAmounts                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ProducesGameAssetIds           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ProducesAmounts                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkTelemetryAPI::STATIC_CompleteChamberGeneratorCraft2(int64_t OfferId, const struct FString& OfferInstanceId, int64_t GeneratorAssetId, const struct FString& GeneratorInstanceId, const struct FString& GeneratorName, TArray<int64_t> ConsumesGameAssetIds, TArray<int64_t> ConsumesAmounts, TArray<int64_t> ProducesGameAssetIds, TArray<int64_t> ProducesAmounts)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.CompleteChamberGeneratorCraft2"));

	UEmbarkTelemetryAPI_CompleteChamberGeneratorCraft2_Params params;
	params.OfferId = OfferId;
	params.OfferInstanceId = OfferInstanceId;
	params.GeneratorAssetId = GeneratorAssetId;
	params.GeneratorInstanceId = GeneratorInstanceId;
	params.GeneratorName = GeneratorName;
	params.ConsumesGameAssetIds = ConsumesGameAssetIds;
	params.ConsumesAmounts = ConsumesAmounts;
	params.ProducesGameAssetIds = ProducesGameAssetIds;
	params.ProducesAmounts = ProducesAmounts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.CompleteChamberGeneratorCraft
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        OfferId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OfferInstanceId                (Parm, ZeroConstructor)
// struct FString                 GeneratorName                  (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_CompleteChamberGeneratorCraft(int64_t OfferId, const struct FString& OfferInstanceId, const struct FString& GeneratorName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.CompleteChamberGeneratorCraft"));

	UEmbarkTelemetryAPI_CompleteChamberGeneratorCraft_Params params;
	params.OfferId = OfferId;
	params.OfferInstanceId = OfferInstanceId;
	params.GeneratorName = GeneratorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientUserLoginDetails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 TamperId                       (Parm, ZeroConstructor)
// struct FString                 EOSProductUserId               (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ClientUserLoginDetails(const struct FString& TamperId, const struct FString& EOSProductUserId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientUserLoginDetails"));

	UEmbarkTelemetryAPI_ClientUserLoginDetails_Params params;
	params.TamperId = TamperId;
	params.EOSProductUserId = EOSProductUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientUserLogin3
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CountryCode                    (Parm, ZeroConstructor)
// struct FString                 Region                         (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ClientUserLogin3(const struct FString& CountryCode, const struct FString& Region)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientUserLogin3"));

	UEmbarkTelemetryAPI_ClientUserLogin3_Params params;
	params.CountryCode = CountryCode;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientThirdPartyStoreTransactionError2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 StoreSessionId                 (Parm, ZeroConstructor)
// struct FString                 ClientRequestId                (Parm, ZeroConstructor)
// struct FString                 ThirdPartyStoreId              (Parm, ZeroConstructor)
// int64_t                        ThirdPartyProductId            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ResultCode                     (Parm, ZeroConstructor)
// struct FString                 ErrorMessage                   (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ClientThirdPartyStoreTransactionError2(const struct FString& StoreSessionId, const struct FString& ClientRequestId, const struct FString& ThirdPartyStoreId, int64_t ThirdPartyProductId, const struct FString& ResultCode, const struct FString& ErrorMessage)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientThirdPartyStoreTransactionError2"));

	UEmbarkTelemetryAPI_ClientThirdPartyStoreTransactionError2_Params params;
	params.StoreSessionId = StoreSessionId;
	params.ClientRequestId = ClientRequestId;
	params.ThirdPartyStoreId = ThirdPartyStoreId;
	params.ThirdPartyProductId = ThirdPartyProductId;
	params.ResultCode = ResultCode;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientThirdPartyStoreTransactionDone2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 StoreSessionId                 (Parm, ZeroConstructor)
// struct FString                 ClientRequestId                (Parm, ZeroConstructor)
// struct FString                 ThirdPartyStoreId              (Parm, ZeroConstructor)
// int64_t                        ThirdPartyProductId            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ResultCode                     (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ClientThirdPartyStoreTransactionDone2(const struct FString& StoreSessionId, const struct FString& ClientRequestId, const struct FString& ThirdPartyStoreId, int64_t ThirdPartyProductId, const struct FString& ResultCode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientThirdPartyStoreTransactionDone2"));

	UEmbarkTelemetryAPI_ClientThirdPartyStoreTransactionDone2_Params params;
	params.StoreSessionId = StoreSessionId;
	params.ClientRequestId = ClientRequestId;
	params.ThirdPartyStoreId = ThirdPartyStoreId;
	params.ThirdPartyProductId = ThirdPartyProductId;
	params.ResultCode = ResultCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientThirdPartyStoreTransactionBegin2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 StoreSessionId                 (Parm, ZeroConstructor)
// struct FString                 ClientRequestId                (Parm, ZeroConstructor)
// struct FString                 ThirdPartyStoreId              (Parm, ZeroConstructor)
// int64_t                        ThirdPartyProductId            (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_ClientThirdPartyStoreTransactionBegin2(const struct FString& StoreSessionId, const struct FString& ClientRequestId, const struct FString& ThirdPartyStoreId, int64_t ThirdPartyProductId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientThirdPartyStoreTransactionBegin2"));

	UEmbarkTelemetryAPI_ClientThirdPartyStoreTransactionBegin2_Params params;
	params.StoreSessionId = StoreSessionId;
	params.ClientRequestId = ClientRequestId;
	params.ThirdPartyStoreId = ThirdPartyStoreId;
	params.ThirdPartyProductId = ThirdPartyProductId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SettingName                    (Parm, ZeroConstructor)
// struct FString                 SettingValue                   (Parm, ZeroConstructor)
// struct FString                 Description                    (Parm, ZeroConstructor)
// int64_t                        SettingBatchId                 (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_ClientSetting(const struct FString& SettingName, const struct FString& SettingValue, const struct FString& Description, int64_t SettingBatchId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientSetting"));

	UEmbarkTelemetryAPI_ClientSetting_Params params;
	params.SettingName = SettingName;
	params.SettingValue = SettingValue;
	params.Description = Description;
	params.SettingBatchId = SettingBatchId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientOnlineTelemetry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ClientOnlineTelemetry(const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientOnlineTelemetry"));

	UEmbarkTelemetryAPI_ClientOnlineTelemetry_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientHeartbeat3
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Activity                       (Parm, ZeroConstructor)
// struct FString                 Region                         (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ClientHeartbeat3(const struct FString& Activity, const struct FString& Region)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientHeartbeat3"));

	UEmbarkTelemetryAPI_ClientHeartbeat3_Params params;
	params.Activity = Activity;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientEmbarkStoreTransactionError
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 StoreSessionId                 (Parm, ZeroConstructor)
// struct FString                 ClientRequestId                (Parm, ZeroConstructor)
// int64_t                        EmbarkProductId                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ResultCode                     (Parm, ZeroConstructor)
// struct FString                 ErrorMessage                   (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ClientEmbarkStoreTransactionError(const struct FString& StoreSessionId, const struct FString& ClientRequestId, int64_t EmbarkProductId, const struct FString& ResultCode, const struct FString& ErrorMessage)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientEmbarkStoreTransactionError"));

	UEmbarkTelemetryAPI_ClientEmbarkStoreTransactionError_Params params;
	params.StoreSessionId = StoreSessionId;
	params.ClientRequestId = ClientRequestId;
	params.EmbarkProductId = EmbarkProductId;
	params.ResultCode = ResultCode;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientEmbarkStoreTransactionDone
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 StoreSessionId                 (Parm, ZeroConstructor)
// struct FString                 ClientRequestId                (Parm, ZeroConstructor)
// int64_t                        EmbarkProductId                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ResultCode                     (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ClientEmbarkStoreTransactionDone(const struct FString& StoreSessionId, const struct FString& ClientRequestId, int64_t EmbarkProductId, const struct FString& ResultCode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientEmbarkStoreTransactionDone"));

	UEmbarkTelemetryAPI_ClientEmbarkStoreTransactionDone_Params params;
	params.StoreSessionId = StoreSessionId;
	params.ClientRequestId = ClientRequestId;
	params.EmbarkProductId = EmbarkProductId;
	params.ResultCode = ResultCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientEmbarkStoreTransactionBegin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 StoreSessionId                 (Parm, ZeroConstructor)
// struct FString                 ClientRequestId                (Parm, ZeroConstructor)
// int64_t                        EmbarkProductId                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_ClientEmbarkStoreTransactionBegin(const struct FString& StoreSessionId, const struct FString& ClientRequestId, int64_t EmbarkProductId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientEmbarkStoreTransactionBegin"));

	UEmbarkTelemetryAPI_ClientEmbarkStoreTransactionBegin_Params params;
	params.StoreSessionId = StoreSessionId;
	params.ClientRequestId = ClientRequestId;
	params.EmbarkProductId = EmbarkProductId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientDeviceInfo3
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InternalDriver                 (Parm, ZeroConstructor)
// struct FString                 UserDriver                     (Parm, ZeroConstructor)
// int64_t                        TotalRam                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CpuModelDescriptor             (Parm, ZeroConstructor)
// struct FString                 GpuName                        (Parm, ZeroConstructor)
// struct FString                 OsMajorVersion                 (Parm, ZeroConstructor)
// struct FString                 DefaultLanguage                (Parm, ZeroConstructor)
// struct FString                 LoginId                        (Parm, ZeroConstructor)
// int                            CpuCores                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            CpuHyperThreads                (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        VideoMemory                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_ClientDeviceInfo3(const struct FString& InternalDriver, const struct FString& UserDriver, int64_t TotalRam, const struct FString& CpuModelDescriptor, const struct FString& GpuName, const struct FString& OsMajorVersion, const struct FString& DefaultLanguage, const struct FString& LoginId, int CpuCores, int CpuHyperThreads, int64_t VideoMemory)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientDeviceInfo3"));

	UEmbarkTelemetryAPI_ClientDeviceInfo3_Params params;
	params.InternalDriver = InternalDriver;
	params.UserDriver = UserDriver;
	params.TotalRam = TotalRam;
	params.CpuModelDescriptor = CpuModelDescriptor;
	params.GpuName = GpuName;
	params.OsMajorVersion = OsMajorVersion;
	params.DefaultLanguage = DefaultLanguage;
	params.LoginId = LoginId;
	params.CpuCores = CpuCores;
	params.CpuHyperThreads = CpuHyperThreads;
	params.VideoMemory = VideoMemory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientCpuDetails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CpuidBase64                    (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ClientCpuDetails(const struct FString& CpuidBase64)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientCpuDetails"));

	UEmbarkTelemetryAPI_ClientCpuDetails_Params params;
	params.CpuidBase64 = CpuidBase64;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientBackendGameTransformationError2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceId                     (Parm, ZeroConstructor)
// int64_t                        AssetId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ErrorCode                      (Parm, ZeroConstructor)
// struct FString                 DetailedInfo                   (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ClientBackendGameTransformationError2(const struct FString& InstanceId, int64_t AssetId, const struct FString& ErrorCode, const struct FString& DetailedInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientBackendGameTransformationError2"));

	UEmbarkTelemetryAPI_ClientBackendGameTransformationError2_Params params;
	params.InstanceId = InstanceId;
	params.AssetId = AssetId;
	params.ErrorCode = ErrorCode;
	params.DetailedInfo = DetailedInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientAppInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 AppId                          (Parm, ZeroConstructor)
// struct FString                 BranchName                     (Parm, ZeroConstructor)
// struct FString                 CountryCode                    (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ClientAppInfo(const struct FString& AppId, const struct FString& BranchName, const struct FString& CountryCode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientAppInfo"));

	UEmbarkTelemetryAPI_ClientAppInfo_Params params;
	params.AppId = AppId;
	params.BranchName = BranchName;
	params.CountryCode = CountryCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ChamberGeneratorDeploymentChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        GeneratorAssetId               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GeneratorName                  (Parm, ZeroConstructor)
// int64_t                        ChamberAssetId                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ChamberName                    (Parm, ZeroConstructor)
// struct FString                 NewDeploymentStatus            (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ChamberGeneratorDeploymentChange(int64_t GeneratorAssetId, const struct FString& GeneratorName, int64_t ChamberAssetId, const struct FString& ChamberName, const struct FString& NewDeploymentStatus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ChamberGeneratorDeploymentChange"));

	UEmbarkTelemetryAPI_ChamberGeneratorDeploymentChange_Params params;
	params.GeneratorAssetId = GeneratorAssetId;
	params.GeneratorName = GeneratorName;
	params.ChamberAssetId = ChamberAssetId;
	params.ChamberName = ChamberName;
	params.NewDeploymentStatus = NewDeploymentStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.CancelChamberGeneratorCraft2
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int64_t                        OfferId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OfferInstanceId                (Parm, ZeroConstructor)
// int64_t                        GeneratorAssetId               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GeneratorInstanceId            (Parm, ZeroConstructor)
// struct FString                 GeneratorName                  (Parm, ZeroConstructor)
// TArray<int64_t>                ConsumesGameAssetIds           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ConsumesAmounts                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ProducesGameAssetIds           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ProducesAmounts                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkTelemetryAPI::STATIC_CancelChamberGeneratorCraft2(int64_t OfferId, const struct FString& OfferInstanceId, int64_t GeneratorAssetId, const struct FString& GeneratorInstanceId, const struct FString& GeneratorName, TArray<int64_t> ConsumesGameAssetIds, TArray<int64_t> ConsumesAmounts, TArray<int64_t> ProducesGameAssetIds, TArray<int64_t> ProducesAmounts)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.CancelChamberGeneratorCraft2"));

	UEmbarkTelemetryAPI_CancelChamberGeneratorCraft2_Params params;
	params.OfferId = OfferId;
	params.OfferInstanceId = OfferInstanceId;
	params.GeneratorAssetId = GeneratorAssetId;
	params.GeneratorInstanceId = GeneratorInstanceId;
	params.GeneratorName = GeneratorName;
	params.ConsumesGameAssetIds = ConsumesGameAssetIds;
	params.ConsumesAmounts = ConsumesAmounts;
	params.ProducesGameAssetIds = ProducesGameAssetIds;
	params.ProducesAmounts = ProducesAmounts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.CancelChamberGeneratorCraft
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        OfferId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OfferInstanceId                (Parm, ZeroConstructor)
// struct FString                 GeneratorName                  (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_CancelChamberGeneratorCraft(int64_t OfferId, const struct FString& OfferInstanceId, const struct FString& GeneratorName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.CancelChamberGeneratorCraft"));

	UEmbarkTelemetryAPI_CancelChamberGeneratorCraft_Params params;
	params.OfferId = OfferId;
	params.OfferInstanceId = OfferInstanceId;
	params.GeneratorName = GeneratorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.ButtonPressed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 ParentName                     (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_ButtonPressed(const struct FString& Name, const struct FString& ParentName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.ButtonPressed"));

	UEmbarkTelemetryAPI_ButtonPressed_Params params;
	params.Name = Name;
	params.ParentName = ParentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.BuildChamberGenerator2
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int64_t                        OfferId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        GeneratorAssetId               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GeneratorInstanceId            (Parm, ZeroConstructor)
// struct FString                 GeneratorName                  (Parm, ZeroConstructor)
// int64_t                        ChamberAssetId                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ChamberInstanceId              (Parm, ZeroConstructor)
// TArray<int64_t>                ConsumesGameAssetIds           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ConsumesAmounts                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ProducesGameAssetIds           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int64_t>                ProducesAmounts                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEmbarkTelemetryAPI::STATIC_BuildChamberGenerator2(int64_t OfferId, int64_t GeneratorAssetId, const struct FString& GeneratorInstanceId, const struct FString& GeneratorName, int64_t ChamberAssetId, const struct FString& ChamberInstanceId, TArray<int64_t> ConsumesGameAssetIds, TArray<int64_t> ConsumesAmounts, TArray<int64_t> ProducesGameAssetIds, TArray<int64_t> ProducesAmounts)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.BuildChamberGenerator2"));

	UEmbarkTelemetryAPI_BuildChamberGenerator2_Params params;
	params.OfferId = OfferId;
	params.GeneratorAssetId = GeneratorAssetId;
	params.GeneratorInstanceId = GeneratorInstanceId;
	params.GeneratorName = GeneratorName;
	params.ChamberAssetId = ChamberAssetId;
	params.ChamberInstanceId = ChamberInstanceId;
	params.ConsumesGameAssetIds = ConsumesGameAssetIds;
	params.ConsumesAmounts = ConsumesAmounts;
	params.ProducesGameAssetIds = ProducesGameAssetIds;
	params.ProducesAmounts = ProducesAmounts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.BuildChamberGenerator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        OfferId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        GeneratorAssetId               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 GeneratorInstanceId            (Parm, ZeroConstructor)
// struct FString                 GeneratorName                  (Parm, ZeroConstructor)
// int64_t                        ChamberAssetId                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ChamberInstanceId              (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_BuildChamberGenerator(int64_t OfferId, int64_t GeneratorAssetId, const struct FString& GeneratorInstanceId, const struct FString& GeneratorName, int64_t ChamberAssetId, const struct FString& ChamberInstanceId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.BuildChamberGenerator"));

	UEmbarkTelemetryAPI_BuildChamberGenerator_Params params;
	params.OfferId = OfferId;
	params.GeneratorAssetId = GeneratorAssetId;
	params.GeneratorInstanceId = GeneratorInstanceId;
	params.GeneratorName = GeneratorName;
	params.ChamberAssetId = ChamberAssetId;
	params.ChamberInstanceId = ChamberInstanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.BattlepassPromotionPlatePressed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        AssetId                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ProductId                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_BattlepassPromotionPlatePressed(int64_t AssetId, int64_t ProductId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.BattlepassPromotionPlatePressed"));

	UEmbarkTelemetryAPI_BattlepassPromotionPlatePressed_Params params;
	params.AssetId = AssetId;
	params.ProductId = ProductId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatUntrustedModule
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ModuleName                     (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_AntiCheatUntrustedModule(const struct FString& ModuleName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatUntrustedModule"));

	UEmbarkTelemetryAPI_AntiCheatUntrustedModule_Params params;
	params.ModuleName = ModuleName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatUnknownModule
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ModuleName                     (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_AntiCheatUnknownModule(const struct FString& ModuleName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatUnknownModule"));

	UEmbarkTelemetryAPI_AntiCheatUnknownModule_Params params;
	params.ModuleName = ModuleName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaProcessIntegrity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CrashCode                      (Parm, ZeroConstructor)
// int64_t                        TimeSpentSuspended             (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_AntiCheatTheiaProcessIntegrity(const struct FString& CrashCode, int64_t TimeSpentSuspended)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaProcessIntegrity"));

	UEmbarkTelemetryAPI_AntiCheatTheiaProcessIntegrity_Params params;
	params.CrashCode = CrashCode;
	params.TimeSpentSuspended = TimeSpentSuspended;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaMachineIntegrity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CrashCode                      (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_AntiCheatTheiaMachineIntegrity(const struct FString& CrashCode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaMachineIntegrity"));

	UEmbarkTelemetryAPI_AntiCheatTheiaMachineIntegrity_Params params;
	params.CrashCode = CrashCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaBadware
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CrashCode                      (Parm, ZeroConstructor)
// struct FString                 BadwareProduct                 (Parm, ZeroConstructor)
// struct FString                 DeviceName                     (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_AntiCheatTheiaBadware(const struct FString& CrashCode, const struct FString& BadwareProduct, const struct FString& DeviceName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaBadware"));

	UEmbarkTelemetryAPI_AntiCheatTheiaBadware_Params params;
	params.CrashCode = CrashCode;
	params.BadwareProduct = BadwareProduct;
	params.DeviceName = DeviceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaAntiVM
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CrashCode                      (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_AntiCheatTheiaAntiVM(const struct FString& CrashCode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaAntiVM"));

	UEmbarkTelemetryAPI_AntiCheatTheiaAntiVM_Params params;
	params.CrashCode = CrashCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaAntiDebug
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CrashCode                      (Parm, ZeroConstructor)
// int64_t                        HeapFlags                      (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        HeapForceFlags                 (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryAPI::STATIC_AntiCheatTheiaAntiDebug(const struct FString& CrashCode, int64_t HeapFlags, int64_t HeapForceFlags)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaAntiDebug"));

	UEmbarkTelemetryAPI_AntiCheatTheiaAntiDebug_Params params;
	params.CrashCode = CrashCode;
	params.HeapFlags = HeapFlags;
	params.HeapForceFlags = HeapForceFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatRejectModule
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ModuleName                     (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_AntiCheatRejectModule(const struct FString& ModuleName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatRejectModule"));

	UEmbarkTelemetryAPI_AntiCheatRejectModule_Params params;
	params.ModuleName = ModuleName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatPlayerViolation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Violation                      (Parm, ZeroConstructor)
// struct FString                 Message                        (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_AntiCheatPlayerViolation(const struct FString& Violation, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatPlayerViolation"));

	UEmbarkTelemetryAPI_AntiCheatPlayerViolation_Params params;
	params.Violation = Violation;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatPlayerActionRequiredClient
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ClientAction                   (Parm, ZeroConstructor)
// struct FString                 Reason                         (Parm, ZeroConstructor)
// struct FString                 Details                        (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_AntiCheatPlayerActionRequiredClient(const struct FString& ClientAction, const struct FString& Reason, const struct FString& Details)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatPlayerActionRequiredClient"));

	UEmbarkTelemetryAPI_AntiCheatPlayerActionRequiredClient_Params params;
	params.ClientAction = ClientAction;
	params.Reason = Reason;
	params.Details = Details;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatHazard
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_AntiCheatHazard(const struct FString& Name)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatHazard"));

	UEmbarkTelemetryAPI_AntiCheatHazard_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatDebuggerDetected
// (Final, Native, Static, Public, BlueprintCallable)

void UEmbarkTelemetryAPI::STATIC_AntiCheatDebuggerDetected()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatDebuggerDetected"));

	UEmbarkTelemetryAPI_AntiCheatDebuggerDetected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AngelscriptClientError
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor)
// struct FString                 Message                        (Parm, ZeroConstructor)

void UEmbarkTelemetryAPI::STATIC_AngelscriptClientError(const struct FString& Source, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AngelscriptClientError"));

	UEmbarkTelemetryAPI_AngelscriptClientError_Params params;
	params.Source = Source;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AccountLinked
// (Final, Native, Static, Public, BlueprintCallable)

void UEmbarkTelemetryAPI::STATIC_AccountLinked()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AccountLinked"));

	UEmbarkTelemetryAPI_AccountLinked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryAPI.AccountCreated
// (Final, Native, Static, Public, BlueprintCallable)

void UEmbarkTelemetryAPI::STATIC_AccountCreated()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryAPI.AccountCreated"));

	UEmbarkTelemetryAPI_AccountCreated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryUtil.SetRegion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Region                         (Parm, ZeroConstructor)

void UEmbarkTelemetryUtil::STATIC_SetRegion(const struct FString& Region)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryUtil.SetRegion"));

	UEmbarkTelemetryUtil_SetRegion_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryUtil.SetClientStatusActivity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETelemetryClientActivity> Activity                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTelemetryUtil::STATIC_SetClientStatusActivity(TEnumAsByte<ETelemetryClientActivity> Activity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryUtil.SetClientStatusActivity"));

	UEmbarkTelemetryUtil_SetClientStatusActivity_Params params;
	params.Activity = Activity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkTelemetry.EmbarkTelemetryUtil.GetClientUuid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkTelemetryUtil::STATIC_GetClientUuid()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryUtil.GetClientUuid"));

	UEmbarkTelemetryUtil_GetClientUuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkTelemetry.EmbarkTelemetryUtil.GetClientPlatform
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UEmbarkTelemetryUtil::STATIC_GetClientPlatform()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkTelemetry.EmbarkTelemetryUtil.GetClientPlatform"));

	UEmbarkTelemetryUtil_GetClientPlatform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
