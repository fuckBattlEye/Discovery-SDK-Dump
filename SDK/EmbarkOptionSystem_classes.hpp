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

// Class EmbarkOptionSystem.IEmbarkUserSetting
// 0x0018 (0x0040 - 0x0028)
class UIEmbarkUserSetting : public UObject
{
public:
	struct FText                                       InvalidDisplayText;                                       // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.IEmbarkUserSetting"));
		return ptr;
	}


	void SetValue(int Index);//Offset:Discovery.exe+0x1EE88C0
	bool IsDefault();//Offset:Discovery.exe+0x1DC1420
	bool IsAvailable();//Offset:Discovery.exe+0x1EE8800
	void Initialize();//Offset:Discovery.exe+0x155C0A0
	int GetValueIndex();//Offset:Discovery.exe+0x1EE8890
	int GetNumOptions();//Offset:Discovery.exe+0x1EE8830
	struct FText GetDisplayText(int Index);//Offset:Discovery.exe+0x1EE8710
	int GetDefaultIndex();//Offset:Discovery.exe+0x1EE8860
	bool CanChange();//Offset:Discovery.exe+0x1461900
};


// Class EmbarkOptionSystem.EmbarkOptionBase
// 0x0028 (0x0050 - 0x0028)
class UEmbarkOptionBase : public UObject
{
public:
	struct FGameplayTag                                OptionTag;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bRestartRequired;                                         // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0031(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionBase"));
		return ptr;
	}


	struct FString Store();//Offset:Discovery.exe+0x1DCA4C0
	void SendOptionChangeTelemetry(const struct FString& OldValue, const struct FString& NewValue);//Offset:Discovery.exe+0x1EE1420
	void Restore(const struct FString& String);//Offset:Discovery.exe+0x11BEA60
	void ResetToPreviousValue(const struct FString& InValue);//Offset:Discovery.exe+0x1B06190
	void ResetToDefault();//Offset:Discovery.exe+0x11B97D0
	void NotifyOnExternalEvent(enum class EEmbarkOptionExternalEvent Event);//Offset:Discovery.exe+0x1EE1520
	bool IsDefault();//Offset:Discovery.exe+0x1EE15C0
	bool IsAvailable();//Offset:Discovery.exe+0x1461900
	void Initialize(const struct FString& InValue);//Offset:Discovery.exe+0x1EE15F0
	bool CanChange();//Offset:Discovery.exe+0x11BE930
};


// Class EmbarkOptionSystem.IEmbarkOptionFloat
// 0x0010 (0x0060 - 0x0050)
class UIEmbarkOptionFloat : public UEmbarkOptionBase
{
public:
	struct FScriptMulticastDelegate                    OnOptionChanged;                                          // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.IEmbarkOptionFloat"));
		return ptr;
	}


	void SetValue(float NewValue);//Offset:Discovery.exe+0x1EE74F0
	void SetNormalizedValue(float NewValue);//Offset:Discovery.exe+0x1EE73C0
	float GetValue();//Offset:Discovery.exe+0x1EE74C0
	float GetNormalizedValue();//Offset:Discovery.exe+0x1EE7390
	float GetMinValue();//Offset:Discovery.exe+0x1EE7460
	float GetMaxValue();//Offset:Discovery.exe+0x1EE7490
};


// Class EmbarkOptionSystem.IEmbarkDynamicEnum
// 0x0010 (0x0038 - 0x0028)
class UIEmbarkDynamicEnum : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnOptionsChanged;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.IEmbarkDynamicEnum"));
		return ptr;
	}


	int GetNumOptions();//Offset:Discovery.exe+0x1EE5F70
	struct FString GetNameByIndex(int Index);//Offset:Discovery.exe+0x1EE6080
	int GetIndexByName(const struct FString& Value);//Offset:Discovery.exe+0x1EE6160
	struct FString GetDisplayName(int Index);//Offset:Discovery.exe+0x1EE5FA0
	int GetDefaultIndex();//Offset:Discovery.exe+0x1872090
};


