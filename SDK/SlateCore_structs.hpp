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

// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
	Unchecked                      = 0,
	Checked                        = 1,
	Undetermined                   = 2,
	ECheckBoxState_MAX             = 3
};


// Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{
	Inherit                        = 0,
	ClipToBounds                   = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways             = 3,
	OnDemand                       = 4,
	EWidgetClipping_MAX            = 5
};


// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	NoImage                        = 0,
	FullColor                      = 1,
	Linear                         = 2,
	Vector                         = 3,
	ESlateBrushImageType_MAX       = 4
};


// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	NoMirror                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushMirrorType_MAX      = 4
};


// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	NoTile                         = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushTileType_MAX        = 4
};


// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	NoDrawType                     = 0,
	Box                            = 1,
	Border                         = 2,
	Image                          = 3,
	RoundedBox                     = 4,
	ESlateBrushDrawType_MAX        = 5
};


// Enum SlateCore.ESlateBrushRoundingType
enum class ESlateBrushRoundingType : uint8_t
{
	FixedRadius                    = 0,
	HalfHeightRadius               = 1,
	ESlateBrushRoundingType_MAX    = 2
};


// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	UseColor_Specified             = 0,
	UseColor_ColorTable            = 1,
	UseColor_Foreground            = 2,
	UseColor_Foreground_Subdued    = 3,
	UseColor_UseStyle              = 4,
	UseColor_MAX                   = 5
};


// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
	Escape                         = 0,
	Explicit                       = 1,
	Wrap                           = 2,
	Stop                           = 3,
	Custom                         = 4,
	CustomBoundary                 = 5,
	Invalid                        = 6,
	EUINavigationRule_MAX          = 7
};


// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Up                             = 2,
	Down                           = 3,
	Next                           = 4,
	Previous                       = 5,
	Num                            = 6,
	Invalid                        = 7,
	EUINavigation_MAX              = 8
};


// Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8_t
{
	Inherit                        = 0,
	Culture                        = 1,
	LeftToRight                    = 2,
	RightToLeft                    = 3,
	EFlowDirectionPreference_MAX   = 4
};


// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	OnKeyPress                     = 0,
	OnNavigation                   = 1,
	OnMouseClick                   = 2,
	Direct                         = 3,
	ESelectInfo_MAX                = 4
};


// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4
};


// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	Default                        = 0,
	OnEnter                        = 1,
	OnUserMovedFocus               = 2,
	OnCleared                      = 3,
	ETextCommit_MAX                = 4
};


// Enum SlateCore.ETextOverflowPolicy
enum class ETextOverflowPolicy : uint8_t
{
	Clip                           = 0,
	Ellipsis                       = 1,
	ETextOverflowPolicy_MAX        = 2
};


// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
	Auto                           = 0,
	KerningOnly                    = 1,
	FullShaping                    = 2,
	ETextShapingMethod_MAX         = 3
};


// Enum SlateCore.ETextTransformPolicy
enum class ETextTransformPolicy : uint8_t
{
	None                           = 0,
	ToLower                        = 1,
	ToUpper                        = 2,
	ETextTransformPolicy_MAX       = 3
};


// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_MAX              = 13
};


// Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
	NormalVision                   = 0,
	Deuteranope                    = 1,
	Protanope                      = 2,
	Tritanope                      = 3,
	EColorVisionDeficiency_MAX     = 4
};


// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4
};


// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2
};


// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	Default                        = 0,
	Auto                           = 1,
	AutoLight                      = 2,
	Monochrome                     = 3,
	None                           = 4,
	EFontHinting_MAX               = 5
};


// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3
};


// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
	Metrics                        = 0,
	BoundingBox                    = 1,
	EFontLayoutMethod_MAX          = 2
};


// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
	Mouse                          = 0,
	Navigation                     = 1,
	SetDirectly                    = 2,
	Cleared                        = 3,
	OtherWidgetLostFocus           = 4,
	WindowActivate                 = 5,
	EFocusCause_MAX                = 6
};


// Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8_t
{
	MouseMove                      = 0,
	MouseEnter                     = 1,
	MouseLeave                     = 2,
	PreviewMouseButtonDown         = 3,
	MouseButtonDown                = 4,
	MouseButtonUp                  = 5,
	MouseButtonDoubleClick         = 6,
	MouseWheel                     = 7,
	TouchStart                     = 8,
	TouchEnd                       = 9,
	TouchForceChanged              = 10,
	TouchFirstMove                 = 11,
	TouchMoved                     = 12,
	DragDetected                   = 13,
	DragEnter                      = 14,
	DragLeave                      = 15,
	DragOver                       = 16,
	DragDrop                       = 17,
	DropMessage                    = 18,
	PreviewKeyDown                 = 19,
	KeyDown                        = 20,
	KeyUp                          = 21,
	KeyChar                        = 22,
	AnalogInput                    = 23,
	TouchGesture                   = 24,
	MotionDetected                 = 25,
	MAX                            = 26
};


// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	MouseCaptureGained             = 0,
	MouseCaptureLost               = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2
};


// Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8_t
{
	Unknown                        = 0,
	Explicit                       = 1,
	CustomDelegateBound            = 2,
	CustomDelegateUnbound          = 3,
	NextOrPrevious                 = 4,
	HitTestGrid                    = 5,
	ESlateDebuggingNavigationMethod_MAX = 6
};


// Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8_t
{
	FocusChanging                  = 0,
	FocusLost                      = 1,
	FocusReceived                  = 2,
	MAX                            = 3
};


// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	DownAndUp                      = 0,
	MouseDown                      = 1,
	MouseUp                        = 2,
	PreciseClick                   = 3,
	EButtonClickMethod_MAX         = 4
};


// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	DownAndUp                      = 0,
	Down                           = 1,
	PreciseTap                     = 2,
	EButtonTouchMethod_MAX         = 3
};


// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
	DownAndUp                      = 0,
	ButtonPress                    = 1,
	ButtonRelease                  = 2,
	EButtonPressMethod_MAX         = 3
};


// Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8_t
{
	Accept                         = 0,
	Back                           = 1,
	Num                            = 2,
	Invalid                        = 3,
	EUINavigationAction_MAX        = 4
};


// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
	FocusedWidget                  = 0,
	WidgetUnderCursor              = 1,
	ENavigationSource_MAX          = 2
};


// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
	Keyboard                       = 0,
	Controller                     = 1,
	User                           = 2,
	ENavigationGenesis_MAX         = 3
};


// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2
};


// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
	WhenScrollingPossible          = 0,
	Always                         = 1,
	Never                          = 2,
	EConsumeMouseWheel_MAX         = 3
};


// Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8_t
{
	ActiveWindow                   = 0,
	MainWindow                     = 1,
	ESlateParentWindowSearchMethod_MAX = 2
};


// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	CheckBox                       = 0,
	ToggleButton                   = 1,
	ESlateCheckBoxType_MAX         = 2
};


