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

// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USpatializationPluginSourceSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioExtensions.SpatializationPluginSourceSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.AudioEndpointSettingsBase
// 0x0000 (0x0028 - 0x0028)
class UAudioEndpointSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioExtensions.AudioEndpointSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.SoundfieldEndpointSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USoundfieldEndpointSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioExtensions.SoundfieldEndpointSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.SoundfieldEncodingSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USoundfieldEncodingSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioExtensions.SoundfieldEncodingSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.SoundModulatorBase
// 0x0008 (0x0030 - 0x0028)
class USoundModulatorBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioExtensions.SoundModulatorBase"));
		return ptr;
	}

};


// Class AudioExtensions.AudioParameterControllerInterface
// 0x0000 (0x0028 - 0x0028)
class UAudioParameterControllerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioExtensions.AudioParameterControllerInterface"));
		return ptr;
	}


	void SetTriggerParameter(const struct FName& InName);//Offset:Discovery.exe+0x4956E50
	void SetStringParameter(const struct FName& InName, const struct FString& InValue);//Offset:Discovery.exe+0x49567A0
	void SetStringArrayParameter(const struct FName& InName, TArray<struct FString> InValue);//Offset:Discovery.exe+0x4956660
	void SetParameters_Blueprint(TArray<struct FAudioParameter> InParameters);//Offset:Discovery.exe+0x4956390
	void SetObjectParameter(const struct FName& InName, class UObject* InValue);//Offset:Discovery.exe+0x4956570
	void SetObjectArrayParameter(const struct FName& InName, TArray<class UObject*> InValue);//Offset:Discovery.exe+0x4956470
	void SetIntParameter(const struct FName& InName, int inInt);//Offset:Discovery.exe+0x4956B80
	void SetIntArrayParameter(const struct FName& InName, TArray<int> InValue);//Offset:Discovery.exe+0x4956A80
	void SetFloatParameter(const struct FName& InName, float InFloat);//Offset:Discovery.exe+0x4956990
	void SetFloatArrayParameter(const struct FName& InName, TArray<float> InValue);//Offset:Discovery.exe+0x4956890
	void SetBoolParameter(const struct FName& InName, bool InBool);//Offset:Discovery.exe+0x4956D60
	void SetBoolArrayParameter(const struct FName& InName, TArray<bool> InValue);//Offset:Discovery.exe+0x4956C60
	void ResetParameters();//Offset:Discovery.exe+0x4956EF0
};


// Class AudioExtensions.AudioCodecEncoderSettings
// 0x0008 (0x0030 - 0x0028)
class UAudioCodecEncoderSettings : public UObject
{
public:
	int                                                Version;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioExtensions.AudioCodecEncoderSettings"));
		return ptr;
	}

};


// Class AudioExtensions.DummyEndpointSettings
// 0x0000 (0x0028 - 0x0028)
class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioExtensions.DummyEndpointSettings"));
		return ptr;
	}

};


// Class AudioExtensions.SourceDataOverridePluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USourceDataOverridePluginSourceSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioExtensions.SourceDataOverridePluginSourceSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioExtensions.OcclusionPluginSourceSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.ReverbPluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class UReverbPluginSourceSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioExtensions.ReverbPluginSourceSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.SoundfieldEffectSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USoundfieldEffectSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioExtensions.SoundfieldEffectSettingsBase"));
		return ptr;
	}

};


// Class AudioExtensions.SoundfieldEffectBase
// 0x0008 (0x0030 - 0x0028)
class USoundfieldEffectBase : public UObject
{
public:
	class USoundfieldEffectSettingsBase*               Settings;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioExtensions.SoundfieldEffectBase"));
		return ptr;
	}

};


// Class AudioExtensions.AudioPcmEncoderSettings
// 0x0008 (0x0038 - 0x0030)
class UAudioPcmEncoderSettings : public UAudioCodecEncoderSettings
{
public:
	enum class EPcmBitDepthConversion                  BitDepthConversion;                                       // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioExtensions.AudioPcmEncoderSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
