#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Wrench_MLElement1615846541.h"

// Wrench.LanguageSet
struct LanguageSet_t1378258094;
// Wrench.TagHandler
struct TagHandler_t3692634208;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrench.LanguageElement
struct  LanguageElement_t3724534746  : public MLElement_t1615846541
{
public:
	// Wrench.LanguageSet Wrench.LanguageElement::Parent
	LanguageSet_t1378258094 * ___Parent_3;
	// Wrench.TagHandler Wrench.LanguageElement::Handler
	TagHandler_t3692634208 * ___Handler_4;

public:
	inline static int32_t get_offset_of_Parent_3() { return static_cast<int32_t>(offsetof(LanguageElement_t3724534746, ___Parent_3)); }
	inline LanguageSet_t1378258094 * get_Parent_3() const { return ___Parent_3; }
	inline LanguageSet_t1378258094 ** get_address_of_Parent_3() { return &___Parent_3; }
	inline void set_Parent_3(LanguageSet_t1378258094 * value)
	{
		___Parent_3 = value;
		Il2CppCodeGenWriteBarrier(&___Parent_3, value);
	}

	inline static int32_t get_offset_of_Handler_4() { return static_cast<int32_t>(offsetof(LanguageElement_t3724534746, ___Handler_4)); }
	inline TagHandler_t3692634208 * get_Handler_4() const { return ___Handler_4; }
	inline TagHandler_t3692634208 ** get_address_of_Handler_4() { return &___Handler_4; }
	inline void set_Handler_4(TagHandler_t3692634208 * value)
	{
		___Handler_4 = value;
		Il2CppCodeGenWriteBarrier(&___Handler_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
