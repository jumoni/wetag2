#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.AnimatedProperty
struct AnimatedProperty_t1588591802;
// System.Object
struct Il2CppObject;
// PowerUI.Element
struct Element_t3532621832;
// PowerUI.UIAnimation
struct UIAnimation_t3297328276;
// PowerUI.Css.ElementStyle
struct ElementStyle_t20514161;
// PowerUI.AnimationCompleted
struct AnimationCompleted_t3074634775;
// Nitro.DynamicMethod`1<Nitro.Void>
struct DynamicMethod_1_t377489974;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.UIAnimation
struct  UIAnimation_t3297328276  : public Il2CppObject
{
public:
	// System.Object PowerUI.UIAnimation::Data
	Il2CppObject * ___Data_2;
	// System.Boolean PowerUI.UIAnimation::Decelerate
	bool ___Decelerate_3;
	// System.Single PowerUI.UIAnimation::TotalTime
	float ___TotalTime_4;
	// PowerUI.Element PowerUI.UIAnimation::Animating
	Element_t3532621832 * ___Animating_5;
	// System.Single PowerUI.UIAnimation::DecelerateAt
	float ___DecelerateAt_6;
	// System.Boolean PowerUI.UIAnimation::FinishedPlaying
	bool ___FinishedPlaying_7;
	// System.Single PowerUI.UIAnimation::ConstantSpeedTime
	float ___ConstantSpeedTime_8;
	// PowerUI.UIAnimation PowerUI.UIAnimation::NextAnimation
	UIAnimation_t3297328276 * ___NextAnimation_9;
	// PowerUI.Css.ElementStyle PowerUI.UIAnimation::ElementStyle
	ElementStyle_t20514161 * ___ElementStyle_10;
	// System.Single PowerUI.UIAnimation::TimeToAccelerateFor
	float ___TimeToAccelerateFor_11;
	// System.Single PowerUI.UIAnimation::TimeToDecelerateFor
	float ___TimeToDecelerateFor_12;
	// PowerUI.AnimationCompleted PowerUI.UIAnimation::OnComplete
	AnimationCompleted_t3074634775 * ___OnComplete_13;
	// Nitro.DynamicMethod`1<Nitro.Void> PowerUI.UIAnimation::Done
	DynamicMethod_1_t377489974 * ___Done_14;

public:
	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276, ___Data_2)); }
	inline Il2CppObject * get_Data_2() const { return ___Data_2; }
	inline Il2CppObject ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(Il2CppObject * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier(&___Data_2, value);
	}

	inline static int32_t get_offset_of_Decelerate_3() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276, ___Decelerate_3)); }
	inline bool get_Decelerate_3() const { return ___Decelerate_3; }
	inline bool* get_address_of_Decelerate_3() { return &___Decelerate_3; }
	inline void set_Decelerate_3(bool value)
	{
		___Decelerate_3 = value;
	}

	inline static int32_t get_offset_of_TotalTime_4() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276, ___TotalTime_4)); }
	inline float get_TotalTime_4() const { return ___TotalTime_4; }
	inline float* get_address_of_TotalTime_4() { return &___TotalTime_4; }
	inline void set_TotalTime_4(float value)
	{
		___TotalTime_4 = value;
	}

	inline static int32_t get_offset_of_Animating_5() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276, ___Animating_5)); }
	inline Element_t3532621832 * get_Animating_5() const { return ___Animating_5; }
	inline Element_t3532621832 ** get_address_of_Animating_5() { return &___Animating_5; }
	inline void set_Animating_5(Element_t3532621832 * value)
	{
		___Animating_5 = value;
		Il2CppCodeGenWriteBarrier(&___Animating_5, value);
	}

	inline static int32_t get_offset_of_DecelerateAt_6() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276, ___DecelerateAt_6)); }
	inline float get_DecelerateAt_6() const { return ___DecelerateAt_6; }
	inline float* get_address_of_DecelerateAt_6() { return &___DecelerateAt_6; }
	inline void set_DecelerateAt_6(float value)
	{
		___DecelerateAt_6 = value;
	}

	inline static int32_t get_offset_of_FinishedPlaying_7() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276, ___FinishedPlaying_7)); }
	inline bool get_FinishedPlaying_7() const { return ___FinishedPlaying_7; }
	inline bool* get_address_of_FinishedPlaying_7() { return &___FinishedPlaying_7; }
	inline void set_FinishedPlaying_7(bool value)
	{
		___FinishedPlaying_7 = value;
	}

	inline static int32_t get_offset_of_ConstantSpeedTime_8() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276, ___ConstantSpeedTime_8)); }
	inline float get_ConstantSpeedTime_8() const { return ___ConstantSpeedTime_8; }
	inline float* get_address_of_ConstantSpeedTime_8() { return &___ConstantSpeedTime_8; }
	inline void set_ConstantSpeedTime_8(float value)
	{
		___ConstantSpeedTime_8 = value;
	}

	inline static int32_t get_offset_of_NextAnimation_9() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276, ___NextAnimation_9)); }
	inline UIAnimation_t3297328276 * get_NextAnimation_9() const { return ___NextAnimation_9; }
	inline UIAnimation_t3297328276 ** get_address_of_NextAnimation_9() { return &___NextAnimation_9; }
	inline void set_NextAnimation_9(UIAnimation_t3297328276 * value)
	{
		___NextAnimation_9 = value;
		Il2CppCodeGenWriteBarrier(&___NextAnimation_9, value);
	}

	inline static int32_t get_offset_of_ElementStyle_10() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276, ___ElementStyle_10)); }
	inline ElementStyle_t20514161 * get_ElementStyle_10() const { return ___ElementStyle_10; }
	inline ElementStyle_t20514161 ** get_address_of_ElementStyle_10() { return &___ElementStyle_10; }
	inline void set_ElementStyle_10(ElementStyle_t20514161 * value)
	{
		___ElementStyle_10 = value;
		Il2CppCodeGenWriteBarrier(&___ElementStyle_10, value);
	}

	inline static int32_t get_offset_of_TimeToAccelerateFor_11() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276, ___TimeToAccelerateFor_11)); }
	inline float get_TimeToAccelerateFor_11() const { return ___TimeToAccelerateFor_11; }
	inline float* get_address_of_TimeToAccelerateFor_11() { return &___TimeToAccelerateFor_11; }
	inline void set_TimeToAccelerateFor_11(float value)
	{
		___TimeToAccelerateFor_11 = value;
	}

	inline static int32_t get_offset_of_TimeToDecelerateFor_12() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276, ___TimeToDecelerateFor_12)); }
	inline float get_TimeToDecelerateFor_12() const { return ___TimeToDecelerateFor_12; }
	inline float* get_address_of_TimeToDecelerateFor_12() { return &___TimeToDecelerateFor_12; }
	inline void set_TimeToDecelerateFor_12(float value)
	{
		___TimeToDecelerateFor_12 = value;
	}

	inline static int32_t get_offset_of_OnComplete_13() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276, ___OnComplete_13)); }
	inline AnimationCompleted_t3074634775 * get_OnComplete_13() const { return ___OnComplete_13; }
	inline AnimationCompleted_t3074634775 ** get_address_of_OnComplete_13() { return &___OnComplete_13; }
	inline void set_OnComplete_13(AnimationCompleted_t3074634775 * value)
	{
		___OnComplete_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_13, value);
	}

	inline static int32_t get_offset_of_Done_14() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276, ___Done_14)); }
	inline DynamicMethod_1_t377489974 * get_Done_14() const { return ___Done_14; }
	inline DynamicMethod_1_t377489974 ** get_address_of_Done_14() { return &___Done_14; }
	inline void set_Done_14(DynamicMethod_1_t377489974 * value)
	{
		___Done_14 = value;
		Il2CppCodeGenWriteBarrier(&___Done_14, value);
	}
};

