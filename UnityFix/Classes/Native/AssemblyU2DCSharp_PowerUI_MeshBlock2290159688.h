#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// Blaze.UVBlock
struct UVBlock_t2782732346;
// PowerUI.MeshBlock
struct MeshBlock_t2290159688;
// PowerUI.DynamicMesh
struct DynamicMesh_t330516240;
// PowerUI.Transformation
struct Transformation_t81853217;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.MeshBlock
struct  MeshBlock_t2290159688  : public Il2CppObject
{
public:
	// UnityEngine.Color PowerUI.MeshBlock::Colour
	Color_t2020392075  ___Colour_1;
	// Blaze.UVBlock PowerUI.MeshBlock::TextUV
	UVBlock_t2782732346 * ___TextUV_2;
	// Blaze.UVBlock PowerUI.MeshBlock::ImageUV
	UVBlock_t2782732346 * ___ImageUV_3;
	// UnityEngine.Vector3 PowerUI.MeshBlock::VertexTopLeft
	Vector3_t2243707580  ___VertexTopLeft_4;
	// UnityEngine.Vector3 PowerUI.MeshBlock::VertexTopRight
	Vector3_t2243707580  ___VertexTopRight_5;
	// UnityEngine.Vector3 PowerUI.MeshBlock::VertexBottomLeft
	Vector3_t2243707580  ___VertexBottomLeft_6;
	// UnityEngine.Vector3 PowerUI.MeshBlock::VertexBottomRight
	Vector3_t2243707580  ___VertexBottomRight_7;
	// System.Int32 PowerUI.MeshBlock::VertexIndex
	int32_t ___VertexIndex_8;
	// PowerUI.MeshBlock PowerUI.MeshBlock::BlockAfter
	MeshBlock_t2290159688 * ___BlockAfter_9;
	// PowerUI.DynamicMesh PowerUI.MeshBlock::ParentMesh
	DynamicMesh_t330516240 * ___ParentMesh_10;
	// PowerUI.Transformation PowerUI.MeshBlock::Transform
	Transformation_t81853217 * ___Transform_11;
	// PowerUI.MeshBlock PowerUI.MeshBlock::LocalBlockAfter
	MeshBlock_t2290159688 * ___LocalBlockAfter_12;

public:
	inline static int32_t get_offset_of_Colour_1() { return static_cast<int32_t>(offsetof(MeshBlock_t2290159688, ___Colour_1)); }
	inline Color_t2020392075  get_Colour_1() const { return ___Colour_1; }
	inline Color_t2020392075 * get_address_of_Colour_1() { return &___Colour_1; }
	inline void set_Colour_1(Color_t2020392075  value)
	{
		___Colour_1 = value;
	}

	inline static int32_t get_offset_of_TextUV_2() { return static_cast<int32_t>(offsetof(MeshBlock_t2290159688, ___TextUV_2)); }
	inline UVBlock_t2782732346 * get_TextUV_2() const { return ___TextUV_2; }
	inline UVBlock_t2782732346 ** get_address_of_TextUV_2() { return &___TextUV_2; }
	inline void set_TextUV_2(UVBlock_t2782732346 * value)
	{
		___TextUV_2 = value;
		Il2CppCodeGenWriteBarrier(&___TextUV_2, value);
	}

	inline static int32_t get_offset_of_ImageUV_3() { return static_cast<int32_t>(offsetof(MeshBlock_t2290159688, ___ImageUV_3)); }
	inline UVBlock_t2782732346 * get_ImageUV_3() const { return ___ImageUV_3; }
	inline UVBlock_t2782732346 ** get_address_of_ImageUV_3() { return &___ImageUV_3; }
	inline void set_ImageUV_3(UVBlock_t2782732346 * value)
	{
		___ImageUV_3 = value;
		Il2CppCodeGenWriteBarrier(&___ImageUV_3, value);
	}

	inline static int32_t get_offset_of_VertexTopLeft_4() { return static_cast<int32_t>(offsetof(MeshBlock_t2290159688, ___VertexTopLeft_4)); }
	inline Vector3_t2243707580  get_VertexTopLeft_4() const { return ___VertexTopLeft_4; }
	inline Vector3_t2243707580 * get_address_of_VertexTopLeft_4() { return &___VertexTopLeft_4; }
	inline void set_VertexTopLeft_4(Vector3_t2243707580  value)
	{
		___VertexTopLeft_4 = value;
	}

	inline static int32_t get_offset_of_VertexTopRight_5() { return static_cast<int32_t>(offsetof(MeshBlock_t2290159688, ___VertexTopRight_5)); }
	inline Vector3_t2243707580  get_VertexTopRight_5() const { return ___VertexTopRight_5; }
	inline Vector3_t2243707580 * get_address_of_VertexTopRight_5() { return &___VertexTopRight_5; }
	inline void set_VertexTopRight_5(Vector3_t2243707580  value)
	{
		___VertexTopRight_5 = value;
	}

