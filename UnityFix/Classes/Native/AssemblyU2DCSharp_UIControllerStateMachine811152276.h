#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_StateMachineBehaviour2151245329.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Single>
struct Dictionary_2_t1084335567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIControllerStateMachine
struct  UIControllerStateMachine_t811152276  : public StateMachineBehaviour_t2151245329
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Single> UIControllerStateMachine::normalizedTimes
	Dictionary_2_t1084335567 * ___normalizedTimes_2;

public:
	inline static int32_t get_offset_of_normalizedTimes_2() { return static_cast<int32_t>(offsetof(UIControllerStateMachine_t811152276, ___normalizedTimes_2)); }
	inline Dictionary_2_t1084335567 * get_normalizedTimes_2() const { return ___normalizedTimes_2; }
	inline Dictionary_2_t1084335567 ** get_address_of_normalizedTimes_2() { return &___normalizedTimes_2; }
	inline void set_normalizedTimes_2(Dictionary_2_t1084335567 * value)
	{
		___normalizedTimes_2 = value;
		Il2CppCodeGenWriteBarrier(&___normalizedTimes_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
