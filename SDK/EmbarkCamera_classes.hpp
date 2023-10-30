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

// Class EmbarkCamera.EmbarkPlayerCameraManager
// 0x0020 (0x3340 - 0x3320)
class AEmbarkPlayerCameraManager : public APlayerCameraManager
{
public:
	struct FVector2D                                   OffCenterProjectionOffset;                                // 0x3320(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnViewTargetChanged;                                      // 0x3330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkCamera.EmbarkPlayerCameraManager"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
