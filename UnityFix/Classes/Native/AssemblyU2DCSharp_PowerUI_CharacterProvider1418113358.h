#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.CharacterProvider
struct  CharacterProvider_t1418113358  : public Il2CppObject
{
public:
	// System.Int32 PowerUI.CharacterProvider::MinimumID
	int32_t ___MinimumID_0;
	// System.Int32 PowerUI.CharacterProvider::MaximumID
	int32_t ___MaximumID_1;
	// System.String PowerUI.CharacterProvider::Path
	String_t* ___Path_2;

public:
	inline static int32_t get_offset_of_MinimumID_0() { return static_cast<int32_t>(offsetof(CharacterProvider_t1418113358, ___MinimumID_0)); }
	inline int32_t get_MinimumID_0() const { return ___MinimumID_0; }
	inline int32_t* get_address_of_MinimumID_0() { return &___MinimumID_0; }
	inline void set_MinimumID_0(int32_t value)
	{
		___MinimumID_0 = value;
	}

	inline static int32_t get_offset_of_MaximumID_1() { return static_cast<int32_t>(offsetof(CharacterProvider_t1418113358, ___MaximumID_1)); }
	inline int32_t get_MaximumID_1() const { return ___MaximumID_1; }
	inline int32_t* get_address_of_MaximumID_1() { return &___MaximumID_1; }
	inline void set_MaximumID_1(int32_t value)
	{
		___MaximumID_1 = value;
	}

	inline static int32_t get_offset_of_Path_2() { return static_cast<int32_t>(offsetof(CharacterProvider_t1418113358, ___Path_2)); }
	inline String_t* get_Path_2() const { return ___Path_2; }
	inline String_t** get_address_of_Path_2() { return &___Path_2; }
	inline void set_Path_2(String_t* value)
	{
		___Path_2 = value;
		Il2CppCodeGenWriteBarrier(&___Path_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
