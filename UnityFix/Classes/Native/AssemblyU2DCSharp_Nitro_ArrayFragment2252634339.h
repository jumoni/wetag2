#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_CodeFragment4001624203.h"

// Nitro.TypeFragment
struct TypeFragment_t3643441850;
// Nitro.BracketFragment
struct BracketFragment_t1567982410;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.ArrayFragment
struct  ArrayFragment_t2252634339  : public CodeFragment_t4001624203
{
public:
	// Nitro.TypeFragment Nitro.ArrayFragment::ArrayType
	TypeFragment_t3643441850 * ___ArrayType_6;
	// Nitro.BracketFragment Nitro.ArrayFragment::Defaults
	BracketFragment_t1567982410 * ___Defaults_7;

public:
	inline static int32_t get_offset_of_ArrayType_6() { return static_cast<int32_t>(offsetof(ArrayFragment_t2252634339, ___ArrayType_6)); }
	inline TypeFragment_t3643441850 * get_ArrayType_6() const { return ___ArrayType_6; }
	inline TypeFragment_t3643441850 ** get_address_of_ArrayType_6() { return &___ArrayType_6; }
	inline void set_ArrayType_6(TypeFragment_t3643441850 * value)
	{
		___ArrayType_6 = value;
		Il2CppCodeGenWriteBarrier(&___ArrayType_6, value);
	}

	inline static int32_t get_offset_of_Defaults_7() { return static_cast<int32_t>(offsetof(ArrayFragment_t2252634339, ___Defaults_7)); }
	inline BracketFragment_t1567982410 * get_Defaults_7() const { return ___Defaults_7; }
	inline BracketFragment_t1567982410 ** get_address_of_Defaults_7() { return &___Defaults_7; }
	inline void set_Defaults_7(BracketFragment_t1567982410 * value)
	{
		___Defaults_7 = value;
		Il2CppCodeGenWriteBarrier(&___Defaults_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
