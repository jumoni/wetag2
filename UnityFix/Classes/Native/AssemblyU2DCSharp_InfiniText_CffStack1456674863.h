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

// InfiniText.CffStack
struct  CffStack_t1456674863  : public Il2CppObject
{
public:
	// System.Int32 InfiniText.CffStack::Length
	int32_t ___Length_0;
	// InfiniText.CffStackEntry InfiniText.CffStack::Last
	CffStackEntry_t2258541939 * ___Last_1;
	// InfiniText.CffStackEntry InfiniText.CffStack::First
	CffStackEntry_t2258541939 * ___First_2;

public:
	inline static int32_t get_offset_of_Length_0() { return static_cast<int32_t>(offsetof(CffStack_t1456674863, ___Length_0)); }
	inline int32_t get_Length_0() const { return ___Length_0; }
	inline int32_t* get_address_of_Length_0() { return &___Length_0; }
	inline void set_Length_0(int32_t value)
	{
		___Length_0 = value;
	}

	inline static int32_t get_offset_of_Last_1() { return static_cast<int32_t>(offsetof(CffStack_t1456674863, ___Last_1)); }
	inline CffStackEntry_t2258541939 * get_Last_1() const { return ___Last_1; }
	inline CffStackEntry_t2258541939 ** get_address_of_Last_1() { return &___Last_1; }
	inline void set_Last_1(CffStackEntry_t2258541939 * value)
	{
		___Last_1 = value;
		Il2CppCodeGenWriteBarrier(&___Last_1, value);
	}

	inline static int32_t get_offset_of_First_2() { return static_cast<int32_t>(offsetof(CffStack_t1456674863, ___First_2)); }
	inline CffStackEntry_t2258541939 * get_First_2() const { return ___First_2; }
	inline CffStackEntry_t2258541939 ** get_address_of_First_2() { return &___First_2; }
	inline void set_First_2(CffStackEntry_t2258541939 * value)
	{
		___First_2 = value;
		Il2CppCodeGenWriteBarrier(&___First_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
