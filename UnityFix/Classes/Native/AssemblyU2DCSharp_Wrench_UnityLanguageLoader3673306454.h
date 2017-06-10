#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Wrench_LanguageLoader4073954305.h"

// Wrench.LanguageSet[]
struct LanguageSetU5BU5D_t367817947;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrench.UnityLanguageLoader
struct  UnityLanguageLoader_t3673306454  : public LanguageLoader_t4073954305
{
public:
	// Wrench.LanguageSet[] Wrench.UnityLanguageLoader::Languages
	LanguageSetU5BU5D_t367817947* ___Languages_2;

public:
	inline static int32_t get_offset_of_Languages_2() { return static_cast<int32_t>(offsetof(UnityLanguageLoader_t3673306454, ___Languages_2)); }
	inline LanguageSetU5BU5D_t367817947* get_Languages_2() const { return ___Languages_2; }
	inline LanguageSetU5BU5D_t367817947** get_address_of_Languages_2() { return &___Languages_2; }
	inline void set_Languages_2(LanguageSetU5BU5D_t367817947* value)
	{
		___Languages_2 = value;
		Il2CppCodeGenWriteBarrier(&___Languages_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
