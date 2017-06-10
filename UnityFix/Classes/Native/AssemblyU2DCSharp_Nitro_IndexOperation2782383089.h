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

// Nitro.IndexOperation
struct  IndexOperation_t2782383089  : public Operation_t2694499211
{
public:
	// System.Type Nitro.IndexOperation::ElementType
	Type_t * ___ElementType_11;
	// Nitro.CompiledFragment Nitro.IndexOperation::Index
	CompiledFragment_t2613193543 * ___Index_12;
	// Nitro.CompiledFragment Nitro.IndexOperation::AppliedTo
	CompiledFragment_t2613193543 * ___AppliedTo_13;

public:
	inline static int32_t get_offset_of_ElementType_11() { return static_cast<int32_t>(offsetof(IndexOperation_t2782383089, ___ElementType_11)); }
	inline Type_t * get_ElementType_11() const { return ___ElementType_11; }
	inline Type_t ** get_address_of_ElementType_11() { return &___ElementType_11; }
	inline void set_ElementType_11(Type_t * value)
	{
		___ElementType_11 = value;
		Il2CppCodeGenWriteBarrier(&___ElementType_11, value);
	}

	inline static int32_t get_offset_of_Index_12() { return static_cast<int32_t>(offsetof(IndexOperation_t2782383089, ___Index_12)); }
	inline CompiledFragment_t2613193543 * get_Index_12() const { return ___Index_12; }
	inline CompiledFragment_t2613193543 ** get_address_of_Index_12() { return &___Index_12; }
	inline void set_Index_12(CompiledFragment_t2613193543 * value)
	{
		___Index_12 = value;
		Il2CppCodeGenWriteBarrier(&___Index_12, value);
	}

	inline static int32_t get_offset_of_AppliedTo_13() { return static_cast<int32_t>(offsetof(IndexOperation_t2782383089, ___AppliedTo_13)); }
	inline CompiledFragment_t2613193543 * get_AppliedTo_13() const { return ___AppliedTo_13; }
	inline CompiledFragment_t2613193543 ** get_address_of_AppliedTo_13() { return &___AppliedTo_13; }
	inline void set_AppliedTo_13(CompiledFragment_t2613193543 * value)
	{
		___AppliedTo_13 = value;
		Il2CppCodeGenWriteBarrier(&___AppliedTo_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
