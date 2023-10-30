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

// BlueprintGeneratedClass BP_DomeShield_Bubble_01.BP_DomeShield_Bubble_01_C
// 0x0050 (0x0480 - 0x0430)
class ABP_DomeShield_Bubble_01_C : public AProtectiveBubble
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UEmbarkActorTransformInterpolatorComponent*  EmbarkActorTransformInterpolator;                         // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Initialize_Emissive_FEFDFD034AB0856D7E9690B1F7CF7D1E;     // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Initialize_Initialize_FEFDFD034AB0856D7E9690B1F7CF7D1E;   // 0x0444(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Initialize__Direction_FEFDFD034AB0856D7E9690B1F7CF7D1E;   // 0x0448(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Initialize;                                               // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Dissolve_NewTrack_0_964A1B0942DF07B572706CB5E0F4C0A6;     // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Dissolve__Direction_964A1B0942DF07B572706CB5E0F4C0A6;     // 0x045C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x045D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Dissolve;                                                 // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 New_Mesh;                                                 // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FallbackColor;                                            // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("BlueprintGeneratedClass BP_DomeShield_Bubble_01.BP_DomeShield_Bubble_01_C"));
		return ptr;
	}


	void Initialize__FinishedFunc();//Offset:Discovery.exe+0x327F8B0
	void Initialize__UpdateFunc();//Offset:Discovery.exe+0x327F8B0
	void Dissolve__FinishedFunc();//Offset:Discovery.exe+0x327F8B0
	void Dissolve__UpdateFunc();//Offset:Discovery.exe+0x327F8B0
	void BP_ActivateShield_Client();//Offset:Discovery.exe+0x327F8B0
	void BP_DeactivateShield_Client();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_BP_DomeShield_Bubble_01(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