// Class EmbarkOptionSystem.IEmbarkOptionEnum
// 0x0010 (0x0060 - 0x0050)
class UIEmbarkOptionEnum : public UEmbarkOptionBase
{
public:
	struct FScriptMulticastDelegate                    OnOptionChanged;                                          // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.IEmbarkOptionEnum"));
		return ptr;
	}


	void SetIndex(int NewIndex);//Offset:Discovery.exe+0x1EE6DC0
	int GetMaxIndexInclusive();//Offset:Discovery.exe+0x1EE6D60
	int GetIndex();//Offset:Discovery.exe+0x1EE6D90
	struct FText GetDisplayText();//Offset:Discovery.exe+0x1EE6CC0
};


// Class EmbarkOptionSystem.IEmbarkOptionBool
// 0x0010 (0x0060 - 0x0050)
class UIEmbarkOptionBool : public UEmbarkOptionBase
{
public:
	struct FScriptMulticastDelegate                    OnOptionChanged;                                          // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.IEmbarkOptionBool"));
		return ptr;
	}


	void SetValue(bool bNewValue);//Offset:Discovery.exe+0x1EE6910
	bool GetValue();//Offset:Discovery.exe+0x1DBDAD0
};


// Class EmbarkOptionSystem.EmbarkOptionBool
// 0x0008 (0x0068 - 0x0060)
class UEmbarkOptionBool : public UIEmbarkOptionBool
{
public:
	bool                                               bDefaultValue;                                            // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionBool"));
		return ptr;
	}

};


// Class EmbarkOptionSystem.EmbarkOptionConsoleBool
// 0x0018 (0x0078 - 0x0060)
class UEmbarkOptionConsoleBool : public UIEmbarkOptionBool
{
public:
	struct FString                                     VariableName;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDefaultValue;                                            // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionConsoleBool"));
		return ptr;
	}

};


// Class EmbarkOptionSystem.EmbarkOptionConsoleFloat
// 0x0020 (0x0080 - 0x0060)
class UEmbarkOptionConsoleFloat : public UIEmbarkOptionFloat
{
public:
	struct FString                                     VariableName;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              DefaultValue;                                             // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionConsoleFloat"));
		return ptr;
	}

};


// Class EmbarkOptionSystem.IEmbarkOptionInt
// 0x0010 (0x0060 - 0x0050)
class UIEmbarkOptionInt : public UEmbarkOptionBase
{
public:
	struct FScriptMulticastDelegate                    OnOptionChanged;                                          // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.IEmbarkOptionInt"));
		return ptr;
	}


	void SetValue(int NewValue);//Offset:Discovery.exe+0x1EE8070
	int GetValue();//Offset:Discovery.exe+0x1EE8040
};


// Class EmbarkOptionSystem.EmbarkOptionConsoleInt
// 0x0020 (0x0080 - 0x0060)
class UEmbarkOptionConsoleInt : public UIEmbarkOptionInt
{
public:
	struct FString                                     VariableName;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                DefaultValue;                                             // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinValue;                                                 // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionConsoleInt"));
		return ptr;
	}

};


// Class EmbarkOptionSystem.IEmbarkOptionString
// 0x0010 (0x0060 - 0x0050)
class UIEmbarkOptionString : public UEmbarkOptionBase
{
public:
	struct FScriptMulticastDelegate                    OnOptionChanged;                                          // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.IEmbarkOptionString"));
		return ptr;
	}


	void SetValue(const struct FString& NewValue);//Offset:Discovery.exe+0x1DB8D00
	struct FString GetValue();//Offset:Discovery.exe+0x1EE8380
};


// Class EmbarkOptionSystem.EmbarkOptionConsoleString
// 0x0030 (0x0090 - 0x0060)
class UEmbarkOptionConsoleString : public UIEmbarkOptionString
{
public:
	struct FString                                     VariableName;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DefaultValue;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionConsoleString"));
		return ptr;
	}

};


