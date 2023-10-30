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

// Class EmbarkApiGateway.EmbarkApiContext
// 0x0028 (0x0050 - 0x0028)
class UEmbarkApiContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkApiGateway.EmbarkApiContext"));
		return ptr;
	}


	void SetManifestId(int64_t InManifestId);//Offset:Discovery.exe+0x1EAD180
	void STATIC_SetGlobalManifestId(int64_t InManifestId);//Offset:Discovery.exe+0x1EACF20
	void STATIC_SetGlobalDevInstanceKey(const struct FString& Key);//Offset:Discovery.exe+0x1EACE80
	void SetDevInstanceKey(const struct FString& Key);//Offset:Discovery.exe+0x1EAD0A0
	void SetAccessToken(const struct FString& AccessToken);//Offset:Discovery.exe+0x1EAD2A0
	struct FString GetSessionId();//Offset:Discovery.exe+0x1EACFB0
	int64_t GetManifestId();//Offset:Discovery.exe+0x1EAD150
	struct FString GetDevInstanceKey();//Offset:Discovery.exe+0x1EAD030
	struct FString GetAccessToken();//Offset:Discovery.exe+0x1EAD220
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
