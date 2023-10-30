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

// Class SoundUtilities.SoundSimple
// 0x0018 (0x0188 - 0x0170)
class USoundSimple : public USoundBase
{
public:
	TArray<struct FSoundVariation>                     Variations;                                               // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundWave*                                  SoundWave;                                                // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SoundUtilities.SoundSimple"));
		return ptr;
	}

};


// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SoundUtilities.SoundUtilitiesBPFunctionLibrary"));
		return ptr;
	}


	float STATIC_GetQFromBandwidth(float InBandwidth);//Offset:Discovery.exe+0x2F70FE0
	float STATIC_GetPitchScaleFromMIDIPitch(int BaseMidiNote, int TargetMidiNote);//Offset:Discovery.exe+0x2F71670
	int STATIC_GetMIDIPitchFromFrequency(float Frequency);//Offset:Discovery.exe+0x2F71750
	float STATIC_GetLogFrequencyClamped(float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange);//Offset:Discovery.exe+0x2F71300
	float STATIC_GetLinearFrequencyClamped(float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange);//Offset:Discovery.exe+0x2F711C0
	float STATIC_GetGainFromMidiVelocity(int InVelocity);//Offset:Discovery.exe+0x2F715D0
	float STATIC_GetFrequencyMultiplierFromSemitones(float InPitchSemitones);//Offset:Discovery.exe+0x2F71120
	float STATIC_GetFrequencyFromMIDIPitch(int MidiNote);//Offset:Discovery.exe+0x2F717F0
	float STATIC_GetBeatTempo(float BeatsPerMinute, int BeatMultiplier, int DivisionsOfWholeNote);//Offset:Discovery.exe+0x2F71890
	float STATIC_GetBandwidthFromQ(float InQ);//Offset:Discovery.exe+0x2F71080
	float STATIC_ConvertLinearToDecibels(float InLinear, float InFloor);//Offset:Discovery.exe+0x2F714E0
	float STATIC_ConvertDecibelsToLinear(float InDecibels);//Offset:Discovery.exe+0x2F71440
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
