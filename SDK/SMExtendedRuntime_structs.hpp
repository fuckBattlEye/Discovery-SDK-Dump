#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SMExtendedRuntime.SMTextSerializer
// 0x0018
struct FSMTextSerializer
{
	struct FName                                       ToTextDynamicFunctionName;                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               ToTextFunctionNames;                                      // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct SMExtendedRuntime.SMTextNodeWidgetInfo
// 0x0EFF (0x0F00 - 0x0001)
struct FSMTextNodeWidgetInfo : public FSMTextDisplayWidgetInfo
{
	struct FInlineEditableTextBlockStyle               EditableTextStyle;                                        // 0x0000(0x0EF0) (Edit, DisableEditOnInstance)
	float                                              WrapTextAt;                                               // 0x0EF0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0EF4(0x000C) MISSED OFFSET
};

// ScriptStruct SMExtendedRuntime.SMTextNodeRichTextInfo
// 0x0018
struct FSMTextNodeRichTextInfo
{
	class UDataTable*                                  RichTextStyleSet;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              RichTextDecoratorClasses;                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct SMExtendedRuntime.SMTextGraphProperty
// 0x0F58 (0x1060 - 0x0108)
struct FSMTextGraphProperty : public FSMGraphProperty_Base
{
	struct FText                                       Result;                                                   // 0x0108(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSMTextSerializer                           TextSerializer;                                           // 0x0120(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	struct FSMTextNodeWidgetInfo                       WidgetInfo;                                               // 0x0140(0x0F00) (Edit, DisableEditOnInstance)
	struct FSMTextNodeRichTextInfo                     RichTextInfo;                                             // 0x1040(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1058(0x0008) MISSED OFFSET
};

// ScriptStruct SMExtendedRuntime.SMTextGraphProperty_Runtime
// 0x0030 (0x0078 - 0x0048)
struct FSMTextGraphProperty_Runtime : public FSMGraphProperty_Base_Runtime
{
	struct FText                                       Result;                                                   // 0x0048(0x0018) (BlueprintVisible)
	struct FSMTextSerializer                           TextSerializer;                                           // 0x0060(0x0018) (Edit, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
