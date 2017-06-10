#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_Operation2694499211.h"

// System.Reflection.MethodInfo
struct MethodInfo_t;
// Nitro.CompiledFragment
struct CompiledFragment_t2613193543;
// Nitro.CompiledFragment[]
struct CompiledFragmentU5BU5D_t634647486;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.MethodOperation
struct  MethodOperation_t2287948876  : public Operation_t2694499211
{
public:
	// System.Reflection.MethodInfo Nitro.MethodOperation::MethodToCall
	MethodInfo_t * ___MethodToCall_11;
	// Nitro.CompiledFragment Nitro.MethodOperation::CalledOn
	CompiledFragment_t2613193543 * ___CalledOn_12;
	// Nitro.CompiledFragment[] Nitro.MethodOperation::Arguments
	CompiledFragmentU5BU5D_t634647486* ___Arguments_13;

public:
	inline static int32_t get_offset_of_MethodToCall_11() { return static_cast<int32_t>(offsetof(MethodOperation_t2287948876, ___MethodToCall_11)); }
	inline MethodInfo_t * get_MethodToCall_11() const { return ___MethodToCall_11; }
	inline MethodInfo_t ** get_address_of_MethodToCall_11() { return &___MethodToCall_11; }
	inline void set_MethodToCall_11(MethodInfo_t * value)
	{
		___MethodToCall_11 = value;
		Il2CppCodeGenWriteBarrier(&___MethodToCall_11, value);
	}

	inline static int32_t get_offset_of_CalledOn_12() { return static_cast<int32_t>(offsetof(MethodOperation_t2287948876, ___CalledOn_12)); }
	inline CompiledFragment_t2613193543 * get_CalledOn_12() const { return ___CalledOn_12; }
	inline CompiledFragment_t2613193543 ** get_address_of_CalledOn_12() { return &___CalledOn_12; }
	inline void set_CalledOn_12(CompiledFragment_t2613193543 * value)
	{
		___CalledOn_12 = value;
		Il2CppCodeGenWriteBarrier(&___CalledOn_12, value);
	}

	inline static int32_t get_offset_of_Arguments_13() { return static_cast<int32_t>(offsetof(MethodOperation_t2287948876, ___Arguments_13)); }
	inline CompiledFragmentU5BU5D_t634647486* get_Arguments_13() const { return ___Arguments_13; }
	inline CompiledFragmentU5BU5D_t634647486** get_address_of_Arguments_13() { return &___Arguments_13; }
	inline void set_Arguments_13(CompiledFragmentU5BU5D_t634647486* value)
	{
		___Arguments_13 = value;
		Il2CppCodeGenWriteBarrier(&___Arguments_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
