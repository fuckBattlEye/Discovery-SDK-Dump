#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum PBIK.EPBIKRootBehavior
enum class EPBIKRootBehavior : uint8_t
{
	PrePull                        = 0,
	PinToInput                     = 1,
	Free                           = 2,
	EPBIKRootBehavior_MAX          = 3
};


// Enum PBIK.EPBIKLimitType
enum class EPBIKLimitType : uint8_t
{
	Free                           = 0,
	Limited                        = 1,
	Locked                         = 2,
	EPBIKLimitType_MAX             = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PBIK.PBIKSolverSettings
// 0x0010
struct FPBIKSolverSettings
{
	int                                                Iterations;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MassMultiplier;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinMassMultiplier;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowStretch;                                            // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000D(0x0001) MISSED OFFSET
	bool                                               bStartSolveFromInputPose;                                 // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
};

// ScriptStruct PBIK.PBIKSolver
// 0x0068
struct FPBIKSolver
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct PBIK.PBIKBoneSetting
// 0x0050
struct FPBIKBoneSetting
{
	struct FName                                       bone;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationStiffness;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositionStiffness;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	float                                              MinX;                                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxX;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	float                                              MinY;                                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxY;                                                     // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0028(0x0004) MISSED OFFSET
	float                                              MinZ;                                                     // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxZ;                                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePreferredAngles;                                      // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FVector                                     PreferredAngles;                                          // 0x0038(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PBIK.PBIKDebug
// 0x0008
struct FPBIKDebug
{
	float                                              DrawScale;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct PBIK.PBIKEffector
// 0x0090
struct FPBIKEffector
{
	struct FName                                       bone;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (Edit, IsPlainOldData)
	float                                              PositionAlpha;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationAlpha;                                            // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StrengthAlpha;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PullChainAlpha;                                           // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PinRotation;                                              // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0084(0x000C) MISSED OFFSET
};

// ScriptStruct PBIK.RigUnit_PBIK
// 0x00F0 (0x01C0 - 0x00D0)
struct FRigUnit_PBIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       Root;                                                     // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPBIKEffector>                       Effectors;                                                // 0x00D8(0x0010) (ZeroConstructor)
	TArray<int>                                        EffectorSolverIndices;                                    // 0x00E8(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPBIKBoneSetting>                    BoneSettings;                                             // 0x00F8(0x0010) (ZeroConstructor)
	TArray<struct FName>                               ExcludedBones;                                            // 0x0108(0x0010) (ZeroConstructor)
	struct FPBIKSolverSettings                         Settings;                                                 // 0x0118(0x0010)
	struct FPBIKDebug                                  Debug;                                                    // 0x0128(0x0008)
	TArray<int>                                        BoneSettingToSolverBoneIndex;                             // 0x0130(0x0010) (ZeroConstructor, Transient)
	TArray<int>                                        SolverBoneToElementIndex;                                 // 0x0140(0x0010) (ZeroConstructor, Transient)
	struct FPBIKSolver                                 Solver;                                                   // 0x0150(0x0068) (Transient)
	bool                                               bNeedsInit;                                               // 0x01B8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
