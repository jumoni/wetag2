#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Wrench_LanguageTagHandler1713423150.h"

// System.String
struct String_t;
// Wrench.LanguageSet
struct LanguageSet_t1378258094;
// Wrench.LanguageElement
struct LanguageElement_t3724534746;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrench.VariableTag
struct  VariableTag_t2464730174  : public LanguageTagHandler_t1713423150
{
public:
	// System.String Wrench.VariableTag::Gender
	String_t* ___Gender_2;
	// Wrench.LanguageSet Wrench.VariableTag::Parent
	LanguageSet_t1378258094 * ___Parent_3;
	// Wrench.LanguageElement Wrench.VariableTag::Element
	LanguageElement_t3724534746 * ___Element_4;

public:
	inline static int32_t get_offset_of_Gender_2() { return static_cast<int32_t>(offsetof(VariableTag_t2464730174, ___Gender_2)); }
	inline String_t* get_Gender_2() const { return ___Gender_2; }
	inline String_t** get_address_of_Gender_2() { return &___Gender_2; }
	inline void set_Gender_2(String_t* value)
	{
		___Gender_2 = value;
		Il2CppCodeGenWriteBarrier(&___Gender_2, value);
	}

	inline static int32_t get_offset_of_Parent_3() { return static_cast<int32_t>(offsetof(VariableTag_t2464730174, ___Parent_3)); }
	inline LanguageSet_t1378258094 * get_Parent_3() const { return ___Parent_3; }
	inline LanguageSet_t1378258094 ** get_address_of_Parent_3() { return &___Parent_3; }
	inline void set_Parent_3(LanguageSet_t1378258094 * value)
	{
		___Parent_3 = value;
		Il2CppCodeGenWriteBarrier(&___Parent_3, value);
	}

	inline static int32_t get_offset_of_Element_4() { return static_cast<int32_t>(offsetof(VariableTag_t2464730174, ___Element_4)); }
	inline LanguageElement_t3724534746 * get_Element_4() const { return ___Element_4; }
	inline LanguageElement_t3724534746 ** get_address_of_Element_4() { return &___Element_4; }
	inline void set_Element_4(LanguageElement_t3724534746 * value)
	{
		___Element_4 = value;
		Il2CppCodeGenWriteBarrier(&___Element_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
