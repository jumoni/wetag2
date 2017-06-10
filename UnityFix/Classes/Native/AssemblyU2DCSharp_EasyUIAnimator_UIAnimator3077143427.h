#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// EasyUIAnimator.UIAnimator
struct UIAnimator_t3077143427;
// System.Collections.Generic.List`1<EasyUIAnimator.UIAnimation>
struct List_1_t474890772;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyUIAnimator.UIAnimator
struct  UIAnimator_t3077143427  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<EasyUIAnimator.UIAnimation> EasyUIAnimator.UIAnimator::animations
	List_1_t474890772 * ___animations_3;
	// System.Collections.Generic.List`1<EasyUIAnimator.UIAnimation> EasyUIAnimator.UIAnimator::removeList
	List_1_t474890772 * ___removeList_4;
	// UnityEngine.Vector2 EasyUIAnimator.UIAnimator::screenDimension
	Vector2_t2243707579  ___screenDimension_5;
	// UnityEngine.Vector2 EasyUIAnimator.UIAnimator::invertedscreenDimension
	Vector2_t2243707579  ___invertedscreenDimension_6;

public:
	inline static int32_t get_offset_of_animations_3() { return static_cast<int32_t>(offsetof(UIAnimator_t3077143427, ___animations_3)); }
	inline List_1_t474890772 * get_animations_3() const { return ___animations_3; }
	inline List_1_t474890772 ** get_address_of_animations_3() { return &___animations_3; }
	inline void set_animations_3(List_1_t474890772 * value)
	{
		___animations_3 = value;
		Il2CppCodeGenWriteBarrier(&___animations_3, value);
	}

	inline static int32_t get_offset_of_removeList_4() { return static_cast<int32_t>(offsetof(UIAnimator_t3077143427, ___removeList_4)); }
	inline List_1_t474890772 * get_removeList_4() const { return ___removeList_4; }
	inline List_1_t474890772 ** get_address_of_removeList_4() { return &___removeList_4; }
	inline void set_removeList_4(List_1_t474890772 * value)
	{
		___removeList_4 = value;
		Il2CppCodeGenWriteBarrier(&___removeList_4, value);
	}

	inline static int32_t get_offset_of_screenDimension_5() { return static_cast<int32_t>(offsetof(UIAnimator_t3077143427, ___screenDimension_5)); }
	inline Vector2_t2243707579  get_screenDimension_5() const { return ___screenDimension_5; }
	inline Vector2_t2243707579 * get_address_of_screenDimension_5() { return &___screenDimension_5; }
	inline void set_screenDimension_5(Vector2_t2243707579  value)
	{
		___screenDimension_5 = value;
	}

	inline static int32_t get_offset_of_invertedscreenDimension_6() { return static_cast<int32_t>(offsetof(UIAnimator_t3077143427, ___invertedscreenDimension_6)); }
	inline Vector2_t2243707579  get_invertedscreenDimension_6() const { return ___invertedscreenDimension_6; }
	inline Vector2_t2243707579 * get_address_of_invertedscreenDimension_6() { return &___invertedscreenDimension_6; }
	inline void set_invertedscreenDimension_6(Vector2_t2243707579  value)
	{
		___invertedscreenDimension_6 = value;
	}
};

struct UIAnimator_t3077143427_StaticFields
{
public:
	// EasyUIAnimator.UIAnimator EasyUIAnimator.UIAnimator::instance
	UIAnimator_t3077143427 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(UIAnimator_t3077143427_StaticFields, ___instance_2)); }
	inline UIAnimator_t3077143427 * get_instance_2() const { return ___instance_2; }
	inline UIAnimator_t3077143427 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(UIAnimator_t3077143427 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
