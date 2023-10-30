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

// Class EmbarkObjectPools.EmbarkObjectPoolSubsystem
// 0x0088 (0x00B8 - 0x0030)
class UEmbarkObjectPoolSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkObjectPools.EmbarkObjectPoolSubsystem"));
		return ptr;
	}


	void ResetPool(int Capacity);//Offset:Discovery.exe+0x1D57B60
	bool PoolObject(class UObject* Object);//Offset:Discovery.exe+0x1D57960
	void OnInitializeSubsystem();//Offset:Discovery.exe+0x327F8B0
	void OnDeinitializeSubsystem();//Offset:Discovery.exe+0x327F8B0
	class UObject* NextOrCreateObject();//Offset:Discovery.exe+0x1D57750
	class UObject* NextObject();//Offset:Discovery.exe+0x1D57840
	void InitializePool(const struct FName& Name, class UClass* Class, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D57CC0
	void FinalizePool();//Offset:Discovery.exe+0x1D57C30
	void FillPool(int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D57A00
};


// Class EmbarkObjectPools.EmbarkObjectPool
// 0x0088 (0x00B0 - 0x0028)
class UEmbarkObjectPool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkObjectPools.EmbarkObjectPool"));
		return ptr;
	}


	void ResetPool(int Capacity);//Offset:Discovery.exe+0x1D52240
	bool PoolObject(class UObject* Object);//Offset:Discovery.exe+0x1D51F10
	class UObject* NextOrCreateObject();//Offset:Discovery.exe+0x1D51D00
	class UObject* NextObject();//Offset:Discovery.exe+0x1D51DF0
	void InitializePool(const struct FName& Name, class UClass* Class, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D523A0
	void FinalizePool();//Offset:Discovery.exe+0x1D52310
	void FillPool(int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D520D0
};


// Class EmbarkObjectPools.EmbarkActorPool
// 0x0088 (0x00B0 - 0x0028)
class UEmbarkActorPool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkObjectPools.EmbarkActorPool"));
		return ptr;
	}


	void ResetPool(int Capacity);//Offset:Discovery.exe+0x1D52240
	bool PoolObject(class AActor* Object);//Offset:Discovery.exe+0x1D52E00
	class AActor* NextOrCreateObject();//Offset:Discovery.exe+0x1D52CB0
	class AActor* NextObject();//Offset:Discovery.exe+0x1D51DF0
	void InitializePool(const struct FName& Name, class UClass* Class, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D53300
	void FinalizePool();//Offset:Discovery.exe+0x1D531D0
	void FillPool(int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D53010
};


// Class EmbarkObjectPools.EmbarkActorComponentPool
// 0x0088 (0x00B0 - 0x0028)
class UEmbarkActorComponentPool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkObjectPools.EmbarkActorComponentPool"));
		return ptr;
	}


	void ResetPool(int Capacity);//Offset:Discovery.exe+0x1D52240
	bool PoolObject(class UActorComponent* Object);//Offset:Discovery.exe+0x1D53D90
	class UActorComponent* NextOrCreateObject();//Offset:Discovery.exe+0x1D53C40
	class UActorComponent* NextObject();//Offset:Discovery.exe+0x1D51DF0
	void InitializePool(const struct FName& Name, class UClass* Class, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D54120
	void FinalizePool();//Offset:Discovery.exe+0x1D53FF0
	void FillPool(int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D53E30
};


// Class EmbarkObjectPools.EmbarkObjectVariantPool
// 0x00C0 (0x00E8 - 0x0028)
class UEmbarkObjectVariantPool : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkObjectPools.EmbarkObjectVariantPool"));
		return ptr;
	}


	void ResetPool(int Capacity);//Offset:Discovery.exe+0x1D54F10
	void PrewarmPool(class UClass* Class);//Offset:Discovery.exe+0x1D54E20
	bool PoolObject(class UObject* Object);//Offset:Discovery.exe+0x1D54C10
	class UObject* NextOrCreateObject(class UClass* Class);//Offset:Discovery.exe+0x1D54920
	class UObject* NextObject(class UClass* Class);//Offset:Discovery.exe+0x1D54A70
	void InitializePool(const struct FName& Name, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D55030
	void FinalizePool();//Offset:Discovery.exe+0x1D54FC0
	void FillPool(class UClass* Class, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D54CB0
};


// Class EmbarkObjectPools.EmbarkActorVariantPool
// 0x00C0 (0x00E8 - 0x0028)
class UEmbarkActorVariantPool : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkObjectPools.EmbarkActorVariantPool"));
		return ptr;
	}


	void ResetPool(int Capacity);//Offset:Discovery.exe+0x1D54F10
	void PrewarmPool(class UClass* Class);//Offset:Discovery.exe+0x1D55FF0
	bool PoolObject(class AActor* Object);//Offset:Discovery.exe+0x1D55BE0
	class AActor* NextOrCreateObject(class UClass* Class);//Offset:Discovery.exe+0x1D55850
	class AActor* NextObject(class UClass* Class);//Offset:Discovery.exe+0x1D55A00
	void InitializePool(const struct FName& Name, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D55030
	void FinalizePool();//Offset:Discovery.exe+0x1D56130
	void FillPool(class UClass* Class, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D55DC0
};


// Class EmbarkObjectPools.EmbarkActorComponentVariantPool
// 0x00C0 (0x00E8 - 0x0028)
class UEmbarkActorComponentVariantPool : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkObjectPools.EmbarkActorComponentVariantPool"));
		return ptr;
	}


	void ResetPool(int Capacity);//Offset:Discovery.exe+0x1D54F10
	void PrewarmPool(class UClass* Class);//Offset:Discovery.exe+0x1D56F70
	bool PoolObject(class UActorComponent* Object);//Offset:Discovery.exe+0x1D56B60
	class UActorComponent* NextOrCreateObject(class UClass* Class);//Offset:Discovery.exe+0x1D567D0
	class UActorComponent* NextObject(class UClass* Class);//Offset:Discovery.exe+0x1D56980
	void InitializePool(const struct FName& Name, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D55030
	void FinalizePool();//Offset:Discovery.exe+0x1D570B0
	void FillPool(class UClass* Class, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D56D40
};


// Class EmbarkObjectPools.EmbarkActorPoolSubsystem
// 0x0088 (0x00B8 - 0x0030)
class UEmbarkActorPoolSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkObjectPools.EmbarkActorPoolSubsystem"));
		return ptr;
	}


	void ResetPool(int Capacity);//Offset:Discovery.exe+0x1D57B60
	bool PoolObject(class AActor* Object);//Offset:Discovery.exe+0x1D586E0
	void OnInitializeSubsystem();//Offset:Discovery.exe+0x327F8B0
	void OnDeinitializeSubsystem();//Offset:Discovery.exe+0x327F8B0
	class AActor* NextOrCreateObject();//Offset:Discovery.exe+0x1D58590
	class AActor* NextObject();//Offset:Discovery.exe+0x1D57840
	void InitializePool(const struct FName& Name, class UClass* Class, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D58BE0
	void FinalizePool();//Offset:Discovery.exe+0x1D58AB0
	void FillPool(int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D588F0
};


// Class EmbarkObjectPools.EmbarkActorComponentPoolSubsystem
// 0x0088 (0x00B8 - 0x0030)
class UEmbarkActorComponentPoolSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkObjectPools.EmbarkActorComponentPoolSubsystem"));
		return ptr;
	}


	void ResetPool(int Capacity);//Offset:Discovery.exe+0x1D57B60
	bool PoolObject(class UActorComponent* Object);//Offset:Discovery.exe+0x1D596E0
	void OnInitializeSubsystem();//Offset:Discovery.exe+0x327F8B0
	void OnDeinitializeSubsystem();//Offset:Discovery.exe+0x327F8B0
	class UActorComponent* NextOrCreateObject();//Offset:Discovery.exe+0x1D59590
	class UActorComponent* NextObject();//Offset:Discovery.exe+0x1D57840
	void InitializePool(const struct FName& Name, class UClass* Class, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D599F0
	void FinalizePool();//Offset:Discovery.exe+0x1D598C0
	void FillPool(int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D59780
};


// Class EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem
// 0x00C0 (0x00F0 - 0x0030)
class UEmbarkObjectVariantPoolSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0030(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem"));
		return ptr;
	}


	void ResetPool(int Capacity);//Offset:Discovery.exe+0x1D5AA10
	void PrewarmPool(class UClass* Class);//Offset:Discovery.exe+0x1D5A920
	bool PoolObject(class UObject* Object);//Offset:Discovery.exe+0x1D5A550
	void OnInitializeSubsystem();//Offset:Discovery.exe+0x327F8B0
	void OnDeinitializeSubsystem();//Offset:Discovery.exe+0x327F8B0
	class UObject* NextOrCreateObject(class UClass* Class);//Offset:Discovery.exe+0x1D5A260
	class UObject* NextObject(class UClass* Class);//Offset:Discovery.exe+0x1D5A3B0
	void InitializePool(const struct FName& Name, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D5AB30
	void FinalizePool();//Offset:Discovery.exe+0x1D5AAC0
	void FillPool(class UClass* Class, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D5A730
};


// Class EmbarkObjectPools.EmbarkActorVariantPoolSubsystem
// 0x00C0 (0x00F0 - 0x0030)
class UEmbarkActorVariantPoolSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0030(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkObjectPools.EmbarkActorVariantPoolSubsystem"));
		return ptr;
	}


	void ResetPool(int Capacity);//Offset:Discovery.exe+0x1D5AA10
	void PrewarmPool(class UClass* Class);//Offset:Discovery.exe+0x1D5B8E0
	bool PoolObject(class AActor* Object);//Offset:Discovery.exe+0x1D5B610
	void OnInitializeSubsystem();//Offset:Discovery.exe+0x327F8B0
	void OnDeinitializeSubsystem();//Offset:Discovery.exe+0x327F8B0
	class AActor* NextOrCreateObject(class UClass* Class);//Offset:Discovery.exe+0x1D5B3B0
	class AActor* NextObject(class UClass* Class);//Offset:Discovery.exe+0x1D5B560
	void InitializePool(const struct FName& Name, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D5AB30
	void FinalizePool();//Offset:Discovery.exe+0x1D5BA20
	void FillPool(class UClass* Class, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D5B6B0
};


// Class EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem
// 0x00C0 (0x00F0 - 0x0030)
class UEmbarkActorComponentVariantPoolSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0030(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem"));
		return ptr;
	}


	void ResetPool(int Capacity);//Offset:Discovery.exe+0x1D5AA10
	void PrewarmPool(class UClass* Class);//Offset:Discovery.exe+0x1D5C8C0
	bool PoolObject(class UActorComponent* Object);//Offset:Discovery.exe+0x1D5C4B0
	void OnInitializeSubsystem();//Offset:Discovery.exe+0x327F8B0
	void OnDeinitializeSubsystem();//Offset:Discovery.exe+0x327F8B0
	class UActorComponent* NextOrCreateObject(class UClass* Class);//Offset:Discovery.exe+0x1D5C120
	class UActorComponent* NextObject(class UClass* Class);//Offset:Discovery.exe+0x1D5C2D0
	void InitializePool(const struct FName& Name, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D5AB30
	void FinalizePool();//Offset:Discovery.exe+0x1D5CA00
	void FillPool(class UClass* Class, int FillTarget, int FillRate);//Offset:Discovery.exe+0x1D5C690
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
