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
// Nitro.CompiledFragment[]
struct CompiledFragmentU5BU5D_t634647486;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.ArrayOperation
struct  ArrayOperation_t1919211888  : public Operation_t2694499211
{
public:
	// System.Type Nitro.ArrayOperation::ArrayType
	Type_t * ___ArrayType_11;
	// System.Int32 Nitro.ArrayOperation::DirectSize
	int32_t ___DirectSize_12;
	// Nitro.CompiledFragment Nitro.ArrayOperation::Size
	CompiledFragment_t2613193543 * ___Size_13;
	// Nitro.CompiledFragment[] Nitro.ArrayOperation::DefaultValues
	CompiledFragmentU5BU5D_t634647486* ___DefaultValues_14;

public:
	inline static int32_t get_offset_of_ArrayType_11() { return static_cast<int32_t>(offsetof(ArrayOperation_t1919211888, ___ArrayType_11)); }
	inline Type_t * get_ArrayType_11() const { return ___ArrayType_11; }
	inline Type_t ** get_address_of_ArrayType_11() { return &___ArrayType_11; }
	inline void set_ArrayType_11(Type_t * value)
	{
		___ArrayType_11 = value;
		Il2CppCodeGenWriteBarrier(&___ArrayType_11, value);
	}

	inline static int32_t get_offset_of_DirectSize_12() { return static_cast<int32_t>(offsetof(ArrayOperation_t1919211888, ___DirectSize_12)); }
	inline int32_t get_DirectSize_12() const { return ___DirectSize_12; }
	inline int32_t* get_address_of_DirectSize_12() { return &___DirectSize_12; }
	inline void set_DirectSize_12(int32_t value)
	{
		___DirectSize_12 = value;
	}

	inline static int32_t get_offset_of_Size_13() { return static_cast<int32_t>(offsetof(ArrayOperation_t1919211888, ___Size_13)); }
	inline CompiledFragment_t2613193543 * get_Size_13() const { return ___Size_13; }
	inline CompiledFragment_t2613193543 ** get_address_of_Size_13() { return &___Size_13; }
	inline void set_Size_13(CompiledFragment_t2613193543 * value)
	{
		___Size_13 = value;
		Il2CppCodeGenWriteBarrier(&___Size_13, value);
	}

	inline static int32_t get_offset_of_DefaultValues_14() { return static_cast<int32_t>(offsetof(ArrayOperation_t1919211888, ___DefaultValues_14)); }
	inline CompiledFragmentU5BU5D_t634647486* get_DefaultValues_14() const { return ___DefaultValues_14; }
	inline CompiledFragmentU5BU5D_t634647486** get_address_of_DefaultValues_14() { return &___DefaultValues_14; }
	inline void set_DefaultValues_14(CompiledFragmentU5BU5D_t634647486* value)
	{
		___DefaultValues_14 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultValues_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
