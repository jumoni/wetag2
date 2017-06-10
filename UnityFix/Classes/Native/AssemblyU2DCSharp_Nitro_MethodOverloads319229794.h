#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Type
struct Type_t;
// System.Collections.Generic.List`1<Nitro.CompiledMethod>
struct List_1_t985677336;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.MethodOverloads
struct  MethodOverloads_t319229794  : public Il2CppObject
{
public:
	// System.Type Nitro.MethodOverloads::ReturnType
	Type_t * ___ReturnType_0;
	// System.Collections.Generic.List`1<Nitro.CompiledMethod> Nitro.MethodOverloads::Methods
	List_1_t985677336 * ___Methods_1;

public:
	inline static int32_t get_offset_of_ReturnType_0() { return static_cast<int32_t>(offsetof(MethodOverloads_t319229794, ___ReturnType_0)); }
	inline Type_t * get_ReturnType_0() const { return ___ReturnType_0; }
	inline Type_t ** get_address_of_ReturnType_0() { return &___ReturnType_0; }
	inline void set_ReturnType_0(Type_t * value)
	{
		___ReturnType_0 = value;
		Il2CppCodeGenWriteBarrier(&___ReturnType_0, value);
	}

	inline static int32_t get_offset_of_Methods_1() { return static_cast<int32_t>(offsetof(MethodOverloads_t319229794, ___Methods_1)); }
	inline List_1_t985677336 * get_Methods_1() const { return ___Methods_1; }
	inline List_1_t985677336 ** get_address_of_Methods_1() { return &___Methods_1; }
	inline void set_Methods_1(List_1_t985677336 * value)
	{
		___Methods_1 = value;
		Il2CppCodeGenWriteBarrier(&___Methods_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
