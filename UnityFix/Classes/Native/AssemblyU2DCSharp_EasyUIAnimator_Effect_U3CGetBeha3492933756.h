#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// EasyUIAnimator.Effect/EffectUpdate
struct EffectUpdate_t2668590583;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyUIAnimator.Effect/<GetBehaviour>c__AnonStorey3
struct  U3CGetBehaviourU3Ec__AnonStorey3_t3492933756  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 EasyUIAnimator.Effect/<GetBehaviour>c__AnonStorey3::directionVector
	Vector2_t2243707579  ___directionVector_0;
	// EasyUIAnimator.Effect/EffectUpdate EasyUIAnimator.Effect/<GetBehaviour>c__AnonStorey3::update
	EffectUpdate_t2668590583 * ___update_1;

public:
	inline static int32_t get_offset_of_directionVector_0() { return static_cast<int32_t>(offsetof(U3CGetBehaviourU3Ec__AnonStorey3_t3492933756, ___directionVector_0)); }
	inline Vector2_t2243707579  get_directionVector_0() const { return ___directionVector_0; }
	inline Vector2_t2243707579 * get_address_of_directionVector_0() { return &___directionVector_0; }
	inline void set_directionVector_0(Vector2_t2243707579  value)
	{
		___directionVector_0 = value;
	}

	inline static int32_t get_offset_of_update_1() { return static_cast<int32_t>(offsetof(U3CGetBehaviourU3Ec__AnonStorey3_t3492933756, ___update_1)); }
	inline EffectUpdate_t2668590583 * get_update_1() const { return ___update_1; }
	inline EffectUpdate_t2668590583 ** get_address_of_update_1() { return &___update_1; }
	inline void set_update_1(EffectUpdate_t2668590583 * value)
	{
		___update_1 = value;
		Il2CppCodeGenWriteBarrier(&___update_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
