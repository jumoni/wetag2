#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// InfiniText.CffStackEntry
struct CffStackEntry_t2258541939;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfiniText.CffStackEntry
struct  CffStackEntry_t2258541939  : public Il2CppObject
{
public:
	// InfiniText.CffStackEntry InfiniText.CffStackEntry::Next
	CffStackEntry_t2258541939 * ___Next_0;
	// InfiniText.CffStackEntry InfiniText.CffStackEntry::Previous
	CffStackEntry_t2258541939 * ___Previous_1;
	// System.Single InfiniText.CffStackEntry::Value
	float ___Value_2;

public:
	inline static int32_t get_offset_of_Next_0() { return static_cast<int32_t>(offsetof(CffStackEntry_t2258541939, ___Next_0)); }
	inline CffStackEntry_t2258541939 * get_Next_0() const { return ___Next_0; }
	inline CffStackEntry_t2258541939 ** get_address_of_Next_0() { return &___Next_0; }
	inline void set_Next_0(CffStackEntry_t2258541939 * value)
	{
		___Next_0 = value;
		Il2CppCodeGenWriteBarrier(&___Next_0, value);
	}

	inline static int32_t get_offset_of_Previous_1() { return static_cast<int32_t>(offsetof(CffStackEntry_t2258541939, ___Previous_1)); }
	inline CffStackEntry_t2258541939 * get_Previous_1() const { return ___Previous_1; }
	inline CffStackEntry_t2258541939 ** get_address_of_Previous_1() { return &___Previous_1; }
	inline void set_Previous_1(CffStackEntry_t2258541939 * value)
	{
		___Previous_1 = value;
		Il2CppCodeGenWriteBarrier(&___Previous_1, value);
	}

	inline static int32_t get_offset_of_Value_2() { return static_cast<int32_t>(offsetof(CffStackEntry_t2258541939, ___Value_2)); }
	inline float get_Value_2() const { return ___Value_2; }
	inline float* get_address_of_Value_2() { return &___Value_2; }
	inline void set_Value_2(float value)
	{
		___Value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
