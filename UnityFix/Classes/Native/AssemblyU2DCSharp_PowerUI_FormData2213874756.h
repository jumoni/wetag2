#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.Element
struct Element_t3532621832;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.FormData
struct  FormData_t2213874756  : public Il2CppObject
{
public:
	// PowerUI.Element PowerUI.FormData::form
	Element_t3532621832 * ___form_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PowerUI.FormData::RawFields
	Dictionary_2_t3943999495 * ___RawFields_1;

public:
	inline static int32_t get_offset_of_form_0() { return static_cast<int32_t>(offsetof(FormData_t2213874756, ___form_0)); }
	inline Element_t3532621832 * get_form_0() const { return ___form_0; }
	inline Element_t3532621832 ** get_address_of_form_0() { return &___form_0; }
	inline void set_form_0(Element_t3532621832 * value)
	{
		___form_0 = value;
		Il2CppCodeGenWriteBarrier(&___form_0, value);
	}

	inline static int32_t get_offset_of_RawFields_1() { return static_cast<int32_t>(offsetof(FormData_t2213874756, ___RawFields_1)); }
	inline Dictionary_2_t3943999495 * get_RawFields_1() const { return ___RawFields_1; }
	inline Dictionary_2_t3943999495 ** get_address_of_RawFields_1() { return &___RawFields_1; }
	inline void set_RawFields_1(Dictionary_2_t3943999495 * value)
	{
		___RawFields_1 = value;
		Il2CppCodeGenWriteBarrier(&___RawFields_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
