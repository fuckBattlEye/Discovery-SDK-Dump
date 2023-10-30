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

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// 0x0598 (0x05A0 - 0x0008)
struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FButtonStyle                                InnerButtonStyle;                                         // 0x0010(0x03F0)
	struct FSlateBrush                                 NavigationButtonLeftImage;                                // 0x0400(0x00D0)
	struct FSlateBrush                                 NavigationButtonRightImage;                               // 0x04D0(0x00D0)
};

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// 0x0CA8 (0x0CB0 - 0x0008)
struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 HighlightBrush;                                           // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FButtonStyle                                LeftButtonStyle;                                          // 0x00E0(0x03F0) (Edit, BlueprintVisible)
	struct FButtonStyle                                CenterButtonStyle;                                        // 0x04D0(0x03F0) (Edit, BlueprintVisible)
	struct FButtonStyle                                RightButtonStyle;                                         // 0x08C0(0x03F0) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
