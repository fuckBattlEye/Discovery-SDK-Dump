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

// Class EmbarkSoundCueNodes.SoundNodeDistanceCrossFadeEmbark
// 0x0018 (0x0060 - 0x0048)
class USoundNodeDistanceCrossFadeEmbark : public USoundNode
{
public:
	TArray<struct FDistanceDatum>                      CrossFadeInput;                                           // 0x0048(0x0010) (Edit, ExportObject, EditFixedSize, ZeroConstructor)
	bool                                               bPreserveInitialDistance;                                 // 0x0058(0x0001) (Edit, ExportObject, EditFixedSize, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSoundCueNodes.SoundNodeDistanceCrossFadeEmbark"));
		return ptr;
	}

};


// Class EmbarkSoundCueNodes.SoundNodePitchModulatorEmbark
// 0x0020 (0x0068 - 0x0048)
class USoundNodePitchModulatorEmbark : public USoundNode
{
public:
	TArray<struct FEmbarkModulatorParams>              ModulationParams;                                         // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   ClampRange;                                               // 0x0058(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSoundCueNodes.SoundNodePitchModulatorEmbark"));
		return ptr;
	}

};


// Class EmbarkSoundCueNodes.SoundNodeVolumeModulatorEmbark
// 0x0020 (0x0068 - 0x0048)
class USoundNodeVolumeModulatorEmbark : public USoundNode
{
public:
	TArray<struct FEmbarkModulatorParams>              ModulationParams;                                         // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   ClampRange;                                               // 0x0058(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSoundCueNodes.SoundNodeVolumeModulatorEmbark"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
