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

// SMBlueprintGeneratedClass DSM_EarlyLeader.DSM_EarlyLeader_C
// 0x0620 (0x0D38 - 0x0718)
class UDSM_EarlyLeader_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_F1739B474A4D55B92D2D5CA57549F1C4_LD_Prop;// 0x0720(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_F1739B474A4D55B92D2D5CA57549F1C4_LD_Prop_1;// 0x08B0(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_F1739B474A4D55B92D2D5CA57549F1C4_LD_Prop;// 0x0A38(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_F1739B474A4D55B92D2D5CA57549F1C4_LD_Prop_3;// 0x0BC0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_F1739B474A4D55B92D2D5CA57549F1C4_LD_Prop_2;// 0x0C08(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_F1739B474A4D55B92D2D5CA57549F1C4_LD_Prop_1;// 0x0C50(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_F1739B474A4D55B92D2D5CA57549F1C4_LD_Prop;// 0x0C98(0x0048)
	TMap<struct FGameplayTag, struct FGameplayTag>     SquadMap;                                                 // 0x0CE0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       SquadBucketSequence;                                      // 0x0D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_EarlyLeader.DSM_EarlyLeader_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_F1739B474A4D55B92D2D5CA57549F1C4_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_F1739B474A4D55B92D2D5CA57549F1C4_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_F1739B474A4D55B92D2D5CA57549F1C4_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_F1739B474A4D55B92D2D5CA57549F1C4_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_F1739B474A4D55B92D2D5CA57549F1C4_Logic_State_58A573384E0159A8659E12A9DE9E588E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_F1739B474A4D55B92D2D5CA57549F1C4_Announcer___Early_Leader_7904715B4099C367A01949A7E87A21A1();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_EarlyLeader(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