// Class EmbarkOptionSystem.EmbarkOptionDynamicEnum
// 0x0010 (0x0070 - 0x0060)
class UEmbarkOptionDynamicEnum : public UIEmbarkOptionEnum
{
public:
	class UIEmbarkDynamicEnum*                         Enum;                                                     // 0x0060(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionDynamicEnum"));
		return ptr;
	}

};


// Class EmbarkOptionSystem.EmbarkOptionEnum
// 0x0038 (0x0098 - 0x0060)
class UEmbarkOptionEnum : public UIEmbarkOptionEnum
{
public:
	class UEnum*                                       Enum;                                                     // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStringTable*                                StringTable;                                              // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Prefix;                                                   // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     EnumFullName;                                             // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                DefaultIndex;                                             // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionEnum"));
		return ptr;
	}

};


// Class EmbarkOptionSystem.EmbarkOptionFloat
// 0x0010 (0x0070 - 0x0060)
class UEmbarkOptionFloat : public UIEmbarkOptionFloat
{
public:
	float                                              DefaultValue;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionFloat"));
		return ptr;
	}

};


// Class EmbarkOptionSystem.IEmbarkOptionGameplayTag
// 0x0010 (0x0060 - 0x0050)
class UIEmbarkOptionGameplayTag : public UEmbarkOptionBase
{
public:
	struct FScriptMulticastDelegate                    OnOptionChanged;                                          // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.IEmbarkOptionGameplayTag"));
		return ptr;
	}


	void SetValue(const struct FGameplayTag& NewValue);//Offset:Discovery.exe+0x1EE7CD0
	struct FGameplayTag GetValue();//Offset:Discovery.exe+0x1EE7C70
};


// Class EmbarkOptionSystem.EmbarkOptionGameplayTag
// 0x0010 (0x0070 - 0x0060)
class UEmbarkOptionGameplayTag : public UIEmbarkOptionGameplayTag
{
public:
	struct FGameplayTag                                DefaultValue;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionGameplayTag"));
		return ptr;
	}

};


// Class EmbarkOptionSystem.EmbarkOptionInt
// 0x0010 (0x0070 - 0x0060)
class UEmbarkOptionInt : public UIEmbarkOptionInt
{
public:
	int                                                DefaultValue;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinValue;                                                 // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionInt"));
		return ptr;
	}

};


