#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
struct Dictionary_2_t1162807695;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ImageCache
struct  ImageCache_t1989670333  : public Il2CppObject
{
public:

public:
};

struct ImageCache_t1989670333_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D> ImageCache::Lookup
	Dictionary_2_t1162807695 * ___Lookup_0;

public:
	inline static int32_t get_offset_of_Lookup_0() { return static_cast<int32_t>(offsetof(ImageCache_t1989670333_StaticFields, ___Lookup_0)); }
	inline Dictionary_2_t1162807695 * get_Lookup_0() const { return ___Lookup_0; }
	inline Dictionary_2_t1162807695 ** get_address_of_Lookup_0() { return &___Lookup_0; }
	inline void set_Lookup_0(Dictionary_2_t1162807695 * value)
	{
		___Lookup_0 = value;
		Il2CppCodeGenWriteBarrier(&___Lookup_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
