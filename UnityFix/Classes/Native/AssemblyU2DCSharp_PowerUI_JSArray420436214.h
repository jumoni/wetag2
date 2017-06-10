#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_JSObject761237906.h"

// System.Collections.Generic.Dictionary`2<System.String,PowerUI.JSObject>
struct Dictionary_2_t2676017168;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.JSArray
struct  JSArray_t420436214  : public JSObject_t761237906
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,PowerUI.JSObject> PowerUI.JSArray::Values
	Dictionary_2_t2676017168 * ___Values_0;

public:
	inline static int32_t get_offset_of_Values_0() { return static_cast<int32_t>(offsetof(JSArray_t420436214, ___Values_0)); }
	inline Dictionary_2_t2676017168 * get_Values_0() const { return ___Values_0; }
	inline Dictionary_2_t2676017168 ** get_address_of_Values_0() { return &___Values_0; }
	inline void set_Values_0(Dictionary_2_t2676017168 * value)
	{
		___Values_0 = value;
		Il2CppCodeGenWriteBarrier(&___Values_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
