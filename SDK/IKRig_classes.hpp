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

// Class IKRig.RetargetChainSettings
// 0x0068 (0x0090 - 0x0028)
class URetargetChainSettings : public UObject
{
public:
	struct FName                                       SourceChain;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       TargetChain;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               CopyPoseUsingFK;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ERetargetRotationMode                   RotationMode;                                             // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	float                                              RotationAlpha;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ERetargetTranslationMode                TranslationMode;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              TranslationAlpha;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DriveIKGoal;                                              // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              BlendToSource;                                            // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BlendToSourceWeights;                                     // 0x0050(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StaticOffset;                                             // 0x0068(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Extension;                                                // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MatchSourceVelocity;                                      // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocityThreshold;                                        // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.RetargetChainSettings"));
		return ptr;
	}

};


// Class IKRig.IKRetargeter
// 0x0090 (0x00B8 - 0x0028)
class UIKRetargeter : public UObject
{
public:
	class UIKRigDefinition*                            SourceIKRigAsset;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UIKRigDefinition*                            TargetIKRigAsset;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRetargetRoot;                                            // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRetargetFK;                                              // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRetargetIK;                                              // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	TMap<struct FName, struct FIKRetargetPose>         RetargetPoses;                                            // 0x0040(0x0050)
	TArray<struct FRetargetChainMap>                   ChainMapping;                                             // 0x0090(0x0010) (ZeroConstructor, Deprecated)
	TArray<class URetargetChainSettings*>              ChainSettings;                                            // 0x00A0(0x0010) (ZeroConstructor)
	struct FName                                       CurrentRetargetPose;                                      // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRetargeter"));
		return ptr;
	}

};


// Class IKRig.IKRetargetProcessor
// 0x01B8 (0x01E0 - 0x0028)
class UIKRetargetProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET
	class UIKRigProcessor*                             IKRigProcessor;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE0];                                      // 0x0100(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRetargetProcessor"));
		return ptr;
	}

};


// Class IKRig.IKRigComponent
// 0x0018 (0x00D0 - 0x00B8)
class UIKRigComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRigComponent"));
		return ptr;
	}


	void SetIKRigGoalTransform(const struct FName& GoalName, const struct FTransform& Transform, float PositionAlpha, float RotationAlpha);//Offset:Discovery.exe+0x2C9D8D0
	void SetIKRigGoalPositionAndRotation(const struct FName& GoalName, const struct FVector& Position, const struct FQuat& Rotation, float PositionAlpha, float RotationAlpha);//Offset:Discovery.exe+0x2C9DCE0
	void SetIKRigGoal(const struct FIKRigGoal& Goal);//Offset:Discovery.exe+0x2C9D780
	void ClearAllGoals();//Offset:Discovery.exe+0x2C9D710
};


// Class IKRig.IKRigEffectorGoal
// 0x00D8 (0x0100 - 0x0028)
class UIKRigEffectorGoal : public UObject
{
public:
	struct FName                                       GoalName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              PositionAlpha;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationAlpha;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  CurrentTransform;                                         // 0x0040(0x0060) (Edit, IsPlainOldData)
	struct FTransform                                  InitialTransform;                                         // 0x00A0(0x0060) (Edit, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRigEffectorGoal"));
		return ptr;
	}

};


// Class IKRig.IKRigDefinition
// 0x00B8 (0x00E0 - 0x0028)
class UIKRigDefinition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class USkeletalMesh*                               PreviewSkeletalMesh;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FIKRigSkeleton                              Skeleton;                                                 // 0x0038(0x0070)
	TArray<class UIKRigEffectorGoal*>                  Goals;                                                    // 0x00A8(0x0010) (ZeroConstructor)
	TArray<class UIKRigSolver*>                        Solvers;                                                  // 0x00B8(0x0010) (ExportObject, ZeroConstructor)
	struct FRetargetDefinition                         RetargetDefinition;                                       // 0x00C8(0x0018)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRigDefinition"));
		return ptr;
	}

};


// Class IKRig.IKGoalCreatorInterface
// 0x0000 (0x0028 - 0x0028)
class UIKGoalCreatorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKGoalCreatorInterface"));
		return ptr;
	}


	void AddIKGoals(TMap<struct FName, struct FIKRigGoal>* OutGoals);//Offset:Discovery.exe+0x2C9EC00
};


// Class IKRig.IKRigProcessor
// 0x00E8 (0x0110 - 0x0028)
class UIKRigProcessor : public UObject
{
public:
	TArray<class UIKRigSolver*>                        Solvers;                                                  // 0x0028(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0038(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRigProcessor"));
		return ptr;
	}

};


// Class IKRig.IKRigSolver
// 0x0000 (0x0028 - 0x0028)
class UIKRigSolver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRigSolver"));
		return ptr;
	}

};