struct UIAnimation_t3297328276_StaticFields
{
public:
	// PowerUI.AnimatedProperty PowerUI.UIAnimation::LastProperty
	AnimatedProperty_t1588591802 * ___LastProperty_0;
	// PowerUI.AnimatedProperty PowerUI.UIAnimation::FirstProperty
	AnimatedProperty_t1588591802 * ___FirstProperty_1;

public:
	inline static int32_t get_offset_of_LastProperty_0() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276_StaticFields, ___LastProperty_0)); }
	inline AnimatedProperty_t1588591802 * get_LastProperty_0() const { return ___LastProperty_0; }
	inline AnimatedProperty_t1588591802 ** get_address_of_LastProperty_0() { return &___LastProperty_0; }
	inline void set_LastProperty_0(AnimatedProperty_t1588591802 * value)
	{
		___LastProperty_0 = value;
		Il2CppCodeGenWriteBarrier(&___LastProperty_0, value);
	}

	inline static int32_t get_offset_of_FirstProperty_1() { return static_cast<int32_t>(offsetof(UIAnimation_t3297328276_StaticFields, ___FirstProperty_1)); }
	inline AnimatedProperty_t1588591802 * get_FirstProperty_1() const { return ___FirstProperty_1; }
	inline AnimatedProperty_t1588591802 ** get_address_of_FirstProperty_1() { return &___FirstProperty_1; }
	inline void set_FirstProperty_1(AnimatedProperty_t1588591802 * value)
	{
		___FirstProperty_1 = value;
		Il2CppCodeGenWriteBarrier(&___FirstProperty_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
