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

// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
struct UWebBrowser_OnUrlChanged__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
struct UWebBrowser_OnBeforePopup__DelegateSignature_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Frame;                                                    // (Parm, ZeroConstructor)
};

// Function WebBrowserWidget.WebBrowser.LoadURL
struct UWebBrowser_LoadURL_Params
{
	struct FString                                     NewURL;                                                   // (Parm, ZeroConstructor)
};

// Function WebBrowserWidget.WebBrowser.LoadString
struct UWebBrowser_LoadString_Params
{
	struct FString                                     Contents;                                                 // (Parm, ZeroConstructor)
	struct FString                                     DummyURL;                                                 // (Parm, ZeroConstructor)
};

// Function WebBrowserWidget.WebBrowser.GetURL
struct UWebBrowser_GetURL_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WebBrowserWidget.WebBrowser.GetTitleText
struct UWebBrowser_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
struct UWebBrowser_ExecuteJavascript_Params
{
	struct FString                                     ScriptText;                                               // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
