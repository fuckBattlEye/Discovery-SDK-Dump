#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class WebBrowserWidget.WebBrowser
// 0x0048 (0x0170 - 0x0128)
class UWebBrowser : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnUrlChanged;                                             // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeforePopup;                                            // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     InitialURL;                                               // 0x0148(0x0010) (Edit, ZeroConstructor)
	bool                                               bSupportsTransparency;                                    // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0159(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class WebBrowserWidget.WebBrowser"));
		return ptr;
	}


	void OnUrlChanged__DelegateSignature(const struct FText& Text);//Offset:Discovery.exe+0x327F8B0
	void OnBeforePopup__DelegateSignature(const struct FString& URL, const struct FString& Frame);//Offset:Discovery.exe+0x327F8B0
	void LoadURL(const struct FString& NewURL);//Offset:Discovery.exe+0x24B12D0
	void LoadString(const struct FString& Contents, const struct FString& DummyURL);//Offset:Discovery.exe+0x24B1140
	struct FString GetURL();//Offset:Discovery.exe+0x24B0F80
	struct FText GetTitleText();//Offset:Discovery.exe+0x24B1000
	void ExecuteJavascript(const struct FString& ScriptText);//Offset:Discovery.exe+0x24B1090
};


// Class WebBrowserWidget.WebBrowserAssetManager
// 0x0050 (0x0078 - 0x0028)
class UWebBrowserAssetManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: DefaultMaterial
	unsigned char                                      UnknownData01[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class WebBrowserWidget.WebBrowserAssetManager"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
