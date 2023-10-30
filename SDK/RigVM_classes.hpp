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

// Class RigVM.RigVM
// 0x0298 (0x02C0 - 0x0028)
class URigVM : public UObject
{
public:
	class URigVMMemoryStorage*                         WorkMemoryStorageObject;                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class URigVMMemoryStorage*                         LiteralMemoryStorageObject;                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class URigVMMemoryStorage*                         DebugMemoryStorageObject;                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET
	struct FRigVMByteCode                              ByteCodeStorage;                                          // 0x0060(0x0030)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	struct FRigVMInstructionArray                      Instructions;                                             // 0x0098(0x0010) (Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	struct FRigVMExecuteContext                        Context;                                                  // 0x00B0(0x00C0) (Transient)
	uint32_t                                           NumExecutions;                                            // 0x0170(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	TArray<struct FName>                               FunctionNamesStorage;                                     // 0x0178(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0188(0x0020) MISSED OFFSET
	TArray<struct FRigVMParameter>                     Parameters;                                               // 0x01A8(0x0010) (ZeroConstructor)
	TMap<struct FName, int>                            ParametersNameMap;                                        // 0x01B8(0x0050)
	unsigned char                                      UnknownData05[0x98];                                      // 0x0208(0x0098) MISSED OFFSET
	class URigVM*                                      DeferredVMToCopy;                                         // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class RigVM.RigVM"));
		return ptr;
	}


	void SetParameterValueVector2D(const struct FName& InParameterName, const struct FVector2D& InValue, int InArrayIndex);//Offset:Discovery.exe+0x5DBCAC0
	void SetParameterValueVector(const struct FName& InParameterName, const struct FVector& InValue, int InArrayIndex);//Offset:Discovery.exe+0x5DBC830
	void SetParameterValueTransform(const struct FName& InParameterName, const struct FTransform& InValue, int InArrayIndex);//Offset:Discovery.exe+0x5DBC2B0
	void SetParameterValueString(const struct FName& InParameterName, const struct FString& InValue, int InArrayIndex);//Offset:Discovery.exe+0x5DBCD50
	void SetParameterValueQuat(const struct FName& InParameterName, const struct FQuat& InValue, int InArrayIndex);//Offset:Discovery.exe+0x5DBC5A0
	void SetParameterValueName(const struct FName& InParameterName, const struct FName& InValue, int InArrayIndex);//Offset:Discovery.exe+0x5DBCFF0
	void SetParameterValueInt(const struct FName& InParameterName, int InValue, int InArrayIndex);//Offset:Discovery.exe+0x5DBD290
	void SetParameterValueFloat(const struct FName& InParameterName, float InValue, int InArrayIndex);//Offset:Discovery.exe+0x5DBD810
	void SetParameterValueDouble(const struct FName& InParameterName, double InValue, int InArrayIndex);//Offset:Discovery.exe+0x5DBD550
	void SetParameterValueBool(const struct FName& InParameterName, bool InValue, int InArrayIndex);//Offset:Discovery.exe+0x5DBDAD0
	struct FRigVMStatistics GetStatistics();//Offset:Discovery.exe+0x5DBC150
	struct FString GetRigVMFunctionName(int InFunctionIndex);//Offset:Discovery.exe+0x5DBF800
	struct FVector2D GetParameterValueVector2D(const struct FName& InParameterName, int InArrayIndex);//Offset:Discovery.exe+0x5DBE7F0
	struct FVector GetParameterValueVector(const struct FName& InParameterName, int InArrayIndex);//Offset:Discovery.exe+0x5DBE4F0
	struct FTransform GetParameterValueTransform(const struct FName& InParameterName, int InArrayIndex);//Offset:Discovery.exe+0x5DBDD90
	struct FString GetParameterValueString(const struct FName& InParameterName, int InArrayIndex);//Offset:Discovery.exe+0x5DBEAB0
	struct FQuat GetParameterValueQuat(const struct FName& InParameterName, int InArrayIndex);//Offset:Discovery.exe+0x5DBE1E0
	struct FName GetParameterValueName(const struct FName& InParameterName, int InArrayIndex);//Offset:Discovery.exe+0x5DBEC50
	int GetParameterValueInt(const struct FName& InParameterName, int InArrayIndex);//Offset:Discovery.exe+0x5DBEEC0
	float GetParameterValueFloat(const struct FName& InParameterName, int InArrayIndex);//Offset:Discovery.exe+0x5DBF360
	double GetParameterValueDouble(const struct FName& InParameterName, int InArrayIndex);//Offset:Discovery.exe+0x5DBF110
	bool GetParameterValueBool(const struct FName& InParameterName, int InArrayIndex);//Offset:Discovery.exe+0x5DBF5B0
	bool Execute(const struct FName& InEntryName);//Offset:Discovery.exe+0x5DBF9E0
	int AddRigVMFunction(class UScriptStruct* InRigVMStruct, const struct FName& InMethodName);//Offset:Discovery.exe+0x5DBF8E0
};


// Class RigVM.RigVMMemoryStorageGeneratorClass
// 0x0038 (0x02C8 - 0x0290)
class URigVMMemoryStorageGeneratorClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0290(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class RigVM.RigVMMemoryStorageGeneratorClass"));
		return ptr;
	}

};


// Class RigVM.RigVMMemoryStorage
// 0x0000 (0x0028 - 0x0028)
class URigVMMemoryStorage : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class RigVM.RigVMMemoryStorage"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
