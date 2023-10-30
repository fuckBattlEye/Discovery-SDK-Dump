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

// Class TimeManagement.FixedFrameRateCustomTimeStep
// 0x0000 (0x0028 - 0x0028)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TimeManagement.FixedFrameRateCustomTimeStep"));
		return ptr;
	}

};


// Class TimeManagement.GenlockedCustomTimeStep
// 0x0000 (0x0028 - 0x0028)
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TimeManagement.GenlockedCustomTimeStep"));
		return ptr;
	}

};


// Class TimeManagement.GenlockedFixedRateCustomTimeStep
// 0x0020 (0x0048 - 0x0028)
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{
public:
	struct FFrameRate                                  FrameRate;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TimeManagement.GenlockedFixedRateCustomTimeStep"));
		return ptr;
	}

};


// Class TimeManagement.GenlockedTimecodeProvider
// 0x0028 (0x0058 - 0x0030)
class UGenlockedTimecodeProvider : public UTimecodeProvider
{
public:
	bool                                               bUseGenlockToCount;                                       // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0031(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TimeManagement.GenlockedTimecodeProvider"));
		return ptr;
	}

};


// Class TimeManagement.TimeManagementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TimeManagement.TimeManagementBlueprintLibrary"));
		return ptr;
	}


	struct FFrameTime STATIC_TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate);//Offset:Discovery.exe+0x47CE130
	struct FFrameNumber STATIC_Subtract_FrameNumberInteger(const struct FFrameNumber& A, int B);//Offset:Discovery.exe+0x47CDC00
	struct FFrameNumber STATIC_Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);//Offset:Discovery.exe+0x47CDDE0
	struct FFrameTime STATIC_SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate);//Offset:Discovery.exe+0x47CDFC0
	struct FFrameTime STATIC_Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate);//Offset:Discovery.exe+0x47CE5A0
	struct FFrameNumber STATIC_Multiply_FrameNumberInteger(const struct FFrameNumber& A, int B);//Offset:Discovery.exe+0x47CDB10
	bool STATIC_IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate);//Offset:Discovery.exe+0x47CE2A0
	bool STATIC_IsValid_Framerate(const struct FFrameRate& InFrameRate);//Offset:Discovery.exe+0x47CE3B0
	struct FFrameRate STATIC_GetTimecodeFrameRate();//Offset:Discovery.exe+0x47CD8D0
	struct FTimecode STATIC_GetTimecode();//Offset:Discovery.exe+0x47CD920
	struct FFrameNumber STATIC_Divide_FrameNumberInteger(const struct FFrameNumber& A, int B);//Offset:Discovery.exe+0x47CDA20
	struct FString STATIC_Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay);//Offset:Discovery.exe+0x47CE460
	float STATIC_Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime);//Offset:Discovery.exe+0x47CE6A0
	float STATIC_Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate);//Offset:Discovery.exe+0x47CE750
	int STATIC_Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber);//Offset:Discovery.exe+0x47CD980
	struct FFrameNumber STATIC_Add_FrameNumberInteger(const struct FFrameNumber& A, int B);//Offset:Discovery.exe+0x47CDCF0
	struct FFrameNumber STATIC_Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);//Offset:Discovery.exe+0x47CDED0
};


// Class TimeManagement.TimeSynchronizationSource
// 0x0008 (0x0030 - 0x0028)
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                               bUseForSynchronization;                                   // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                FrameOffset;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TimeManagement.TimeSynchronizationSource"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
