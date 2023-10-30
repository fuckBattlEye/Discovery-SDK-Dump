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

// Enum RigVM.ERigVMBreakpointAction
enum class ERigVMBreakpointAction : uint8_t
{
	None                           = 0,
	Resume                         = 1,
	StepOver                       = 2,
	StepInto                       = 3,
	StepOut                        = 4,
	Max                            = 5
};


// Enum RigVM.ERigVMParameterType
enum class ERigVMParameterType : uint8_t
{
	Input                          = 0,
	Output                         = 1,
	Invalid                        = 2,
	ERigVMParameterType_MAX        = 3
};


// Enum RigVM.ERigVMOpCode
enum class ERigVMOpCode : uint8_t
{
	Execute_0_Operands             = 0,
	Execute_1_Operands             = 1,
	Execute_2_Operands             = 2,
	Execute_3_Operands             = 3,
	Execute_4_Operands             = 4,
	Execute_5_Operands             = 5,
	Execute_6_Operands             = 6,
	Execute_7_Operands             = 7,
	Execute_8_Operands             = 8,
	Execute_9_Operands             = 9,
	Execute_10_Operands            = 10,
	Execute_11_Operands            = 11,
	Execute_12_Operands            = 12,
	Execute_13_Operands            = 13,
	Execute_14_Operands            = 14,
	Execute_15_Operands            = 15,
	Execute_16_Operands            = 16,
	Execute_17_Operands            = 17,
	Execute_18_Operands            = 18,
	Execute_19_Operands            = 19,
	Execute_20_Operands            = 20,
	Execute_21_Operands            = 21,
	Execute_22_Operands            = 22,
	Execute_23_Operands            = 23,
	Execute_24_Operands            = 24,
	Execute_25_Operands            = 25,
	Execute_26_Operands            = 26,
	Execute_27_Operands            = 27,
	Execute_28_Operands            = 28,
	Execute_29_Operands            = 29,
	Execute_30_Operands            = 30,
	Execute_31_Operands            = 31,
	Execute_32_Operands            = 32,
	Execute_33_Operands            = 33,
	Execute_34_Operands            = 34,
	Execute_35_Operands            = 35,
	Execute_36_Operands            = 36,
	Execute_37_Operands            = 37,
	Execute_38_Operands            = 38,
	Execute_39_Operands            = 39,
	Execute_40_Operands            = 40,
	Execute_41_Operands            = 41,
	Execute_42_Operands            = 42,
	Execute_43_Operands            = 43,
	Execute_44_Operands            = 44,
	Execute_45_Operands            = 45,
	Execute_46_Operands            = 46,
	Execute_47_Operands            = 47,
	Execute_48_Operands            = 48,
	Execute_49_Operands            = 49,
	Execute_50_Operands            = 50,
	Execute_51_Operands            = 51,
	Execute_52_Operands            = 52,
	Execute_53_Operands            = 53,
	Execute_54_Operands            = 54,
	Execute_55_Operands            = 55,
	Execute_56_Operands            = 56,
	Execute_57_Operands            = 57,
	Execute_58_Operands            = 58,
	Execute_59_Operands            = 59,
	Execute_60_Operands            = 60,
	Execute_61_Operands            = 61,
	Execute_62_Operands            = 62,
	Execute_63_Operands            = 63,
	Execute_64_Operands            = 64,
	Zero                           = 65,
	BoolFalse                      = 66,
	BoolTrue                       = 67,
	Copy                           = 68,
	Increment                      = 69,
	Decrement                      = 70,
	Equals                         = 71,
	NotEquals                      = 72,
	JumpAbsolute                   = 73,
	JumpForward                    = 74,
	JumpBackward                   = 75,
	JumpAbsoluteIf                 = 76,
	JumpForwardIf                  = 77,
	JumpBackwardIf                 = 78,
	ChangeType                     = 79,
	Exit                           = 80,
	BeginBlock                     = 81,
	EndBlock                       = 82,
	ArrayReset                     = 83,
	ArrayGetNum                    = 84,
	ArraySetNum                    = 85,
	ArrayGetAtIndex                = 86,
	ArraySetAtIndex                = 87,
	ArrayAdd                       = 88,
	ArrayInsert                    = 89,
	ArrayRemove                    = 90,
	ArrayFind                      = 91,
	ArrayAppend                    = 92,
	ArrayClone                     = 93,
	ArrayIterator                  = 94,
	ArrayUnion                     = 95,
	ArrayDifference                = 96,
	ArrayIntersection              = 97,
	ArrayReverse                   = 98,
	Invalid                        = 99,
	FirstArrayOpCode               = 100,
	LastArrayOpCode                = 101,
	ERigVMOpCode_MAX               = 102
};


