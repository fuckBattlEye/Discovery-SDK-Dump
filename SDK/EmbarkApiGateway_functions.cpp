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

// Function EmbarkApiGateway.EmbarkApiContext.SetManifestId
// (Final, Native, Public)
// Parameters:
// int64_t                        InManifestId                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkApiContext::SetManifestId(int64_t InManifestId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkApiGateway.EmbarkApiContext.SetManifestId"));

	UEmbarkApiContext_SetManifestId_Params params;
	params.InManifestId = InManifestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkApiGateway.EmbarkApiContext.SetGlobalManifestId
// (Final, Native, Static, Public)
// Parameters:
// int64_t                        InManifestId                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkApiContext::STATIC_SetGlobalManifestId(int64_t InManifestId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkApiGateway.EmbarkApiContext.SetGlobalManifestId"));

	UEmbarkApiContext_SetGlobalManifestId_Params params;
	params.InManifestId = InManifestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkApiGateway.EmbarkApiContext.SetGlobalDevInstanceKey
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UEmbarkApiContext::STATIC_SetGlobalDevInstanceKey(const struct FString& Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkApiGateway.EmbarkApiContext.SetGlobalDevInstanceKey"));

	UEmbarkApiContext_SetGlobalDevInstanceKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkApiGateway.EmbarkApiContext.SetDevInstanceKey
// (Final, Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UEmbarkApiContext::SetDevInstanceKey(const struct FString& Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkApiGateway.EmbarkApiContext.SetDevInstanceKey"));

	UEmbarkApiContext_SetDevInstanceKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkApiGateway.EmbarkApiContext.SetAccessToken
// (Final, Native, Public)
// Parameters:
// struct FString                 AccessToken                    (Parm, ZeroConstructor)

void UEmbarkApiContext::SetAccessToken(const struct FString& AccessToken)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkApiGateway.EmbarkApiContext.SetAccessToken"));

	UEmbarkApiContext_SetAccessToken_Params params;
	params.AccessToken = AccessToken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkApiGateway.EmbarkApiContext.GetSessionId
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkApiContext::GetSessionId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkApiGateway.EmbarkApiContext.GetSessionId"));

	UEmbarkApiContext_GetSessionId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkApiGateway.EmbarkApiContext.GetManifestId
// (Final, Native, Public, Const)
// Parameters:
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UEmbarkApiContext::GetManifestId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkApiGateway.EmbarkApiContext.GetManifestId"));

	UEmbarkApiContext_GetManifestId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkApiGateway.EmbarkApiContext.GetDevInstanceKey
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkApiContext::GetDevInstanceKey()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkApiGateway.EmbarkApiContext.GetDevInstanceKey"));

	UEmbarkApiContext_GetDevInstanceKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkApiGateway.EmbarkApiContext.GetAccessToken
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkApiContext::GetAccessToken()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkApiGateway.EmbarkApiContext.GetAccessToken"));

	UEmbarkApiContext_GetAccessToken_Params params;

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
