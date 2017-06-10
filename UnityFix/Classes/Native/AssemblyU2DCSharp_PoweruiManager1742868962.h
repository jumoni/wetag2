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

// PoweruiManager
struct  PoweruiManager_t1742868962  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.TextAsset PoweruiManager::HtmlFile
	TextAsset_t3973159845 * ___HtmlFile_2;
	// System.Single PoweruiManager::SimpleResolution
	float ___SimpleResolution_3;

public:
	inline static int32_t get_offset_of_HtmlFile_2() { return static_cast<int32_t>(offsetof(PoweruiManager_t1742868962, ___HtmlFile_2)); }
	inline TextAsset_t3973159845 * get_HtmlFile_2() const { return ___HtmlFile_2; }
	inline TextAsset_t3973159845 ** get_address_of_HtmlFile_2() { return &___HtmlFile_2; }
	inline void set_HtmlFile_2(TextAsset_t3973159845 * value)
	{
		___HtmlFile_2 = value;
		Il2CppCodeGenWriteBarrier(&___HtmlFile_2, value);
	}

	inline static int32_t get_offset_of_SimpleResolution_3() { return static_cast<int32_t>(offsetof(PoweruiManager_t1742868962, ___SimpleResolution_3)); }
	inline float get_SimpleResolution_3() const { return ___SimpleResolution_3; }
	inline float* get_address_of_SimpleResolution_3() { return &___SimpleResolution_3; }
	inline void set_SimpleResolution_3(float value)
	{
		___SimpleResolution_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
