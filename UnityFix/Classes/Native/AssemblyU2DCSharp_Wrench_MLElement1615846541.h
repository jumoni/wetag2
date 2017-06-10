#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrench.MLElement
struct  MLElement_t1615846541  : public Il2CppObject
{
public:
	// System.String Wrench.MLElement::Tag
	String_t* ___Tag_0;
	// System.Boolean Wrench.MLElement::SelfClosing
	bool ___SelfClosing_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Wrench.MLElement::Properties
	Dictionary_2_t3943999495 * ___Properties_2;

public:
	inline static int32_t get_offset_of_Tag_0() { return static_cast<int32_t>(offsetof(MLElement_t1615846541, ___Tag_0)); }
	inline String_t* get_Tag_0() const { return ___Tag_0; }
	inline String_t** get_address_of_Tag_0() { return &___Tag_0; }
	inline void set_Tag_0(String_t* value)
	{
		___Tag_0 = value;
		Il2CppCodeGenWriteBarrier(&___Tag_0, value);
	}

	inline static int32_t get_offset_of_SelfClosing_1() { return static_cast<int32_t>(offsetof(MLElement_t1615846541, ___SelfClosing_1)); }
	inline bool get_SelfClosing_1() const { return ___SelfClosing_1; }
	inline bool* get_address_of_SelfClosing_1() { return &___SelfClosing_1; }
	inline void set_SelfClosing_1(bool value)
	{
		___SelfClosing_1 = value;
	}

	inline static int32_t get_offset_of_Properties_2() { return static_cast<int32_t>(offsetof(MLElement_t1615846541, ___Properties_2)); }
	inline Dictionary_2_t3943999495 * get_Properties_2() const { return ___Properties_2; }
	inline Dictionary_2_t3943999495 ** get_address_of_Properties_2() { return &___Properties_2; }
	inline void set_Properties_2(Dictionary_2_t3943999495 * value)
	{
		___Properties_2 = value;
		Il2CppCodeGenWriteBarrier(&___Properties_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
