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

// Class ActorBlackBoard.SimBaseClass
// 0x0008 (0x0030 - 0x0028)
class USimBaseClass : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ActorBlackBoard.SimBaseClass"));
		return ptr;
	}

};


// Class ActorBlackBoard.SimBaseClassForwarder
// 0x0000 (0x0028 - 0x0028)
class USimBaseClassForwarder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ActorBlackBoard.SimBaseClassForwarder"));
		return ptr;
	}

};


// Class ActorBlackBoard.ActorBlackBoardSubSystem
// 0x4078 (0x40A8 - 0x0030)
class UActorBlackBoardSubSystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x4078];                                    // 0x0030(0x4078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ActorBlackBoard.ActorBlackBoardSubSystem"));
		return ptr;
	}

};


// Class ActorBlackBoard.ActorBlackBoardTestHoverNetState3
// 0x00F0 (0x0120 - 0x0030)
class UActorBlackBoardTestHoverNetState3 : public USimBaseClass
{
public:
	bool                                               BoolA;                                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BoolB;                                                    // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FABFloat                                    TestFloat;                                                // 0x0034(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BoolC;                                                    // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              MaxLean;                                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AdditionalForce2;                                         // 0x0050(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YetAnotherFloat;                                          // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FVector_NetQuantize                         VecNetQuantize;                                           // 0x0070(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FABBLowCompressedWorldVector                Test;                                                     // 0x0088(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FABBLowCompressedQuat                       TestQ;                                                    // 0x00A0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FABBLowCompressedWorldTransform             TestT;                                                    // 0x00C0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ActorBlackBoard.ActorBlackBoardTestHoverNetState3"));
		return ptr;
	}

};


// Class ActorBlackBoard.ActorBlackBoardTestHoverNetState4
// 0x0028 (0x0058 - 0x0030)
class UActorBlackBoardTestHoverNetState4 : public USimBaseClass
{
public:
	float                                              MaxLean;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YetAnotherFloat;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FVector                                     AdditionalForce2;                                         // 0x0040(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ActorBlackBoard.ActorBlackBoardTestHoverNetState4"));
		return ptr;
	}

};


// Class ActorBlackBoard.ActorBlackBoardTestFixedArrayNetTestStruct
// 0x0080 (0x00B0 - 0x0030)
class UActorBlackBoardTestFixedArrayNetTestStruct : public USimBaseClass
{
public:
	int                                                MaxLean;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FActorBlackBoardTestInternalFixedArrayNetTestStruct TestStruct1[0x3];                                         // 0x0034(0x0014)
	struct FActorBlackBoardTestInternalFixedArrayNetTestStructWithArray StructWithArray;                                          // 0x0070(0x0040)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ActorBlackBoard.ActorBlackBoardTestFixedArrayNetTestStruct"));
		return ptr;
	}

};


// Class ActorBlackBoard.ActorBlackBoardTestTArrayNetTestStruct
// 0x0020 (0x0050 - 0x0030)
class UActorBlackBoardTestTArrayNetTestStruct : public USimBaseClass
{
public:
	int                                                MaxLean;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FABArraySizeLimiter                         SizeLimiter;                                              // 0x0034(0x0004)
	TArray<struct FActorBlackBoardTestInternalFixedArrayNetTestStruct> TestStruct1;                                              // 0x0038(0x0010) (ZeroConstructor)
	int                                                MaxLean2;                                                 // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ActorBlackBoard.ActorBlackBoardTestTArrayNetTestStruct"));
		return ptr;
	}

};


// Class ActorBlackBoard.ActorBlackBoardTestTArrayNetTestStructOuter
// 0x0020 (0x0050 - 0x0030)
class UActorBlackBoardTestTArrayNetTestStructOuter : public USimBaseClass
{
public:
	int                                                A;                                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FABArraySizeLimiter                         SizeLimiter;                                              // 0x0034(0x0004)
	TArray<struct FActorBlackBoardTestTArrayNetTestStructInner> TestStruct1;                                              // 0x0038(0x0010) (ZeroConstructor)
	int                                                B;                                                        // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ActorBlackBoard.ActorBlackBoardTestTArrayNetTestStructOuter"));
		return ptr;
	}

};


// Class ActorBlackBoard.ActorBlackBoardTestOnReps
// 0x0020 (0x0050 - 0x0030)
class UActorBlackBoardTestOnReps : public USimBaseClass
{
public:
	int                                                A;                                                        // 0x0030(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FABArraySizeLimiter                         SizeLimiter;                                              // 0x0034(0x0004)
	TArray<int>                                        TriggeredExplosions;                                      // 0x0038(0x0010) (Net, ZeroConstructor)
	int                                                ToBeSetByOnRepExpl;                                       // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ToBeSetByOnRepA;                                          // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ActorBlackBoard.ActorBlackBoardTestOnReps"));
		return ptr;
	}


	void OnRep_TriggeredExplosions();//Offset:Discovery.exe+0x1D2BB50
	void OnRep_TriggeredA();//Offset:Discovery.exe+0x1D2BB20
};


// Class ActorBlackBoard.ActorBlackBoardTestInitialization
// 0x0008 (0x0038 - 0x0030)
class UActorBlackBoardTestInitialization : public USimBaseClass
{
public:
	int                                                A;                                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ActorBlackBoard.ActorBlackBoardTestInitialization"));
		return ptr;
	}


	void InitForActor(class UObject* Owner);//Offset:Discovery.exe+0x1D2BFA0
};


// Class ActorBlackBoard.BlackBoardTesterAS
// 0x138D8 (0x13900 - 0x0028)
class UBlackBoardTesterAS : public UObject
{
public:
	unsigned char                                      UnknownData00[0x138D8];                                   // 0x0028(0x138D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ActorBlackBoard.BlackBoardTesterAS"));
		return ptr;
	}


	void SetOwnerActor(class AActor* Obj);//Offset:Discovery.exe+0x1D2C300
	class UObject* RegisterClassToServerBlackBoard(class UClass* Class);//Offset:Discovery.exe+0x1D2C3D0
	void Init();//Offset:Discovery.exe+0x1D2C3A0
	class UObject* GetFirstStateOfTypeFromServerBlackBoard(class UClass* Class);//Offset:Discovery.exe+0x1D2C3D0
	class UObject* GetFirstStateOfTypeFromClientBlackBoard(class UClass* Class);//Offset:Discovery.exe+0x1D2C3D0
	void FakeTransmit();//Offset:Discovery.exe+0x1D2C3A0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