// Class IKRig.IKRig_BodyMoverEffector
// 0x0018 (0x0040 - 0x0028)
class UIKRig_BodyMoverEffector : public UObject
{
public:
	struct FName                                       GoalName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              InfluenceMultiplier;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRig_BodyMoverEffector"));
		return ptr;
	}

};


// Class IKRig.IKRig_BodyMover
// 0x0050 (0x0078 - 0x0028)
class UIKRig_BodyMover : public UIKRigSolver
{
public:
	struct FName                                       RootBone;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              PositionAlpha;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositionPositiveX;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositionNegativeX;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositionPositiveY;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositionNegativeY;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositionPositiveZ;                                        // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositionNegativeZ;                                        // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationAlpha;                                            // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotateXAlpha;                                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotateYAlpha;                                             // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotateZAlpha;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<class UIKRig_BodyMoverEffector*>            Effectors;                                                // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRig_BodyMover"));
		return ptr;
	}

};


// Class IKRig.IKRig_LimbEffector
// 0x0010 (0x0038 - 0x0028)
class UIKRig_LimbEffector : public UObject
{
public:
	struct FName                                       GoalName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRig_LimbEffector"));
		return ptr;
	}

};


// Class IKRig.IKRig_LimbSolver
// 0x0060 (0x0088 - 0x0028)
class UIKRig_LimbSolver : public UIKRigSolver
{
public:
	struct FName                                       RootName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ReachPrecision;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                        // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                MaxIterations;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableLimit;                                             // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              MinRotationAngle;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAveragePull;                                             // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              PullDistribution;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReachStepAlpha;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTwistCorrection;                                   // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 EndBoneForwardAxis;                                       // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	class UIKRig_LimbEffector*                         Effector;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x28];                                      // 0x0060(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRig_LimbSolver"));
		return ptr;
	}

};


// Class IKRig.IKRig_FBIKEffector
// 0x0020 (0x0048 - 0x0028)
class UIKRig_FBIKEffector : public UObject
{
public:
	struct FName                                       GoalName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              StrengthAlpha;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PullChainAlpha;                                           // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PinRotation;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                IndexInSolver;                                            // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRig_FBIKEffector"));
		return ptr;
	}

};


// Class IKRig.IKRig_PBIKBoneSettings
// 0x0050 (0x0078 - 0x0028)
class UIKRig_PBIKBoneSettings : public UObject
{
public:
	struct FName                                       bone;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RotationStiffness;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositionStiffness;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EPBIKLimitType                          X;                                                        // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              MinX;                                                     // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxX;                                                     // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EPBIKLimitType                          Y;                                                        // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              MinY;                                                     // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxY;                                                     // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EPBIKLimitType                          Z;                                                        // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              MinZ;                                                     // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxZ;                                                     // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePreferredAngles;                                      // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	struct FVector                                     PreferredAngles;                                          // 0x0060(0x0018) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRig_PBIKBoneSettings"));
		return ptr;
	}

};


// Class IKRig.IKRigPBIKSolver
// 0x00A0 (0x00C8 - 0x0028)
class UIKRigPBIKSolver : public UIKRigSolver
{
public:
	struct FName                                       RootBone;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Iterations;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MassMultiplier;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinMassMultiplier;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowStretch;                                            // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EPBIKRootBehavior                       RootBehavior;                                             // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStartSolveFromInputPose;                                 // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x003F(0x0001) MISSED OFFSET
	TArray<class UIKRig_FBIKEffector*>                 Effectors;                                                // 0x0040(0x0010) (ZeroConstructor)
	TArray<class UIKRig_PBIKBoneSettings*>             BoneSettings;                                             // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0060(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRigPBIKSolver"));
		return ptr;
	}

};


// Class IKRig.IKRig_PoleSolverEffector
// 0x0018 (0x0040 - 0x0028)
class UIKRig_PoleSolverEffector : public UObject
{
public:
	struct FName                                       GoalName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRig_PoleSolverEffector"));
		return ptr;
	}

};


// Class IKRig.IKRig_PoleSolver
// 0x0038 (0x0060 - 0x0028)
class UIKRig_PoleSolver : public UIKRigSolver
{
public:
	struct FName                                       RootName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       EndName;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UIKRig_PoleSolverEffector*                   Effector;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRig_PoleSolver"));
		return ptr;
	}

};


// Class IKRig.IKRig_SetTransformEffector
// 0x0008 (0x0030 - 0x0028)
class UIKRig_SetTransformEffector : public UObject
{
public:
	bool                                               bEnablePosition;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRotation;                                          // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              Alpha;                                                    // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRig_SetTransformEffector"));
		return ptr;
	}

};


// Class IKRig.IKRig_SetTransform
// 0x0020 (0x0048 - 0x0028)
class UIKRig_SetTransform : public UIKRigSolver
{
public:
	struct FName                                       Goal;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       RootBone;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UIKRig_SetTransformEffector*                 Effector;                                                 // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class IKRig.IKRig_SetTransform"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
