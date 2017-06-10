#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Resources.NameOrId
struct NameOrId_t2460371499;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32Resource
struct  Win32Resource_t2185668907  : public Il2CppObject
{
public:
	// System.Resources.NameOrId System.Resources.Win32Resource::type
	NameOrId_t2460371499 * ___type_0;
	// System.Resources.NameOrId System.Resources.Win32Resource::name
	NameOrId_t2460371499 * ___name_1;
	// System.Int32 System.Resources.Win32Resource::language
	int32_t ___language_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Win32Resource_t2185668907, ___type_0)); }
	inline NameOrId_t2460371499 * get_type_0() const { return ___type_0; }
	inline NameOrId_t2460371499 ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(NameOrId_t2460371499 * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Win32Resource_t2185668907, ___name_1)); }
	inline NameOrId_t2460371499 * get_name_1() const { return ___name_1; }
	inline NameOrId_t2460371499 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(NameOrId_t2460371499 * value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_language_2() { return static_cast<int32_t>(offsetof(Win32Resource_t2185668907, ___language_2)); }
	inline int32_t get_language_2() const { return ___language_2; }
	inline int32_t* get_address_of_language_2() { return &___language_2; }
	inline void set_language_2(int32_t value)
	{
		___language_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