// Enum RigVM.ERigVMCopyType
enum class ERigVMCopyType : uint8_t
{
	Default                        = 0,
	FloatToDouble                  = 1,
	DoubleToFloat                  = 2,
	ERigVMCopyType_MAX             = 3
};


// Enum RigVM.ERigVMPinDirection
enum class ERigVMPinDirection : uint8_t
{
	Input                          = 0,
	Output                         = 1,
	IO                             = 2,
	Visible                        = 3,
	Hidden                         = 4,
	Invalid                        = 5,
	ERigVMPinDirection_MAX         = 6
};


// Enum RigVM.ERigVMMemoryType
enum class ERigVMMemoryType : uint8_t
{
	Work                           = 0,
	Literal                        = 1,
	External                       = 2,
	Debug                          = 3,
	Invalid                        = 4,
	ERigVMMemoryType_MAX           = 5
};


// Enum RigVM.ERigVMRegisterType
enum class ERigVMRegisterType : uint8_t
{
	Plain                          = 0,
	String                         = 1,
	Name                           = 2,
	Struct                         = 3,
	Invalid                        = 4,
	ERigVMRegisterType_MAX         = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RigVM.RigVMByteCodeEntry
// 0x000C
struct FRigVMByteCodeEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                InstructionIndex;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RigVM.RigVMByteCode
// 0x0030
struct FRigVMByteCode
{
	TArray<unsigned char>                              ByteCode;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                NumInstructions;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FRigVMByteCodeEntry>                 Entries;                                                  // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMInstruction
// 0x0010
struct FRigVMInstruction
{
	uint64_t                                           ByteCodeIndex;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) MISSED OFFSET
	unsigned char                                      OperandAlignment;                                         // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMInstructionArray
// 0x0010
struct FRigVMInstructionArray
{
	TArray<struct FRigVMInstruction>                   Instructions;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct RigVM.RigVMExecuteContext
// 0x00C0
struct FRigVMExecuteContext
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMParameter
// 0x0030
struct FRigVMParameter
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RegisterIndex;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CPPType;                                                  // 0x0010(0x0010) (ZeroConstructor)
	class UScriptStruct*                               ScriptStruct;                                             // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       ScriptStructPath;                                         // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RigVM.RigVMMemoryStatistics
// 0x000C
struct FRigVMMemoryStatistics
{
	int                                                RegisterCount;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                DataBytes;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                TotalBytes;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct RigVM.RigVMByteCodeStatistics
// 0x0008
struct FRigVMByteCodeStatistics
{
	int                                                InstructionCount;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                DataBytes;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct RigVM.RigVMStatistics
// 0x0038
struct FRigVMStatistics
{
	int                                                BytesForCDO;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                BytesPerInstance;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRigVMMemoryStatistics                      LiteralMemory;                                            // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FRigVMMemoryStatistics                      WorkMemory;                                               // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FRigVMMemoryStatistics                      DebugMemory;                                              // 0x0020(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	int                                                BytesForCaching;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRigVMByteCodeStatistics                    ByteCode;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct RigVM.RigVMStruct
// 0x0008
struct FRigVMStruct
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMBaseOp
// 0x0001
struct FRigVMBaseOp
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMExecuteOp
// 0x0003 (0x0004 - 0x0001)
struct FRigVMExecuteOp : public FRigVMBaseOp
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMUnaryOp
// 0x0007 (0x0008 - 0x0001)
struct FRigVMUnaryOp : public FRigVMBaseOp
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMBinaryOp
// 0x000D (0x000E - 0x0001)
struct FRigVMBinaryOp : public FRigVMBaseOp
{
	unsigned char                                      UnknownData00[0xD];                                       // 0x0001(0x000D) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMTernaryOp
// 0x0013 (0x0014 - 0x0001)
struct FRigVMTernaryOp : public FRigVMBaseOp
{
	unsigned char                                      UnknownData00[0x13];                                      // 0x0001(0x0013) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMQuaternaryOp
// 0x0019 (0x001A - 0x0001)
struct FRigVMQuaternaryOp : public FRigVMBaseOp
{
	unsigned char                                      UnknownData00[0x19];                                      // 0x0001(0x0019) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMQuinaryOp
// 0x001F (0x0020 - 0x0001)
struct FRigVMQuinaryOp : public FRigVMBaseOp
{
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMSenaryOp
// 0x0025 (0x0026 - 0x0001)
struct FRigVMSenaryOp : public FRigVMBaseOp
{
	unsigned char                                      UnknownData00[0x25];                                      // 0x0001(0x0025) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMCopyOp
// 0x0011 (0x0012 - 0x0001)
struct FRigVMCopyOp : public FRigVMBaseOp
{
	unsigned char                                      UnknownData00[0x11];                                      // 0x0001(0x0011) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMComparisonOp
// 0x0013 (0x0014 - 0x0001)
struct FRigVMComparisonOp : public FRigVMBaseOp
{
	unsigned char                                      UnknownData00[0x13];                                      // 0x0001(0x0013) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMJumpOp
// 0x0007 (0x0008 - 0x0001)
struct FRigVMJumpOp : public FRigVMBaseOp
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMJumpIfOp
// 0x0008 (0x0010 - 0x0008)
struct FRigVMJumpIfOp : public FRigVMUnaryOp
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMChangeTypeOp
// 0x0000 (0x0008 - 0x0008)
struct FRigVMChangeTypeOp : public FRigVMUnaryOp
{

};

// ScriptStruct RigVM.RigVMBreakpoint
// 0x0018
struct FRigVMBreakpoint
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMDebugInfo
// 0x00E0
struct FRigVMDebugInfo
{
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0000(0x00E0) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMSlice
// 0x000C
struct FRigVMSlice
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMRuntimeSettings
// 0x0050
struct FRigVMRuntimeSettings
{
	int                                                MaximumArraySize;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0004(0x004C) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMOperand
// 0x0006
struct FRigVMOperand
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
	uint16_t                                           RegisterIndex;                                            // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           RegisterOffset;                                           // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RigVM.RigVMRegister
// 0x0024
struct FRigVMRegister
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	uint32_t                                           ByteIndex;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ElementSize;                                              // 0x0008(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ElementCount;                                             // 0x000A(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           SliceCount;                                               // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AlignmentBytes;                                           // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	uint16_t                                           TrailingBytes;                                            // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ScriptStructIndex;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsArray;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDynamic;                                               // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMRegisterOffset
// 0x0048
struct FRigVMRegisterOffset
{
	TArray<int>                                        Segments;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	struct FName                                       CPPType;                                                  // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UScriptStruct*                               ScriptStruct;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UScriptStruct*                               ParentScriptStruct;                                       // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ElementSize;                                              // 0x0034(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	struct FString                                     CachedSegmentPath;                                        // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct RigVM.RigVMMemoryContainer
// 0x00A0
struct FRigVMMemoryContainer
{
	bool                                               bUseNameMap;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FRigVMRegister>                      Registers;                                                // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FRigVMRegisterOffset>                RegisterOffsets;                                          // 0x0018(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              Data;                                                     // 0x0028(0x0010) (ZeroConstructor, Transient)
	TArray<class UScriptStruct*>                       ScriptStructs;                                            // 0x0038(0x0010) (ZeroConstructor, Transient)
	TMap<struct FName, int>                            NameMap;                                                  // 0x0048(0x0050) (Transient)
	bool                                               bEncounteredErrorDuringLoad;                              // 0x0098(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMUnknownType
// 0x0004
struct FRigVMUnknownType
{
	uint32_t                                           Hash;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
