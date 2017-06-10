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

// Nitro.BoxOperation
struct  BoxOperation_t2518437844  : public Operation_t2694499211
{
public:
	// System.Type Nitro.BoxOperation::FromType
	Type_t * ___FromType_11;
	// Nitro.CompiledFragment Nitro.BoxOperation::ToBox
	CompiledFragment_t2613193543 * ___ToBox_12;

public:
	inline static int32_t get_offset_of_FromType_11() { return static_cast<int32_t>(offsetof(BoxOperation_t2518437844, ___FromType_11)); }
	inline Type_t * get_FromType_11() const { return ___FromType_11; }
	inline Type_t ** get_address_of_FromType_11() { return &___FromType_11; }
	inline void set_FromType_11(Type_t * value)
	{
		___FromType_11 = value;
		Il2CppCodeGenWriteBarrier(&___FromType_11, value);
	}

	inline static int32_t get_offset_of_ToBox_12() { return static_cast<int32_t>(offsetof(BoxOperation_t2518437844, ___ToBox_12)); }
	inline CompiledFragment_t2613193543 * get_ToBox_12() const { return ___ToBox_12; }
	inline CompiledFragment_t2613193543 ** get_address_of_ToBox_12() { return &___ToBox_12; }
	inline void set_ToBox_12(CompiledFragment_t2613193543 * value)
	{
		___ToBox_12 = value;
		Il2CppCodeGenWriteBarrier(&___ToBox_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
