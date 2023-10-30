#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Serialization.StructSerializerNumericTestStruct
// 0x0030
struct FStructSerializerNumericTestStruct
{
	int8_t                                             Int8;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	int16_t                                            Int16;                                                    // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	int                                                Int32;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Int64;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UInt8;                                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0011(0x0001) MISSED OFFSET
	uint16_t                                           UInt16;                                                   // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           UInt32;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           UInt64;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Float;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	double                                             Double;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// 0x0003
struct FStructSerializerBooleanTestStruct
{
	bool                                               BoolFalse;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolTrue;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Bitfield0 : 1;                                            // 0x0002(0x0001)
	unsigned char                                      Bitfield1 : 1;                                            // 0x0002(0x0001)
	unsigned char                                      Bitfield2Set : 1;                                         // 0x0002(0x0001)
	unsigned char                                      Bitfield3 : 1;                                            // 0x0002(0x0001)
	unsigned char                                      Bitfield4Set : 1;                                         // 0x0002(0x0001)
	unsigned char                                      Bitfield5Set : 1;                                         // 0x0002(0x0001)
	unsigned char                                      Bitfield6 : 1;                                            // 0x0002(0x0001)
	unsigned char                                      Bitfield7Set : 1;                                         // 0x0002(0x0001)
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
// 0x00B0
struct FStructSerializerObjectTestStruct
{
	class UClass*                                      RawClass;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WrappedClass;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      SubClass;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) UNKNOWN PROPERTY: SoftClass
	class UObject*                                     RawObject;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     WrappedObject;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UMetaData>                    WeakObject;                                               // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObject
	struct FSoftClassPath                              ClassPath;                                                // 0x0080(0x0018) (ZeroConstructor)
	struct FSoftObjectPath                             ObjectPath;                                               // 0x0098(0x0018) (ZeroConstructor)
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// 0x00D0
struct FStructSerializerBuiltinTestStruct
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // 0x0018(0x0010) (ZeroConstructor)
	struct FText                                       Text;                                                     // 0x0028(0x0018)
	struct FVector                                     Vector;                                                   // 0x0040(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	struct FVector4                                    Vector4;                                                  // 0x0060(0x0020) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // 0x0080(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	struct FQuat                                       Quat;                                                     // 0x00A0(0x0020) (IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x00C4(0x000C) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerLWCTypesTest
// 0x0360
struct FStructSerializerLWCTypesTest
{
	struct FVector                                     Vector;                                                   // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Vector2D;                                                 // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector4                                    Vector4;                                                  // 0x0030(0x0020) (ZeroConstructor, IsPlainOldData)
	struct FMatrix                                     Matrix;                                                   // 0x0050(0x0080) (ZeroConstructor, IsPlainOldData)
	struct FPlane                                      Plane;                                                    // 0x00D0(0x0020) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Quat;                                                     // 0x00F0(0x0020) (IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // 0x0110(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0130(0x0060) (IsPlainOldData)
	struct FBox                                        Box;                                                      // 0x0190(0x0038) (ZeroConstructor, IsPlainOldData)
	struct FBox2D                                      Box2D;                                                    // 0x01C8(0x0028) (ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            BoxSphereBounds;                                          // 0x01F0(0x0038) (ZeroConstructor, IsPlainOldData)
	struct FOrientedBox                                OrientedBox;                                              // 0x0228(0x0078) (IsPlainOldData)
	float                                              Float;                                                    // 0x02A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	double                                             Double;                                                   // 0x02A8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             VectorArray;                                              // 0x02B0(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FVector>               StrToVec;                                                 // 0x02C0(0x0050)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0310(0x0050) UNKNOWN PROPERTY: VectorSet
};

// ScriptStruct Serialization.OrientedBoxFloat
// 0x003C
struct FOrientedBoxFloat
{
	struct FVector3f                                   Center;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   AxisX;                                                    // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   AxisY;                                                    // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   AxisZ;                                                    // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              ExtentX;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ExtentY;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ExtentZ;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerNonLWCTypesTest
// 0x0220
struct FStructSerializerNonLWCTypesTest
{
	struct FVector3f                                   Vector;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector2f                                   Vector2D;                                                 // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FVector4f                                   Vector4;                                                  // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMatrix44f                                  Matrix;                                                   // 0x0030(0x0040) (ZeroConstructor, IsPlainOldData)
	struct FPlane4f                                    Plane;                                                    // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FQuat4f                                     Quat;                                                     // 0x0080(0x0010) (IsPlainOldData)
	struct FRotator3f                                  Rotator;                                                  // 0x0090(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FTransform3f                                Transform;                                                // 0x00A0(0x0030) (IsPlainOldData)
	struct FBox3f                                      Box;                                                      // 0x00D0(0x001C) (ZeroConstructor, IsPlainOldData)
	struct FBox2f                                      Box2D;                                                    // 0x00EC(0x0014) (ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds3f                          BoxSphereBounds;                                          // 0x0100(0x001C) (ZeroConstructor, IsPlainOldData)
	struct FOrientedBoxFloat                           OrientedBox;                                              // 0x011C(0x003C)
	float                                              Float;                                                    // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	double                                             Double;                                                   // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FVector3f>                           VectorArray;                                              // 0x0168(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FVector3f>             StrToVec;                                                 // 0x0178(0x0050)
	unsigned char                                      UnknownData03[0x50];                                      // 0x01C8(0x0050) UNKNOWN PROPERTY: VectorSet
	unsigned char                                      UnknownData04[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerByteArray
// 0x0038
struct FStructSerializerByteArray
{
	int                                                Dummy1;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<unsigned char>                              ByteArray;                                                // 0x0008(0x0010) (ZeroConstructor)
	int                                                Dummy2;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<int8_t>                                     Int8Array;                                                // 0x0020(0x0010) (ZeroConstructor)
	int                                                Dummy3;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
// 0x0060
struct FStructSerializerArrayTestStruct
{
	TArray<int>                                        Int32Array;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              ByteArray;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                StaticSingleElement;                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StaticInt32Array[0x3];                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StaticFloatArray[0x3];                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             VectorArray;                                              // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FStructSerializerBuiltinTestStruct>  StructArray;                                              // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct Serialization.StructSerializerMapTestStruct
// 0x0140
struct FStructSerializerMapTestStruct
{
	TMap<int, struct FString>                          IntToStr;                                                 // 0x0000(0x0050)
	TMap<struct FString, struct FString>               StrToStr;                                                 // 0x0050(0x0050)
	TMap<struct FString, struct FVector>               StrToVec;                                                 // 0x00A0(0x0050)
	TMap<struct FString, struct FStructSerializerBuiltinTestStruct> StrToStruct;                                              // 0x00F0(0x0050)
};

// ScriptStruct Serialization.StructSerializerSetTestStruct
// 0x0140
struct FStructSerializerSetTestStruct
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: StrSet
	unsigned char                                      UnknownData01[0x50];                                      // 0x0050(0x0050) UNKNOWN PROPERTY: IntSet
	unsigned char                                      UnknownData02[0x50];                                      // 0x00A0(0x0050) UNKNOWN PROPERTY: NameSet
	unsigned char                                      UnknownData03[0x50];                                      // 0x00F0(0x0050) UNKNOWN PROPERTY: StructSet
};

// ScriptStruct Serialization.StructSerializerTestStruct
// 0x0800
struct FStructSerializerTestStruct
{
	struct FStructSerializerNumericTestStruct          Numerics;                                                 // 0x0000(0x0030)
	struct FStructSerializerBooleanTestStruct          Booleans;                                                 // 0x0030(0x0003)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
	struct FStructSerializerObjectTestStruct           Objects;                                                  // 0x0038(0x00B0)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FStructSerializerBuiltinTestStruct          Builtins;                                                 // 0x00F0(0x00D0)
	struct FStructSerializerArrayTestStruct            Arrays;                                                   // 0x01C0(0x0060)
	struct FStructSerializerMapTestStruct              Maps;                                                     // 0x0220(0x0140)
	struct FStructSerializerSetTestStruct              Sets;                                                     // 0x0360(0x0140)
	struct FStructSerializerLWCTypesTest               LWCTypes;                                                 // 0x04A0(0x0360)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
