#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_CodeFragment4001624203.h"

// System.String
struct String_t;
// Nitro.BracketFragment
struct BracketFragment_t1567982410;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.ForFragment
struct  ForFragment_t177920425  : public CodeFragment_t4001624203
{
public:
	// System.String Nitro.ForFragment::Value
	String_t* ___Value_6;
	// Nitro.BracketFragment Nitro.ForFragment::Body
	BracketFragment_t1567982410 * ___Body_7;
	// Nitro.BracketFragment Nitro.ForFragment::Parameters
	BracketFragment_t1567982410 * ___Parameters_8;

public:
	inline static int32_t get_offset_of_Value_6() { return static_cast<int32_t>(offsetof(ForFragment_t177920425, ___Value_6)); }
	inline String_t* get_Value_6() const { return ___Value_6; }
	inline String_t** get_address_of_Value_6() { return &___Value_6; }
	inline void set_Value_6(String_t* value)
	{
		___Value_6 = value;
		Il2CppCodeGenWriteBarrier(&___Value_6, value);
	}

	inline static int32_t get_offset_of_Body_7() { return static_cast<int32_t>(offsetof(ForFragment_t177920425, ___Body_7)); }
	inline BracketFragment_t1567982410 * get_Body_7() const { return ___Body_7; }
	inline BracketFragment_t1567982410 ** get_address_of_Body_7() { return &___Body_7; }
	inline void set_Body_7(BracketFragment_t1567982410 * value)
	{
		___Body_7 = value;
		Il2CppCodeGenWriteBarrier(&___Body_7, value);
	}

	inline static int32_t get_offset_of_Parameters_8() { return static_cast<int32_t>(offsetof(ForFragment_t177920425, ___Parameters_8)); }
	inline BracketFragment_t1567982410 * get_Parameters_8() const { return ___Parameters_8; }
	inline BracketFragment_t1567982410 ** get_address_of_Parameters_8() { return &___Parameters_8; }
	inline void set_Parameters_8(BracketFragment_t1567982410 * value)
	{
		___Parameters_8 = value;
		Il2CppCodeGenWriteBarrier(&___Parameters_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