	inline static int32_t get_offset_of_VertexBottomLeft_6() { return static_cast<int32_t>(offsetof(MeshBlock_t2290159688, ___VertexBottomLeft_6)); }
	inline Vector3_t2243707580  get_VertexBottomLeft_6() const { return ___VertexBottomLeft_6; }
	inline Vector3_t2243707580 * get_address_of_VertexBottomLeft_6() { return &___VertexBottomLeft_6; }
	inline void set_VertexBottomLeft_6(Vector3_t2243707580  value)
	{
		___VertexBottomLeft_6 = value;
	}

	inline static int32_t get_offset_of_VertexBottomRight_7() { return static_cast<int32_t>(offsetof(MeshBlock_t2290159688, ___VertexBottomRight_7)); }
	inline Vector3_t2243707580  get_VertexBottomRight_7() const { return ___VertexBottomRight_7; }
	inline Vector3_t2243707580 * get_address_of_VertexBottomRight_7() { return &___VertexBottomRight_7; }
	inline void set_VertexBottomRight_7(Vector3_t2243707580  value)
	{
		___VertexBottomRight_7 = value;
	}

	inline static int32_t get_offset_of_VertexIndex_8() { return static_cast<int32_t>(offsetof(MeshBlock_t2290159688, ___VertexIndex_8)); }
	inline int32_t get_VertexIndex_8() const { return ___VertexIndex_8; }
	inline int32_t* get_address_of_VertexIndex_8() { return &___VertexIndex_8; }
	inline void set_VertexIndex_8(int32_t value)
	{
		___VertexIndex_8 = value;
	}

	inline static int32_t get_offset_of_BlockAfter_9() { return static_cast<int32_t>(offsetof(MeshBlock_t2290159688, ___BlockAfter_9)); }
	inline MeshBlock_t2290159688 * get_BlockAfter_9() const { return ___BlockAfter_9; }
	inline MeshBlock_t2290159688 ** get_address_of_BlockAfter_9() { return &___BlockAfter_9; }
	inline void set_BlockAfter_9(MeshBlock_t2290159688 * value)
	{
		___BlockAfter_9 = value;
		Il2CppCodeGenWriteBarrier(&___BlockAfter_9, value);
	}

	inline static int32_t get_offset_of_ParentMesh_10() { return static_cast<int32_t>(offsetof(MeshBlock_t2290159688, ___ParentMesh_10)); }
	inline DynamicMesh_t330516240 * get_ParentMesh_10() const { return ___ParentMesh_10; }
	inline DynamicMesh_t330516240 ** get_address_of_ParentMesh_10() { return &___ParentMesh_10; }
	inline void set_ParentMesh_10(DynamicMesh_t330516240 * value)
	{
		___ParentMesh_10 = value;
		Il2CppCodeGenWriteBarrier(&___ParentMesh_10, value);
	}

	inline static int32_t get_offset_of_Transform_11() { return static_cast<int32_t>(offsetof(MeshBlock_t2290159688, ___Transform_11)); }
	inline Transformation_t81853217 * get_Transform_11() const { return ___Transform_11; }
	inline Transformation_t81853217 ** get_address_of_Transform_11() { return &___Transform_11; }
	inline void set_Transform_11(Transformation_t81853217 * value)
	{
		___Transform_11 = value;
		Il2CppCodeGenWriteBarrier(&___Transform_11, value);
	}

	inline static int32_t get_offset_of_LocalBlockAfter_12() { return static_cast<int32_t>(offsetof(MeshBlock_t2290159688, ___LocalBlockAfter_12)); }
	inline MeshBlock_t2290159688 * get_LocalBlockAfter_12() const { return ___LocalBlockAfter_12; }
	inline MeshBlock_t2290159688 ** get_address_of_LocalBlockAfter_12() { return &___LocalBlockAfter_12; }
	inline void set_LocalBlockAfter_12(MeshBlock_t2290159688 * value)
	{
		___LocalBlockAfter_12 = value;
		Il2CppCodeGenWriteBarrier(&___LocalBlockAfter_12, value);
	}
};

struct MeshBlock_t2290159688_StaticFields
{
public:
	// Blaze.UVBlock PowerUI.MeshBlock::BlankUV
	UVBlock_t2782732346 * ___BlankUV_0;

public:
	inline static int32_t get_offset_of_BlankUV_0() { return static_cast<int32_t>(offsetof(MeshBlock_t2290159688_StaticFields, ___BlankUV_0)); }
	inline UVBlock_t2782732346 * get_BlankUV_0() const { return ___BlankUV_0; }
	inline UVBlock_t2782732346 ** get_address_of_BlankUV_0() { return &___BlankUV_0; }
	inline void set_BlankUV_0(UVBlock_t2782732346 * value)
	{
		___BlankUV_0 = value;
		Il2CppCodeGenWriteBarrier(&___BlankUV_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
