#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_EasyUIAnimator_UIAnimation1105769640.h"

// EasyUIAnimator.UIAnimation[]
struct UIAnimationU5BU5D_t1886706617;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyUIAnimator.UIGroupAnimation
struct  UIGroupAnimation_t298258073  : public UIAnimation_t1105769640
{
public:
	// EasyUIAnimator.UIAnimation[] EasyUIAnimator.UIGroupAnimation::animations
	UIAnimationU5BU5D_t1886706617* ___animations_6;
	// System.Boolean[] EasyUIAnimator.UIGroupAnimation::finished
	BooleanU5BU5D_t3568034315* ___finished_7;
	// System.Single EasyUIAnimator.UIGroupAnimation::lastTime
	float ___lastTime_8;

public:
	inline static int32_t get_offset_of_animations_6() { return static_cast<int32_t>(offsetof(UIGroupAnimation_t298258073, ___animations_6)); }
	inline UIAnimationU5BU5D_t1886706617* get_animations_6() const { return ___animations_6; }
	inline UIAnimationU5BU5D_t1886706617** get_address_of_animations_6() { return &___animations_6; }
	inline void set_animations_6(UIAnimationU5BU5D_t1886706617* value)
	{
		___animations_6 = value;
		Il2CppCodeGenWriteBarrier(&___animations_6, value);
	}

	inline static int32_t get_offset_of_finished_7() { return static_cast<int32_t>(offsetof(UIGroupAnimation_t298258073, ___finished_7)); }
	inline BooleanU5BU5D_t3568034315* get_finished_7() const { return ___finished_7; }
	inline BooleanU5BU5D_t3568034315** get_address_of_finished_7() { return &___finished_7; }
	inline void set_finished_7(BooleanU5BU5D_t3568034315* value)
	{
		___finished_7 = value;
		Il2CppCodeGenWriteBarrier(&___finished_7, value);
	}

	inline static int32_t get_offset_of_lastTime_8() { return static_cast<int32_t>(offsetof(UIGroupAnimation_t298258073, ___lastTime_8)); }
	inline float get_lastTime_8() const { return ___lastTime_8; }
	inline float* get_address_of_lastTime_8() { return &___lastTime_8; }
	inline void set_lastTime_8(float value)
	{
		___lastTime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
