#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Blaze.VectorPoint
struct VectorPoint_t2643135013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blaze.VectorPoint
struct  VectorPoint_t2643135013  : public Il2CppObject
{
public:
	// System.Single Blaze.VectorPoint::X
	float ___X_0;
	// System.Single Blaze.VectorPoint::Y
	float ___Y_1;
	// System.Single Blaze.VectorPoint::NormalX
	float ___NormalX_2;
	// System.Single Blaze.VectorPoint::NormalY
	float ___NormalY_3;
	// Blaze.VectorPoint Blaze.VectorPoint::Next
	VectorPoint_t2643135013 * ___Next_4;
	// Blaze.VectorPoint Blaze.VectorPoint::Previous
	VectorPoint_t2643135013 * ___Previous_5;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(VectorPoint_t2643135013, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(VectorPoint_t2643135013, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_NormalX_2() { return static_cast<int32_t>(offsetof(VectorPoint_t2643135013, ___NormalX_2)); }
	inline float get_NormalX_2() const { return ___NormalX_2; }
	inline float* get_address_of_NormalX_2() { return &___NormalX_2; }
	inline void set_NormalX_2(float value)
	{
		___NormalX_2 = value;
	}

	inline static int32_t get_offset_of_NormalY_3() { return static_cast<int32_t>(offsetof(VectorPoint_t2643135013, ___NormalY_3)); }
	inline float get_NormalY_3() const { return ___NormalY_3; }
	inline float* get_address_of_NormalY_3() { return &___NormalY_3; }
	inline void set_NormalY_3(float value)
	{
		___NormalY_3 = value;
	}

	inline static int32_t get_offset_of_Next_4() { return static_cast<int32_t>(offsetof(VectorPoint_t2643135013, ___Next_4)); }
	inline VectorPoint_t2643135013 * get_Next_4() const { return ___Next_4; }
	inline VectorPoint_t2643135013 ** get_address_of_Next_4() { return &___Next_4; }
	inline void set_Next_4(VectorPoint_t2643135013 * value)
	{
		___Next_4 = value;
		Il2CppCodeGenWriteBarrier(&___Next_4, value);
	}

	inline static int32_t get_offset_of_Previous_5() { return static_cast<int32_t>(offsetof(VectorPoint_t2643135013, ___Previous_5)); }
	inline VectorPoint_t2643135013 * get_Previous_5() const { return ___Previous_5; }
	inline VectorPoint_t2643135013 ** get_address_of_Previous_5() { return &___Previous_5; }
	inline void set_Previous_5(VectorPoint_t2643135013 * value)
	{
		___Previous_5 = value;
		Il2CppCodeGenWriteBarrier(&___Previous_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
