#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Shader
struct Shader_t2430389951;
// PowerUI.SPAInstance
struct SPAInstance_t4182545695;
// System.Collections.Generic.Dictionary`2<System.String,PowerUI.SPA>
struct Dictionary_2_t3968103670;
// PowerUI.SPASprite[]
struct SPASpriteU5BU5D_t2020587592;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.SPA
struct  SPA_t2053324408  : public Il2CppObject
{
public:
	// System.Int32 PowerUI.SPA::FrameRate
	int32_t ___FrameRate_4;
	// System.Int32 PowerUI.SPA::FrameWidth
	int32_t ___FrameWidth_5;
	// System.Int32 PowerUI.SPA::FrameHeight
	int32_t ___FrameHeight_6;
	// System.UInt32 PowerUI.SPA::FrameCount
	uint32_t ___FrameCount_7;
	// PowerUI.SPASprite[] PowerUI.SPA::Sprites
	SPASpriteU5BU5D_t2020587592* ___Sprites_8;

public:
	inline static int32_t get_offset_of_FrameRate_4() { return static_cast<int32_t>(offsetof(SPA_t2053324408, ___FrameRate_4)); }
	inline int32_t get_FrameRate_4() const { return ___FrameRate_4; }
	inline int32_t* get_address_of_FrameRate_4() { return &___FrameRate_4; }
	inline void set_FrameRate_4(int32_t value)
	{
		___FrameRate_4 = value;
	}

	inline static int32_t get_offset_of_FrameWidth_5() { return static_cast<int32_t>(offsetof(SPA_t2053324408, ___FrameWidth_5)); }
	inline int32_t get_FrameWidth_5() const { return ___FrameWidth_5; }
	inline int32_t* get_address_of_FrameWidth_5() { return &___FrameWidth_5; }
	inline void set_FrameWidth_5(int32_t value)
	{
		___FrameWidth_5 = value;
	}

	inline static int32_t get_offset_of_FrameHeight_6() { return static_cast<int32_t>(offsetof(SPA_t2053324408, ___FrameHeight_6)); }
	inline int32_t get_FrameHeight_6() const { return ___FrameHeight_6; }
	inline int32_t* get_address_of_FrameHeight_6() { return &___FrameHeight_6; }
	inline void set_FrameHeight_6(int32_t value)
	{
		___FrameHeight_6 = value;
	}

	inline static int32_t get_offset_of_FrameCount_7() { return static_cast<int32_t>(offsetof(SPA_t2053324408, ___FrameCount_7)); }
	inline uint32_t get_FrameCount_7() const { return ___FrameCount_7; }
	inline uint32_t* get_address_of_FrameCount_7() { return &___FrameCount_7; }
	inline void set_FrameCount_7(uint32_t value)
	{
		___FrameCount_7 = value;
	}

	inline static int32_t get_offset_of_Sprites_8() { return static_cast<int32_t>(offsetof(SPA_t2053324408, ___Sprites_8)); }
	inline SPASpriteU5BU5D_t2020587592* get_Sprites_8() const { return ___Sprites_8; }
	inline SPASpriteU5BU5D_t2020587592** get_address_of_Sprites_8() { return &___Sprites_8; }
	inline void set_Sprites_8(SPASpriteU5BU5D_t2020587592* value)
	{
		___Sprites_8 = value;
		Il2CppCodeGenWriteBarrier(&___Sprites_8, value);
	}
};

struct SPA_t2053324408_StaticFields
{
public:
	// UnityEngine.Shader PowerUI.SPA::RawIsolationShader
	Shader_t2430389951 * ___RawIsolationShader_0;
	// PowerUI.SPAInstance PowerUI.SPA::LastInstance
	SPAInstance_t4182545695 * ___LastInstance_1;
	// PowerUI.SPAInstance PowerUI.SPA::FirstInstance
	SPAInstance_t4182545695 * ___FirstInstance_2;
	// System.Collections.Generic.Dictionary`2<System.String,PowerUI.SPA> PowerUI.SPA::Instances
	Dictionary_2_t3968103670 * ___Instances_3;

public:
	inline static int32_t get_offset_of_RawIsolationShader_0() { return static_cast<int32_t>(offsetof(SPA_t2053324408_StaticFields, ___RawIsolationShader_0)); }
	inline Shader_t2430389951 * get_RawIsolationShader_0() const { return ___RawIsolationShader_0; }
	inline Shader_t2430389951 ** get_address_of_RawIsolationShader_0() { return &___RawIsolationShader_0; }
	inline void set_RawIsolationShader_0(Shader_t2430389951 * value)
	{
		___RawIsolationShader_0 = value;
		Il2CppCodeGenWriteBarrier(&___RawIsolationShader_0, value);
	}

	inline static int32_t get_offset_of_LastInstance_1() { return static_cast<int32_t>(offsetof(SPA_t2053324408_StaticFields, ___LastInstance_1)); }
	inline SPAInstance_t4182545695 * get_LastInstance_1() const { return ___LastInstance_1; }
	inline SPAInstance_t4182545695 ** get_address_of_LastInstance_1() { return &___LastInstance_1; }
	inline void set_LastInstance_1(SPAInstance_t4182545695 * value)
	{
		___LastInstance_1 = value;
		Il2CppCodeGenWriteBarrier(&___LastInstance_1, value);
	}

	inline static int32_t get_offset_of_FirstInstance_2() { return static_cast<int32_t>(offsetof(SPA_t2053324408_StaticFields, ___FirstInstance_2)); }
	inline SPAInstance_t4182545695 * get_FirstInstance_2() const { return ___FirstInstance_2; }
	inline SPAInstance_t4182545695 ** get_address_of_FirstInstance_2() { return &___FirstInstance_2; }
	inline void set_FirstInstance_2(SPAInstance_t4182545695 * value)
	{
		___FirstInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___FirstInstance_2, value);
	}

	inline static int32_t get_offset_of_Instances_3() { return static_cast<int32_t>(offsetof(SPA_t2053324408_StaticFields, ___Instances_3)); }
	inline Dictionary_2_t3968103670 * get_Instances_3() const { return ___Instances_3; }
	inline Dictionary_2_t3968103670 ** get_address_of_Instances_3() { return &___Instances_3; }
	inline void set_Instances_3(Dictionary_2_t3968103670 * value)
	{
		___Instances_3 = value;
		Il2CppCodeGenWriteBarrier(&___Instances_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
