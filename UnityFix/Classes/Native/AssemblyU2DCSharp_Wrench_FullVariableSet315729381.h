#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Wrench.VariableSet
struct VariableSet_t811186110;
// Wrench.LanguageSet
struct LanguageSet_t1378258094;
// Wrench.OnVariableFind
struct OnVariableFind_t660484292;
// Wrench.OnVariableChange
struct OnVariableChange_t4274501541;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrench.FullVariableSet
struct  FullVariableSet_t315729381  : public Il2CppObject
{
public:
	// Wrench.VariableSet Wrench.FullVariableSet::Custom
	VariableSet_t811186110 * ___Custom_0;
	// Wrench.LanguageSet Wrench.FullVariableSet::Language
	LanguageSet_t1378258094 * ___Language_1;
	// Wrench.OnVariableFind Wrench.FullVariableSet::OnFind
	OnVariableFind_t660484292 * ___OnFind_2;
	// Wrench.OnVariableChange Wrench.FullVariableSet::OnChange
	OnVariableChange_t4274501541 * ___OnChange_3;

public:
	inline static int32_t get_offset_of_Custom_0() { return static_cast<int32_t>(offsetof(FullVariableSet_t315729381, ___Custom_0)); }
	inline VariableSet_t811186110 * get_Custom_0() const { return ___Custom_0; }
	inline VariableSet_t811186110 ** get_address_of_Custom_0() { return &___Custom_0; }
	inline void set_Custom_0(VariableSet_t811186110 * value)
	{
		___Custom_0 = value;
		Il2CppCodeGenWriteBarrier(&___Custom_0, value);
	}

	inline static int32_t get_offset_of_Language_1() { return static_cast<int32_t>(offsetof(FullVariableSet_t315729381, ___Language_1)); }
	inline LanguageSet_t1378258094 * get_Language_1() const { return ___Language_1; }
	inline LanguageSet_t1378258094 ** get_address_of_Language_1() { return &___Language_1; }
	inline void set_Language_1(LanguageSet_t1378258094 * value)
	{
		___Language_1 = value;
		Il2CppCodeGenWriteBarrier(&___Language_1, value);
	}

	inline static int32_t get_offset_of_OnFind_2() { return static_cast<int32_t>(offsetof(FullVariableSet_t315729381, ___OnFind_2)); }
	inline OnVariableFind_t660484292 * get_OnFind_2() const { return ___OnFind_2; }
	inline OnVariableFind_t660484292 ** get_address_of_OnFind_2() { return &___OnFind_2; }
	inline void set_OnFind_2(OnVariableFind_t660484292 * value)
	{
		___OnFind_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnFind_2, value);
	}

	inline static int32_t get_offset_of_OnChange_3() { return static_cast<int32_t>(offsetof(FullVariableSet_t315729381, ___OnChange_3)); }
	inline OnVariableChange_t4274501541 * get_OnChange_3() const { return ___OnChange_3; }
	inline OnVariableChange_t4274501541 ** get_address_of_OnChange_3() { return &___OnChange_3; }
	inline void set_OnChange_3(OnVariableChange_t4274501541 * value)
	{
		___OnChange_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnChange_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
