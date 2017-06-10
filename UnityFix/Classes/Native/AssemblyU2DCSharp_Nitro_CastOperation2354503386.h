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
// Nitro.CompiledFragment
struct CompiledFragment_t2613193543;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.CastOperation
struct  CastOperation_t2354503386  : public Operation_t2694499211
{
public:
	// System.Type Nitro.CastOperation::ToType
	Type_t * ___ToType_11;
	// Nitro.CompiledFragment Nitro.CastOperation::ToCast
	CompiledFragment_t2613193543 * ___ToCast_12;

public:
	inline static int32_t get_offset_of_ToType_11() { return static_cast<int32_t>(offsetof(CastOperation_t2354503386, ___ToType_11)); }
	inline Type_t * get_ToType_11() const { return ___ToType_11; }
	inline Type_t ** get_address_of_ToType_11() { return &___ToType_11; }
	inline void set_ToType_11(Type_t * value)
	{
		___ToType_11 = value;
		Il2CppCodeGenWriteBarrier(&___ToType_11, value);
	}

	inline static int32_t get_offset_of_ToCast_12() { return static_cast<int32_t>(offsetof(CastOperation_t2354503386, ___ToCast_12)); }
	inline CompiledFragment_t2613193543 * get_ToCast_12() const { return ___ToCast_12; }
	inline CompiledFragment_t2613193543 ** get_address_of_ToCast_12() { return &___ToCast_12; }
	inline void set_ToCast_12(CompiledFragment_t2613193543 * value)
	{
		___ToCast_12 = value;
		Il2CppCodeGenWriteBarrier(&___ToCast_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
