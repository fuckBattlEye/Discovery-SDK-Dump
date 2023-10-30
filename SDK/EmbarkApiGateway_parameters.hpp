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

// Function EmbarkApiGateway.EmbarkApiContext.SetManifestId
struct UEmbarkApiContext_SetManifestId_Params
{
	int64_t                                            InManifestId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkApiGateway.EmbarkApiContext.SetGlobalManifestId
struct UEmbarkApiContext_SetGlobalManifestId_Params
{
	int64_t                                            InManifestId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkApiGateway.EmbarkApiContext.SetGlobalDevInstanceKey
struct UEmbarkApiContext_SetGlobalDevInstanceKey_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function EmbarkApiGateway.EmbarkApiContext.SetDevInstanceKey
struct UEmbarkApiContext_SetDevInstanceKey_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function EmbarkApiGateway.EmbarkApiContext.SetAccessToken
struct UEmbarkApiContext_SetAccessToken_Params
{
	struct FString                                     AccessToken;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkApiGateway.EmbarkApiContext.GetSessionId
struct UEmbarkApiContext_GetSessionId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkApiGateway.EmbarkApiContext.GetManifestId
struct UEmbarkApiContext_GetManifestId_Params
{
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkApiGateway.EmbarkApiContext.GetDevInstanceKey
struct UEmbarkApiContext_GetDevInstanceKey_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkApiGateway.EmbarkApiContext.GetAccessToken
struct UEmbarkApiContext_GetAccessToken_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
