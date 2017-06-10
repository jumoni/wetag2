#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Wrench_VariableSet811186110.h"

// System.String
struct String_t;
// Wrench.LanguageLoader
struct LanguageLoader_t4073954305;
// Wrench.GroupResolve
struct GroupResolve_t4162119537;
// System.Collections.Generic.Dictionary`2<System.String,Wrench.LanguageSet>
struct Dictionary_2_t3293037356;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrench.LanguageSet
struct  LanguageSet_t1378258094  : public VariableSet_t811186110
{
public:
	// System.String Wrench.LanguageSet::Name
	String_t* ___Name_1;
	// System.String Wrench.LanguageSet::Code
	String_t* ___Code_2;
	// System.String Wrench.LanguageSet::Group
	String_t* ___Group_3;
	// System.Boolean Wrench.LanguageSet::GoesLeftwards
	bool ___GoesLeftwards_4;
	// Wrench.LanguageLoader Wrench.LanguageSet::Loader
	LanguageLoader_t4073954305 * ___Loader_5;
	// Wrench.GroupResolve Wrench.LanguageSet::OnGroupResolve
	GroupResolve_t4162119537 * ___OnGroupResolve_6;
	// System.Collections.Generic.Dictionary`2<System.String,Wrench.LanguageSet> Wrench.LanguageSet::ExtraGroups
	Dictionary_2_t3293037356 * ___ExtraGroups_7;

public:
	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(LanguageSet_t1378258094, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier(&___Name_1, value);
	}

	inline static int32_t get_offset_of_Code_2() { return static_cast<int32_t>(offsetof(LanguageSet_t1378258094, ___Code_2)); }
	inline String_t* get_Code_2() const { return ___Code_2; }
	inline String_t** get_address_of_Code_2() { return &___Code_2; }
	inline void set_Code_2(String_t* value)
	{
		___Code_2 = value;
		Il2CppCodeGenWriteBarrier(&___Code_2, value);
	}

	inline static int32_t get_offset_of_Group_3() { return static_cast<int32_t>(offsetof(LanguageSet_t1378258094, ___Group_3)); }
	inline String_t* get_Group_3() const { return ___Group_3; }
	inline String_t** get_address_of_Group_3() { return &___Group_3; }
	inline void set_Group_3(String_t* value)
	{
		___Group_3 = value;
		Il2CppCodeGenWriteBarrier(&___Group_3, value);
	}

	inline static int32_t get_offset_of_GoesLeftwards_4() { return static_cast<int32_t>(offsetof(LanguageSet_t1378258094, ___GoesLeftwards_4)); }
	inline bool get_GoesLeftwards_4() const { return ___GoesLeftwards_4; }
	inline bool* get_address_of_GoesLeftwards_4() { return &___GoesLeftwards_4; }
	inline void set_GoesLeftwards_4(bool value)
	{
		___GoesLeftwards_4 = value;
	}

	inline static int32_t get_offset_of_Loader_5() { return static_cast<int32_t>(offsetof(LanguageSet_t1378258094, ___Loader_5)); }
	inline LanguageLoader_t4073954305 * get_Loader_5() const { return ___Loader_5; }
	inline LanguageLoader_t4073954305 ** get_address_of_Loader_5() { return &___Loader_5; }
	inline void set_Loader_5(LanguageLoader_t4073954305 * value)
	{
		___Loader_5 = value;
		Il2CppCodeGenWriteBarrier(&___Loader_5, value);
	}

	inline static int32_t get_offset_of_OnGroupResolve_6() { return static_cast<int32_t>(offsetof(LanguageSet_t1378258094, ___OnGroupResolve_6)); }
	inline GroupResolve_t4162119537 * get_OnGroupResolve_6() const { return ___OnGroupResolve_6; }
	inline GroupResolve_t4162119537 ** get_address_of_OnGroupResolve_6() { return &___OnGroupResolve_6; }
	inline void set_OnGroupResolve_6(GroupResolve_t4162119537 * value)
	{
		___OnGroupResolve_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnGroupResolve_6, value);
	}

	inline static int32_t get_offset_of_ExtraGroups_7() { return static_cast<int32_t>(offsetof(LanguageSet_t1378258094, ___ExtraGroups_7)); }
	inline Dictionary_2_t3293037356 * get_ExtraGroups_7() const { return ___ExtraGroups_7; }
	inline Dictionary_2_t3293037356 ** get_address_of_ExtraGroups_7() { return &___ExtraGroups_7; }
	inline void set_ExtraGroups_7(Dictionary_2_t3293037356 * value)
	{
		___ExtraGroups_7 = value;
		Il2CppCodeGenWriteBarrier(&___ExtraGroups_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
