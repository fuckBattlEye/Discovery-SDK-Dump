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

// Function AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer
struct UAndroidFileServerBPLibrary_StopFileServer_Params
{
	bool                                               bUSB;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNetwork;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer
struct UAndroidFileServerBPLibrary_StartFileServer_Params
{
	bool                                               bUSB;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNetwork;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Port;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning
struct UAndroidFileServerBPLibrary_IsFileServerRunning_Params
{
	TEnumAsByte<EAFSActiveType>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
