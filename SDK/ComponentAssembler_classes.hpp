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

// Class ComponentAssembler.ComponentAssemblerComponentBase
// 0x0070 (0x0340 - 0x02D0)
class UComponentAssemblerComponentBase : public USceneComponent
{
public:
	class UClass*                                      ApprovedClasses;                                          // 0x02D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData)
	enum class EAssemblyNetworkMode                    NetworkMode;                                              // 0x02D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D8(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	enum class EAttachmentRule                         AttachmentRule;                                           // 0x02DC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReplaceAssemblerWithAssembly;                            // 0x02DD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x62];                                      // 0x02DE(0x0062) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ComponentAssembler.ComponentAssemblerComponentBase"));
		return ptr;
	}


	class UClass* GetAssemblyType();//Offset:Discovery.exe+0x18EB510
	struct FName GetAssemblyPropertyName();//Offset:Discovery.exe+0x18EB4C0
	void DisassembleComponents();//Offset:Discovery.exe+0x18EB540
	void AssembleComponents();//Offset:Discovery.exe+0x18EB560
};


// Class ComponentAssembler.DefaultComponentAssemblerComponent
// 0x0000 (0x0340 - 0x0340)
class UDefaultComponentAssemblerComponent : public UComponentAssemblerComponentBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ComponentAssembler.DefaultComponentAssemblerComponent"));
		return ptr;
	}

};


// Class ComponentAssembler.ComponentAssembler_ApprovedClasses
// 0x0040 (0x0068 - 0x0028)
class UComponentAssembler_ApprovedClasses : public UObject
{
public:
	TArray<class UClass*>                              ApprovedComponentBaseTypes_Server;                        // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              ApprovedComponentBaseTypes_Client;                        // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              Native_ApprovedComponentBaseTypes_Server;                 // 0x0048(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst)
	TArray<class UClass*>                              Native_ApprovedComponentBaseTypes_Client;                 // 0x0058(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ComponentAssembler.ComponentAssembler_ApprovedClasses"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
