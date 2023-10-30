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

// Function EmbarkFire.EmbarkFireFunctionLibrary.UnregisterHandle_Server
struct UEmbarkFireFunctionLibrary_UnregisterHandle_Server_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFireObjectHandle                     Handle;                                                   // (Parm)
};

// Function EmbarkFire.EmbarkFireFunctionLibrary.SetSphereLocation_Server
struct UEmbarkFireFunctionLibrary_SetSphereLocation_Server_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFireObjectHandle                     Handle;                                                   // (Parm)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFire.EmbarkFireFunctionLibrary.SetInstigator_Server
struct UEmbarkFireFunctionLibrary_SetInstigator_Server_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFireObjectHandle                     Handle;                                                   // (Parm)
	struct FInstigator                                 Instigator;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFire.EmbarkFireFunctionLibrary.RegisterObject_Server
struct UEmbarkFireFunctionLibrary_RegisterObject_Server_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFireObjectStateInitData              InitData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEmbarkFireObjectHandle                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFire.EmbarkFireFunctionLibrary.IsHandleValid
struct UEmbarkFireFunctionLibrary_IsHandleValid_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFireObjectHandle                     Handle;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFire.EmbarkFireFunctionLibrary.GetEmbarkFireSubsystem_Server
struct UEmbarkFireFunctionLibrary_GetEmbarkFireSubsystem_Server_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkFireSubsystem*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFire.EmbarkFireFunctionLibrary.EnableHandle_Server
struct UEmbarkFireFunctionLibrary_EnableHandle_Server_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFireObjectHandle                     Handle;                                                   // (Parm)
};

// Function EmbarkFire.EmbarkFireFunctionLibrary.DisableHandle_Server
struct UEmbarkFireFunctionLibrary_DisableHandle_Server_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFireObjectHandle                     Handle;                                                   // (Parm)
};

// Function EmbarkFire.EmbarkFireFunctionLibrary.AddHeat_Server
struct UEmbarkFireFunctionLibrary_AddHeat_Server_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFireObjectHandle                     Handle;                                                   // (Parm)
	float                                              HeatToAdd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInstigator                                 Instigator;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFire.EmbarkFireObjectGraph.OnDistanceQueryManagerData
struct UEmbarkFireObjectGraph_OnDistanceQueryManagerData_Params
{
	struct FEmbarkDistanceQueryInfo                    Info;                                                     // (Parm)
	bool                                               bOverlapping;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
