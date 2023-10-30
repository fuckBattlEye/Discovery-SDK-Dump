//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bUSB                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNetwork                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAndroidFileServerBPLibrary::STATIC_StopFileServer(bool bUSB, bool bNetwork)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer"));

	UAndroidFileServerBPLibrary_StopFileServer_Params params;
	params.bUSB = bUSB;
	params.bNetwork = bNetwork;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bUSB                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNetwork                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Port                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAndroidFileServerBPLibrary::STATIC_StartFileServer(bool bUSB, bool bNetwork, int Port)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer"));

	UAndroidFileServerBPLibrary_StartFileServer_Params params;
	params.bUSB = bUSB;
	params.bNetwork = bNetwork;
	params.Port = Port;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EAFSActiveType>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EAFSActiveType> UAndroidFileServerBPLibrary::STATIC_IsFileServerRunning()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning"));

	UAndroidFileServerBPLibrary_IsFileServerRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
