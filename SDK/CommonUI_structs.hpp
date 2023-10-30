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

// Enum CommonUI.ECommonNumericType
enum class ECommonNumericType : uint8_t
{
	Number                         = 0,
	Percentage                     = 1,
	Seconds                        = 2,
	Distance                       = 3,
	ECommonNumericType_MAX         = 4
};


// Enum CommonUI.ECommonInputMode
enum class ECommonInputMode : uint8_t
{
	Menu                           = 0,
	Game                           = 1,
	All                            = 2,
	MAX                            = 3
};


// Enum CommonUI.ERichTextInlineIconDisplayMode
enum class ERichTextInlineIconDisplayMode : uint8_t
{
	IconOnly                       = 0,
	TextOnly                       = 1,
	IconAndText                    = 2,
	MAX                            = 3
};


// Enum CommonUI.EInputActionState
enum class EInputActionState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	HiddenAndDisabled              = 3,
	EInputActionState_MAX          = 4
};


// Enum CommonUI.ECommonSwitcherTransition
enum class ECommonSwitcherTransition : uint8_t
{
	FadeOnly                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Zoom                           = 3,
	ECommonSwitcherTransition_MAX  = 4
};


// Enum CommonUI.ETransitionCurve
enum class ETransitionCurve : uint8_t
{
	Linear                         = 0,
	QuadIn                         = 1,
	QuadOut                        = 2,
	QuadInOut                      = 3,
	CubicIn                        = 4,
	CubicOut                       = 5,
	CubicInOut                     = 6,
	ETransitionCurve_MAX           = 7
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CommonUI.CommonRegisteredTabInfo
// 0x0018
struct FCommonRegisteredTabInfo
{
	int                                                TabIndex;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UCommonButtonBase*                           TabButton;                                                // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     ContentInstance;                                          // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct CommonUI.CommonButtonStyleOptionalSlateSound
// 0x0020
struct FCommonButtonStyleOptionalSlateSound
{
	bool                                               bHasSound;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSlateSound                                 Sound;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct CommonUI.CommonNumberFormattingOptions
// 0x0014
struct FCommonNumberFormattingOptions
{
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseGrouping;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                MinimumIntegralDigits;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaximumIntegralDigits;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinimumFractionalDigits;                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaximumFractionalDigits;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CommonUI.UITag
// 0x0000 (0x0008 - 0x0008)
struct FUITag : public FGameplayTag
{

};

// ScriptStruct CommonUI.UIActionTag
// 0x0000 (0x0008 - 0x0008)
struct FUIActionTag : public FUITag
{

};

// ScriptStruct CommonUI.UIActionKeyMapping
// 0x0020
struct FUIActionKeyMapping
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, Config)
	float                                              HoldTime;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct CommonUI.UIInputAction
// 0x0030
struct FUIInputAction
{
	struct FUIActionTag                                ActionTag;                                                // 0x0000(0x0008) (Edit, Config)
	struct FText                                       DefaultDisplayName;                                       // 0x0008(0x0018) (Edit, Config)
	TArray<struct FUIActionKeyMapping>                 KeyMappings;                                              // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct CommonUI.CommonAnalogCursorSettings
// 0x0024
struct FCommonAnalogCursorSettings
{
	int                                                PreprocessorPriority;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableCursorAcceleration;                                // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              CursorAcceleration;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CursorMaxSpeed;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CursorDeadZone;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlowdownFactor;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScrollDeadZone;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScrollUpdatePeriod;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScrollMultiplier;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct CommonUI.CommonInputActionHandlerData
// 0x0020
struct FCommonInputActionHandlerData
{
	struct FDataTableRowHandle                         InputActionRow;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct CommonUI.RichTextIconData
// 0x0050 (0x0058 - 0x0008)
struct FRichTextIconData : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) UNKNOWN PROPERTY: ResourceObject
	struct FVector2D                                   ImageSize;                                                // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct CommonUI.CommonInputTypeInfo
// 0x00F0
struct FCommonInputTypeInfo
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0018(0x0001) MISSED OFFSET
	bool                                               bActionRequiresHold;                                      // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              HoldTime;                                                 // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 OverrideBrush;                                            // 0x0020(0x00D0) (Edit)
};

// ScriptStruct CommonUI.CommonInputActionDataBase
// 0x0358 (0x0360 - 0x0008)
struct FCommonInputActionDataBase : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       HoldDisplayName;                                          // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                NavBarPriority;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FCommonInputTypeInfo                        KeyboardInputTypeInfo;                                    // 0x0040(0x00F0) (Edit)
	struct FCommonInputTypeInfo                        DefaultGamepadInputTypeInfo;                              // 0x0130(0x00F0) (Edit)
	TMap<struct FName, struct FCommonInputTypeInfo>    GamepadInputOverrides;                                    // 0x0220(0x0050) (Edit)
	struct FCommonInputTypeInfo                        TouchInputTypeInfo;                                       // 0x0270(0x00F0) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
