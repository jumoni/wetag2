#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,PowerUI.AttributeLookupLink>
struct Dictionary_2_t3117117770;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.AttributeLookup
struct  AttributeLookup_t2708705364  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,PowerUI.AttributeLookupLink> PowerUI.AttributeLookup::Lookup
	Dictionary_2_t3117117770 * ___Lookup_0;

public:
	inline static int32_t get_offset_of_Lookup_0() { return static_cast<int32_t>(offsetof(AttributeLookup_t2708705364, ___Lookup_0)); }
	inline Dictionary_2_t3117117770 * get_Lookup_0() const { return ___Lookup_0; }
	inline Dictionary_2_t3117117770 ** get_address_of_Lookup_0() { return &___Lookup_0; }
	inline void set_Lookup_0(Dictionary_2_t3117117770 * value)
	{
		___Lookup_0 = value;
		Il2CppCodeGenWriteBarrier(&___Lookup_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
