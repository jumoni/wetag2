#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Celebrity
struct  Celebrity_t2062038449  : public Il2CppObject
{
public:
	// System.String Celebrity::name
	String_t* ___name_0;
	// UnityEngine.Rect Celebrity::factRectangle
	Rect_t3681755626  ___factRectangle_1;
	// System.Single Celebrity::confidence
	float ___confidence_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Celebrity_t2062038449, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_factRectangle_1() { return static_cast<int32_t>(offsetof(Celebrity_t2062038449, ___factRectangle_1)); }
	inline Rect_t3681755626  get_factRectangle_1() const { return ___factRectangle_1; }
	inline Rect_t3681755626 * get_address_of_factRectangle_1() { return &___factRectangle_1; }
	inline void set_factRectangle_1(Rect_t3681755626  value)
	{
		___factRectangle_1 = value;
	}

	inline static int32_t get_offset_of_confidence_2() { return static_cast<int32_t>(offsetof(Celebrity_t2062038449, ___confidence_2)); }
	inline float get_confidence_2() const { return ___confidence_2; }
	inline float* get_address_of_confidence_2() { return &___confidence_2; }
	inline void set_confidence_2(float value)
	{
		___confidence_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
