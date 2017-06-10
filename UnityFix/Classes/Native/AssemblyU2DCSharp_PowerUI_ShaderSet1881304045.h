#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.ShaderSet
struct ShaderSet_t1881304045;
// System.Collections.Generic.Dictionary`2<System.String,PowerUI.ShaderSet>
struct Dictionary_2_t3796083307;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t2430389951;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.ShaderSet
struct  ShaderSet_t1881304045  : public Il2CppObject
{
public:
	// System.String PowerUI.ShaderSet::Name
	String_t* ___Name_2;
	// UnityEngine.Shader PowerUI.ShaderSet::CachedIsolated
	Shader_t2430389951 * ___CachedIsolated_3;

public:
	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(ShaderSet_t1881304045, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier(&___Name_2, value);
	}

	inline static int32_t get_offset_of_CachedIsolated_3() { return static_cast<int32_t>(offsetof(ShaderSet_t1881304045, ___CachedIsolated_3)); }
	inline Shader_t2430389951 * get_CachedIsolated_3() const { return ___CachedIsolated_3; }
	inline Shader_t2430389951 ** get_address_of_CachedIsolated_3() { return &___CachedIsolated_3; }
	inline void set_CachedIsolated_3(Shader_t2430389951 * value)
	{
		___CachedIsolated_3 = value;
		Il2CppCodeGenWriteBarrier(&___CachedIsolated_3, value);
	}
};

struct ShaderSet_t1881304045_StaticFields
{
public:
	// PowerUI.ShaderSet PowerUI.ShaderSet::CachedStandard
	ShaderSet_t1881304045 * ___CachedStandard_0;
	// System.Collections.Generic.Dictionary`2<System.String,PowerUI.ShaderSet> PowerUI.ShaderSet::GlobalCache
	Dictionary_2_t3796083307 * ___GlobalCache_1;

public:
	inline static int32_t get_offset_of_CachedStandard_0() { return static_cast<int32_t>(offsetof(ShaderSet_t1881304045_StaticFields, ___CachedStandard_0)); }
	inline ShaderSet_t1881304045 * get_CachedStandard_0() const { return ___CachedStandard_0; }
	inline ShaderSet_t1881304045 ** get_address_of_CachedStandard_0() { return &___CachedStandard_0; }
	inline void set_CachedStandard_0(ShaderSet_t1881304045 * value)
	{
		___CachedStandard_0 = value;
		Il2CppCodeGenWriteBarrier(&___CachedStandard_0, value);
	}

	inline static int32_t get_offset_of_GlobalCache_1() { return static_cast<int32_t>(offsetof(ShaderSet_t1881304045_StaticFields, ___GlobalCache_1)); }
	inline Dictionary_2_t3796083307 * get_GlobalCache_1() const { return ___GlobalCache_1; }
	inline Dictionary_2_t3796083307 ** get_address_of_GlobalCache_1() { return &___GlobalCache_1; }
	inline void set_GlobalCache_1(Dictionary_2_t3796083307 * value)
	{
		___GlobalCache_1 = value;
		Il2CppCodeGenWriteBarrier(&___GlobalCache_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
