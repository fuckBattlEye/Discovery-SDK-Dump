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

// SMBlueprintGeneratedClass DSM_Ping.DSM_Ping_C
// 0x2040 (0x2758 - 0x0718)
class UDSM_Ping_C : public UDialogueStateMachineInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_10;// 0x0720(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_9;// 0x08B0(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_8;// 0x0A40(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_7;// 0x0BD0(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_6;// 0x0D60(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_5;// 0x0EF0(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_4;// 0x1080(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_3;// 0x1210(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_2;// 0x13A0(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_1;// 0x1530(0x0190)
	struct FSMTransition                               SMGraphK2Node_TransitionResultNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop;// 0x16C0(0x0190)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_7;// 0x1850(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_6;// 0x19D8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_5;// 0x1B60(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_4;// 0x1CE8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_3;// 0x1E70(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_2;// 0x1FF8(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_1;// 0x2180(0x0188)
	struct FSMState                                    SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop;// 0x2308(0x0188)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_4;// 0x2490(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_3;// 0x24D8(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_2;// 0x2520(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop_1;// 0x2568(0x0048)
	struct FSMGraphProperty_Runtime                    SMGraphK2Node_GraphPropertyNode_9F6A1D8348383A11D137F1B9CC640613_LD_Prop;// 0x25B0(0x0048)
	TMap<struct FGameplayTag, struct FGameplayTag>     GenericPingIntentToBucketMap;                             // 0x25F8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        ObjectSwitchTags;                                         // 0x2648(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        IntentSwitchTags;                                         // 0x2658(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     CalloutToBucketMap;                                       // 0x2668(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FDialogueTagPair, struct FGameplayTag> LocationTagPairToBucketMap;                               // 0x26B8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     LocationIntentToBucketMap;                                // 0x2708(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("SMBlueprintGeneratedClass DSM_Ping.DSM_Ping_C"));
		return ptr;
	}


	void SMGraphK2Node_GraphPropertyNode_9F6A1D8348383A11D137F1B9CC640613_18B59905CC6FAC8B56897726853844BB();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_9F6A1D8348383A11D137F1B9CC640613_DF7CC22DE6FE46E5F65D04F537E7042F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_9F6A1D8348383A11D137F1B9CC640613_7029191DC382CD1DEADCCBBCD33EDE2E();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_9F6A1D8348383A11D137F1B9CC640613_26AE8674113BF0F399A68E15984CFCED();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_GraphPropertyNode_9F6A1D8348383A11D137F1B9CC640613_96B795C34CF8ECE4812C3463ABFBCDDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_Generic_Ping_59006BFD49B11598F780858E26C664BE();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_Play_On_Instigator_439CBF7C4C4ED775763B0DA55453DCDF();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_Switch_On_Object_Tag_4DCD57164AAB894167BF169412B45286();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_Objective_Ping_BD007F5B40E11282BABEEEBA5A70516B();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_Generic_Location_Ping_9F44C842450F40F2710427BE53F1D442();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_Switch_On_Intent_2451B1E1482CC61A9EF6CBA127A1A47A();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_Maybe_add_suffix_51685C9043DB70D70B67319FB3B2BE2F();//Offset:Discovery.exe+0x327F8B0
	void SMGraphK2Node_StateEntryNode_9F6A1D8348383A11D137F1B9CC640613_Callouts_101846CD4ED844E4D2E9F7BCE92C7583();//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_DSM_Ping(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