// Class EmbarkOptionSystem.EmbarkOptionManager
// 0x00E8 (0x0118 - 0x0030)
class UEmbarkOptionManager : public UGameInstanceSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnSaveStarted;                                            // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSaveCompleted;                                          // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAnyOptionChanged;                                       // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<struct FGameplayTag, class UEmbarkOptionBase*> Options;                                                  // 0x0060(0x0050)
	class UEmbarkOptionSaveGame*                       SaveGame;                                                 // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x00B8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionManager"));
		return ptr;
	}


	bool SetOptionString(const struct FGameplayTag& OptionTag, const struct FString& NewString);//Offset:Discovery.exe+0x1EE3640
	bool SetOptionInt(const struct FGameplayTag& OptionTag, int NewValue);//Offset:Discovery.exe+0x1EE3B90
	bool SetOptionGameplayTag(const struct FGameplayTag& OptionTag, const struct FGameplayTag& NewValue);//Offset:Discovery.exe+0x1EE3E30
	bool SetOptionFloat(const struct FGameplayTag& OptionTag, float NewValue);//Offset:Discovery.exe+0x1EE40E0
	bool SetOptionEnum(const struct FGameplayTag& OptionTag, int NewIndex);//Offset:Discovery.exe+0x1EE38F0
	bool SetOptionBool(const struct FGameplayTag& OptionTag, bool bNewValue);//Offset:Discovery.exe+0x1EE4380
	void SaveAll();//Offset:Discovery.exe+0x1EE34C0
	void Save(const struct FGameplayTag& TagCategory);//Offset:Discovery.exe+0x1EE34E0
	bool RestartRequiredToTakeEffect();//Offset:Discovery.exe+0x1EE3490
	void ResetUnsavedOptions();//Offset:Discovery.exe+0x1EE3470
	void ResetOptionsToDefault(const struct FGameplayTag& TagCategory);//Offset:Discovery.exe+0x1EE3590
	bool HasUnsavedOptions();//Offset:Discovery.exe+0x1EE3440
	class UIEmbarkOptionString* STATIC_GetOptionString(class UEmbarkOptionManager* Manager, const struct FGameplayTag& OptionTag);//Offset:Discovery.exe+0x1EE3750
	class UIEmbarkOptionInt* STATIC_GetOptionInt(class UEmbarkOptionManager* Manager, const struct FGameplayTag& OptionTag);//Offset:Discovery.exe+0x1EE3C90
	class UIEmbarkOptionGameplayTag* STATIC_GetOptionGameplayTag(class UEmbarkOptionManager* Manager, const struct FGameplayTag& OptionTag);//Offset:Discovery.exe+0x1EE3F40
	class UIEmbarkOptionFloat* STATIC_GetOptionFloat(class UEmbarkOptionManager* Manager, const struct FGameplayTag& OptionTag);//Offset:Discovery.exe+0x1EE41E0
	class UIEmbarkOptionEnum* STATIC_GetOptionEnum(class UEmbarkOptionManager* Manager, const struct FGameplayTag& OptionTag);//Offset:Discovery.exe+0x1EE39F0
	class UIEmbarkOptionBool* STATIC_GetOptionBool(class UEmbarkOptionManager* Manager, const struct FGameplayTag& OptionTag);//Offset:Discovery.exe+0x1EE4480
	class UIEmbarkOptionString* FindOptionString(const struct FGameplayTag& OptionTag);//Offset:Discovery.exe+0x1EE3840
	class UIEmbarkOptionInt* FindOptionInt(const struct FGameplayTag& OptionTag);//Offset:Discovery.exe+0x1EE3D80
	class UIEmbarkOptionGameplayTag* FindOptionGameplayTag(const struct FGameplayTag& OptionTag);//Offset:Discovery.exe+0x1EE4030
	class UIEmbarkOptionFloat* FindOptionFloat(const struct FGameplayTag& OptionTag);//Offset:Discovery.exe+0x1EE42D0
	class UIEmbarkOptionEnum* FindOptionEnum(const struct FGameplayTag& OptionTag);//Offset:Discovery.exe+0x1EE3AE0
	class UIEmbarkOptionBool* FindOptionBool(const struct FGameplayTag& OptionTag);//Offset:Discovery.exe+0x1EE4570
	class UEmbarkOptionBase* FindOption(const struct FGameplayTag& OptionTag);//Offset:Discovery.exe+0x1EE4620
	void AddOption(class UEmbarkOptionBase* Option);//Offset:Discovery.exe+0x1EE46D0
};


// Class EmbarkOptionSystem.EmbarkOptionRepository
// 0x0010 (0x0040 - 0x0030)
class UEmbarkOptionRepository : public UPrimaryDataAsset
{
public:
	TArray<class UEmbarkOptionBase*>                   Options;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionRepository"));
		return ptr;
	}

};


// Class EmbarkOptionSystem.EmbarkOptionSaveGame
// 0x0050 (0x0078 - 0x0028)
class UEmbarkOptionSaveGame : public USaveGame
{
public:
	TMap<struct FName, struct FString>                 Properties;                                               // 0x0028(0x0050)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionSaveGame"));
		return ptr;
	}

};


// Class EmbarkOptionSystem.EmbarkOptionString
// 0x0020 (0x0080 - 0x0060)
class UEmbarkOptionString : public UIEmbarkOptionString
{
public:
	struct FString                                     DefaultValue;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionString"));
		return ptr;
	}

};


// Class EmbarkOptionSystem.EmbarkOptionUserSetting
// 0x0010 (0x0070 - 0x0060)
class UEmbarkOptionUserSetting : public UIEmbarkOptionEnum
{
public:
	class UIEmbarkUserSetting*                         UserSetting;                                              // 0x0060(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkOptionSystem.EmbarkOptionUserSetting"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