// Enum SlateCore.EStyleColor
enum class EStyleColor : uint8_t
{
	Black                          = 0,
	Background                     = 1,
	Title                          = 2,
	WindowBorder                   = 3,
	Foldout                        = 4,
	Input                          = 5,
	InputOutline                   = 6,
	Recessed                       = 7,
	Panel                          = 8,
	Header                         = 9,
	Dropdown                       = 10,
	DropdownOutline                = 11,
	Hover                          = 12,
	Hover2                         = 13,
	White                          = 14,
	White25                        = 15,
	Highlight                      = 16,
	Primary                        = 17,
	PrimaryHover                   = 18,
	PrimaryPress                   = 19,
	Secondary                      = 20,
	Foreground                     = 21,
	ForegroundHover                = 22,
	ForegroundInverted             = 23,
	ForegroundHeader               = 24,
	Select                         = 25,
	SelectInactive                 = 26,
	SelectParent                   = 27,
	SelectHover                    = 28,
	Notifications                  = 29,
	AccentBlue                     = 30,
	AccentPurple                   = 31,
	AccentPink                     = 32,
	AccentRed                      = 33,
	AccentOrange                   = 34,
	AccentYellow                   = 35,
	AccentGreen                    = 36,
	AccentBrown                    = 37,
	AccentBlack                    = 38,
	AccentGray                     = 39,
	AccentWhite                    = 40,
	AccentFolder                   = 41,
	Warning                        = 42,
	Error                          = 43,
	Success                        = 44,
	User1                          = 45,
	User2                          = 46,
	User3                          = 47,
	User4                          = 48,
	User5                          = 49,
	User6                          = 50,
	User7                          = 51,
	User8                          = 52,
	User9                          = 53,
	User10                         = 54,
	User11                         = 55,
	User12                         = 56,
	User13                         = 57,
	User14                         = 58,
	User15                         = 59,
	User16                         = 60,
	MAX                            = 61
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.StyleColorList
// 0x0988
struct FStyleColorList
{
	struct FLinearColor                                StyleColors[0x3D];                                        // 0x0000(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5B8];                                     // 0x03D0(0x05B8) MISSED OFFSET
};

// ScriptStruct SlateCore.Geometry
// 0x0040
struct FGeometry
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Left;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bottom;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.SlateColor
// 0x0014
struct FSlateColor
{
	struct FLinearColor                                SpecifiedColor;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateBrushOutlineSettings
// 0x0040
struct FSlateBrushOutlineSettings
{
	struct FVector4                                    CornerRadii;                                              // 0x0000(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // 0x0020(0x0014) (Edit, BlueprintVisible)
	float                                              Width;                                                    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushRoundingType>               RoundingType;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBrushTransparency;                                    // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateBrush
// 0x00D0
struct FSlateBrush
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FVector2D                                   ImageSize;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 TintColor;                                                // 0x0030(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
	struct FSlateBrushOutlineSettings                  OutlineSettings;                                          // 0x0050(0x0040) (Edit, BlueprintVisible)
	class UObject*                                     ResourceObject;                                           // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResourceName;                                             // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBox2f                                      UVRegion;                                                 // 0x00A0(0x0014) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                   // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                   // 0x00B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                // 0x00B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                // 0x00B7(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
	unsigned char                                      bIsDynamicallyLoaded : 1;                                 // 0x00C8(0x0001)
	unsigned char                                      bHasUObject : 1;                                          // 0x00C8(0x0001) (Deprecated)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
};

// ScriptStruct SlateCore.InputEvent
// 0x0018
struct FInputEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct SlateCore.PointerEvent
// 0x0080 (0x0098 - 0x0018)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0018(0x0080) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0008
struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.TableRowStyle
// 0x0D48 (0x0D50 - 0x0008)
struct FTableRowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 SelectorFocusedBrush;                                     // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveHoveredBrush;                                       // 0x00E0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x01B0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveHoveredBrush;                                     // 0x0280(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveBrush;                                            // 0x0350(0x00D0) (Edit, BlueprintVisible)
	bool                                               bUseParentRowBrush;                                       // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0421(0x000F) MISSED OFFSET
	struct FSlateBrush                                 ParentRowBackgroundBrush;                                 // 0x0430(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ParentRowBackgroundHoveredBrush;                          // 0x0500(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundHoveredBrush;                            // 0x05D0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundBrush;                                   // 0x06A0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundHoveredBrush;                             // 0x0770(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundBrush;                                    // 0x0840(0x00D0) (Edit, BlueprintVisible)
	struct FSlateColor                                 TextColor;                                                // 0x0910(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 SelectedTextColor;                                        // 0x0924(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0938(0x0008) MISSED OFFSET
	struct FSlateBrush                                 DropIndicator_Above;                                      // 0x0940(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Onto;                                       // 0x0A10(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Below;                                      // 0x0AE0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveHighlightedBrush;                                   // 0x0BB0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveHighlightedBrush;                                 // 0x0C80(0x00D0) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateSound
// 0x0018
struct FSlateSound
{
	class UObject*                                     ResourceObject;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct SlateCore.ButtonStyle
// 0x03E8 (0x03F0 - 0x0008)
struct FButtonStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 Normal;                                                   // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Hovered;                                                  // 0x00E0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Pressed;                                                  // 0x01B0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Disabled;                                                 // 0x0280(0x00D0) (Edit, BlueprintVisible)
	struct FSlateColor                                 NormalForeground;                                         // 0x0350(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 HoveredForeground;                                        // 0x0364(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 PressedForeground;                                        // 0x0378(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 DisabledForeground;                                       // 0x038C(0x0014) (Edit, BlueprintVisible)
	struct FMargin                                     NormalPadding;                                            // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     PressedPadding;                                           // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x03C0(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x03D8(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x05F8 (0x0600 - 0x0008)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FButtonStyle                                ButtonStyle;                                              // 0x0010(0x03F0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x0400(0x00D0) (Edit, BlueprintVisible)
	struct FVector2D                                   ShadowOffset;                                             // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 MenuBorderBrush;                                          // 0x04F0(0x00D0) (Edit, BlueprintVisible)
	struct FMargin                                     MenuBorderPadding;                                        // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     ContentPadding;                                           // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     DownArrowPadding;                                         // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    DownArrowAlign;                                           // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x05F1(0x000F) MISSED OFFSET
};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x0658 (0x0660 - 0x0008)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0010(0x0600) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0610(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 SelectionChangeSlateSound;                                // 0x0628(0x0018) (Edit, BlueprintVisible)
	struct FMargin                                     ContentPadding;                                           // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     MenuRowPadding;                                           // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.FontOutlineSettings
// 0x0020
struct FFontOutlineSettings
{
	int                                                OutlineSize;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSeparateFillAlpha;                                       // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyOutlineToDropShadows;                               // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	class UObject*                                     OutlineMaterial;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0058
struct FSlateFontInfo
{
	class UObject*                                     FontObject;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     FontMaterial;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFontOutlineSettings                        OutlineSettings;                                          // 0x0010(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FName                                       TypefaceFontName;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LetterSpacing;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.EditableTextStyle
// 0x02E8 (0x02F0 - 0x0008)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0058) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0060(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
	struct FSlateBrush                                 BackgroundImageSelected;                                  // 0x0080(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageComposing;                                 // 0x0150(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CaretImage;                                               // 0x0220(0x00D0) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x0768 (0x0770 - 0x0008)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 HorizontalBackgroundImage;                                // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBackgroundImage;                                  // 0x00E0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalTopSlotImage;                                     // 0x01B0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HorizontalTopSlotImage;                                   // 0x0280(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBottomSlotImage;                                  // 0x0350(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HorizontalBottomSlotImage;                                // 0x0420(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x04F0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredThumbImage;                                        // 0x05C0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DraggedThumbImage;                                        // 0x0690(0x00D0) (Edit, BlueprintVisible)
	float                                              Thickness;                                                // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0764(0x000C) MISSED OFFSET
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x0B98 (0x0BA0 - 0x0008)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 BackgroundImageNormal;                                    // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageHovered;                                   // 0x00E0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageFocused;                                   // 0x01B0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageReadOnly;                                  // 0x0280(0x00D0) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0360(0x0058) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x03B8(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 BackgroundColor;                                          // 0x03CC(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 ReadOnlyForegroundColor;                                  // 0x03E0(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 FocusedForegroundColor;                                   // 0x03F4(0x0014) (Edit, BlueprintVisible)
	struct FMargin                                     HScrollBarPadding;                                        // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     VScrollBarPadding;                                        // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0430(0x0770) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.TextBlockStyle
// 0x0338 (0x0340 - 0x0008)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0058) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0060(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FVector2D                                   ShadowOffset;                                             // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 SelectedBackgroundColor;                                  // 0x0098(0x0014) (Edit)
	struct FSlateColor                                 HighlightColor;                                           // 0x00AC(0x0014) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HighlightShape;                                           // 0x00C0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 StrikeBrush;                                              // 0x0190(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UnderlineBrush;                                           // 0x0260(0x00D0) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0330(0x0010) MISSED OFFSET
};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x05F8 (0x0600 - 0x0008)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveBackgroundBrush;                                    // 0x00E0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredBackgroundBrush;                                   // 0x01B0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveFillBrush;                                          // 0x0280(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredFillBrush;                                         // 0x0350(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveFillBrush;                                        // 0x0420(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ArrowsImage;                                              // 0x04F0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x05C0(0x0014)
	struct FMargin                                     TextPadding;                                              // 0x05D4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     InsetPadding;                                             // 0x05E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x05F4(0x000C) MISSED OFFSET
};

// ScriptStruct SlateCore.CharacterEvent
// 0x0008 (0x0020 - 0x0018)
struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.KeyEvent
// 0x0020 (0x0038 - 0x0018)
struct FKeyEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.NavigationEvent
// 0x0008 (0x0020 - 0x0018)
struct FNavigationEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0008 (0x0040 - 0x0038)
struct FAnalogInputEvent : public FKeyEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.FocusEvent
// 0x0008
struct FFocusEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.MotionEvent
// 0x0060 (0x0078 - 0x0018)
struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0018(0x0060) MISSED OFFSET
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x0EE8 (0x0EF0 - 0x0008)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0010(0x0BA0) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0BB0(0x0340) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SliderStyle
// 0x04F8 (0x0500 - 0x0008)
struct FSliderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 NormalBarImage;                                           // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredBarImage;                                          // 0x00E0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledBarImage;                                         // 0x01B0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0280(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredThumbImage;                                        // 0x0350(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledThumbImage;                                       // 0x0420(0x00D0) (Edit, BlueprintVisible)
	float                                              BarThickness;                                             // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x04F4(0x000C) MISSED OFFSET
};

// ScriptStruct SlateCore.FontData
// 0x0028
struct FFontData
{
	struct FString                                     FontFilename;                                             // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	int                                                SubFaceIndex;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UObject*                                     FontFaceAsset;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0030
struct FTypefaceEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FFontData                                   Font;                                                     // 0x0008(0x0028)
};

// ScriptStruct SlateCore.Typeface
// 0x0010
struct FTypeface
{
	TArray<struct FTypefaceEntry>                      Fonts;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct SlateCore.CompositeFallbackFont
// 0x0018
struct FCompositeFallbackFont
{
	struct FTypeface                                   Typeface;                                                 // 0x0000(0x0010)
	float                                              ScalingFactor;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.CompositeSubFont
// 0x0020 (0x0038 - 0x0018)
struct FCompositeSubFont : public FCompositeFallbackFont
{
	TArray<struct FInt32Range>                         CharacterRanges;                                          // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     Cultures;                                                 // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct SlateCore.CompositeFont
// 0x0038
struct FCompositeFont
{
	struct FTypeface                                   DefaultTypeface;                                          // 0x0000(0x0010)
	struct FCompositeFallbackFont                      FallbackTypeface;                                         // 0x0010(0x0018)
	TArray<struct FCompositeSubFont>                   SubTypefaces;                                             // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct SlateCore.CaptureLostEvent
// 0x0008
struct FCaptureLostEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x0AC8 (0x0AD0 - 0x0008)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FSlateBrush                                 UncheckedImage;                                           // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedHoveredImage;                                    // 0x00E0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedPressedImage;                                    // 0x01B0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedImage;                                             // 0x0280(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedHoveredImage;                                      // 0x0350(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedPressedImage;                                      // 0x0420(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedImage;                                        // 0x04F0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedHoveredImage;                                 // 0x05C0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedPressedImage;                                 // 0x0690(0x00D0) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 BackgroundImage;                                          // 0x0770(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundHoveredImage;                                   // 0x0840(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundPressedImage;                                   // 0x0910(0x00D0) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x09E0(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 HoveredForeground;                                        // 0x09F4(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 PressedForeground;                                        // 0x0A08(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 CheckedForeground;                                        // 0x0A1C(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 CheckedHoveredForeground;                                 // 0x0A30(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 CheckedPressedForeground;                                 // 0x0A44(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 UndeterminedForeground;                                   // 0x0A58(0x0014) (Edit, BlueprintVisible)
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x0A6C(0x0014) (Edit, BlueprintVisible)
	struct FSlateSound                                 CheckedSlateSound;                                        // 0x0A80(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 UncheckedSlateSound;                                      // 0x0A98(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0AB0(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0AC8(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.SegmentedControlStyle
// 0x2158 (0x2160 - 0x0008)
struct FSegmentedControlStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FCheckBoxStyle                              ControlStyle;                                             // 0x0010(0x0AD0) (Edit, BlueprintVisible)
	struct FCheckBoxStyle                              FirstControlStyle;                                        // 0x0AE0(0x0AD0) (Edit, BlueprintVisible)
	struct FCheckBoxStyle                              LastControlStyle;                                         // 0x15B0(0x0AD0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x2080(0x00D0) (Edit, BlueprintVisible)
	struct FMargin                                     UniformPadding;                                           // 0x2150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x0748 (0x0750 - 0x0008)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FButtonStyle                                UnderlineStyle;                                           // 0x0010(0x03F0) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0400(0x0340) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x0288 (0x0290 - 0x0008)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 BackgroundImage;                                          // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FillImage;                                                // 0x00E0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MarqueeImage;                                             // 0x01B0(0x00D0) (Edit, BlueprintVisible)
	bool                                               EnableFillAnimation;                                      // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0281(0x000F) MISSED OFFSET
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x01B8 (0x01C0 - 0x0008)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 CollapsedImage;                                           // 0x0010(0x00D0) (Edit)
	struct FSlateBrush                                 ExpandedImage;                                            // 0x00E0(0x00D0) (Edit)
	float                                              RolloutAnimationSeconds;                                  // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x01B4(0x000C) MISSED OFFSET
};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0F68 (0x0F70 - 0x0008)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FEditableTextBoxStyle                       TextBoxStyle;                                             // 0x0010(0x0BA0) (Edit)
	struct FSlateFontInfo                              ActiveFontInfo;                                           // 0x0BB0(0x0058) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0C08(0x0008) MISSED OFFSET
	struct FSlateBrush                                 UpArrowImage;                                             // 0x0C10(0x00D0) (Edit)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x0CE0(0x00D0) (Edit)
	struct FSlateBrush                                 GlassImage;                                               // 0x0DB0(0x00D0) (Edit)
	struct FSlateBrush                                 ClearImage;                                               // 0x0E80(0x00D0) (Edit)
	struct FMargin                                     ImagePadding;                                             // 0x0F50(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLeftAlignButtons;                                        // 0x0F60(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0F61(0x000F) MISSED OFFSET
};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x0918 (0x0920 - 0x0008)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSliderStyle                                SliderStyle;                                              // 0x0010(0x0500) (Edit)
	struct FSlateBrush                                 HighVolumeImage;                                          // 0x0510(0x00D0) (Edit)
	struct FSlateBrush                                 MidVolumeImage;                                           // 0x05E0(0x00D0) (Edit)
	struct FSlateBrush                                 LowVolumeImage;                                           // 0x06B0(0x00D0) (Edit)
	struct FSlateBrush                                 NoVolumeImage;                                            // 0x0780(0x00D0) (Edit)
	struct FSlateBrush                                 MutedImage;                                               // 0x0850(0x00D0) (Edit)
};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x00E8 (0x00F0 - 0x0008)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 Image;                                                    // 0x0010(0x00D0) (Edit)
	int16_t                                            Baseline;                                                 // 0x00E0(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x00E2(0x000E) MISSED OFFSET
};

// ScriptStruct SlateCore.SplitterStyle
// 0x01A8 (0x01B0 - 0x0008)
struct FSplitterStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 HandleNormalBrush;                                        // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HandleHighlightBrush;                                     // 0x00E0(0x00D0) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.TableViewStyle
// 0x00D8 (0x00E0 - 0x0008)
struct FTableViewStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0010(0x00D0) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x0758 (0x0760 - 0x0008)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 SortPrimaryAscendingImage;                                // 0x0010(0x00D0) (Edit)
	struct FSlateBrush                                 SortPrimaryDescendingImage;                               // 0x00E0(0x00D0) (Edit)
	struct FSlateBrush                                 SortSecondaryAscendingImage;                              // 0x01B0(0x00D0) (Edit)
	struct FSlateBrush                                 SortSecondaryDescendingImage;                             // 0x0280(0x00D0) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x0350(0x00D0) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x0420(0x00D0) (Edit)
	struct FSlateBrush                                 MenuDropdownImage;                                        // 0x04F0(0x00D0) (Edit)
	struct FSlateBrush                                 MenuDropdownNormalBorderBrush;                            // 0x05C0(0x00D0) (Edit)
	struct FSlateBrush                                 MenuDropdownHoveredBorderBrush;                           // 0x0690(0x00D0) (Edit)
};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x1258 (0x1260 - 0x0008)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTableColumnHeaderStyle                     ColumnStyle;                                              // 0x0010(0x0760) (Edit)
	struct FTableColumnHeaderStyle                     LastColumnStyle;                                          // 0x0770(0x0760) (Edit)
	struct FSplitterStyle                              ColumnSplitterStyle;                                      // 0x0ED0(0x01B0) (Edit)
	float                                              SplitterHandleSize;                                       // 0x1080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x1084(0x000C) MISSED OFFSET
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x1090(0x00D0) (Edit)
	struct FSlateColor                                 ForegroundColor;                                          // 0x1160(0x0014) (Edit)
	unsigned char                                      UnknownData02[0xC];                                       // 0x1174(0x000C) MISSED OFFSET
	struct FSlateBrush                                 HorizontalSeparatorBrush;                                 // 0x1180(0x00D0) (Edit)
	float                                              HorizontalSeparatorThickness;                             // 0x1250(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x1254(0x000C) MISSED OFFSET
};

