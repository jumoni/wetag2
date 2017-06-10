#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_Operation2694499211.h"

// Nitro.BracketFragment
struct BracketFragment_t1567982410;
// Nitro.CompiledFragment[]
struct CompiledFragmentU5BU5D_t634647486;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.ForOperation
struct  ForOperation_t2667720030  : public Operation_t2694499211
{
public:
	// Nitro.BracketFragment Nitro.ForOperation::Body
	BracketFragment_t1567982410 * ___Body_11;
	// Nitro.CompiledFragment[] Nitro.ForOperation::Parameters
	CompiledFragmentU5BU5D_t634647486* ___Parameters_12;

public:
	inline static int32_t get_offset_of_Body_11() { return static_cast<int32_t>(offsetof(ForOperation_t2667720030, ___Body_11)); }
	inline BracketFragment_t1567982410 * get_Body_11() const { return ___Body_11; }
	inline BracketFragment_t1567982410 ** get_address_of_Body_11() { return &___Body_11; }
	inline void set_Body_11(BracketFragment_t1567982410 * value)
	{
		___Body_11 = value;
		Il2CppCodeGenWriteBarrier(&___Body_11, value);
	}

	inline static int32_t get_offset_of_Parameters_12() { return static_cast<int32_t>(offsetof(ForOperation_t2667720030, ___Parameters_12)); }
	inline CompiledFragmentU5BU5D_t634647486* get_Parameters_12() const { return ___Parameters_12; }
	inline CompiledFragmentU5BU5D_t634647486** get_address_of_Parameters_12() { return &___Parameters_12; }
	inline void set_Parameters_12(CompiledFragmentU5BU5D_t634647486* value)
	{
		___Parameters_12 = value;
		Il2CppCodeGenWriteBarrier(&___Parameters_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
