#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// EasyUIAnimator.UIAnimation/AnimationCallback
struct AnimationCallback_t525972095;
// EasyUIAnimator.UpdateBehaviour
struct UpdateBehaviour_t3266695810;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyUIAnimator.UIAnimation
struct  UIAnimation_t1105769640  : public Il2CppObject
{
public:
	// System.Single EasyUIAnimator.UIAnimation::timer
	float ___timer_0;
	// System.Single EasyUIAnimator.UIAnimation::delay
	float ___delay_1;
	// System.Boolean EasyUIAnimator.UIAnimation::paused
	bool ___paused_2;
	// EasyUIAnimator.UIAnimation/AnimationCallback EasyUIAnimator.UIAnimation::onFinish
	AnimationCallback_t525972095 * ___onFinish_3;
	// System.Single EasyUIAnimator.UIAnimation::duration
	float ___duration_4;
	// EasyUIAnimator.UpdateBehaviour EasyUIAnimator.UIAnimation::updateBehaviour
	UpdateBehaviour_t3266695810 * ___updateBehaviour_5;

public:
	inline static int32_t get_offset_of_timer_0() { return static_cast<int32_t>(offsetof(UIAnimation_t1105769640, ___timer_0)); }
	inline float get_timer_0() const { return ___timer_0; }
	inline float* get_address_of_timer_0() { return &___timer_0; }
	inline void set_timer_0(float value)
	{
		___timer_0 = value;
	}

	inline static int32_t get_offset_of_delay_1() { return static_cast<int32_t>(offsetof(UIAnimation_t1105769640, ___delay_1)); }
	inline float get_delay_1() const { return ___delay_1; }
	inline float* get_address_of_delay_1() { return &___delay_1; }
	inline void set_delay_1(float value)
	{
		___delay_1 = value;
	}

	inline static int32_t get_offset_of_paused_2() { return static_cast<int32_t>(offsetof(UIAnimation_t1105769640, ___paused_2)); }
	inline bool get_paused_2() const { return ___paused_2; }
	inline bool* get_address_of_paused_2() { return &___paused_2; }
	inline void set_paused_2(bool value)
	{
		___paused_2 = value;
	}

	inline static int32_t get_offset_of_onFinish_3() { return static_cast<int32_t>(offsetof(UIAnimation_t1105769640, ___onFinish_3)); }
	inline AnimationCallback_t525972095 * get_onFinish_3() const { return ___onFinish_3; }
	inline AnimationCallback_t525972095 ** get_address_of_onFinish_3() { return &___onFinish_3; }
	inline void set_onFinish_3(AnimationCallback_t525972095 * value)
	{
		___onFinish_3 = value;
		Il2CppCodeGenWriteBarrier(&___onFinish_3, value);
	}

	inline static int32_t get_offset_of_duration_4() { return static_cast<int32_t>(offsetof(UIAnimation_t1105769640, ___duration_4)); }
	inline float get_duration_4() const { return ___duration_4; }
	inline float* get_address_of_duration_4() { return &___duration_4; }
	inline void set_duration_4(float value)
	{
		___duration_4 = value;
	}

	inline static int32_t get_offset_of_updateBehaviour_5() { return static_cast<int32_t>(offsetof(UIAnimation_t1105769640, ___updateBehaviour_5)); }
	inline UpdateBehaviour_t3266695810 * get_updateBehaviour_5() const { return ___updateBehaviour_5; }
	inline UpdateBehaviour_t3266695810 ** get_address_of_updateBehaviour_5() { return &___updateBehaviour_5; }
	inline void set_updateBehaviour_5(UpdateBehaviour_t3266695810 * value)
	{
		___updateBehaviour_5 = value;
		Il2CppCodeGenWriteBarrier(&___updateBehaviour_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
