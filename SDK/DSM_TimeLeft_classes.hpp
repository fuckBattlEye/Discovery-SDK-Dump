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

// SMBlueprintGeneratedClass DSM_TimeLeft.DSM_TimeLeft_C
// 0x09C8 (0x10E0 - 0x0718)
class UDSM_TimeLeft_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_ACBA426E44EC31FDB8FE43B23B5FB809_LD_Prop_1;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_ACBA426E44EC31FDB8FE43B23B5FB809_LD_Prop;// 0x08B0(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_ACBA426E44EC31FDB8FE43B23B5FB809_LD_Prop_2;// 0x0A40(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_ACBA426E44EC31FDB8FE43B23B5FB809_LD_Prop_1;// 0x0BC8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_ACBA426E44EC31FDB8FE43B23B5FB809_LD_Prop;// 0x0D50(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_ACBA426E44EC31FDB8FE43B23B5FB809_LD_Prop_5;// 0x0ED8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_ACBA426E44EC31FDB8FE43B23B5FB809_LD_Prop_4;// 0x0F20(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_ACBA426E44EC31FDB8FE43B23B5FB809_LD_Prop_3;// 0x0F68(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_ACBA426E44EC31FDB8FE43B23B5FB809_LD_Prop_2;// 0x0FB0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_ACBA426E44EC31FDB8FE43B23B5FB809_LD_Prop_1;// 0x0FF8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_ACBA426E44EC31FDB8FE43B23B5FB809_LD_Prop;// 0x1040(0x0048)
	TMap<struct FGameplayTag, struct FGameplayTag>     TimeLeftTagMap;                                           // 0x1088(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       TimeLeftBucketSequence;                                   // 0x10D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_TimeLeft.DSM_TimeLeft_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_ACBA426E44EC31FDB8FE43B23B5FB809_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_ACBA426E44EC31FDB8FE43B23B5FB809_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_ACBA426E44EC31FDB8FE43B23B5FB809_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_ACBA426E44EC31FDB8FE43B23B5FB809_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_ACBA426E44EC31FDB8FE43B23B5FB809_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_ACBA426E44EC31FDB8FE43B23B5FB809_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_ACBA426E44EC31FDB8FE43B23B5FB809_Logic_State_7B585CB343D9FB660940B3BC77DFF12C();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_ACBA426E44EC31FDB8FE43B23B5FB809_Announcer___EOR_Countdown_3E8DC26449E2B0D7AFDE07868CFDA9FA();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_ACBA426E44EC31FDB8FE43B23B5FB809_Wait_34DA2A2045B69E15DD5944AF9A141CF1();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_TimeLeft(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
