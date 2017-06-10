#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.UIAnimation
struct UIAnimation_t3297328276;
// PowerUI.Css.Value
struct Value_t2499464907;
// PowerUI.Css.CssProperty
struct CssProperty_t3575850104;
// PowerUI.AnimatedProperty
struct AnimatedProperty_t1588591802;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.AnimatedProperty
struct  AnimatedProperty_t1588591802  : public Il2CppObject
{
public:
	// System.Int32 PowerUI.AnimatedProperty::Stage
	int32_t ___Stage_0;
	// System.Single PowerUI.AnimatedProperty::Speed
	float ___Speed_1;
	// System.Single PowerUI.AnimatedProperty::MaxSpeed
	float ___MaxSpeed_2;
	// System.Boolean PowerUI.AnimatedProperty::UpdateCss
	bool ___UpdateCss_3;
	// System.Int32 PowerUI.AnimatedProperty::InnerIndex
	int32_t ___InnerIndex_4;
	// System.Boolean PowerUI.AnimatedProperty::Decelerate
	bool ___Decelerate_5;
	// System.Single PowerUI.AnimatedProperty::CurrentTime
	float ___CurrentTime_6;
	// System.Single PowerUI.AnimatedProperty::ActiveValue
	float ___ActiveValue_7;
	// System.Single PowerUI.AnimatedProperty::TargetValue
	float ___TargetValue_8;
	// System.Single PowerUI.AnimatedProperty::Acceleration
	float ___Acceleration_9;
	// System.Single PowerUI.AnimatedProperty::Deceleration
	float ___Deceleration_10;
	// PowerUI.UIAnimation PowerUI.AnimatedProperty::Animation
	UIAnimation_t3297328276 * ___Animation_11;
	// PowerUI.Css.Value PowerUI.AnimatedProperty::ValueObject
	Value_t2499464907 * ___ValueObject_12;
	// PowerUI.Css.CssProperty PowerUI.AnimatedProperty::PropertyInfo
	CssProperty_t3575850104 * ___PropertyInfo_13;
	// PowerUI.Css.Value PowerUI.AnimatedProperty::PropertyValueObject
	Value_t2499464907 * ___PropertyValueObject_14;
	// PowerUI.AnimatedProperty PowerUI.AnimatedProperty::PropertyAfter
	AnimatedProperty_t1588591802 * ___PropertyAfter_15;
	// PowerUI.AnimatedProperty PowerUI.AnimatedProperty::PropertyBefore
	AnimatedProperty_t1588591802 * ___PropertyBefore_16;

public:
	inline static int32_t get_offset_of_Stage_0() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___Stage_0)); }
	inline int32_t get_Stage_0() const { return ___Stage_0; }
	inline int32_t* get_address_of_Stage_0() { return &___Stage_0; }
	inline void set_Stage_0(int32_t value)
	{
		___Stage_0 = value;
	}

	inline static int32_t get_offset_of_Speed_1() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___Speed_1)); }
	inline float get_Speed_1() const { return ___Speed_1; }
	inline float* get_address_of_Speed_1() { return &___Speed_1; }
	inline void set_Speed_1(float value)
	{
		___Speed_1 = value;
	}

	inline static int32_t get_offset_of_MaxSpeed_2() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___MaxSpeed_2)); }
	inline float get_MaxSpeed_2() const { return ___MaxSpeed_2; }
	inline float* get_address_of_MaxSpeed_2() { return &___MaxSpeed_2; }
	inline void set_MaxSpeed_2(float value)
	{
		___MaxSpeed_2 = value;
	}

	inline static int32_t get_offset_of_UpdateCss_3() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___UpdateCss_3)); }
	inline bool get_UpdateCss_3() const { return ___UpdateCss_3; }
	inline bool* get_address_of_UpdateCss_3() { return &___UpdateCss_3; }
	inline void set_UpdateCss_3(bool value)
	{
		___UpdateCss_3 = value;
	}

	inline static int32_t get_offset_of_InnerIndex_4() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___InnerIndex_4)); }
	inline int32_t get_InnerIndex_4() const { return ___InnerIndex_4; }
	inline int32_t* get_address_of_InnerIndex_4() { return &___InnerIndex_4; }
	inline void set_InnerIndex_4(int32_t value)
	{
		___InnerIndex_4 = value;
	}

	inline static int32_t get_offset_of_Decelerate_5() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___Decelerate_5)); }
	inline bool get_Decelerate_5() const { return ___Decelerate_5; }
	inline bool* get_address_of_Decelerate_5() { return &___Decelerate_5; }
	inline void set_Decelerate_5(bool value)
	{
		___Decelerate_5 = value;
	}

	inline static int32_t get_offset_of_CurrentTime_6() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___CurrentTime_6)); }
	inline float get_CurrentTime_6() const { return ___CurrentTime_6; }
	inline float* get_address_of_CurrentTime_6() { return &___CurrentTime_6; }
	inline void set_CurrentTime_6(float value)
	{
		___CurrentTime_6 = value;
	}

	inline static int32_t get_offset_of_ActiveValue_7() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___ActiveValue_7)); }
	inline float get_ActiveValue_7() const { return ___ActiveValue_7; }
	inline float* get_address_of_ActiveValue_7() { return &___ActiveValue_7; }
	inline void set_ActiveValue_7(float value)
	{
		___ActiveValue_7 = value;
	}

	inline static int32_t get_offset_of_TargetValue_8() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___TargetValue_8)); }
	inline float get_TargetValue_8() const { return ___TargetValue_8; }
	inline float* get_address_of_TargetValue_8() { return &___TargetValue_8; }
	inline void set_TargetValue_8(float value)
	{
		___TargetValue_8 = value;
	}

	inline static int32_t get_offset_of_Acceleration_9() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___Acceleration_9)); }
	inline float get_Acceleration_9() const { return ___Acceleration_9; }
	inline float* get_address_of_Acceleration_9() { return &___Acceleration_9; }
	inline void set_Acceleration_9(float value)
	{
		___Acceleration_9 = value;
	}

	inline static int32_t get_offset_of_Deceleration_10() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___Deceleration_10)); }
	inline float get_Deceleration_10() const { return ___Deceleration_10; }
	inline float* get_address_of_Deceleration_10() { return &___Deceleration_10; }
	inline void set_Deceleration_10(float value)
	{
		___Deceleration_10 = value;
	}

	inline static int32_t get_offset_of_Animation_11() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___Animation_11)); }
	inline UIAnimation_t3297328276 * get_Animation_11() const { return ___Animation_11; }
	inline UIAnimation_t3297328276 ** get_address_of_Animation_11() { return &___Animation_11; }
	inline void set_Animation_11(UIAnimation_t3297328276 * value)
	{
		___Animation_11 = value;
		Il2CppCodeGenWriteBarrier(&___Animation_11, value);
	}

	inline static int32_t get_offset_of_ValueObject_12() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___ValueObject_12)); }
	inline Value_t2499464907 * get_ValueObject_12() const { return ___ValueObject_12; }
	inline Value_t2499464907 ** get_address_of_ValueObject_12() { return &___ValueObject_12; }
	inline void set_ValueObject_12(Value_t2499464907 * value)
	{
		___ValueObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___ValueObject_12, value);
	}

	inline static int32_t get_offset_of_PropertyInfo_13() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___PropertyInfo_13)); }
	inline CssProperty_t3575850104 * get_PropertyInfo_13() const { return ___PropertyInfo_13; }
	inline CssProperty_t3575850104 ** get_address_of_PropertyInfo_13() { return &___PropertyInfo_13; }
	inline void set_PropertyInfo_13(CssProperty_t3575850104 * value)
	{
		___PropertyInfo_13 = value;
		Il2CppCodeGenWriteBarrier(&___PropertyInfo_13, value);
	}

	inline static int32_t get_offset_of_PropertyValueObject_14() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___PropertyValueObject_14)); }
	inline Value_t2499464907 * get_PropertyValueObject_14() const { return ___PropertyValueObject_14; }
	inline Value_t2499464907 ** get_address_of_PropertyValueObject_14() { return &___PropertyValueObject_14; }
	inline void set_PropertyValueObject_14(Value_t2499464907 * value)
	{
		___PropertyValueObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___PropertyValueObject_14, value);
	}

	inline static int32_t get_offset_of_PropertyAfter_15() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___PropertyAfter_15)); }
	inline AnimatedProperty_t1588591802 * get_PropertyAfter_15() const { return ___PropertyAfter_15; }
	inline AnimatedProperty_t1588591802 ** get_address_of_PropertyAfter_15() { return &___PropertyAfter_15; }
	inline void set_PropertyAfter_15(AnimatedProperty_t1588591802 * value)
	{
		___PropertyAfter_15 = value;
		Il2CppCodeGenWriteBarrier(&___PropertyAfter_15, value);
	}

	inline static int32_t get_offset_of_PropertyBefore_16() { return static_cast<int32_t>(offsetof(AnimatedProperty_t1588591802, ___PropertyBefore_16)); }
	inline AnimatedProperty_t1588591802 * get_PropertyBefore_16() const { return ___PropertyBefore_16; }
	inline AnimatedProperty_t1588591802 ** get_address_of_PropertyBefore_16() { return &___PropertyBefore_16; }
	inline void set_PropertyBefore_16(AnimatedProperty_t1588591802 * value)
	{
		___PropertyBefore_16 = value;
		Il2CppCodeGenWriteBarrier(&___PropertyBefore_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
