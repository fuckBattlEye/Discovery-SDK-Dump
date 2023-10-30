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

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	Visible                        = 0,
	Collapsed                      = 1,
	Hidden                         = 2,
	HitTestInvisible               = 3,
	SelfHitTestInvisible           = 4,
	ESlateVisibility_MAX           = 5
};


// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
	Default                        = 0,
	Number                         = 1,
	Web                            = 2,
	Email                          = 3,
	Password                       = 4,
	AlphaNumeric                   = 5,
	EVirtualKeyboardType_MAX       = 6
};


// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t
{
	NotAccessible                  = 0,
	Auto                           = 1,
	Summary                        = 2,
	Custom                         = 3,
	ToolTip                        = 4,
	ESlateAccessibleBehavior_MAX   = 5
};


// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t
{
	Started                        = 0,
	Finished                       = 1,
	EWidgetAnimationEvent_MAX      = 2
};


// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	Forward                        = 0,
	Reverse                        = 1,
	PingPong                       = 2,
	EUMGSequencePlayMode_MAX       = 3
};


// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t
{
	Never                          = 0,
	Auto                           = 1,
	EWidgetTickFrequency_MAX       = 2
};


// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
{
	MouseDown                      = 0,
	TopLeft                        = 1,
	TopCenter                      = 2,
	TopRight                       = 3,
	CenterLeft                     = 4,
	CenterCenter                   = 5,
	CenterRight                    = 6,
	BottomLeft                     = 7,
	BottomCenter                   = 8,
	BottomRight                    = 9,
	EDragPivot_MAX                 = 10
};


// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	Wrap                           = 2,
	VerticalWrap                   = 3,
	Radial                         = 4,
	Overlay                        = 5,
	EDynamicBoxType_MAX            = 6
};


// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	Automatic                      = 0,
	Fill                           = 1,
	ESlateSizeRule_MAX             = 2
};


// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	None                           = 0,
	Designing                      = 1,
	ShowOutline                    = 2,
	ExecutePreConstruct            = 3,
	EWidgetDesignFlags_MAX         = 4
};


// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	Function                       = 0,
	Property                       = 1,
	EBindingKind_MAX               = 2
};


// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	World                          = 0,
	Screen                         = 1,
	EWidgetSpace_MAX               = 2
};


// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
	RealTime                       = 0,
	GameTime                       = 1,
	EWidgetTimingPolicy_MAX        = 2
};


// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	Opaque                         = 0,
	Masked                         = 1,
	Transparent                    = 2,
	EWidgetBlendMode_MAX           = 3
};


// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
	Plane                          = 0,
	Cylinder                       = 1,
	EWidgetGeometryMode_MAX        = 2
};


// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t
{
	Visible                        = 0,
	SelfHitTestInvisible           = 1,
	EWindowVisibility_MAX          = 2
};


// Enum UMG.ETickMode
enum class ETickMode : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	Automatic                      = 2,
	ETickMode_MAX                  = 3
};


// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
	World                          = 0,
	Mouse                          = 1,
	CenterScreen                   = 2,
	Custom                         = 3,
	EWidgetInteractionSource_MAX   = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UMG.WidgetTransform
// 0x0038
struct FWidgetTransform
{
	struct FVector2D                                   Translation;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Shear;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct UMG.EventReply
// 0x00B8
struct FEventReply
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct UMG.NamedSlotBinding
// 0x0010
struct FNamedSlotBinding
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Content;                                                  // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct UMG.AnimationEventBinding
// 0x0028
struct FAnimationEventBinding
{
	class UWidgetAnimation*                            Animation;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // 0x0008(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	struct FName                                       UserTag;                                                  // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct UMG.PaintContext
// 0x0030
struct FPaintContext
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct UMG.SlateChildSize
// 0x0008
struct FSlateChildSize
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateSizeRule>                        SizeRule;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct UMG.RadialBoxSettings
// 0x0010
struct FRadialBoxSettings
{
	float                                              StartingAngle;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDistributeItemsEvenly;                                   // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              AngleBetweenItems;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SectorCentralAngle;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.UserWidgetPool
// 0x0088
struct FUserWidgetPool
{
	TArray<class UUserWidget*>                         ActiveWidgets;                                            // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UUserWidget*>                         InactiveWidgets;                                          // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0020(0x0068) MISSED OFFSET
};

// ScriptStruct UMG.ShapedTextOptions
// 0x0003
struct FShapedTextOptions
{
	unsigned char                                      bOverride_TextShapingMethod : 1;                          // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_TextFlowDirection : 1;                          // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0001(0x0002) MISSED OFFSET
};

// ScriptStruct UMG.DynamicPropertyPath
// 0x0000 (0x0028 - 0x0028)
struct FDynamicPropertyPath : public FCachedPropertyPath
{

};

// ScriptStruct UMG.AnchorData
// 0x0040
struct FAnchorData
{
	struct FMargin                                     Offsets;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAnchors                                    Anchors;                                                  // 0x0010(0x0020) (Edit, BlueprintVisible)
	struct FVector2D                                   Alignment;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.MovieScene2DTransformMask
// 0x0004
struct FMovieScene2DTransformMask
{
	uint32_t                                           Mask;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.SlateMeshVertex
// 0x003C
struct FSlateMeshVertex
{
	struct FVector2f                                   Position;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2f                                   UV0;                                                      // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2f                                   UV1;                                                      // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2f                                   UV2;                                                      // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2f                                   UV3;                                                      // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2f                                   UV4;                                                      // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2f                                   UV5;                                                      // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.SequenceTickManagerWidgetData
// 0x0003
struct FSequenceTickManagerWidgetData
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0024
struct FWidgetAnimationBinding
{
	struct FName                                       WidgetName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotWidgetName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AnimationGuid;                                            // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsRootWidget;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// 0x001C
struct FBlueprintWidgetAnimationDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FName                                       AnimationToBind;                                          // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       UserTag;                                                  // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0050
struct FDelegateRuntimeBinding
{
	struct FString                                     ObjectName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FName                                       PropertyName;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDynamicPropertyPath                        SourcePath;                                               // 0x0020(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct UMG.WidgetNavigationData
// 0x0024
struct FWidgetNavigationData
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FName                                       WidgetToFocus;                                            // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UWidget>                      Widget;                                                   // 0x000C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             CustomDelegate;                                           // 0x0014(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// 0x0010 (0x0090 - 0x0080)
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	TArray<struct FName>                               BrushPropertyNamePath;                                    // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct UMG.RichTextStyleRow
// 0x0348 (0x0350 - 0x0008)
struct FRichTextStyleRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTextBlockStyle                             TextStyle;                                                // 0x0010(0x0340) (Edit)
};

// ScriptStruct UMG.RichImageRow
// 0x00D8 (0x00E0 - 0x0008)
struct FRichImageRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 Brush;                                                    // 0x0010(0x00D0) (Edit)
};

// ScriptStruct UMG.WidgetComponentInstanceData
// 0x0010 (0x00C8 - 0x00B8)
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
