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

// ScriptStruct GeometryCache.GeometryCacheMeshData
// 0x00C8
struct FGeometryCacheMeshData
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
};

// ScriptStruct GeometryCache.NiagaraGeometryCacheReference
// 0x0038
struct FNiagaraGeometryCacheReference
{
	class UGeometryCache*                              GeometryCache;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                GeometryCacheUserParamBinding;                            // 0x0008(0x0020) (Edit)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GeometryCache.TrackRenderData
// 0x00C0
struct FTrackRenderData
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
// 0x000C
struct FGeometryCacheMeshBatchInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct GeometryCache.GeometryCacheVertexInfo
// 0x0009
struct FGeometryCacheVertexInfo
{
	unsigned char                                      UnknownData00[0x9];                                       // 0x0000(0x0009) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
