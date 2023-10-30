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

// Function EmbarkUtilities.EmbarkJsonLibrary.UClassToJsonSerialization
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)
// struct FEncodeSettings         Settings                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkJsonLibrary::STATIC_UClassToJsonSerialization(class UObject* Object, const struct FEncodeSettings& Settings, struct FString* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtilities.EmbarkJsonLibrary.UClassToJsonSerialization"));

	UEmbarkJsonLibrary_UClassToJsonSerialization_Params params;
	params.Object = Object;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function EmbarkUtilities.EmbarkJsonLibrary.UClassToJsonObjectString
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)
// int                            CheckFlags                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkipFlags                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Indent                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrettyPrint                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEncodeSubclassWithTypeWrap    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNormalizeCase                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkJsonLibrary::STATIC_UClassToJsonObjectString(class UObject* Object, int CheckFlags, int SkipFlags, int Indent, bool bPrettyPrint, bool bEncodeSubclassWithTypeWrap, bool bNormalizeCase, struct FString* Result)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtilities.EmbarkJsonLibrary.UClassToJsonObjectString"));

	UEmbarkJsonLibrary_UClassToJsonObjectString_Params params;
	params.Object = Object;
	params.CheckFlags = CheckFlags;
	params.SkipFlags = SkipFlags;
	params.Indent = Indent;
	params.bPrettyPrint = bPrettyPrint;
	params.bEncodeSubclassWithTypeWrap = bEncodeSubclassWithTypeWrap;
	params.bNormalizeCase = bNormalizeCase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function EmbarkUtilities.EmbarkJsonLibrary.JsonObjectStringToUClass
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 JsonString                     (Parm, OutParm, ZeroConstructor)
// class UObject*                 OutObject                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            CheckFlags                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkipFlags                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkJsonLibrary::STATIC_JsonObjectStringToUClass(class UObject* OutObject, int CheckFlags, int SkipFlags, struct FString* JsonString)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUtilities.EmbarkJsonLibrary.JsonObjectStringToUClass"));

	UEmbarkJsonLibrary_JsonObjectStringToUClass_Params params;
	params.OutObject = OutObject;
	params.CheckFlags = CheckFlags;
	params.SkipFlags = SkipFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JsonString != nullptr)
		*JsonString = params.JsonString;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
