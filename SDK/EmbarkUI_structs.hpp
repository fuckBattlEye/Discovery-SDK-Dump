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

// Enum EmbarkUI.EEmbarkButtonState
enum class EEmbarkButtonState : uint8_t
{
	Normal                         = 0,
	Highlight                      = 1,
	Pressed                        = 2,
	EEmbarkButtonState_MAX         = 3
};


// Enum EmbarkUI.EEmbarkWidgetInputMode
enum class EEmbarkWidgetInputMode : uint8_t
{
	Default                        = 0,
	GameAndMenu                    = 1,
	Game                           = 2,
	Menu                           = 3,
	EEmbarkWidgetInputMode_MAX     = 4
};


// Enum EmbarkUI.EUIConceptArtLoadingScreenSelectionStrategy
enum class EUIConceptArtLoadingScreenSelectionStrategy : uint8_t
{
	Random                         = 0,
	Single                         = 1,
	EUIConceptArtLoadingScreenSelectionStrategy_MAX = 2
};


// Enum EmbarkUI.EMaterialBoxScaling
enum class EMaterialBoxScaling : uint8_t
{
	ReLayout                       = 0,
	UniformResize                  = 1,
	Oversize                       = 2,
	EMaterialBoxScaling_MAX        = 3
};


// Enum EmbarkUI.EUIColorState
enum class EUIColorState : uint8_t
{
	Neutral                        = 0,
	Positive                       = 1,
	Negative                       = 2,
	Highlight                      = 3,
	SquadMember1                   = 4,
	SquadMember2                   = 5,
	SquadMember3                   = 6,
	RarityNone                     = 7,
	RarityCommon                   = 8,
	RarityRare                     = 9,
	RarityEpic                     = 10,
	RarityLegendary                = 11,
	Friend                         = 12,
	Enemy                          = 13,
	Self                           = 14,
	SecondaryLight                 = 15,
	SecondaryMid                   = 16,
	SecondaryDark                  = 17,
	SecondaryPale                  = 18,
	Debug                          = 19,
	PlayerSquad                    = 20,
	OtherSquad                     = 21,
	ConstructableCore              = 22,
	Primary                        = 23,
	Secondary                      = 24,
	ObjectiveMarker                = 25,
	Complementary                  = 26,
	Headshot                       = 27,
	EUIColorState_MAX              = 28
};


// Enum EmbarkUI.EUIOpacityState
enum class EUIOpacityState : uint8_t
{
	Default                        = 0,
	Locked                         = 1,
	Backplate                      = 2,
	BackplateEmphasis              = 3,
	Opacity1                       = 4,
	Opacity2                       = 5,
	Opacity3                       = 6,
	Opacity4                       = 7,
	Transparent                    = 8,
	EUIOpacityState_MAX            = 9
};


// Enum EmbarkUI.EEmbarkUITextType
enum class EEmbarkUITextType : uint8_t
{
	H1                             = 0,
	H2                             = 1,
	H3                             = 2,
	H4                             = 3,
	H5                             = 4,
	H6                             = 5,
	Paragraph                      = 6,
	Subheader1                     = 7,
	Subheader2                     = 8,
	Body                           = 9,
	BodyEmphasis                   = 10,
	Caption                        = 11,
	Overline                       = 12,
	Button                         = 13,
	ButtonEmphasis                 = 14,
	InputKey                       = 15,
	Details                        = 16,
	SubtitleSmall                  = 17,
	SubtitleMedium                 = 18,
	SubtitleLarge                  = 19,
	HUD1                           = 20,
	HUD2                           = 21,
	HUD3                           = 22,
	HUD4                           = 23,
	HUD5                           = 24,
	HUD6                           = 25,
	BodyTooltip                    = 26,
	TagTooltip                     = 27,
	ExtraLarge                     = 28,
	MonoH1                         = 29,
	EEmbarkUITextType_MAX          = 30
};


// Enum EmbarkUI.EUIDataContext
enum class EUIDataContext : uint8_t
{
	Static                         = 0,
	Frontend                       = 1,
	Lobby                          = 2,
	Ingame                         = 3,
	EUIDataContext_MAX             = 4
};


// Enum EmbarkUI.EUIAnimationParticipantState
enum class EUIAnimationParticipantState : uint8_t
{
	Idle                           = 0,
	Before                         = 1,
	During                         = 2,
	After                          = 3,
	GlobalDone                     = 4,
	EUIAnimationParticipantState_MAX = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkUI.EmbarkOptionalSlateSound
// 0x0020
struct FEmbarkOptionalSlateSound
{
	bool                                               bHasSound;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSlateSound                                 Sound;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct EmbarkUI.EmbarkTabDescriptor
// 0x0040
struct FEmbarkTabDescriptor
{
	struct FName                                       TabId;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       TabText;                                                  // 0x0008(0x0018) (Edit, BlueprintVisible)
	bool                                               bHidden;                                                  // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UClass*                                      TabButtonType;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TabContentType;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     CreatedTabContentWidget;                                  // 0x0038(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct EmbarkUI.UILoadingScreenConfiguration
// 0x0078
struct FUILoadingScreenConfiguration
{
	struct FSoftObjectPath                             BackgroundImageRef;                                       // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Title1;                                                   // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Title2;                                                   // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Information1;                                             // 0x0048(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Information2;                                             // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct EmbarkUI.ScrollParameters
// 0x0014
struct FScrollParameters
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartDelay;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndDelay;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDelay;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDelay;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkUI.PerformanceOverlayStats
// 0x000C
struct FPerformanceOverlayStats
{
	float                                              GameThreadFrameTimeMs;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RenderThreadFrameTimeMs;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RHIThreadFrameTimeMs;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkUI.UIAnimationTickParameter
// 0x0090
struct FUIAnimationTickParameter
{
	float                                              FrameDeltaTime;                                           // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ParticipantAnimationProgress;                             // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GlobalAnimationProgress;                                  // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FGeometry                                   DriverGeometry;                                           // 0x0010(0x0040) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FGeometry                                   ParticipantGeometry;                                      // 0x0050(0x0040) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct EmbarkUI.WatermarkGrid
// 0x000C
struct FWatermarkGrid
{
	int                                                Rows;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Columns;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Base;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkUI.EmbarkUIStyleCustomizableEnumColor
// 0x0008
struct FEmbarkUIStyleCustomizableEnumColor
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkUI.EmbarkUIStyleCustomizableEnumOpacity
// 0x0008
struct FEmbarkUIStyleCustomizableEnumOpacity
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkUI.EmbarkUIStyleCustomizableEnumTextStyle
// 0x0008
struct FEmbarkUIStyleCustomizableEnumTextStyle
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkUI.EmbarkUIStyleOption
// 0x0088
struct FEmbarkUIStyleOption
{
	int                                                EnumValue;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       Label;                                                    // 0x0008(0x0018) (BlueprintVisible)
	struct FLinearColor                                Color;                                                    // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0030(0x0058) (BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
