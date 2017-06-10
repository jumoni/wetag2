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

// Nitro.ConstructorFragment
struct  ConstructorFragment_t3925404206  : public CodeFragment_t4001624203
{
public:
	// Nitro.TypeFragment Nitro.ConstructorFragment::NewType
	TypeFragment_t3643441850 * ___NewType_6;
	// Nitro.BracketFragment Nitro.ConstructorFragment::Brackets
	BracketFragment_t1567982410 * ___Brackets_7;

public:
	inline static int32_t get_offset_of_NewType_6() { return static_cast<int32_t>(offsetof(ConstructorFragment_t3925404206, ___NewType_6)); }
	inline TypeFragment_t3643441850 * get_NewType_6() const { return ___NewType_6; }
	inline TypeFragment_t3643441850 ** get_address_of_NewType_6() { return &___NewType_6; }
	inline void set_NewType_6(TypeFragment_t3643441850 * value)
	{
		___NewType_6 = value;
		Il2CppCodeGenWriteBarrier(&___NewType_6, value);
	}

	inline static int32_t get_offset_of_Brackets_7() { return static_cast<int32_t>(offsetof(ConstructorFragment_t3925404206, ___Brackets_7)); }
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
