#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_Emit_Label4243202660.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.BreakPoint
struct  BreakPoint_t193309125  : public Il2CppObject
{
public:
	// System.Reflection.Emit.Label Nitro.BreakPoint::End
	Label_t4243202660  ___End_0;
	// System.Reflection.Emit.Label Nitro.BreakPoint::ContinuePoint
	Label_t4243202660  ___ContinuePoint_1;

public:
	inline static int32_t get_offset_of_End_0() { return static_cast<int32_t>(offsetof(BreakPoint_t193309125, ___End_0)); }
	inline Label_t4243202660  get_End_0() const { return ___End_0; }
	inline Label_t4243202660 * get_address_of_End_0() { return &___End_0; }
	inline void set_End_0(Label_t4243202660  value)
	{
		___End_0 = value;
	}

	inline static int32_t get_offset_of_ContinuePoint_1() { return static_cast<int32_t>(offsetof(BreakPoint_t193309125, ___ContinuePoint_1)); }
	inline Label_t4243202660  get_ContinuePoint_1() const { return ___ContinuePoint_1; }
	inline Label_t4243202660 * get_address_of_ContinuePoint_1() { return &___ContinuePoint_1; }
	inline void set_ContinuePoint_1(Label_t4243202660  value)
	{
		___ContinuePoint_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