// ScriptStruct SlateCore.DockTabStyle
// 0x0D78 (0x0D80 - 0x0008)
struct FDockTabStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0010(0x03F0) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x0400(0x00D0) (Edit)
	struct FSlateBrush                                 ColorOverlayTabBrush;                                     // 0x04D0(0x00D0) (Edit)
	struct FSlateBrush                                 ColorOverlayIconBrush;                                    // 0x05A0(0x00D0) (Edit)
	struct FSlateBrush                                 ForegroundBrush;                                          // 0x0670(0x00D0) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x0740(0x00D0) (Edit)
	struct FSlateBrush                                 ContentAreaBrush;                                         // 0x0810(0x00D0) (Edit)
	struct FSlateBrush                                 TabWellBrush;                                             // 0x08E0(0x00D0) (Edit)
	struct FTextBlockStyle                             TabTextStyle;                                             // 0x09B0(0x0340) (Edit)
	struct FMargin                                     TabPadding;                                               // 0x0CF0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   IconSize;                                                 // 0x0D00(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverlapWidth;                                             // 0x0D10(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 FlashColor;                                               // 0x0D14(0x0014) (Edit)
	struct FSlateColor                                 NormalForegroundColor;                                    // 0x0D28(0x0014) (Edit)
	struct FSlateColor                                 HoveredForegroundColor;                                   // 0x0D3C(0x0014) (Edit)
	struct FSlateColor                                 ActiveForegroundColor;                                    // 0x0D50(0x0014) (Edit)
	struct FSlateColor                                 ForegroundForegroundColor;                                // 0x0D64(0x0014) (Edit)
	float                                              IconBorderPadding;                                        // 0x0D78(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0D7C(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0348 (0x0350 - 0x0008)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	float                                              BarThickness;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x00E0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 LeftShadowBrush;                                          // 0x01B0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 RightShadowBrush;                                         // 0x0280(0x00D0) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x01A8 (0x01B0 - 0x0008)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x00E0(0x00D0) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.WindowStyle
