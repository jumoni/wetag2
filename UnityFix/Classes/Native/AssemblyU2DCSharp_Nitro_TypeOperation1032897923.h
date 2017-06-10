#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_Operation2694499211.h"

// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.TypeOperation
struct  TypeOperation_t1032897923  : public Operation_t2694499211
{
public:
	// System.Type Nitro.TypeOperation::TypeObject
	Type_t * ___TypeObject_11;

public:
	inline static int32_t get_offset_of_TypeObject_11() { return static_cast<int32_t>(offsetof(TypeOperation_t1032897923, ___TypeObject_11)); }
	inline Type_t * get_TypeObject_11() const { return ___TypeObject_11; }
	inline Type_t ** get_address_of_TypeObject_11() { return &___TypeObject_11; }
	inline void set_TypeObject_11(Type_t * value)
	{
		___TypeObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___TypeObject_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
