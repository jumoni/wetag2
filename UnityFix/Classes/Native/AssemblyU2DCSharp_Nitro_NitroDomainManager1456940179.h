#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Nitro.NitroDomainManager
struct NitroDomainManager_t1456940179;
// System.Collections.Generic.List`1<Nitro.SecureName>
struct List_1_t245107428;
// System.Collections.Generic.List`1<Nitro.CodeReference>
struct List_1_t2631869556;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.NitroDomainManager
struct  NitroDomainManager_t1456940179  : public Il2CppObject
{
public:
	// System.Boolean Nitro.NitroDomainManager::AllowAll
	bool ___AllowAll_1;
	// System.Collections.Generic.List`1<Nitro.SecureName> Nitro.NitroDomainManager::BlockedNames
	List_1_t245107428 * ___BlockedNames_2;
	// System.Collections.Generic.List`1<Nitro.CodeReference> Nitro.NitroDomainManager::DefaultReferences
	List_1_t2631869556 * ___DefaultReferences_3;
	// System.Collections.Generic.List`1<Nitro.SecureName> Nitro.NitroDomainManager::AllowedNames
	List_1_t245107428 * ___AllowedNames_4;

public:
	inline static int32_t get_offset_of_AllowAll_1() { return static_cast<int32_t>(offsetof(NitroDomainManager_t1456940179, ___AllowAll_1)); }
	inline bool get_AllowAll_1() const { return ___AllowAll_1; }
	inline bool* get_address_of_AllowAll_1() { return &___AllowAll_1; }
	inline void set_AllowAll_1(bool value)
	{
		___AllowAll_1 = value;
	}

	inline static int32_t get_offset_of_BlockedNames_2() { return static_cast<int32_t>(offsetof(NitroDomainManager_t1456940179, ___BlockedNames_2)); }
	inline List_1_t245107428 * get_BlockedNames_2() const { return ___BlockedNames_2; }
	inline List_1_t245107428 ** get_address_of_BlockedNames_2() { return &___BlockedNames_2; }
	inline void set_BlockedNames_2(List_1_t245107428 * value)
	{
		___BlockedNames_2 = value;
		Il2CppCodeGenWriteBarrier(&___BlockedNames_2, value);
	}

	inline static int32_t get_offset_of_DefaultReferences_3() { return static_cast<int32_t>(offsetof(NitroDomainManager_t1456940179, ___DefaultReferences_3)); }
	inline List_1_t2631869556 * get_DefaultReferences_3() const { return ___DefaultReferences_3; }
	inline List_1_t2631869556 ** get_address_of_DefaultReferences_3() { return &___DefaultReferences_3; }
	inline void set_DefaultReferences_3(List_1_t2631869556 * value)
	{
		___DefaultReferences_3 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultReferences_3, value);
	}

	inline static int32_t get_offset_of_AllowedNames_4() { return static_cast<int32_t>(offsetof(NitroDomainManager_t1456940179, ___AllowedNames_4)); }
	inline List_1_t245107428 * get_AllowedNames_4() const { return ___AllowedNames_4; }
	inline List_1_t245107428 ** get_address_of_AllowedNames_4() { return &___AllowedNames_4; }
	inline void set_AllowedNames_4(List_1_t245107428 * value)
	{
		___AllowedNames_4 = value;
		Il2CppCodeGenWriteBarrier(&___AllowedNames_4, value);
	}
};

struct NitroDomainManager_t1456940179_StaticFields
{
public:
	// Nitro.NitroDomainManager Nitro.NitroDomainManager::DefaultManager
	NitroDomainManager_t1456940179 * ___DefaultManager_0;

public:
	inline static int32_t get_offset_of_DefaultManager_0() { return static_cast<int32_t>(offsetof(NitroDomainManager_t1456940179_StaticFields, ___DefaultManager_0)); }
	inline NitroDomainManager_t1456940179 * get_DefaultManager_0() const { return ___DefaultManager_0; }
	inline NitroDomainManager_t1456940179 ** get_address_of_DefaultManager_0() { return &___DefaultManager_0; }
	inline void set_DefaultManager_0(NitroDomainManager_t1456940179 * value)
	{
		___DefaultManager_0 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultManager_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
