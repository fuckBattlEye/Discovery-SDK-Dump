#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class EmbarkCurves.CurveFloatMixin
// 0x0000 (0x0028 - 0x0028)
class UCurveFloatMixin : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkCurves.CurveFloatMixin"));
		return ptr;
	}


	TArray<struct FRichCurveKey> STATIC_GetKeys(class UCurveFloat* Curve);//Offset:Discovery.exe+0x1C4DB80
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
