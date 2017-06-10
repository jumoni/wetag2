#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Wrench_Gender2952802957.h"
#include "AssemblyU2DCSharp_Wrench_WhitespaceMode2323598366.h"

// System.String
struct String_t;
// Wrench.LanguageChange
struct LanguageChange_t479106978;
// Wrench.TextModifierChange
struct TextModifierChange_t3642518626;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrench.Text
struct  Text_t239628111  : public Il2CppObject
{
public:

public:
};

struct Text_t239628111_StaticFields
{
public:
	// System.String Wrench.Text::_Language
	String_t* ____Language_0;
	// System.String Wrench.Text::VariableModifiers
	String_t* ___VariableModifiers_1;
	// Wrench.Gender Wrench.Text::_Gender
	int32_t ____Gender_2;
	// Wrench.LanguageChange Wrench.Text::OnLanguageChanged
	LanguageChange_t479106978 * ___OnLanguageChanged_3;
	// Wrench.TextModifierChange Wrench.Text::OnGenderChanged
	TextModifierChange_t3642518626 * ___OnGenderChanged_4;
	// Wrench.WhitespaceMode Wrench.Text::Whitespace
	int32_t ___Whitespace_5;

public:
	inline static int32_t get_offset_of__Language_0() { return static_cast<int32_t>(offsetof(Text_t239628111_StaticFields, ____Language_0)); }
	inline String_t* get__Language_0() const { return ____Language_0; }
	inline String_t** get_address_of__Language_0() { return &____Language_0; }
	inline void set__Language_0(String_t* value)
	{
		____Language_0 = value;
		Il2CppCodeGenWriteBarrier(&____Language_0, value);
	}

	inline static int32_t get_offset_of_VariableModifiers_1() { return static_cast<int32_t>(offsetof(Text_t239628111_StaticFields, ___VariableModifiers_1)); }
	inline String_t* get_VariableModifiers_1() const { return ___VariableModifiers_1; }
	inline String_t** get_address_of_VariableModifiers_1() { return &___VariableModifiers_1; }
	inline void set_VariableModifiers_1(String_t* value)
	{
		___VariableModifiers_1 = value;
		Il2CppCodeGenWriteBarrier(&___VariableModifiers_1, value);
	}

	inline static int32_t get_offset_of__Gender_2() { return static_cast<int32_t>(offsetof(Text_t239628111_StaticFields, ____Gender_2)); }
	inline int32_t get__Gender_2() const { return ____Gender_2; }
	inline int32_t* get_address_of__Gender_2() { return &____Gender_2; }
	inline void set__Gender_2(int32_t value)
	{
		____Gender_2 = value;
	}

	inline static int32_t get_offset_of_OnLanguageChanged_3() { return static_cast<int32_t>(offsetof(Text_t239628111_StaticFields, ___OnLanguageChanged_3)); }
	inline LanguageChange_t479106978 * get_OnLanguageChanged_3() const { return ___OnLanguageChanged_3; }
	inline LanguageChange_t479106978 ** get_address_of_OnLanguageChanged_3() { return &___OnLanguageChanged_3; }
	inline void set_OnLanguageChanged_3(LanguageChange_t479106978 * value)
	{
		___OnLanguageChanged_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnLanguageChanged_3, value);
	}

	inline static int32_t get_offset_of_OnGenderChanged_4() { return static_cast<int32_t>(offsetof(Text_t239628111_StaticFields, ___OnGenderChanged_4)); }
	inline TextModifierChange_t3642518626 * get_OnGenderChanged_4() const { return ___OnGenderChanged_4; }
	inline TextModifierChange_t3642518626 ** get_address_of_OnGenderChanged_4() { return &___OnGenderChanged_4; }
	inline void set_OnGenderChanged_4(TextModifierChange_t3642518626 * value)
	{
		___OnGenderChanged_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnGenderChanged_4, value);
	}

	inline static int32_t get_offset_of_Whitespace_5() { return static_cast<int32_t>(offsetof(Text_t239628111_StaticFields, ___Whitespace_5)); }
	inline int32_t get_Whitespace_5() const { return ___Whitespace_5; }
	inline int32_t* get_address_of_Whitespace_5() { return &___Whitespace_5; }
	inline void set_Whitespace_5(int32_t value)
	{
		___Whitespace_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
