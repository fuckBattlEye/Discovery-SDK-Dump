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

// Function EmbarkTelemetry.EmbarkRoundPerformanceTelemetry.StartTrackingRoundPerformance
struct UEmbarkRoundPerformanceTelemetry_StartTrackingRoundPerformance_Params
{
};

// Function EmbarkTelemetry.EmbarkRoundPerformanceTelemetry.FinishTrackingRoundPerformance
struct UEmbarkRoundPerformanceTelemetry_FinishTrackingRoundPerformance_Params
{
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.VoiceEnabledChanged
struct UEmbarkTelemetryAPI_VoiceEnabledChanged_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.VideoSkip
struct UEmbarkTelemetryAPI_VideoSkip_Params
{
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.VideoEnd
struct UEmbarkTelemetryAPI_VideoEnd_Params
{
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.UpgradeChamberGenerator2
struct UEmbarkTelemetryAPI_UpgradeChamberGenerator2_Params
{
	int64_t                                            OfferId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            OldGeneratorAssetId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OldGeneratorInstanceId;                                   // (Parm, ZeroConstructor)
	struct FString                                     OldGeneratorName;                                         // (Parm, ZeroConstructor)
	int64_t                                            NewGeneratorAssetId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewGeneratorInstanceId;                                   // (Parm, ZeroConstructor)
	int64_t                                            ChamberAssetId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ChamberInstanceId;                                        // (Parm, ZeroConstructor)
	TArray<int64_t>                                    ConsumesGameAssetIds;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ConsumesAmounts;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ProducesGameAssetIds;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ProducesAmounts;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.UpgradeChamberGenerator
struct UEmbarkTelemetryAPI_UpgradeChamberGenerator_Params
{
	int64_t                                            OfferId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            OldGeneratorAssetId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OldGeneratorInstanceId;                                   // (Parm, ZeroConstructor)
	int64_t                                            NewGeneratorAssetId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewGeneratorInstanceId;                                   // (Parm, ZeroConstructor)
	struct FString                                     GeneratorName;                                            // (Parm, ZeroConstructor)
	int64_t                                            ChamberAssetId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ChamberInstanceId;                                        // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.UpdateDeckSlot
struct UEmbarkTelemetryAPI_UpdateDeckSlot_Params
{
	struct FString                                     FirstSlotId;                                              // (Parm, ZeroConstructor)
	int64_t                                            FirstGameAssetId;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FirstSlotType;                                            // (Parm, ZeroConstructor)
	int64_t                                            SecondAssetId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDrafting;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ThirdPartyProductViewLoad2
struct UEmbarkTelemetryAPI_ThirdPartyProductViewLoad2_Params
{
	struct FString                                     StoreSessionId;                                           // (Parm, ZeroConstructor)
	struct FString                                     ThirdPartyStoreId;                                        // (Parm, ZeroConstructor)
	int64_t                                            ThirdPartyProductId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.TestEvent
struct UEmbarkTelemetryAPI_TestEvent_Params
{
	struct FString                                     Stuff;                                                    // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.TamperAction
struct UEmbarkTelemetryAPI_TamperAction_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.SwapDeckSlot
struct UEmbarkTelemetryAPI_SwapDeckSlot_Params
{
	struct FString                                     FirstSlotId;                                              // (Parm, ZeroConstructor)
	int64_t                                            FirstGameAssetId;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FirstSlotType;                                            // (Parm, ZeroConstructor)
	struct FString                                     SecondSlotId;                                             // (Parm, ZeroConstructor)
	int64_t                                            SecondAssetId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SecondSlotType;                                           // (Parm, ZeroConstructor)
	bool                                               bIsDrafting;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.SurveyOpen3
struct UEmbarkTelemetryAPI_SurveyOpen3_Params
{
	struct FString                                     SurveyId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     SurveyType;                                               // (Parm, ZeroConstructor)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.StoreViewLoad2
struct UEmbarkTelemetryAPI_StoreViewLoad2_Params
{
	struct FString                                     StoreSessionId;                                           // (Parm, ZeroConstructor)
	int64_t                                            ViewId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int64_t>                                    LayoutIds;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    EmbarkProductIds;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ThirdPartyStoreId;                                        // (Parm, ZeroConstructor)
	TArray<int64_t>                                    ThirdPartyProductIds;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.StoreSessionDone
struct UEmbarkTelemetryAPI_StoreSessionDone_Params
{
	struct FString                                     StoreSessionId;                                           // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.StoreSessionBegin2
struct UEmbarkTelemetryAPI_StoreSessionBegin2_Params
{
	struct FString                                     StoreSessionId;                                           // (Parm, ZeroConstructor)
	struct FString                                     ScreenName;                                               // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.StashStatus
struct UEmbarkTelemetryAPI_StashStatus_Params
{
	int64_t                                            Currency;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int64_t>                                    GameAssetIds;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ItemAmounts;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int64_t                                            StashValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.StartGameMode2
struct UEmbarkTelemetryAPI_StartGameMode2_Params
{
	int64_t                                            PowerRating;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GameMode;                                                 // (Parm, ZeroConstructor)
	struct FString                                     GameModeIdentifier;                                       // (Parm, ZeroConstructor)
	struct FString                                     Severity;                                                 // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.StartGameMode
struct UEmbarkTelemetryAPI_StartGameMode_Params
{
	int64_t                                            PowerRating;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GameMode;                                                 // (Parm, ZeroConstructor)
	struct FString                                     GameModeIdentifier;                                       // (Parm, ZeroConstructor)
	struct FString                                     Severity;                                                 // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.StartChamberGeneratorCraft2
struct UEmbarkTelemetryAPI_StartChamberGeneratorCraft2_Params
{
	int64_t                                            OfferId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OfferInstanceId;                                          // (Parm, ZeroConstructor)
	int64_t                                            GeneratorAssetId;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GeneratorInstanceId;                                      // (Parm, ZeroConstructor)
	struct FString                                     GeneratorName;                                            // (Parm, ZeroConstructor)
	TArray<int64_t>                                    ConsumesGameAssetIds;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ConsumesAmounts;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ProducesGameAssetIds;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ProducesAmounts;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.StartChamberGeneratorCraft
struct UEmbarkTelemetryAPI_StartChamberGeneratorCraft_Params
{
	int64_t                                            OfferId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OfferInstanceId;                                          // (Parm, ZeroConstructor)
	struct FString                                     GeneratorName;                                            // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.SettingsChanged
struct UEmbarkTelemetryAPI_SettingsChanged_Params
{
	struct FString                                     Tag;                                                      // (Parm, ZeroConstructor)
	struct FString                                     OldValue;                                                 // (Parm, ZeroConstructor)
	struct FString                                     NewValue;                                                 // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.SelectedRegion
struct UEmbarkTelemetryAPI_SelectedRegion_Params
{
	struct FString                                     Region;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ScrapItem
struct UEmbarkTelemetryAPI_ScrapItem_Params
{
	int64_t                                            TypeId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
	int64_t                                            Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.RoundPerformanceFrameStats
struct UEmbarkTelemetryAPI_RoundPerformanceFrameStats_Params
{
	struct FString                                     MeasurmentId;                                             // (Parm, ZeroConstructor)
	int64_t                                            GameThreadBoundCount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            RenderThreadBoundCount;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            RhiThreadBoundCount;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            GpuBoundCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            TotalHitchCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            GameThreadHitchCount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            RenderThreadHitchCount;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            RhiThreadHitchCount;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            GpuHitchCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.RoundPerformanceBin
struct UEmbarkTelemetryAPI_RoundPerformanceBin_Params
{
	struct FString                                     MeasurmentId;                                             // (Parm, ZeroConstructor)
	float                                              MinValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Sum;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.RoundPerformance
struct UEmbarkTelemetryAPI_RoundPerformance_Params
{
	struct FString                                     MeasurmentId;                                             // (Parm, ZeroConstructor)
	struct FString                                     StatName;                                                 // (Parm, ZeroConstructor)
	int64_t                                            TotalCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalSum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.RHITelemetry
struct UEmbarkTelemetryAPI_RHITelemetry_Params
{
	struct FString                                     LoadedRhiName;                                            // (Parm, ZeroConstructor)
	struct FString                                     ForcedRhiName;                                            // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.RegionChanged
struct UEmbarkTelemetryAPI_RegionChanged_Params
{
	struct FString                                     OldRegion;                                                // (Parm, ZeroConstructor)
	struct FString                                     NewRegion;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.QuilkinRegionLatency
struct UEmbarkTelemetryAPI_QuilkinRegionLatency_Params
{
	struct FString                                     Endpoint;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Region;                                                   // (Parm, ZeroConstructor)
	float                                              Latency;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.QualityPreset
struct UEmbarkTelemetryAPI_QualityPreset_Params
{
	int                                                QualityPreset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.PredictionBufferOverflow
struct UEmbarkTelemetryAPI_PredictionBufferOverflow_Params
{
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.PlayerReportPlayer2
struct UEmbarkTelemetryAPI_PlayerReportPlayer2_Params
{
	struct FString                                     TargetPlayer;                                             // (Parm, ZeroConstructor)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ModalDestroyed
struct UEmbarkTelemetryAPI_ModalDestroyed_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Screen;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ModalDeactivated
struct UEmbarkTelemetryAPI_ModalDeactivated_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Screen;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ModalCreated
struct UEmbarkTelemetryAPI_ModalCreated_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Screen;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.MatchmakingStatus
struct UEmbarkTelemetryAPI_MatchmakingStatus_Params
{
	struct FString                                     TicketId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     PreviousStatus;                                           // (Parm, ZeroConstructor)
	struct FString                                     NewStatus;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.MatchmakingGameserverAvailable
struct UEmbarkTelemetryAPI_MatchmakingGameserverAvailable_Params
{
	struct FString                                     TicketId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     GameserverName;                                           // (Parm, ZeroConstructor)
	struct FString                                     GameserverHost;                                           // (Parm, ZeroConstructor)
	int                                                GameserverPort;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.MapInteraction2
struct UEmbarkTelemetryAPI_MapInteraction2_Params
{
	struct FString                                     Interaction;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.MainMenuQuickPurchase
struct UEmbarkTelemetryAPI_MainMenuQuickPurchase_Params
{
	int64_t                                            AssetId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ProductId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.MainMenuOffer
struct UEmbarkTelemetryAPI_MainMenuOffer_Params
{
	int64_t                                            AssetId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ProductId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.LocalizationSetting
struct UEmbarkTelemetryAPI_LocalizationSetting_Params
{
	struct FString                                     Locale;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.KeyboardBindingsChange
struct UEmbarkTelemetryAPI_KeyboardBindingsChange_Params
{
	struct FString                                     Action;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ItemUnlockStart
struct UEmbarkTelemetryAPI_ItemUnlockStart_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ItemsNotBroughtToSession
struct UEmbarkTelemetryAPI_ItemsNotBroughtToSession_Params
{
	TArray<int64_t>                                    GameAssetIds;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.HardwareScore
struct UEmbarkTelemetryAPI_HardwareScore_Params
{
	float                                              CpuScore;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GpuScore;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.GetClientUuid
struct UEmbarkTelemetryAPI_GetClientUuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.FallbackLoadout
struct UEmbarkTelemetryAPI_FallbackLoadout_Params
{
	int64_t                                            LoadoutId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int64_t>                                    Items;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ExpandChamber
struct UEmbarkTelemetryAPI_ExpandChamber_Params
{
	int64_t                                            ChamberAssetId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ChamberName;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.EnterScreenView3
struct UEmbarkTelemetryAPI_EnterScreenView3_Params
{
	struct FString                                     CurrentScreenName;                                        // (Parm, ZeroConstructor)
	struct FString                                     FromScreenName;                                           // (Parm, ZeroConstructor)
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Payload;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.EnterScreenView2
struct UEmbarkTelemetryAPI_EnterScreenView2_Params
{
	struct FString                                     CurrentScreenName;                                        // (Parm, ZeroConstructor)
	struct FString                                     FromScreenName;                                           // (Parm, ZeroConstructor)
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.EnterGameModeScreen2
struct UEmbarkTelemetryAPI_EnterGameModeScreen2_Params
{
	int64_t                                            PowerRating;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.EmbarkStoreProductViewLoad
struct UEmbarkTelemetryAPI_EmbarkStoreProductViewLoad_Params
{
	struct FString                                     StoreSessionId;                                           // (Parm, ZeroConstructor)
	int64_t                                            EmbarkProductId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.EditPack
struct UEmbarkTelemetryAPI_EditPack_Params
{
	bool                                               bIsNew;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.EditorToolUsage
struct UEmbarkTelemetryAPI_EditorToolUsage_Params
{
	struct FString                                     ToolName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DropPinDebug3
struct UEmbarkTelemetryAPI_DropPinDebug3_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DismantleChamberGenerator2
struct UEmbarkTelemetryAPI_DismantleChamberGenerator2_Params
{
	int64_t                                            OfferId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            GeneratorAssetId;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GeneratorInstanceId;                                      // (Parm, ZeroConstructor)
	struct FString                                     GeneratorName;                                            // (Parm, ZeroConstructor)
	int64_t                                            ChamberAssetId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ChamberInstanceId;                                        // (Parm, ZeroConstructor)
	TArray<int64_t>                                    ConsumesGameAssetIds;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ConsumesAmounts;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ProducesGameAssetIds;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ProducesAmounts;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DismantleChamberGenerator
struct UEmbarkTelemetryAPI_DismantleChamberGenerator_Params
{
	int64_t                                            OfferId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            GeneratorAssetId;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GeneratorInstanceId;                                      // (Parm, ZeroConstructor)
	struct FString                                     GeneratorName;                                            // (Parm, ZeroConstructor)
	int64_t                                            ChamberAssetId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ChamberInstanceId;                                        // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoUpdatePack
struct UEmbarkTelemetryAPI_DiscoUpdatePack_Params
{
	struct FString                                     DefaultPackId;                                            // (Parm, ZeroConstructor)
	struct FString                                     PackId;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int64_t                                            RemainingCredits;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int64_t>                                    LoadoutItemIds;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ReserveItemIds;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoTravelToNextTier
struct UEmbarkTelemetryAPI_DiscoTravelToNextTier_Params
{
	struct FString                                     HostName;                                                 // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoTournamentMatchUpdate
struct UEmbarkTelemetryAPI_DiscoTournamentMatchUpdate_Params
{
	struct FString                                     Status;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleWeaponSticker2
struct UEmbarkTelemetryAPI_DiscoToggleWeaponSticker2_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquip;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleWeaponCharm2
struct UEmbarkTelemetryAPI_DiscoToggleWeaponCharm2_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquip;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleSprayItem
struct UEmbarkTelemetryAPI_DiscoToggleSprayItem_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquip;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoTogglePoseItem
struct UEmbarkTelemetryAPI_DiscoTogglePoseItem_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquip;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleEmoteItem
struct UEmbarkTelemetryAPI_DiscoToggleEmoteItem_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquip;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoToggleCosmeticItem
struct UEmbarkTelemetryAPI_DiscoToggleCosmeticItem_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquip;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectWeaponSticker2
struct UEmbarkTelemetryAPI_DiscoSelectWeaponSticker2_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectWeaponSkin2
struct UEmbarkTelemetryAPI_DiscoSelectWeaponSkin2_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectWeaponCharm2
struct UEmbarkTelemetryAPI_DiscoSelectWeaponCharm2_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectSprayItem
struct UEmbarkTelemetryAPI_DiscoSelectSprayItem_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectPoseItem
struct UEmbarkTelemetryAPI_DiscoSelectPoseItem_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectPack2
struct UEmbarkTelemetryAPI_DiscoSelectPack2_Params
{
	struct FString                                     PackId;                                                   // (Parm, ZeroConstructor)
	TArray<int64_t>                                    LoadoutItemIds;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ReserveItemIds;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectEmoteItem
struct UEmbarkTelemetryAPI_DiscoSelectEmoteItem_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoSelectCosmeticItem
struct UEmbarkTelemetryAPI_DiscoSelectCosmeticItem_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoEquipWeaponSkin2
struct UEmbarkTelemetryAPI_DiscoEquipWeaponSkin2_Params
{
	int64_t                                            GameAssetId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.DiscoConnectedToServer2
struct UEmbarkTelemetryAPI_DiscoConnectedToServer2_Params
{
	struct FString                                     HostName;                                                 // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.CompleteChamberGeneratorCraft2
struct UEmbarkTelemetryAPI_CompleteChamberGeneratorCraft2_Params
{
	int64_t                                            OfferId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OfferInstanceId;                                          // (Parm, ZeroConstructor)
	int64_t                                            GeneratorAssetId;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GeneratorInstanceId;                                      // (Parm, ZeroConstructor)
	struct FString                                     GeneratorName;                                            // (Parm, ZeroConstructor)
	TArray<int64_t>                                    ConsumesGameAssetIds;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ConsumesAmounts;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ProducesGameAssetIds;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ProducesAmounts;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.CompleteChamberGeneratorCraft
struct UEmbarkTelemetryAPI_CompleteChamberGeneratorCraft_Params
{
	int64_t                                            OfferId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OfferInstanceId;                                          // (Parm, ZeroConstructor)
	struct FString                                     GeneratorName;                                            // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientUserLoginDetails
struct UEmbarkTelemetryAPI_ClientUserLoginDetails_Params
{
	struct FString                                     TamperId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     EOSProductUserId;                                         // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientUserLogin3
struct UEmbarkTelemetryAPI_ClientUserLogin3_Params
{
	struct FString                                     CountryCode;                                              // (Parm, ZeroConstructor)
	struct FString                                     Region;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientThirdPartyStoreTransactionError2
struct UEmbarkTelemetryAPI_ClientThirdPartyStoreTransactionError2_Params
{
	struct FString                                     StoreSessionId;                                           // (Parm, ZeroConstructor)
	struct FString                                     ClientRequestId;                                          // (Parm, ZeroConstructor)
	struct FString                                     ThirdPartyStoreId;                                        // (Parm, ZeroConstructor)
	int64_t                                            ThirdPartyProductId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ResultCode;                                               // (Parm, ZeroConstructor)
	struct FString                                     ErrorMessage;                                             // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientThirdPartyStoreTransactionDone2
struct UEmbarkTelemetryAPI_ClientThirdPartyStoreTransactionDone2_Params
{
	struct FString                                     StoreSessionId;                                           // (Parm, ZeroConstructor)
	struct FString                                     ClientRequestId;                                          // (Parm, ZeroConstructor)
	struct FString                                     ThirdPartyStoreId;                                        // (Parm, ZeroConstructor)
	int64_t                                            ThirdPartyProductId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ResultCode;                                               // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientThirdPartyStoreTransactionBegin2
struct UEmbarkTelemetryAPI_ClientThirdPartyStoreTransactionBegin2_Params
{
	struct FString                                     StoreSessionId;                                           // (Parm, ZeroConstructor)
	struct FString                                     ClientRequestId;                                          // (Parm, ZeroConstructor)
	struct FString                                     ThirdPartyStoreId;                                        // (Parm, ZeroConstructor)
	int64_t                                            ThirdPartyProductId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientSetting
struct UEmbarkTelemetryAPI_ClientSetting_Params
{
	struct FString                                     SettingName;                                              // (Parm, ZeroConstructor)
	struct FString                                     SettingValue;                                             // (Parm, ZeroConstructor)
	struct FString                                     Description;                                              // (Parm, ZeroConstructor)
	int64_t                                            SettingBatchId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientOnlineTelemetry
struct UEmbarkTelemetryAPI_ClientOnlineTelemetry_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientHeartbeat3
struct UEmbarkTelemetryAPI_ClientHeartbeat3_Params
{
	struct FString                                     Activity;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Region;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientEmbarkStoreTransactionError
struct UEmbarkTelemetryAPI_ClientEmbarkStoreTransactionError_Params
{
	struct FString                                     StoreSessionId;                                           // (Parm, ZeroConstructor)
	struct FString                                     ClientRequestId;                                          // (Parm, ZeroConstructor)
	int64_t                                            EmbarkProductId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ResultCode;                                               // (Parm, ZeroConstructor)
	struct FString                                     ErrorMessage;                                             // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientEmbarkStoreTransactionDone
struct UEmbarkTelemetryAPI_ClientEmbarkStoreTransactionDone_Params
{
	struct FString                                     StoreSessionId;                                           // (Parm, ZeroConstructor)
	struct FString                                     ClientRequestId;                                          // (Parm, ZeroConstructor)
	int64_t                                            EmbarkProductId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ResultCode;                                               // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientEmbarkStoreTransactionBegin
struct UEmbarkTelemetryAPI_ClientEmbarkStoreTransactionBegin_Params
{
	struct FString                                     StoreSessionId;                                           // (Parm, ZeroConstructor)
	struct FString                                     ClientRequestId;                                          // (Parm, ZeroConstructor)
	int64_t                                            EmbarkProductId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientDeviceInfo3
struct UEmbarkTelemetryAPI_ClientDeviceInfo3_Params
{
	struct FString                                     InternalDriver;                                           // (Parm, ZeroConstructor)
	struct FString                                     UserDriver;                                               // (Parm, ZeroConstructor)
	int64_t                                            TotalRam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CpuModelDescriptor;                                       // (Parm, ZeroConstructor)
	struct FString                                     GpuName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     OsMajorVersion;                                           // (Parm, ZeroConstructor)
	struct FString                                     DefaultLanguage;                                          // (Parm, ZeroConstructor)
	struct FString                                     LoginId;                                                  // (Parm, ZeroConstructor)
	int                                                CpuCores;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CpuHyperThreads;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            VideoMemory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientCpuDetails
struct UEmbarkTelemetryAPI_ClientCpuDetails_Params
{
	struct FString                                     CpuidBase64;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientBackendGameTransformationError2
struct UEmbarkTelemetryAPI_ClientBackendGameTransformationError2_Params
{
	struct FString                                     InstanceId;                                               // (Parm, ZeroConstructor)
	int64_t                                            AssetId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ErrorCode;                                                // (Parm, ZeroConstructor)
	struct FString                                     DetailedInfo;                                             // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ClientAppInfo
struct UEmbarkTelemetryAPI_ClientAppInfo_Params
{
	struct FString                                     AppId;                                                    // (Parm, ZeroConstructor)
	struct FString                                     BranchName;                                               // (Parm, ZeroConstructor)
	struct FString                                     CountryCode;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ChamberGeneratorDeploymentChange
struct UEmbarkTelemetryAPI_ChamberGeneratorDeploymentChange_Params
{
	int64_t                                            GeneratorAssetId;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GeneratorName;                                            // (Parm, ZeroConstructor)
	int64_t                                            ChamberAssetId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ChamberName;                                              // (Parm, ZeroConstructor)
	struct FString                                     NewDeploymentStatus;                                      // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.CancelChamberGeneratorCraft2
struct UEmbarkTelemetryAPI_CancelChamberGeneratorCraft2_Params
{
	int64_t                                            OfferId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OfferInstanceId;                                          // (Parm, ZeroConstructor)
	int64_t                                            GeneratorAssetId;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GeneratorInstanceId;                                      // (Parm, ZeroConstructor)
	struct FString                                     GeneratorName;                                            // (Parm, ZeroConstructor)
	TArray<int64_t>                                    ConsumesGameAssetIds;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ConsumesAmounts;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ProducesGameAssetIds;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ProducesAmounts;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.CancelChamberGeneratorCraft
struct UEmbarkTelemetryAPI_CancelChamberGeneratorCraft_Params
{
	int64_t                                            OfferId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OfferInstanceId;                                          // (Parm, ZeroConstructor)
	struct FString                                     GeneratorName;                                            // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.ButtonPressed
struct UEmbarkTelemetryAPI_ButtonPressed_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ParentName;                                               // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.BuildChamberGenerator2
struct UEmbarkTelemetryAPI_BuildChamberGenerator2_Params
{
	int64_t                                            OfferId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            GeneratorAssetId;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GeneratorInstanceId;                                      // (Parm, ZeroConstructor)
	struct FString                                     GeneratorName;                                            // (Parm, ZeroConstructor)
	int64_t                                            ChamberAssetId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ChamberInstanceId;                                        // (Parm, ZeroConstructor)
	TArray<int64_t>                                    ConsumesGameAssetIds;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ConsumesAmounts;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ProducesGameAssetIds;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int64_t>                                    ProducesAmounts;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.BuildChamberGenerator
struct UEmbarkTelemetryAPI_BuildChamberGenerator_Params
{
	int64_t                                            OfferId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            GeneratorAssetId;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GeneratorInstanceId;                                      // (Parm, ZeroConstructor)
	struct FString                                     GeneratorName;                                            // (Parm, ZeroConstructor)
	int64_t                                            ChamberAssetId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ChamberInstanceId;                                        // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.BattlepassPromotionPlatePressed
struct UEmbarkTelemetryAPI_BattlepassPromotionPlatePressed_Params
{
	int64_t                                            AssetId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ProductId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatUntrustedModule
struct UEmbarkTelemetryAPI_AntiCheatUntrustedModule_Params
{
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatUnknownModule
struct UEmbarkTelemetryAPI_AntiCheatUnknownModule_Params
{
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaProcessIntegrity
struct UEmbarkTelemetryAPI_AntiCheatTheiaProcessIntegrity_Params
{
	struct FString                                     CrashCode;                                                // (Parm, ZeroConstructor)
	int64_t                                            TimeSpentSuspended;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaMachineIntegrity
struct UEmbarkTelemetryAPI_AntiCheatTheiaMachineIntegrity_Params
{
	struct FString                                     CrashCode;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaBadware
struct UEmbarkTelemetryAPI_AntiCheatTheiaBadware_Params
{
	struct FString                                     CrashCode;                                                // (Parm, ZeroConstructor)
	struct FString                                     BadwareProduct;                                           // (Parm, ZeroConstructor)
	struct FString                                     DeviceName;                                               // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaAntiVM
struct UEmbarkTelemetryAPI_AntiCheatTheiaAntiVM_Params
{
	struct FString                                     CrashCode;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatTheiaAntiDebug
struct UEmbarkTelemetryAPI_AntiCheatTheiaAntiDebug_Params
{
	struct FString                                     CrashCode;                                                // (Parm, ZeroConstructor)
	int64_t                                            HeapFlags;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            HeapForceFlags;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatRejectModule
struct UEmbarkTelemetryAPI_AntiCheatRejectModule_Params
{
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatPlayerViolation
struct UEmbarkTelemetryAPI_AntiCheatPlayerViolation_Params
{
	struct FString                                     Violation;                                                // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatPlayerActionRequiredClient
struct UEmbarkTelemetryAPI_AntiCheatPlayerActionRequiredClient_Params
{
	struct FString                                     ClientAction;                                             // (Parm, ZeroConstructor)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Details;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatHazard
struct UEmbarkTelemetryAPI_AntiCheatHazard_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AntiCheatDebuggerDetected
struct UEmbarkTelemetryAPI_AntiCheatDebuggerDetected_Params
{
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AngelscriptClientError
struct UEmbarkTelemetryAPI_AngelscriptClientError_Params
{
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AccountLinked
struct UEmbarkTelemetryAPI_AccountLinked_Params
{
};

// Function EmbarkTelemetry.EmbarkTelemetryAPI.AccountCreated
struct UEmbarkTelemetryAPI_AccountCreated_Params
{
};

// Function EmbarkTelemetry.EmbarkTelemetryUtil.SetRegion
struct UEmbarkTelemetryUtil_SetRegion_Params
{
	struct FString                                     Region;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkTelemetry.EmbarkTelemetryUtil.SetClientStatusActivity
struct UEmbarkTelemetryUtil_SetClientStatusActivity_Params
{
	TEnumAsByte<ETelemetryClientActivity>              Activity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTelemetry.EmbarkTelemetryUtil.GetClientUuid
struct UEmbarkTelemetryUtil_GetClientUuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkTelemetry.EmbarkTelemetryUtil.GetClientPlatform
struct UEmbarkTelemetryUtil_GetClientPlatform_Params
{
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
