#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function RigVM.RigVM.SetParameterValueVector2D
struct URigVM_SetParameterValueVector2D_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RigVM.RigVM.SetParameterValueVector
struct URigVM_SetParameterValueVector_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RigVM.RigVM.SetParameterValueTransform
struct URigVM_SetParameterValueTransform_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform                                  InValue;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RigVM.RigVM.SetParameterValueString
struct URigVM_SetParameterValueString_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     InValue;                                                  // (Parm, ZeroConstructor)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RigVM.RigVM.SetParameterValueQuat
struct URigVM_SetParameterValueQuat_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FQuat                                       InValue;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RigVM.RigVM.SetParameterValueName
struct URigVM_SetParameterValueName_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RigVM.RigVM.SetParameterValueInt
struct URigVM_SetParameterValueInt_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RigVM.RigVM.SetParameterValueFloat
struct URigVM_SetParameterValueFloat_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RigVM.RigVM.SetParameterValueDouble
struct URigVM_SetParameterValueDouble_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	double                                             InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RigVM.RigVM.SetParameterValueBool
struct URigVM_SetParameterValueBool_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RigVM.RigVM.GetStatistics
struct URigVM_GetStatistics_Params
{
	struct FRigVMStatistics                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function RigVM.RigVM.GetRigVMFunctionName
struct URigVM_GetRigVMFunctionName_Params
{
	int                                                InFunctionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RigVM.RigVM.GetParameterValueVector2D
struct URigVM_GetParameterValueVector2D_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RigVM.RigVM.GetParameterValueVector
struct URigVM_GetParameterValueVector_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RigVM.RigVM.GetParameterValueTransform
struct URigVM_GetParameterValueTransform_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function RigVM.RigVM.GetParameterValueString
struct URigVM_GetParameterValueString_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RigVM.RigVM.GetParameterValueQuat
struct URigVM_GetParameterValueQuat_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function RigVM.RigVM.GetParameterValueName
struct URigVM_GetParameterValueName_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RigVM.RigVM.GetParameterValueInt
struct URigVM_GetParameterValueInt_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RigVM.RigVM.GetParameterValueFloat
struct URigVM_GetParameterValueFloat_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RigVM.RigVM.GetParameterValueDouble
struct URigVM_GetParameterValueDouble_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RigVM.RigVM.GetParameterValueBool
struct URigVM_GetParameterValueBool_Params
{
	struct FName                                       InParameterName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InArrayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RigVM.RigVM.Execute
struct URigVM_Execute_Params
{
	struct FName                                       InEntryName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RigVM.RigVM.AddRigVMFunction
struct URigVM_AddRigVMFunction_Params
{
	class UScriptStruct*                               InRigVMStruct;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InMethodName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
