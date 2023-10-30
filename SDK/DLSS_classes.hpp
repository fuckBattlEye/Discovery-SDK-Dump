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

// Class DLSS.DLSSOverrideSettings
// 0x0008 (0x0030 - 0x0028)
class UDLSSOverrideSettings : public UObject
{
public:
	enum class EDLSSSettingOverride                    EnableDLSSInEditorViewportsOverride;                      // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class EDLSSSettingOverride                    EnableScreenpercentageManipulationInDLSSEditorViewportsOverride;// 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class EDLSSSettingOverride                    EnableDLSSInPlayInEditorViewportsOverride;                // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowDLSSIncompatiblePluginsToolsWarnings;                // 0x002B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class EDLSSSettingOverride                    ShowDLSSSDebugOnScreenMessages;                           // 0x002C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DLSS.DLSSOverrideSettings"));
		return ptr;
	}

};


// Class DLSS.DLSSSettings
// 0x0038 (0x0060 - 0x0028)
class UDLSSSettings : public UObject
{
public:
	bool                                               bEnableDLSSD3D12;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableDLSSD3D11;                                         // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableDLSSVulkan;                                        // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableDLSSInEditorViewports;                             // 0x002B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableScreenpercentageManipulationInDLSSEditorViewports; // 0x002C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableDLSSInPlayInEditorViewports;                       // 0x002D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowDLSSSDebugOnScreenMessages;                          // 0x002E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002F(0x0001) MISSED OFFSET
	struct FString                                     GenericDLSSBinaryPath;                                    // 0x0030(0x0010) (Edit, ZeroConstructor, Config, EditConst)
	bool                                               bGenericDLSSBinaryExists;                                 // 0x0040(0x0001) (Edit, ZeroConstructor, Config, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	uint32_t                                           NVIDIANGXApplicationId;                                   // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     CustomDLSSBinaryPath;                                     // 0x0048(0x0010) (Edit, ZeroConstructor, Config, EditConst)
	bool                                               bCustomDLSSBinaryExists;                                  // 0x0058(0x0001) (Edit, ZeroConstructor, Config, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DLSS.DLSSSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
