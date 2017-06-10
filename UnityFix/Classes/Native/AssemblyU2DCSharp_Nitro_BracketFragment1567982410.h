#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_CodeFragment4001624203.h"

// System.Char[]
struct CharU5BU5D_t1328083999;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.BracketFragment
struct  BracketFragment_t1567982410  : public CodeFragment_t4001624203
{
public:
	// System.Char Nitro.BracketFragment::Bracket
	Il2CppChar ___Bracket_8;
	// System.Char Nitro.BracketFragment::CloseBracket
	Il2CppChar ___CloseBracket_9;

public:
	inline static int32_t get_offset_of_Bracket_8() { return static_cast<int32_t>(offsetof(BracketFragment_t1567982410, ___Bracket_8)); }
	inline Il2CppChar get_Bracket_8() const { return ___Bracket_8; }
	inline Il2CppChar* get_address_of_Bracket_8() { return &___Bracket_8; }
	inline void set_Bracket_8(Il2CppChar value)
	{
		___Bracket_8 = value;
	}

	inline static int32_t get_offset_of_CloseBracket_9() { return static_cast<int32_t>(offsetof(BracketFragment_t1567982410, ___CloseBracket_9)); }
	inline Il2CppChar get_CloseBracket_9() const { return ___CloseBracket_9; }
	inline Il2CppChar* get_address_of_CloseBracket_9() { return &___CloseBracket_9; }
	inline void set_CloseBracket_9(Il2CppChar value)
	{
		___CloseBracket_9 = value;
	}
};

struct BracketFragment_t1567982410_StaticFields
{
public:
	// System.Char[] Nitro.BracketFragment::Brackets
	CharU5BU5D_t1328083999* ___Brackets_6;
	// System.Char[] Nitro.BracketFragment::EndBrackets
	CharU5BU5D_t1328083999* ___EndBrackets_7;

public:
	inline static int32_t get_offset_of_Brackets_6() { return static_cast<int32_t>(offsetof(BracketFragment_t1567982410_StaticFields, ___Brackets_6)); }
	inline CharU5BU5D_t1328083999* get_Brackets_6() const { return ___Brackets_6; }
	inline CharU5BU5D_t1328083999** get_address_of_Brackets_6() { return &___Brackets_6; }
	inline void set_Brackets_6(CharU5BU5D_t1328083999* value)
	{
		___Brackets_6 = value;
		Il2CppCodeGenWriteBarrier(&___Brackets_6, value);
	}

	inline static int32_t get_offset_of_EndBrackets_7() { return static_cast<int32_t>(offsetof(BracketFragment_t1567982410_StaticFields, ___EndBrackets_7)); }
	inline CharU5BU5D_t1328083999* get_EndBrackets_7() const { return ___EndBrackets_7; }
	inline CharU5BU5D_t1328083999** get_address_of_EndBrackets_7() { return &___EndBrackets_7; }
	inline void set_EndBrackets_7(CharU5BU5D_t1328083999* value)
	{
		___EndBrackets_7 = value;
		Il2CppCodeGenWriteBarrier(&___EndBrackets_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
