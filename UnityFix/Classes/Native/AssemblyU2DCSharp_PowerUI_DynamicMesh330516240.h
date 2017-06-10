#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Shader
struct Shader_t2430389951;
// PowerUI.UIBatch
struct UIBatch_t1637790214;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Material
struct Material_t193706927;
// PowerUI.MeshBlock
struct MeshBlock_t2290159688;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PowerUI.FixedSizeBuffer`1<UnityEngine.Vector2>
struct FixedSizeBuffer_1_t3067927080;
// PowerUI.FixedSizeBuffer`1<System.Int32>
struct FixedSizeBuffer_1_t2896096949;
// PowerUI.FixedSizeBuffer`1<UnityEngine.Color>
struct FixedSizeBuffer_1_t2844611576;
// PowerUI.FixedSizeBuffer`1<UnityEngine.Vector3>
struct FixedSizeBuffer_1_t3067927081;
// PowerUI.FixedSizeBuffer`1<UnityEngine.Vector4>
struct FixedSizeBuffer_1_t3067927082;
// UnityEngine.MeshCollider
struct MeshCollider_t2718867283;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.DynamicMesh
struct  DynamicMesh_t330516240  : public Il2CppObject
{
public:
	// PowerUI.UIBatch PowerUI.DynamicMesh::Batch
	UIBatch_t1637790214 * ___Batch_1;
	// System.Int32 PowerUI.DynamicMesh::BlockCount
	int32_t ___BlockCount_2;
	// UnityEngine.Mesh PowerUI.DynamicMesh::OutputMesh
	Mesh_t1356156583 * ___OutputMesh_3;
	// UnityEngine.Material PowerUI.DynamicMesh::Material
	Material_t193706927 * ___Material_4;
	// System.Int32 PowerUI.DynamicMesh::LastBlockCount
	int32_t ___LastBlockCount_5;
	// PowerUI.MeshBlock PowerUI.DynamicMesh::LastBlock
	MeshBlock_t2290159688 * ___LastBlock_6;
	// PowerUI.MeshBlock PowerUI.DynamicMesh::FirstBlock
	MeshBlock_t2290159688 * ___FirstBlock_7;
	// UnityEngine.MeshRenderer PowerUI.DynamicMesh::Renderer
	MeshRenderer_t1268241104 * ___Renderer_8;
	// UnityEngine.Material PowerUI.DynamicMesh::GlobalMaterial
	Material_t193706927 * ___GlobalMaterial_9;
	// UnityEngine.Transform PowerUI.DynamicMesh::OutputTransform
	Transform_t3275118058 * ___OutputTransform_10;
	// UnityEngine.GameObject PowerUI.DynamicMesh::OutputGameObject
	GameObject_t1756533147 * ___OutputGameObject_11;
	// PowerUI.FixedSizeBuffer`1<UnityEngine.Vector2> PowerUI.DynamicMesh::UV
	FixedSizeBuffer_1_t3067927080 * ___UV_12;
	// PowerUI.FixedSizeBuffer`1<UnityEngine.Vector2> PowerUI.DynamicMesh::UV2
	FixedSizeBuffer_1_t3067927080 * ___UV2_13;
	// PowerUI.FixedSizeBuffer`1<System.Int32> PowerUI.DynamicMesh::Triangles
	FixedSizeBuffer_1_t2896096949 * ___Triangles_14;
	// PowerUI.FixedSizeBuffer`1<UnityEngine.Color> PowerUI.DynamicMesh::Colours
	FixedSizeBuffer_1_t2844611576 * ___Colours_15;
	// PowerUI.FixedSizeBuffer`1<UnityEngine.Vector3> PowerUI.DynamicMesh::Normals
	FixedSizeBuffer_1_t3067927081 * ___Normals_16;
	// PowerUI.FixedSizeBuffer`1<UnityEngine.Vector3> PowerUI.DynamicMesh::Vertices
	FixedSizeBuffer_1_t3067927081 * ___Vertices_17;
	// PowerUI.FixedSizeBuffer`1<UnityEngine.Vector4> PowerUI.DynamicMesh::Tangents
	FixedSizeBuffer_1_t3067927082 * ___Tangents_18;
	// UnityEngine.MeshCollider PowerUI.DynamicMesh::FullPhysicsModeCollider
	MeshCollider_t2718867283 * ___FullPhysicsModeCollider_19;

public:
	inline static int32_t get_offset_of_Batch_1() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___Batch_1)); }
	inline UIBatch_t1637790214 * get_Batch_1() const { return ___Batch_1; }
	inline UIBatch_t1637790214 ** get_address_of_Batch_1() { return &___Batch_1; }
	inline void set_Batch_1(UIBatch_t1637790214 * value)
	{
		___Batch_1 = value;
		Il2CppCodeGenWriteBarrier(&___Batch_1, value);
	}

	inline static int32_t get_offset_of_BlockCount_2() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___BlockCount_2)); }
	inline int32_t get_BlockCount_2() const { return ___BlockCount_2; }
	inline int32_t* get_address_of_BlockCount_2() { return &___BlockCount_2; }
	inline void set_BlockCount_2(int32_t value)
	{
		___BlockCount_2 = value;
	}

	inline static int32_t get_offset_of_OutputMesh_3() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___OutputMesh_3)); }
	inline Mesh_t1356156583 * get_OutputMesh_3() const { return ___OutputMesh_3; }
	inline Mesh_t1356156583 ** get_address_of_OutputMesh_3() { return &___OutputMesh_3; }
	inline void set_OutputMesh_3(Mesh_t1356156583 * value)
	{
		___OutputMesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___OutputMesh_3, value);
	}

	inline static int32_t get_offset_of_Material_4() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___Material_4)); }
	inline Material_t193706927 * get_Material_4() const { return ___Material_4; }
	inline Material_t193706927 ** get_address_of_Material_4() { return &___Material_4; }
	inline void set_Material_4(Material_t193706927 * value)
	{
		___Material_4 = value;
		Il2CppCodeGenWriteBarrier(&___Material_4, value);
	}

	inline static int32_t get_offset_of_LastBlockCount_5() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___LastBlockCount_5)); }
	inline int32_t get_LastBlockCount_5() const { return ___LastBlockCount_5; }
	inline int32_t* get_address_of_LastBlockCount_5() { return &___LastBlockCount_5; }
	inline void set_LastBlockCount_5(int32_t value)
	{
		___LastBlockCount_5 = value;
	}

	inline static int32_t get_offset_of_LastBlock_6() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___LastBlock_6)); }
	inline MeshBlock_t2290159688 * get_LastBlock_6() const { return ___LastBlock_6; }
	inline MeshBlock_t2290159688 ** get_address_of_LastBlock_6() { return &___LastBlock_6; }
	inline void set_LastBlock_6(MeshBlock_t2290159688 * value)
	{
		___LastBlock_6 = value;
		Il2CppCodeGenWriteBarrier(&___LastBlock_6, value);
	}

	inline static int32_t get_offset_of_FirstBlock_7() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___FirstBlock_7)); }
	inline MeshBlock_t2290159688 * get_FirstBlock_7() const { return ___FirstBlock_7; }
	inline MeshBlock_t2290159688 ** get_address_of_FirstBlock_7() { return &___FirstBlock_7; }
	inline void set_FirstBlock_7(MeshBlock_t2290159688 * value)
	{
		___FirstBlock_7 = value;
		Il2CppCodeGenWriteBarrier(&___FirstBlock_7, value);
	}

	inline static int32_t get_offset_of_Renderer_8() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___Renderer_8)); }
	inline MeshRenderer_t1268241104 * get_Renderer_8() const { return ___Renderer_8; }
	inline MeshRenderer_t1268241104 ** get_address_of_Renderer_8() { return &___Renderer_8; }
	inline void set_Renderer_8(MeshRenderer_t1268241104 * value)
	{
		___Renderer_8 = value;
		Il2CppCodeGenWriteBarrier(&___Renderer_8, value);
	}

	inline static int32_t get_offset_of_GlobalMaterial_9() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___GlobalMaterial_9)); }
	inline Material_t193706927 * get_GlobalMaterial_9() const { return ___GlobalMaterial_9; }
	inline Material_t193706927 ** get_address_of_GlobalMaterial_9() { return &___GlobalMaterial_9; }
	inline void set_GlobalMaterial_9(Material_t193706927 * value)
	{
		___GlobalMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___GlobalMaterial_9, value);
	}

	inline static int32_t get_offset_of_OutputTransform_10() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___OutputTransform_10)); }
	inline Transform_t3275118058 * get_OutputTransform_10() const { return ___OutputTransform_10; }
	inline Transform_t3275118058 ** get_address_of_OutputTransform_10() { return &___OutputTransform_10; }
	inline void set_OutputTransform_10(Transform_t3275118058 * value)
	{
		___OutputTransform_10 = value;
		Il2CppCodeGenWriteBarrier(&___OutputTransform_10, value);
	}

	inline static int32_t get_offset_of_OutputGameObject_11() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___OutputGameObject_11)); }
	inline GameObject_t1756533147 * get_OutputGameObject_11() const { return ___OutputGameObject_11; }
	inline GameObject_t1756533147 ** get_address_of_OutputGameObject_11() { return &___OutputGameObject_11; }
	inline void set_OutputGameObject_11(GameObject_t1756533147 * value)
	{
		___OutputGameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___OutputGameObject_11, value);
	}

	inline static int32_t get_offset_of_UV_12() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___UV_12)); }
	inline FixedSizeBuffer_1_t3067927080 * get_UV_12() const { return ___UV_12; }
	inline FixedSizeBuffer_1_t3067927080 ** get_address_of_UV_12() { return &___UV_12; }
	inline void set_UV_12(FixedSizeBuffer_1_t3067927080 * value)
	{
		___UV_12 = value;
		Il2CppCodeGenWriteBarrier(&___UV_12, value);
	}

	inline static int32_t get_offset_of_UV2_13() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___UV2_13)); }
	inline FixedSizeBuffer_1_t3067927080 * get_UV2_13() const { return ___UV2_13; }
	inline FixedSizeBuffer_1_t3067927080 ** get_address_of_UV2_13() { return &___UV2_13; }
	inline void set_UV2_13(FixedSizeBuffer_1_t3067927080 * value)
	{
		___UV2_13 = value;
		Il2CppCodeGenWriteBarrier(&___UV2_13, value);
	}

	inline static int32_t get_offset_of_Triangles_14() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___Triangles_14)); }
	inline FixedSizeBuffer_1_t2896096949 * get_Triangles_14() const { return ___Triangles_14; }
	inline FixedSizeBuffer_1_t2896096949 ** get_address_of_Triangles_14() { return &___Triangles_14; }
	inline void set_Triangles_14(FixedSizeBuffer_1_t2896096949 * value)
	{
		___Triangles_14 = value;
		Il2CppCodeGenWriteBarrier(&___Triangles_14, value);
	}

	inline static int32_t get_offset_of_Colours_15() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___Colours_15)); }
	inline FixedSizeBuffer_1_t2844611576 * get_Colours_15() const { return ___Colours_15; }
	inline FixedSizeBuffer_1_t2844611576 ** get_address_of_Colours_15() { return &___Colours_15; }
	inline void set_Colours_15(FixedSizeBuffer_1_t2844611576 * value)
	{
		___Colours_15 = value;
		Il2CppCodeGenWriteBarrier(&___Colours_15, value);
	}

	inline static int32_t get_offset_of_Normals_16() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___Normals_16)); }
	inline FixedSizeBuffer_1_t3067927081 * get_Normals_16() const { return ___Normals_16; }
	inline FixedSizeBuffer_1_t3067927081 ** get_address_of_Normals_16() { return &___Normals_16; }
	inline void set_Normals_16(FixedSizeBuffer_1_t3067927081 * value)
	{
		___Normals_16 = value;
		Il2CppCodeGenWriteBarrier(&___Normals_16, value);
	}

	inline static int32_t get_offset_of_Vertices_17() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___Vertices_17)); }
	inline FixedSizeBuffer_1_t3067927081 * get_Vertices_17() const { return ___Vertices_17; }
	inline FixedSizeBuffer_1_t3067927081 ** get_address_of_Vertices_17() { return &___Vertices_17; }
	inline void set_Vertices_17(FixedSizeBuffer_1_t3067927081 * value)
	{
		___Vertices_17 = value;
		Il2CppCodeGenWriteBarrier(&___Vertices_17, value);
	}

	inline static int32_t get_offset_of_Tangents_18() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___Tangents_18)); }
	inline FixedSizeBuffer_1_t3067927082 * get_Tangents_18() const { return ___Tangents_18; }
	inline FixedSizeBuffer_1_t3067927082 ** get_address_of_Tangents_18() { return &___Tangents_18; }
	inline void set_Tangents_18(FixedSizeBuffer_1_t3067927082 * value)
	{
		___Tangents_18 = value;
		Il2CppCodeGenWriteBarrier(&___Tangents_18, value);
	}

	inline static int32_t get_offset_of_FullPhysicsModeCollider_19() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240, ___FullPhysicsModeCollider_19)); }
	inline MeshCollider_t2718867283 * get_FullPhysicsModeCollider_19() const { return ___FullPhysicsModeCollider_19; }
	inline MeshCollider_t2718867283 ** get_address_of_FullPhysicsModeCollider_19() { return &___FullPhysicsModeCollider_19; }
	inline void set_FullPhysicsModeCollider_19(MeshCollider_t2718867283 * value)
	{
		___FullPhysicsModeCollider_19 = value;
		Il2CppCodeGenWriteBarrier(&___FullPhysicsModeCollider_19, value);
	}
};

struct DynamicMesh_t330516240_StaticFields
{
public:
	// UnityEngine.Shader PowerUI.DynamicMesh::UIShader
	Shader_t2430389951 * ___UIShader_0;

public:
	inline static int32_t get_offset_of_UIShader_0() { return static_cast<int32_t>(offsetof(DynamicMesh_t330516240_StaticFields, ___UIShader_0)); }
	inline Shader_t2430389951 * get_UIShader_0() const { return ___UIShader_0; }
	inline Shader_t2430389951 ** get_address_of_UIShader_0() { return &___UIShader_0; }
	inline void set_UIShader_0(Shader_t2430389951 * value)
	{
		___UIShader_0 = value;
		Il2CppCodeGenWriteBarrier(&___UIShader_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
