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

// SMBlueprintGeneratedClass DSM_Encouragement.DSM_Encouragement_C
// 0x0E8C (0x15A4 - 0x0718)
class UDSM_Encouragement_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop_2;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop_1;// 0x08B0(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop;// 0x0A40(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop_3;// 0x0BD0(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop_2;// 0x0D58(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop_1;// 0x0EE0(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop;// 0x1068(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop_9;// 0x11F0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop_8;// 0x1238(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop_7;// 0x1280(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop_6;// 0x12C8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop_5;// 0x1310(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop_4;// 0x1358(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop_3;// 0x13A0(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop_2;// 0x13E8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop_1;// 0x1430(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_LD_Prop;// 0x1478(0x0048)
	struct FGameplayTag                                EncouragementVar1;                                        // 0x14C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar2;                                        // 0x14C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar3;                                        // 0x14D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar4;                                        // 0x14D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar5;                                        // 0x14E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar6;                                        // 0x14E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar7;                                        // 0x14F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar8;                                        // 0x14F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar9;                                        // 0x1500(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar10;                                       // 0x1508(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar11;                                       // 0x1510(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar12;                                       // 0x1518(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar13;                                       // 0x1520(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       Commentator_Sequence;                                     // 0x1528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EncouragementVar1Answer;                                  // 0x1530(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar2Answer;                                  // 0x1538(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar3Answer;                                  // 0x1540(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar4Answer;                                  // 0x1548(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar5Answer;                                  // 0x1550(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar6Answer;                                  // 0x1558(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar7Answer;                                  // 0x1560(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar8Answer;                                  // 0x1568(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar9Answer;                                  // 0x1570(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar10Answer;                                 // 0x1578(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar11Answer;                                 // 0x1580(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar12Answer;                                 // 0x1588(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EncouragementVar13Answer;                                 // 0x1590(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       CoHost_Answer_Sequence;                                   // 0x1598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RandomInt;                                                // 0x15A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_Encouragement.DSM_Encouragement_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_DF7CC22DE6FE46E5F65D04F537E7042F_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_7029191DC382CD1DEADCCBBCD33EDE2E_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_26AE8674113BF0F399A68E15984CFCED_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_96B795C34CF8ECE4812C3463ABFBCDDF_1();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_2CBD9EB82C7B7C2A22E7305E5262474D();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_DD80987643A25CE355A0B5B4C4586A82_A20978DA60E5652D4C2282FE857519F5();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_DD80987643A25CE355A0B5B4C4586A82_Commentator___Encouragement_9CE64A124F83AFE6E68DB9AFF541570A();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_DD80987643A25CE355A0B5B4C4586A82_Logic_State_D8D4F6DA4F6E8624E2FF6CA61E577747();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_DD80987643A25CE355A0B5B4C4586A82_CoHost___Encouragement_Answer_D7FBD0364D5471936D8F29B9EF7AD090();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_DD80987643A25CE355A0B5B4C4586A82_Wait_9DFA1B4E473D6C1FA564A0B601B3FD25();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_Encouragement(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
