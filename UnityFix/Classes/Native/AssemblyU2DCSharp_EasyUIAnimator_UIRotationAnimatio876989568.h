#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_EasyUIAnimator_UIAnimation1105769640.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// EasyUIAnimator.Effect/EffectBehaviour
struct EffectBehaviour_t2185791415;
// EasyUIAnimator.UpdateBehaviour
struct UpdateBehaviour_t3266695810;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyUIAnimator.UIRotationAnimation
struct  UIRotationAnimation_t876989568  : public UIAnimation_t1105769640
{
public:
	// UnityEngine.RectTransform EasyUIAnimator.UIRotationAnimation::transform
	RectTransform_t3349966182 * ___transform_6;
	// UnityEngine.Quaternion EasyUIAnimator.UIRotationAnimation::originRotation
	Quaternion_t4030073918  ___originRotation_7;
	// UnityEngine.Quaternion EasyUIAnimator.UIRotationAnimation::targetRotation
	Quaternion_t4030073918  ___targetRotation_8;
	// EasyUIAnimator.Effect/EffectBehaviour EasyUIAnimator.UIRotationAnimation::effectBehaviour
	EffectBehaviour_t2185791415 * ___effectBehaviour_9;

public:
	inline static int32_t get_offset_of_transform_6() { return static_cast<int32_t>(offsetof(UIRotationAnimation_t876989568, ___transform_6)); }
	inline RectTransform_t3349966182 * get_transform_6() const { return ___transform_6; }
	inline RectTransform_t3349966182 ** get_address_of_transform_6() { return &___transform_6; }
	inline void set_transform_6(RectTransform_t3349966182 * value)
	{
		___transform_6 = value;
		Il2CppCodeGenWriteBarrier(&___transform_6, value);
	}

	inline static int32_t get_offset_of_originRotation_7() { return static_cast<int32_t>(offsetof(UIRotationAnimation_t876989568, ___originRotation_7)); }
	inline Quaternion_t4030073918  get_originRotation_7() const { return ___originRotation_7; }
	inline Quaternion_t4030073918 * get_address_of_originRotation_7() { return &___originRotation_7; }
	inline void set_originRotation_7(Quaternion_t4030073918  value)
	{
		___originRotation_7 = value;
	}

	inline static int32_t get_offset_of_targetRotation_8() { return static_cast<int32_t>(offsetof(UIRotationAnimation_t876989568, ___targetRotation_8)); }
	inline Quaternion_t4030073918  get_targetRotation_8() const { return ___targetRotation_8; }
	inline Quaternion_t4030073918 * get_address_of_targetRotation_8() { return &___targetRotation_8; }
	inline void set_targetRotation_8(Quaternion_t4030073918  value)
	{
		___targetRotation_8 = value;
	}

	inline static int32_t get_offset_of_effectBehaviour_9() { return static_cast<int32_t>(offsetof(UIRotationAnimation_t876989568, ___effectBehaviour_9)); }
	inline EffectBehaviour_t2185791415 * get_effectBehaviour_9() const { return ___effectBehaviour_9; }
	inline EffectBehaviour_t2185791415 ** get_address_of_effectBehaviour_9() { return &___effectBehaviour_9; }
	inline void set_effectBehaviour_9(EffectBehaviour_t2185791415 * value)
	{
		___effectBehaviour_9 = value;
		Il2CppCodeGenWriteBarrier(&___effectBehaviour_9, value);
	}
};

struct UIRotationAnimation_t876989568_StaticFields
{
public:
	// EasyUIAnimator.UpdateBehaviour EasyUIAnimator.UIRotationAnimation::<>f__mg$cache0
	UpdateBehaviour_t3266695810 * ___U3CU3Ef__mgU24cache0_10;
	// EasyUIAnimator.Effect/EffectBehaviour EasyUIAnimator.UIRotationAnimation::<>f__mg$cache1
	EffectBehaviour_t2185791415 * ___U3CU3Ef__mgU24cache1_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_10() { return static_cast<int32_t>(offsetof(UIRotationAnimation_t876989568_StaticFields, ___U3CU3Ef__mgU24cache0_10)); }
	inline UpdateBehaviour_t3266695810 * get_U3CU3Ef__mgU24cache0_10() const { return ___U3CU3Ef__mgU24cache0_10; }
	inline UpdateBehaviour_t3266695810 ** get_address_of_U3CU3Ef__mgU24cache0_10() { return &___U3CU3Ef__mgU24cache0_10; }
	inline void set_U3CU3Ef__mgU24cache0_10(UpdateBehaviour_t3266695810 * value)
	{
		___U3CU3Ef__mgU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_11() { return static_cast<int32_t>(offsetof(UIRotationAnimation_t876989568_StaticFields, ___U3CU3Ef__mgU24cache1_11)); }
	inline EffectBehaviour_t2185791415 * get_U3CU3Ef__mgU24cache1_11() const { return ___U3CU3Ef__mgU24cache1_11; }
	inline EffectBehaviour_t2185791415 ** get_address_of_U3CU3Ef__mgU24cache1_11() { return &___U3CU3Ef__mgU24cache1_11; }
	inline void set_U3CU3Ef__mgU24cache1_11(EffectBehaviour_t2185791415 * value)
	{
		___U3CU3Ef__mgU24cache1_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
