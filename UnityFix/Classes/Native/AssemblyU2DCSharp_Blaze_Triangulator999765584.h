#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// Blaze.TriangulationVertex
struct TriangulationVertex_t2769725019;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blaze.Triangulator
struct  Triangulator_t999765584  : public Il2CppObject
{
public:
	// System.Boolean Blaze.Triangulator::Clockwise
	bool ___Clockwise_0;
	// System.Int32[] Blaze.Triangulator::Triangles
	Int32U5BU5D_t3030399641* ___Triangles_1;
	// UnityEngine.Vector3[] Blaze.Triangulator::Vertices
	Vector3U5BU5D_t1172311765* ___Vertices_2;
	// System.Int32 Blaze.Triangulator::TriangleIndex
	int32_t ___TriangleIndex_3;
	// System.Int32 Blaze.Triangulator::VertexCount
	int32_t ___VertexCount_4;
	// System.Int32 Blaze.Triangulator::VertexOffset
	int32_t ___VertexOffset_5;
	// Blaze.TriangulationVertex Blaze.Triangulator::Current
	TriangulationVertex_t2769725019 * ___Current_6;

public:
	inline static int32_t get_offset_of_Clockwise_0() { return static_cast<int32_t>(offsetof(Triangulator_t999765584, ___Clockwise_0)); }
	inline bool get_Clockwise_0() const { return ___Clockwise_0; }
	inline bool* get_address_of_Clockwise_0() { return &___Clockwise_0; }
	inline void set_Clockwise_0(bool value)
	{
		___Clockwise_0 = value;
	}

	inline static int32_t get_offset_of_Triangles_1() { return static_cast<int32_t>(offsetof(Triangulator_t999765584, ___Triangles_1)); }
	inline Int32U5BU5D_t3030399641* get_Triangles_1() const { return ___Triangles_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_Triangles_1() { return &___Triangles_1; }
	inline void set_Triangles_1(Int32U5BU5D_t3030399641* value)
	{
		___Triangles_1 = value;
		Il2CppCodeGenWriteBarrier(&___Triangles_1, value);
	}

	inline static int32_t get_offset_of_Vertices_2() { return static_cast<int32_t>(offsetof(Triangulator_t999765584, ___Vertices_2)); }
	inline Vector3U5BU5D_t1172311765* get_Vertices_2() const { return ___Vertices_2; }
	inline Vector3U5BU5D_t1172311765** get_address_of_Vertices_2() { return &___Vertices_2; }
	inline void set_Vertices_2(Vector3U5BU5D_t1172311765* value)
	{
		___Vertices_2 = value;
		Il2CppCodeGenWriteBarrier(&___Vertices_2, value);
	}

	inline static int32_t get_offset_of_TriangleIndex_3() { return static_cast<int32_t>(offsetof(Triangulator_t999765584, ___TriangleIndex_3)); }
	inline int32_t get_TriangleIndex_3() const { return ___TriangleIndex_3; }
	inline int32_t* get_address_of_TriangleIndex_3() { return &___TriangleIndex_3; }
	inline void set_TriangleIndex_3(int32_t value)
	{
		___TriangleIndex_3 = value;
	}

	inline static int32_t get_offset_of_VertexCount_4() { return static_cast<int32_t>(offsetof(Triangulator_t999765584, ___VertexCount_4)); }
	inline int32_t get_VertexCount_4() const { return ___VertexCount_4; }
	inline int32_t* get_address_of_VertexCount_4() { return &___VertexCount_4; }
	inline void set_VertexCount_4(int32_t value)
	{
		___VertexCount_4 = value;
	}

	inline static int32_t get_offset_of_VertexOffset_5() { return static_cast<int32_t>(offsetof(Triangulator_t999765584, ___VertexOffset_5)); }
	inline int32_t get_VertexOffset_5() const { return ___VertexOffset_5; }
	inline int32_t* get_address_of_VertexOffset_5() { return &___VertexOffset_5; }
	inline void set_VertexOffset_5(int32_t value)
	{
		___VertexOffset_5 = value;
	}

	inline static int32_t get_offset_of_Current_6() { return static_cast<int32_t>(offsetof(Triangulator_t999765584, ___Current_6)); }
	inline TriangulationVertex_t2769725019 * get_Current_6() const { return ___Current_6; }
	inline TriangulationVertex_t2769725019 ** get_address_of_Current_6() { return &___Current_6; }
	inline void set_Current_6(TriangulationVertex_t2769725019 * value)
	{
		___Current_6 = value;
		Il2CppCodeGenWriteBarrier(&___Current_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
