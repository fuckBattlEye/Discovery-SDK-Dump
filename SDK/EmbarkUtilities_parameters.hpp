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

// Function EmbarkUtilities.EmbarkJsonLibrary.UClassToJsonSerialization
struct UEmbarkJsonLibrary_UClassToJsonSerialization_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
	struct FEncodeSettings                             Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtilities.EmbarkJsonLibrary.UClassToJsonObjectString
struct UEmbarkJsonLibrary_UClassToJsonObjectString_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
	int                                                CheckFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkipFlags;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Indent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrettyPrint;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEncodeSubclassWithTypeWrap;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNormalizeCase;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtilities.EmbarkJsonLibrary.JsonObjectStringToUClass
struct UEmbarkJsonLibrary_JsonObjectStringToUClass_Params
{
	struct FString                                     JsonString;                                               // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     OutObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CheckFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkipFlags;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
