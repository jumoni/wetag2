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
// PowerUI.Element
struct Element_t3532621832;
// PowerUI.ShaderSet
struct ShaderSet_t1881304045;
// PowerUI.Css.ShadowData
struct ShadowData_t2153927010;
// PowerUI.Css.StrokeData
struct StrokeData_t3248062314;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.ShaderData
struct  ShaderData_t3486038437  : public Il2CppObject
{
public:
	// System.Int32 PowerUI.Css.ShaderData::Flags
	int32_t ___Flags_0;
	// UnityEngine.Shader PowerUI.Css.ShaderData::Shader
	Shader_t2430389951 * ___Shader_1;
	// PowerUI.Element PowerUI.Css.ShaderData::Element
	Element_t3532621832 * ___Element_2;
	// PowerUI.ShaderSet PowerUI.Css.ShaderData::Shaders
	ShaderSet_t1881304045 * ___Shaders_3;
	// PowerUI.Css.ShadowData PowerUI.Css.ShaderData::TextShadow
	ShadowData_t2153927010 * ___TextShadow_4;
	// PowerUI.Css.StrokeData PowerUI.Css.ShaderData::TextStroke
	StrokeData_t3248062314 * ___TextStroke_5;

public:
	inline static int32_t get_offset_of_Flags_0() { return static_cast<int32_t>(offsetof(ShaderData_t3486038437, ___Flags_0)); }
	inline int32_t get_Flags_0() const { return ___Flags_0; }
	inline int32_t* get_address_of_Flags_0() { return &___Flags_0; }
	inline void set_Flags_0(int32_t value)
	{
		___Flags_0 = value;
	}

	inline static int32_t get_offset_of_Shader_1() { return static_cast<int32_t>(offsetof(ShaderData_t3486038437, ___Shader_1)); }
	inline Shader_t2430389951 * get_Shader_1() const { return ___Shader_1; }
	inline Shader_t2430389951 ** get_address_of_Shader_1() { return &___Shader_1; }
	inline void set_Shader_1(Shader_t2430389951 * value)
	{
		___Shader_1 = value;
		Il2CppCodeGenWriteBarrier(&___Shader_1, value);
	}

	inline static int32_t get_offset_of_Element_2() { return static_cast<int32_t>(offsetof(ShaderData_t3486038437, ___Element_2)); }
	inline Element_t3532621832 * get_Element_2() const { return ___Element_2; }
	inline Element_t3532621832 ** get_address_of_Element_2() { return &___Element_2; }
	inline void set_Element_2(Element_t3532621832 * value)
	{
		___Element_2 = value;
		Il2CppCodeGenWriteBarrier(&___Element_2, value);
	}

	inline static int32_t get_offset_of_Shaders_3() { return static_cast<int32_t>(offsetof(ShaderData_t3486038437, ___Shaders_3)); }
	inline ShaderSet_t1881304045 * get_Shaders_3() const { return ___Shaders_3; }
	inline ShaderSet_t1881304045 ** get_address_of_Shaders_3() { return &___Shaders_3; }
	inline void set_Shaders_3(ShaderSet_t1881304045 * value)
	{
		___Shaders_3 = value;
		Il2CppCodeGenWriteBarrier(&___Shaders_3, value);
	}

	inline static int32_t get_offset_of_TextShadow_4() { return static_cast<int32_t>(offsetof(ShaderData_t3486038437, ___TextShadow_4)); }
	inline ShadowData_t2153927010 * get_TextShadow_4() const { return ___TextShadow_4; }
	inline ShadowData_t2153927010 ** get_address_of_TextShadow_4() { return &___TextShadow_4; }
	inline void set_TextShadow_4(ShadowData_t2153927010 * value)
	{
		___TextShadow_4 = value;
		Il2CppCodeGenWriteBarrier(&___TextShadow_4, value);
	}

	inline static int32_t get_offset_of_TextStroke_5() { return static_cast<int32_t>(offsetof(ShaderData_t3486038437, ___TextStroke_5)); }
	inline StrokeData_t3248062314 * get_TextStroke_5() const { return ___TextStroke_5; }
	inline StrokeData_t3248062314 ** get_address_of_TextStroke_5() { return &___TextStroke_5; }
	inline void set_TextStroke_5(StrokeData_t3248062314 * value)
	{
		___TextStroke_5 = value;
		Il2CppCodeGenWriteBarrier(&___TextStroke_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
