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

// ScriptStruct WebBrowser.WebJSCallbackBase
// 0x0020
struct FWebJSCallbackBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct WebBrowser.WebJSFunction
// 0x0000 (0x0020 - 0x0020)
struct FWebJSFunction : public FWebJSCallbackBase
{

};

// ScriptStruct WebBrowser.WebJSResponse
// 0x0000 (0x0020 - 0x0020)
struct FWebJSResponse : public FWebJSCallbackBase
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
