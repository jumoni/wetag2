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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.IndexFragment
struct  IndexFragment_t4151693758  : public CodeFragment_t4001624203
{
public:
	// Nitro.CodeFragment Nitro.IndexFragment::Brackets
	CodeFragment_t4001624203 * ___Brackets_6;
	// Nitro.CodeFragment Nitro.IndexFragment::Variable
	CodeFragment_t4001624203 * ___Variable_7;

public:
	inline static int32_t get_offset_of_Brackets_6() { return static_cast<int32_t>(offsetof(IndexFragment_t4151693758, ___Brackets_6)); }
	inline CodeFragment_t4001624203 * get_Brackets_6() const { return ___Brackets_6; }
	inline CodeFragment_t4001624203 ** get_address_of_Brackets_6() { return &___Brackets_6; }
	inline void set_Brackets_6(CodeFragment_t4001624203 * value)
	{
		___Brackets_6 = value;
		Il2CppCodeGenWriteBarrier(&___Brackets_6, value);
	}

	inline static int32_t get_offset_of_Variable_7() { return static_cast<int32_t>(offsetof(IndexFragment_t4151693758, ___Variable_7)); }
	inline CodeFragment_t4001624203 * get_Variable_7() const { return ___Variable_7; }
	inline CodeFragment_t4001624203 ** get_address_of_Variable_7() { return &___Variable_7; }
	inline void set_Variable_7(CodeFragment_t4001624203 * value)
	{
		___Variable_7 = value;
		Il2CppCodeGenWriteBarrier(&___Variable_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
