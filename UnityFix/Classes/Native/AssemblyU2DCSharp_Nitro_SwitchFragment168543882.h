#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_CodeFragment4001624203.h"

// Nitro.BracketFragment
struct BracketFragment_t1567982410;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.SwitchFragment
struct  SwitchFragment_t168543882  : public CodeFragment_t4001624203
{
public:
	// Nitro.BracketFragment Nitro.SwitchFragment::Body
	BracketFragment_t1567982410 * ___Body_6;
	// Nitro.BracketFragment Nitro.SwitchFragment::Parameters
	BracketFragment_t1567982410 * ___Parameters_7;

public:
	inline static int32_t get_offset_of_Body_6() { return static_cast<int32_t>(offsetof(SwitchFragment_t168543882, ___Body_6)); }
	inline BracketFragment_t1567982410 * get_Body_6() const { return ___Body_6; }
	inline BracketFragment_t1567982410 ** get_address_of_Body_6() { return &___Body_6; }
	inline void set_Body_6(BracketFragment_t1567982410 * value)
	{
		___Body_6 = value;
		Il2CppCodeGenWriteBarrier(&___Body_6, value);
	}

	inline static int32_t get_offset_of_Parameters_7() { return static_cast<int32_t>(offsetof(SwitchFragment_t168543882, ___Parameters_7)); }
	inline BracketFragment_t1567982410 * get_Parameters_7() const { return ___Parameters_7; }
	inline BracketFragment_t1567982410 ** get_address_of_Parameters_7() { return &___Parameters_7; }
	inline void set_Parameters_7(BracketFragment_t1567982410 * value)
	{
		___Parameters_7 = value;
		Il2CppCodeGenWriteBarrier(&___Parameters_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
