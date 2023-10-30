#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ActorBlackBoard.ABFloatQuantization
// 0x000C
struct FABFloatQuantization
{
	float                                              MaxVal;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVal;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      BitCount;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      SmallChangeBitCount;                                      // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct ActorBlackBoard.ABFloat
// 0x0010
struct FABFloat
{
	struct FABFloatQuantization                        Quantization;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Value;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABBLowCompressedWorldVector
// 0x0018
struct FABBLowCompressedWorldVector
{
	struct FVector                                     Vector;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABBLowCompressedQuat
// 0x0020
struct FABBLowCompressedQuat
{
	struct FQuat                                       Quat;                                                     // 0x0000(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABBLowCompressedWorldTransform
// 0x0060
struct FABBLowCompressedWorldTransform
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABIntQuantization
// 0x000C
struct FABIntQuantization
{
	int                                                MaxVal;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinVal;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      SmallChangeBitCount;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ActorBlackBoard.ABInt
// 0x0010
struct FABInt
{
	struct FABIntQuantization                          Quantization;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Value;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ActorBlackBoardTestInternalFixedArrayNetTestStruct
// 0x0014
struct FActorBlackBoardTestInternalFixedArrayNetTestStruct
{
	int                                                A;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FABInt                                      B;                                                        // 0x0004(0x0010)
};

// ScriptStruct ActorBlackBoard.ActorBlackBoardTestInternalFixedArrayNetTestStructWithArray
// 0x0040
struct FActorBlackBoardTestInternalFixedArrayNetTestStructWithArray
{
	int                                                X;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FActorBlackBoardTestInternalFixedArrayNetTestStruct TestArrayInsideStruct[0x3];                               // 0x0004(0x0014)
};

// ScriptStruct ActorBlackBoard.ABArraySizeLimiter
// 0x0004
struct FABArraySizeLimiter
{
	int                                                MaxArraySize;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ActorBlackBoardTestTArrayNetTestStructInner
// 0x0020
struct FActorBlackBoardTestTArrayNetTestStructInner
{
	int                                                MaxLean;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FABArraySizeLimiter                         SizeLimiter;                                              // 0x0004(0x0004)
	TArray<struct FActorBlackBoardTestInternalFixedArrayNetTestStruct> TestStruct1;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                MaxLean2;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ActorBlackBoard.EmbarkObjectMap
// 0x4058
struct FEmbarkObjectMap
{
	unsigned char                                      UnknownData00[0x4058];                                    // 0x0000(0x4058) MISSED OFFSET
};

// ScriptStruct ActorBlackBoard.BlackBoardDeltaCompressionPtr
// 0x0030
struct FBlackBoardDeltaCompressionPtr
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct ActorBlackBoard.ABBCompressedVectorBase
// 0x0018
struct FABBCompressedVectorBase
{
	struct FVector                                     Vector;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABBHighCompressedWorldVector
// 0x0018
struct FABBHighCompressedWorldVector
{
	struct FVector                                     Vector;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABBHighCompressedVectorMaxLen2000
// 0x0018
struct FABBHighCompressedVectorMaxLen2000
{
	struct FVector                                     Vector;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABBLowCompressedVectorMaxLen2000
// 0x0018
struct FABBLowCompressedVectorMaxLen2000
{
	struct FVector                                     Vector;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABBHighCompressedVectorMaxLen200
// 0x0018
struct FABBHighCompressedVectorMaxLen200
{
	struct FVector                                     Vector;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABBLowCompressedVectorMaxLen200
// 0x0018
struct FABBLowCompressedVectorMaxLen200
{
	struct FVector                                     Vector;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABBCompressedQuatBase
// 0x0020
struct FABBCompressedQuatBase
{
	struct FQuat                                       Quat;                                                     // 0x0000(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABBHighCompressedQuat
// 0x0020
struct FABBHighCompressedQuat
{
	struct FQuat                                       Quat;                                                     // 0x0000(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABBCompressedTransformBase
// 0x0060
struct FABBCompressedTransformBase
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABBHighCompressedWorldTransform
// 0x0060
struct FABBHighCompressedWorldTransform
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABBLowCompressedLocalTransform
// 0x0060
struct FABBLowCompressedLocalTransform
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.ABBHighCompressedLocalTransform
// 0x0060
struct FABBHighCompressedLocalTransform
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ActorBlackBoard.TransformAndVelocityBBVariable
// 0x0001
struct FTransformAndVelocityBBVariable
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ActorBlackBoard.ActorTransformCollection
// 0x0010
struct FActorTransformCollection
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
