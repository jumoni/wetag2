#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_Operation2694499211.h"

// Nitro.Variable
struct Variable_t4053548118;
// Nitro.BracketFragment
struct BracketFragment_t1567982410;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.SwitchOperation
struct  SwitchOperation_t1463531025  : public Operation_t2694499211
{
public:
	// Nitro.Variable Nitro.SwitchOperation::Switching
	Variable_t4053548118 * ___Switching_11;
	// Nitro.BracketFragment Nitro.SwitchOperation::Body
	BracketFragment_t1567982410 * ___Body_12;

public:
	inline static int32_t get_offset_of_Switching_11() { return static_cast<int32_t>(offsetof(SwitchOperation_t1463531025, ___Switching_11)); }
	inline Variable_t4053548118 * get_Switching_11() const { return ___Switching_11; }
	inline Variable_t4053548118 ** get_address_of_Switching_11() { return &___Switching_11; }
	inline void set_Switching_11(Variable_t4053548118 * value)
	{
		___Switching_11 = value;
		Il2CppCodeGenWriteBarrier(&___Switching_11, value);
	}

	inline static int32_t get_offset_of_Body_12() { return static_cast<int32_t>(offsetof(SwitchOperation_t1463531025, ___Body_12)); }
	inline BracketFragment_t1567982410 * get_Body_12() const { return ___Body_12; }
	inline BracketFragment_t1567982410 ** get_address_of_Body_12() { return &___Body_12; }
	inline void set_Body_12(BracketFragment_t1567982410 * value)
	{
		___Body_12 = value;
		Il2CppCodeGenWriteBarrier(&___Body_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