// 0x1938 (0x1940 - 0x0008)
struct FWindowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FButtonStyle                                MinimizeButtonStyle;                                      // 0x0010(0x03F0) (Edit, BlueprintVisible)
	struct FButtonStyle                                MaximizeButtonStyle;                                      // 0x0400(0x03F0) (Edit, BlueprintVisible)
	struct FButtonStyle                                RestoreButtonStyle;                                       // 0x07F0(0x03F0) (Edit, BlueprintVisible)
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0BE0(0x03F0) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TitleTextStyle;                                           // 0x0FD0(0x0340) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveTitleBrush;                                         // 0x1310(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveTitleBrush;                                       // 0x13E0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FlashTitleBrush;                                          // 0x14B0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateColor                                 BackgroundColor;                                          // 0x1580(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0xC];                                       // 0x1594(0x000C) MISSED OFFSET
	struct FSlateBrush                                 OutlineBrush;                                             // 0x15A0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateColor                                 OutlineColor;                                             // 0x1670(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0xC];                                       // 0x1684(0x000C) MISSED OFFSET
	struct FSlateBrush                                 BorderBrush;                                              // 0x1690(0x00D0) (Edit, BlueprintVisible)
	struct FSlateColor                                 BorderColor;                                              // 0x1760(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0xC];                                       // 0x1774(0x000C) MISSED OFFSET
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x1780(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ChildBackgroundBrush;                                     // 0x1850(0x00D0) (Edit, BlueprintVisible)
	int                                                WindowCornerRadius;                                       // 0x1920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     BorderPadding;                                            // 0x1924(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x1934(0x000C) MISSED OFFSET
};

