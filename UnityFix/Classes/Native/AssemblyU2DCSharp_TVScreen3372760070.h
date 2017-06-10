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

// TVScreen
struct  TVScreen_t3372760070  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean TVScreen::InputEnabled
	bool ___InputEnabled_2;
	// UnityEngine.TextAsset TVScreen::HtmlFile
	TextAsset_t3973159845 * ___HtmlFile_3;

public:
	inline static int32_t get_offset_of_InputEnabled_2() { return static_cast<int32_t>(offsetof(TVScreen_t3372760070, ___InputEnabled_2)); }
	inline bool get_InputEnabled_2() const { return ___InputEnabled_2; }
	inline bool* get_address_of_InputEnabled_2() { return &___InputEnabled_2; }
	inline void set_InputEnabled_2(bool value)
	{
		___InputEnabled_2 = value;
	}

	inline static int32_t get_offset_of_HtmlFile_3() { return static_cast<int32_t>(offsetof(TVScreen_t3372760070, ___HtmlFile_3)); }
	inline TextAsset_t3973159845 * get_HtmlFile_3() const { return ___HtmlFile_3; }
	inline TextAsset_t3973159845 ** get_address_of_HtmlFile_3() { return &___HtmlFile_3; }
	inline void set_HtmlFile_3(TextAsset_t3973159845 * value)
	{
		___HtmlFile_3 = value;
		Il2CppCodeGenWriteBarrier(&___HtmlFile_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
