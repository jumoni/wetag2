#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.Callback
struct Callback_t3120320591;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Callback
struct  Callback_t3120320591  : public Il2CppObject
{
public:
	// PowerUI.Callback PowerUI.Callback::NextCallback
	Callback_t3120320591 * ___NextCallback_0;

public:
	inline static int32_t get_offset_of_NextCallback_0() { return static_cast<int32_t>(offsetof(Callback_t3120320591, ___NextCallback_0)); }
	inline Callback_t3120320591 * get_NextCallback_0() const { return ___NextCallback_0; }
	inline Callback_t3120320591 ** get_address_of_NextCallback_0() { return &___NextCallback_0; }
	inline void set_NextCallback_0(Callback_t3120320591 * value)
	{
		___NextCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___NextCallback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
