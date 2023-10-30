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

// Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	ETextJustify_MAX               = 3
};


// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
	Auto                           = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ETextFlowDirection_MAX         = 3
};


// Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8_t
{
	TextChangeOnDismiss            = 0,
	TextCommitOnAccept             = 1,
	TextCommitOnDismiss            = 2,
	EVirtualKeyboardDismissAction_MAX = 3
};


// Enum Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8_t
{
	OnFocusByPointer               = 0,
	OnAllFocusEvents               = 1,
	EVirtualKeyboardTrigger_MAX    = 2
};


// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
	DefaultWrapping                = 0,
	AllowPerCharacterWrapping      = 1,
	ETextWrappingPolicy_MAX        = 2
};


// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	None                           = 0,
	Single                         = 1,
	SingleToggle                   = 2,
	Multi                          = 3,
	ESelectionMode_MAX             = 4
};


// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	List                           = 0,
	Tile                           = 1,
	Tree                           = 2,
	ETableViewMode_MAX             = 3
};


// Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8_t
{
	MenuBar                        = 0,
	ToolBar                        = 1,
	VerticalToolBar                = 2,
	SlimHorizontalToolBar          = 3,
	UniformToolBar                 = 4,
	Menu                           = 5,
	ButtonRow                      = 6,
	EMultiBoxType_MAX              = 7
};


// Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8_t
{
	None                           = 0,
	ButtonRow                      = 1,
	EditableText                   = 2,
	Heading                        = 3,
	MenuEntry                      = 4,
	Separator                      = 5,
	ToolBarButton                  = 6,
	ToolBarComboButton             = 7,
	Widget                         = 8,
	EMultiBlockType_MAX            = 9
};


// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	LeftToRight                    = 0,
	RightToLeft                    = 1,
	FillFromCenter                 = 2,
	FillFromCenterHorizontal       = 3,
	FillFromCenterVertical         = 4,
	TopToBottom                    = 5,
	BottomToTop                    = 6,
	EProgressBarFillType_MAX       = 7
};


// Enum Slate.EProgressBarFillStyle
enum class EProgressBarFillStyle : uint8_t
{
	Mask                           = 0,
	Scale                          = 1,
	EProgressBarFillStyle_MAX      = 2
};


// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
	Both                           = 0,
	DownOnly                       = 1,
	UpOnly                         = 2,
	EStretchDirection_MAX          = 3
};


// Enum Slate.EStretch
enum class EStretch : uint8_t
{
	None                           = 0,
	Fill                           = 1,
	ScaleToFit                     = 2,
	ScaleToFitX                    = 3,
	ScaleToFitY                    = 4,
	ScaleToFill                    = 5,
	ScaleBySafeZone                = 6,
	UserSpecified                  = 7,
	EStretch_MAX                   = 8
};


// Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t
{
	IntoView                       = 0,
	TopOrLeft                      = 1,
	Center                         = 2,
	BottomOrRight                  = 3,
	EDescendantScrollDestination_MAX = 4
};


// Enum Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8_t
{
	NoScroll                       = 0,
	InstantScroll                  = 1,
	AnimatedScroll                 = 2,
	EScrollWhenFocusChanges_MAX    = 3
};


// Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t
{
	EvenlyDistributed              = 0,
	EvenlySize                     = 1,
	EvenlyWide                     = 2,
	LeftAligned                    = 3,
	RightAligned                   = 4,
	CenterAligned                  = 5,
	Fill                           = 6,
	EListItemAlignment_MAX         = 7
};


// Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8_t
{
	None                           = 0,
	Visible                        = 1,
	Hidden                         = 2,
	ECustomizedToolMenuVisibility_MAX = 3
};


// Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8_t
{
	None                           = 0,
	Button                         = 1,
	ToggleButton                   = 2,
	RadioButton                    = 3,
	Check                          = 4,
	CollapsedButton                = 5,
	EUserInterfaceActionType_MAX   = 6
};


// Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	NumChords                      = 2,
	EMultipleKeyBindingIndex_MAX   = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Slate.VirtualKeyboardOptions
// 0x0001
struct FVirtualKeyboardOptions
{
	bool                                               bEnableAutocorrect;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Slate.InputChord
// 0x0020
struct FInputChord
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      bShift : 1;                                               // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCmd : 1;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Slate.Anchors
// 0x0020
struct FAnchors
{
	struct FVector2D                                   Minimum;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Maximum;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Slate.CustomizedToolMenuEntry
// 0x0004
struct FCustomizedToolMenuEntry
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Slate.CustomizedToolMenuSection
// 0x0004
struct FCustomizedToolMenuSection
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Slate.CustomizedToolMenuNameArray
// 0x0010
struct FCustomizedToolMenuNameArray
{
	TArray<struct FName>                               Names;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Slate.CustomizedToolMenu
// 0x01F0
struct FCustomizedToolMenu
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FCustomizedToolMenuEntry> Entries;                                                  // 0x0008(0x0050)
	TMap<struct FName, struct FCustomizedToolMenuSection> Sections;                                                 // 0x0058(0x0050)
	TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder;                                               // 0x00A8(0x0050)
	TArray<struct FName>                               SectionOrder;                                             // 0x00F8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0108(0x00E8) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
