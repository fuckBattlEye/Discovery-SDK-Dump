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

// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTexture*                Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// struct FImageWriteOptions      Options                        (ConstParm, Parm, OutParm, ReferenceParm)

void UImageWriteBlueprintLibrary::STATIC_ExportToDisk(class UTexture* Texture, const struct FString& Filename, const struct FImageWriteOptions& Options)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk"));

	UImageWriteBlueprintLibrary_ExportToDisk_Params params;
	params.Texture = Texture;
	params.Filename = Filename;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
