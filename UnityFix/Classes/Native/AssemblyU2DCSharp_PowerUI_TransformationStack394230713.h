#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.Transformation
struct Transformation_t81853217;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.TransformationStack
struct  TransformationStack_t394230713  : public Il2CppObject
{
public:
	// PowerUI.Transformation PowerUI.TransformationStack::Last
	Transformation_t81853217 * ___Last_0;
	// PowerUI.Transformation PowerUI.TransformationStack::First
	Transformation_t81853217 * ___First_1;

public:
	inline static int32_t get_offset_of_Last_0() { return static_cast<int32_t>(offsetof(TransformationStack_t394230713, ___Last_0)); }
	inline Transformation_t81853217 * get_Last_0() const { return ___Last_0; }
	inline Transformation_t81853217 ** get_address_of_Last_0() { return &___Last_0; }
	inline void set_Last_0(Transformation_t81853217 * value)
	{
		___Last_0 = value;
		Il2CppCodeGenWriteBarrier(&___Last_0, value);
	}

	inline static int32_t get_offset_of_First_1() { return static_cast<int32_t>(offsetof(TransformationStack_t394230713, ___First_1)); }
	inline Transformation_t81853217 * get_First_1() const { return ___First_1; }
	inline Transformation_t81853217 ** get_address_of_First_1() { return &___First_1; }
	inline void set_First_1(Transformation_t81853217 * value)
	{
		___First_1 = value;
		Il2CppCodeGenWriteBarrier(&___First_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
