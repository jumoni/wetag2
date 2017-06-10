#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Blaze.TriangulationVertex
struct TriangulationVertex_t2769725019;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blaze.TriangulationVertex
struct  TriangulationVertex_t2769725019  : public Il2CppObject
{
public:
	// System.Single Blaze.TriangulationVertex::X
	float ___X_0;
	// System.Single Blaze.TriangulationVertex::Y
	float ___Y_1;
	// System.Int32 Blaze.TriangulationVertex::Index
	int32_t ___Index_2;
	// Blaze.TriangulationVertex Blaze.TriangulationVertex::Next
	TriangulationVertex_t2769725019 * ___Next_3;
	// Blaze.TriangulationVertex Blaze.TriangulationVertex::Previous
	TriangulationVertex_t2769725019 * ___Previous_4;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(TriangulationVertex_t2769725019, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(TriangulationVertex_t2769725019, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Index_2() { return static_cast<int32_t>(offsetof(TriangulationVertex_t2769725019, ___Index_2)); }
	inline int32_t get_Index_2() const { return ___Index_2; }
	inline int32_t* get_address_of_Index_2() { return &___Index_2; }
	inline void set_Index_2(int32_t value)
	{
		___Index_2 = value;
	}

	inline static int32_t get_offset_of_Next_3() { return static_cast<int32_t>(offsetof(TriangulationVertex_t2769725019, ___Next_3)); }
	inline TriangulationVertex_t2769725019 * get_Next_3() const { return ___Next_3; }
	inline TriangulationVertex_t2769725019 ** get_address_of_Next_3() { return &___Next_3; }
	inline void set_Next_3(TriangulationVertex_t2769725019 * value)
	{
		___Next_3 = value;
		Il2CppCodeGenWriteBarrier(&___Next_3, value);
	}

	inline static int32_t get_offset_of_Previous_4() { return static_cast<int32_t>(offsetof(TriangulationVertex_t2769725019, ___Previous_4)); }
	inline TriangulationVertex_t2769725019 * get_Previous_4() const { return ___Previous_4; }
	inline TriangulationVertex_t2769725019 ** get_address_of_Previous_4() { return &___Previous_4; }
	inline void set_Previous_4(TriangulationVertex_t2769725019 * value)
	{
		___Previous_4 = value;
		Il2CppCodeGenWriteBarrier(&___Previous_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
