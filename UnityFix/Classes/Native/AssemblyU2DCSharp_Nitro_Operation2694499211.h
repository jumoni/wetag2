#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_CompiledFragment2613193543.h"

// Nitro.CompiledMethod
struct CompiledMethod_t1616556204;
// Nitro.CompiledFragment
struct CompiledFragment_t2613193543;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.Operation
struct  Operation_t2694499211  : public CompiledFragment_t2613193543
{
public:
	// System.Int32 Nitro.Operation::LineNumber
	int32_t ___LineNumber_7;
	// Nitro.CompiledMethod Nitro.Operation::Method
	CompiledMethod_t1616556204 * ___Method_8;
	// Nitro.CompiledFragment Nitro.Operation::Input0
	CompiledFragment_t2613193543 * ___Input0_9;
	// Nitro.CompiledFragment Nitro.Operation::Input1
	CompiledFragment_t2613193543 * ___Input1_10;

public:
	inline static int32_t get_offset_of_LineNumber_7() { return static_cast<int32_t>(offsetof(Operation_t2694499211, ___LineNumber_7)); }
	inline int32_t get_LineNumber_7() const { return ___LineNumber_7; }
	inline int32_t* get_address_of_LineNumber_7() { return &___LineNumber_7; }
	inline void set_LineNumber_7(int32_t value)
	{
		___LineNumber_7 = value;
	}

	inline static int32_t get_offset_of_Method_8() { return static_cast<int32_t>(offsetof(Operation_t2694499211, ___Method_8)); }
	inline CompiledMethod_t1616556204 * get_Method_8() const { return ___Method_8; }
	inline CompiledMethod_t1616556204 ** get_address_of_Method_8() { return &___Method_8; }
	inline void set_Method_8(CompiledMethod_t1616556204 * value)
	{
		___Method_8 = value;
		Il2CppCodeGenWriteBarrier(&___Method_8, value);
	}

	inline static int32_t get_offset_of_Input0_9() { return static_cast<int32_t>(offsetof(Operation_t2694499211, ___Input0_9)); }
	inline CompiledFragment_t2613193543 * get_Input0_9() const { return ___Input0_9; }
	inline CompiledFragment_t2613193543 ** get_address_of_Input0_9() { return &___Input0_9; }
	inline void set_Input0_9(CompiledFragment_t2613193543 * value)
	{
		___Input0_9 = value;
		Il2CppCodeGenWriteBarrier(&___Input0_9, value);
	}

	inline static int32_t get_offset_of_Input1_10() { return static_cast<int32_t>(offsetof(Operation_t2694499211, ___Input1_10)); }
	inline CompiledFragment_t2613193543 * get_Input1_10() const { return ___Input1_10; }
	inline CompiledFragment_t2613193543 ** get_address_of_Input1_10() { return &___Input1_10; }
	inline void set_Input1_10(CompiledFragment_t2613193543 * value)
	{
		___Input1_10 = value;
		Il2CppCodeGenWriteBarrier(&___Input1_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
