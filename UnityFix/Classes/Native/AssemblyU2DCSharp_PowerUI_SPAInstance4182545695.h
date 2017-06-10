#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.SPA
struct SPA_t2053324408;
// PowerUI.SPASprite
struct SPASprite_t2311372293;
// UnityEngine.Material
struct Material_t193706927;
// PowerUI.SPAInstance
struct SPAInstance_t4182545695;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.SPAInstance
struct  SPAInstance_t4182545695  : public Il2CppObject
{
public:
	// System.Boolean PowerUI.SPAInstance::Done
	bool ___Done_0;
	// System.Int32 PowerUI.SPAInstance::AtFrame
	int32_t ___AtFrame_1;
	// PowerUI.SPA PowerUI.SPAInstance::Animation
	SPA_t2053324408 * ___Animation_2;
	// System.Boolean PowerUI.SPAInstance::Loop
	bool ___Loop_3;
	// System.Int32 PowerUI.SPAInstance::OverallFrame
	int32_t ___OverallFrame_4;
	// System.Single PowerUI.SPAInstance::FrameDelay
	float ___FrameDelay_5;
	// System.Single PowerUI.SPAInstance::CurrentDelay
	float ___CurrentDelay_6;
	// PowerUI.SPASprite PowerUI.SPAInstance::CurrentSprite
	SPASprite_t2311372293 * ___CurrentSprite_7;
	// UnityEngine.Material PowerUI.SPAInstance::AnimatedMaterial
	Material_t193706927 * ___AnimatedMaterial_8;
	// PowerUI.SPAInstance PowerUI.SPAInstance::InstanceAfter
	SPAInstance_t4182545695 * ___InstanceAfter_9;
	// PowerUI.SPAInstance PowerUI.SPAInstance::InstanceBefore
	SPAInstance_t4182545695 * ___InstanceBefore_10;

public:
	inline static int32_t get_offset_of_Done_0() { return static_cast<int32_t>(offsetof(SPAInstance_t4182545695, ___Done_0)); }
	inline bool get_Done_0() const { return ___Done_0; }
	inline bool* get_address_of_Done_0() { return &___Done_0; }
	inline void set_Done_0(bool value)
	{
		___Done_0 = value;
	}

	inline static int32_t get_offset_of_AtFrame_1() { return static_cast<int32_t>(offsetof(SPAInstance_t4182545695, ___AtFrame_1)); }
	inline int32_t get_AtFrame_1() const { return ___AtFrame_1; }
	inline int32_t* get_address_of_AtFrame_1() { return &___AtFrame_1; }
	inline void set_AtFrame_1(int32_t value)
	{
		___AtFrame_1 = value;
	}

	inline static int32_t get_offset_of_Animation_2() { return static_cast<int32_t>(offsetof(SPAInstance_t4182545695, ___Animation_2)); }
	inline SPA_t2053324408 * get_Animation_2() const { return ___Animation_2; }
	inline SPA_t2053324408 ** get_address_of_Animation_2() { return &___Animation_2; }
	inline void set_Animation_2(SPA_t2053324408 * value)
	{
		___Animation_2 = value;
		Il2CppCodeGenWriteBarrier(&___Animation_2, value);
	}

	inline static int32_t get_offset_of_Loop_3() { return static_cast<int32_t>(offsetof(SPAInstance_t4182545695, ___Loop_3)); }
	inline bool get_Loop_3() const { return ___Loop_3; }
	inline bool* get_address_of_Loop_3() { return &___Loop_3; }
	inline void set_Loop_3(bool value)
	{
		___Loop_3 = value;
	}

	inline static int32_t get_offset_of_OverallFrame_4() { return static_cast<int32_t>(offsetof(SPAInstance_t4182545695, ___OverallFrame_4)); }
	inline int32_t get_OverallFrame_4() const { return ___OverallFrame_4; }
	inline int32_t* get_address_of_OverallFrame_4() { return &___OverallFrame_4; }
	inline void set_OverallFrame_4(int32_t value)
	{
		___OverallFrame_4 = value;
	}

	inline static int32_t get_offset_of_FrameDelay_5() { return static_cast<int32_t>(offsetof(SPAInstance_t4182545695, ___FrameDelay_5)); }
	inline float get_FrameDelay_5() const { return ___FrameDelay_5; }
	inline float* get_address_of_FrameDelay_5() { return &___FrameDelay_5; }
	inline void set_FrameDelay_5(float value)
	{
		___FrameDelay_5 = value;
	}

	inline static int32_t get_offset_of_CurrentDelay_6() { return static_cast<int32_t>(offsetof(SPAInstance_t4182545695, ___CurrentDelay_6)); }
	inline float get_CurrentDelay_6() const { return ___CurrentDelay_6; }
	inline float* get_address_of_CurrentDelay_6() { return &___CurrentDelay_6; }
	inline void set_CurrentDelay_6(float value)
	{
		___CurrentDelay_6 = value;
	}

	inline static int32_t get_offset_of_CurrentSprite_7() { return static_cast<int32_t>(offsetof(SPAInstance_t4182545695, ___CurrentSprite_7)); }
	inline SPASprite_t2311372293 * get_CurrentSprite_7() const { return ___CurrentSprite_7; }
	inline SPASprite_t2311372293 ** get_address_of_CurrentSprite_7() { return &___CurrentSprite_7; }
	inline void set_CurrentSprite_7(SPASprite_t2311372293 * value)
	{
		___CurrentSprite_7 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentSprite_7, value);
	}

	inline static int32_t get_offset_of_AnimatedMaterial_8() { return static_cast<int32_t>(offsetof(SPAInstance_t4182545695, ___AnimatedMaterial_8)); }
	inline Material_t193706927 * get_AnimatedMaterial_8() const { return ___AnimatedMaterial_8; }
	inline Material_t193706927 ** get_address_of_AnimatedMaterial_8() { return &___AnimatedMaterial_8; }
	inline void set_AnimatedMaterial_8(Material_t193706927 * value)
	{
		___AnimatedMaterial_8 = value;
		Il2CppCodeGenWriteBarrier(&___AnimatedMaterial_8, value);
	}

	inline static int32_t get_offset_of_InstanceAfter_9() { return static_cast<int32_t>(offsetof(SPAInstance_t4182545695, ___InstanceAfter_9)); }
	inline SPAInstance_t4182545695 * get_InstanceAfter_9() const { return ___InstanceAfter_9; }
	inline SPAInstance_t4182545695 ** get_address_of_InstanceAfter_9() { return &___InstanceAfter_9; }
	inline void set_InstanceAfter_9(SPAInstance_t4182545695 * value)
	{
		___InstanceAfter_9 = value;
		Il2CppCodeGenWriteBarrier(&___InstanceAfter_9, value);
	}

	inline static int32_t get_offset_of_InstanceBefore_10() { return static_cast<int32_t>(offsetof(SPAInstance_t4182545695, ___InstanceBefore_10)); }
	inline SPAInstance_t4182545695 * get_InstanceBefore_10() const { return ___InstanceBefore_10; }
	inline SPAInstance_t4182545695 ** get_address_of_InstanceBefore_10() { return &___InstanceBefore_10; }
	inline void set_InstanceBefore_10(SPAInstance_t4182545695 * value)
	{
		___InstanceBefore_10 = value;
		Il2CppCodeGenWriteBarrier(&___InstanceBefore_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
