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
// Wrench.LanguageSet[]
struct LanguageSetU5BU5D_t367817947;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrench.LanguageLoader
struct  LanguageLoader_t4073954305  : public Il2CppObject
{
public:
	// System.String Wrench.LanguageLoader::Path
	String_t* ___Path_0;
	// Wrench.LanguageSet[] Wrench.LanguageLoader::AllLanguagesLoaded
	LanguageSetU5BU5D_t367817947* ___AllLanguagesLoaded_1;

public:
	inline static int32_t get_offset_of_Path_0() { return static_cast<int32_t>(offsetof(LanguageLoader_t4073954305, ___Path_0)); }
	inline String_t* get_Path_0() const { return ___Path_0; }
	inline String_t** get_address_of_Path_0() { return &___Path_0; }
	inline void set_Path_0(String_t* value)
	{
		___Path_0 = value;
		Il2CppCodeGenWriteBarrier(&___Path_0, value);
	}

	inline static int32_t get_offset_of_AllLanguagesLoaded_1() { return static_cast<int32_t>(offsetof(LanguageLoader_t4073954305, ___AllLanguagesLoaded_1)); }
	inline LanguageSetU5BU5D_t367817947* get_AllLanguagesLoaded_1() const { return ___AllLanguagesLoaded_1; }
	inline LanguageSetU5BU5D_t367817947** get_address_of_AllLanguagesLoaded_1() { return &___AllLanguagesLoaded_1; }
	inline void set_AllLanguagesLoaded_1(LanguageSetU5BU5D_t367817947* value)
	{
		___AllLanguagesLoaded_1 = value;
		Il2CppCodeGenWriteBarrier(&___AllLanguagesLoaded_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
