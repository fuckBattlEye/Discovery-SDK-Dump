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

// Class EmbarkDirectReplicationHandlerComponent.DirectReplicationHandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UDirectReplicationHandlerComponentFactory : public UHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDirectReplicationHandlerComponent.DirectReplicationHandlerComponentFactory"));
		return ptr;
	}

};


// Class EmbarkDirectReplicationHandlerComponent.DirectReplicationWrapperComponent
// 0x0028 (0x00E0 - 0x00B8)
class UDirectReplicationWrapperComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00B8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkDirectReplicationHandlerComponent.DirectReplicationWrapperComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