// ScriptStruct SlateCore.StyleTheme
// 0x0048
struct FStyleTheme
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct SlateCore.ToolBarStyle
// 0x3B78 (0x3B80 - 0x0008)
struct FToolBarStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ExpandBrush;                                              // 0x00E0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 SeparatorBrush;                                           // 0x01B0(0x00D0) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             LabelStyle;                                               // 0x0280(0x0340) (Edit, BlueprintVisible)
	struct FEditableTextBoxStyle                       EditableTextStyle;                                        // 0x05C0(0x0BA0) (Edit, BlueprintVisible)
	struct FCheckBoxStyle                              ToggleButton;                                             // 0x1160(0x0AD0) (Edit, BlueprintVisible)
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x1C30(0x0600) (Edit, BlueprintVisible)
	struct FButtonStyle                                SettingsButtonStyle;                                      // 0x2230(0x03F0) (Edit, BlueprintVisible)
	struct FComboButtonStyle                           SettingsComboButton;                                      // 0x2620(0x0600) (Edit, BlueprintVisible)
	struct FCheckBoxStyle                              SettingsToggleButton;                                     // 0x2C20(0x0AD0) (Edit, BlueprintVisible)
	struct FButtonStyle                                ButtonStyle;                                              // 0x36F0(0x03F0) (Edit, BlueprintVisible)
	struct FMargin                                     LabelPadding;                                             // 0x3AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     SeparatorPadding;                                         // 0x3AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     ComboButtonPadding;                                       // 0x3B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     ButtonPadding;                                            // 0x3B10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     CheckBoxPadding;                                          // 0x3B20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     BlockPadding;                                             // 0x3B30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     IndentedBlockPadding;                                     // 0x3B40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     BackgroundPadding;                                        // 0x3B50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   IconSize;                                                 // 0x3B60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLabels;                                              // 0x3B70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x3B71(0x000F) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
