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
// PowerUI.AttributeLookupLink
struct AttributeLookupLink_t1202338508;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.AttributeLookupLink
struct  AttributeLookupLink_t1202338508  : public Il2CppObject
{
public:
	// PowerUI.Element PowerUI.AttributeLookupLink::Element
	Element_t3532621832 * ___Element_0;
	// PowerUI.AttributeLookupLink PowerUI.AttributeLookupLink::Next
	AttributeLookupLink_t1202338508 * ___Next_1;

public:
	inline static int32_t get_offset_of_Element_0() { return static_cast<int32_t>(offsetof(AttributeLookupLink_t1202338508, ___Element_0)); }
	inline Element_t3532621832 * get_Element_0() const { return ___Element_0; }
	inline Element_t3532621832 ** get_address_of_Element_0() { return &___Element_0; }
	inline void set_Element_0(Element_t3532621832 * value)
	{
		___Element_0 = value;
		Il2CppCodeGenWriteBarrier(&___Element_0, value);
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(AttributeLookupLink_t1202338508, ___Next_1)); }
	inline AttributeLookupLink_t1202338508 * get_Next_1() const { return ___Next_1; }
	inline AttributeLookupLink_t1202338508 ** get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(AttributeLookupLink_t1202338508 * value)
	{
		___Next_1 = value;
		Il2CppCodeGenWriteBarrier(&___Next_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
