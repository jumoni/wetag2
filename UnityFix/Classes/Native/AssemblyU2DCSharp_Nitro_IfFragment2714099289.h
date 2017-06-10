#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_CodeFragment4001624203.h"

// Nitro.IfFragment
struct IfFragment_t2714099289;
// Nitro.BracketFragment
struct BracketFragment_t1567982410;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.IfFragment
struct  IfFragment_t2714099289  : public CodeFragment_t4001624203
{
public:
	// Nitro.IfFragment Nitro.IfFragment::ApplyElseTo
	IfFragment_t2714099289 * ___ApplyElseTo_6;
	// Nitro.BracketFragment Nitro.IfFragment::IfTrue
	BracketFragment_t1567982410 * ___IfTrue_7;
	// Nitro.BracketFragment Nitro.IfFragment::IfFalse
	BracketFragment_t1567982410 * ___IfFalse_8;
	// Nitro.BracketFragment Nitro.IfFragment::Condition
	BracketFragment_t1567982410 * ___Condition_9;

public:
	inline static int32_t get_offset_of_ApplyElseTo_6() { return static_cast<int32_t>(offsetof(IfFragment_t2714099289, ___ApplyElseTo_6)); }
	inline IfFragment_t2714099289 * get_ApplyElseTo_6() const { return ___ApplyElseTo_6; }
	inline IfFragment_t2714099289 ** get_address_of_ApplyElseTo_6() { return &___ApplyElseTo_6; }
	inline void set_ApplyElseTo_6(IfFragment_t2714099289 * value)
	{
		___ApplyElseTo_6 = value;
		Il2CppCodeGenWriteBarrier(&___ApplyElseTo_6, value);
	}

	inline static int32_t get_offset_of_IfTrue_7() { return static_cast<int32_t>(offsetof(IfFragment_t2714099289, ___IfTrue_7)); }
	inline BracketFragment_t1567982410 * get_IfTrue_7() const { return ___IfTrue_7; }
	inline BracketFragment_t1567982410 ** get_address_of_IfTrue_7() { return &___IfTrue_7; }
	inline void set_IfTrue_7(BracketFragment_t1567982410 * value)
	{
		___IfTrue_7 = value;
		Il2CppCodeGenWriteBarrier(&___IfTrue_7, value);
	}

	inline static int32_t get_offset_of_IfFalse_8() { return static_cast<int32_t>(offsetof(IfFragment_t2714099289, ___IfFalse_8)); }
	inline BracketFragment_t1567982410 * get_IfFalse_8() const { return ___IfFalse_8; }
	inline BracketFragment_t1567982410 ** get_address_of_IfFalse_8() { return &___IfFalse_8; }
	inline void set_IfFalse_8(BracketFragment_t1567982410 * value)
	{
		___IfFalse_8 = value;
		Il2CppCodeGenWriteBarrier(&___IfFalse_8, value);
	}

	inline static int32_t get_offset_of_Condition_9() { return static_cast<int32_t>(offsetof(IfFragment_t2714099289, ___Condition_9)); }
	inline BracketFragment_t1567982410 * get_Condition_9() const { return ___Condition_9; }
	inline BracketFragment_t1567982410 ** get_address_of_Condition_9() { return &___Condition_9; }
	inline void set_Condition_9(BracketFragment_t1567982410 * value)
	{
		___Condition_9 = value;
		Il2CppCodeGenWriteBarrier(&___Condition_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
