#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_CodeFragment4001624203.h"

// Nitro.CodeFragment
struct CodeFragment_t4001624203;
// Nitro.BracketFragment
struct BracketFragment_t1567982410;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.MethodFragment
struct  MethodFragment_t1573725141  : public CodeFragment_t4001624203
{
public:
	// Nitro.CodeFragment Nitro.MethodFragment::MethodName
	CodeFragment_t4001624203 * ___MethodName_6;
	// Nitro.BracketFragment Nitro.MethodFragment::Brackets
	BracketFragment_t1567982410 * ___Brackets_7;

public:
	inline static int32_t get_offset_of_MethodName_6() { return static_cast<int32_t>(offsetof(MethodFragment_t1573725141, ___MethodName_6)); }
	inline CodeFragment_t4001624203 * get_MethodName_6() const { return ___MethodName_6; }
	inline CodeFragment_t4001624203 ** get_address_of_MethodName_6() { return &___MethodName_6; }
	inline void set_MethodName_6(CodeFragment_t4001624203 * value)
	{
		___MethodName_6 = value;
		Il2CppCodeGenWriteBarrier(&___MethodName_6, value);
	}

	inline static int32_t get_offset_of_Brackets_7() { return static_cast<int32_t>(offsetof(MethodFragment_t1573725141, ___Brackets_7)); }
	inline BracketFragment_t1567982410 * get_Brackets_7() const { return ___Brackets_7; }
	inline BracketFragment_t1567982410 ** get_address_of_Brackets_7() { return &___Brackets_7; }
	inline void set_Brackets_7(BracketFragment_t1567982410 * value)
	{
		___Brackets_7 = value;
		Il2CppCodeGenWriteBarrier(&___Brackets_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
