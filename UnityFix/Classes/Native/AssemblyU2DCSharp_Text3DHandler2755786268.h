#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.TextAsset
struct TextAsset_t3973159845;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Text3DHandler
struct  Text3DHandler_t2755786268  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.TextAsset Text3DHandler::Html
	TextAsset_t3973159845 * ___Html_2;

public:
	inline static int32_t get_offset_of_Html_2() { return static_cast<int32_t>(offsetof(Text3DHandler_t2755786268, ___Html_2)); }
	inline TextAsset_t3973159845 * get_Html_2() const { return ___Html_2; }
	inline TextAsset_t3973159845 ** get_address_of_Html_2() { return &___Html_2; }
	inline void set_Html_2(TextAsset_t3973159845 * value)
	{
		___Html_2 = value;
		Il2CppCodeGenWriteBarrier(&___Html_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
