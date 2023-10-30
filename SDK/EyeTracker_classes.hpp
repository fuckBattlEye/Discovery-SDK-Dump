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

// Class EyeTracker.EyeTrackerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EyeTracker.EyeTrackerFunctionLibrary"));
		return ptr;
	}


	void STATIC_SetEyeTrackedPlayer(class APlayerController* PlayerController);//Offset:Discovery.exe+0x3742020
	bool STATIC_IsStereoGazeDataAvailable();//Offset:Discovery.exe+0x3742250
	bool STATIC_IsEyeTrackerConnected();//Offset:Discovery.exe+0x3742280
	bool STATIC_GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData);//Offset:Discovery.exe+0x37420B0
	bool STATIC_GetGazeData(struct FEyeTrackerGazeData* OutGazeData);//Offset:Discovery.exe+0x3742190
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
