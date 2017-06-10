#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Timers.Timer
struct Timer_t4294691011;
// PowerUI.OnUITimer
struct OnUITimer_t3247156572;
// Nitro.DynamicMethod`1<Nitro.Void>
struct DynamicMethod_1_t377489974;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.UITimer
struct  UITimer_t3996902997  : public Il2CppObject
{
public:
	// System.Boolean PowerUI.UITimer::OneOff
	bool ___OneOff_0;
	// System.Timers.Timer PowerUI.UITimer::InternalTimer
	Timer_t4294691011 * ___InternalTimer_1;
	// PowerUI.OnUITimer PowerUI.UITimer::OnComplete
	OnUITimer_t3247156572 * ___OnComplete_2;
	// Nitro.DynamicMethod`1<Nitro.Void> PowerUI.UITimer::Callback
	DynamicMethod_1_t377489974 * ___Callback_3;

public:
	inline static int32_t get_offset_of_OneOff_0() { return static_cast<int32_t>(offsetof(UITimer_t3996902997, ___OneOff_0)); }
	inline bool get_OneOff_0() const { return ___OneOff_0; }
	inline bool* get_address_of_OneOff_0() { return &___OneOff_0; }
	inline void set_OneOff_0(bool value)
	{
		___OneOff_0 = value;
	}

	inline static int32_t get_offset_of_InternalTimer_1() { return static_cast<int32_t>(offsetof(UITimer_t3996902997, ___InternalTimer_1)); }
	inline Timer_t4294691011 * get_InternalTimer_1() const { return ___InternalTimer_1; }
	inline Timer_t4294691011 ** get_address_of_InternalTimer_1() { return &___InternalTimer_1; }
	inline void set_InternalTimer_1(Timer_t4294691011 * value)
	{
		___InternalTimer_1 = value;
		Il2CppCodeGenWriteBarrier(&___InternalTimer_1, value);
	}

	inline static int32_t get_offset_of_OnComplete_2() { return static_cast<int32_t>(offsetof(UITimer_t3996902997, ___OnComplete_2)); }
	inline OnUITimer_t3247156572 * get_OnComplete_2() const { return ___OnComplete_2; }
	inline OnUITimer_t3247156572 ** get_address_of_OnComplete_2() { return &___OnComplete_2; }
	inline void set_OnComplete_2(OnUITimer_t3247156572 * value)
	{
		___OnComplete_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_2, value);
	}

	inline static int32_t get_offset_of_Callback_3() { return static_cast<int32_t>(offsetof(UITimer_t3996902997, ___Callback_3)); }
	inline DynamicMethod_1_t377489974 * get_Callback_3() const { return ___Callback_3; }
	inline DynamicMethod_1_t377489974 ** get_address_of_Callback_3() { return &___Callback_3; }
	inline void set_Callback_3(DynamicMethod_1_t377489974 * value)
	{
		___Callback_3 = value;
		Il2CppCodeGenWriteBarrier(&___Callback_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
