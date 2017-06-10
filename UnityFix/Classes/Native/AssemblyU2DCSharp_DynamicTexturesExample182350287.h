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
// PowerBar
struct PowerBar_t2056144246;
// HealthBar
struct HealthBar_t1323021899;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DynamicTexturesExample
struct  DynamicTexturesExample_t182350287  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.TextAsset DynamicTexturesExample::HtmlFile
	TextAsset_t3973159845 * ___HtmlFile_2;
	// PowerBar DynamicTexturesExample::PowerBarGraphic
	PowerBar_t2056144246 * ___PowerBarGraphic_3;
	// HealthBar DynamicTexturesExample::HealthBarGraphic
	HealthBar_t1323021899 * ___HealthBarGraphic_4;

public:
	inline static int32_t get_offset_of_HtmlFile_2() { return static_cast<int32_t>(offsetof(DynamicTexturesExample_t182350287, ___HtmlFile_2)); }
	inline TextAsset_t3973159845 * get_HtmlFile_2() const { return ___HtmlFile_2; }
	inline TextAsset_t3973159845 ** get_address_of_HtmlFile_2() { return &___HtmlFile_2; }
	inline void set_HtmlFile_2(TextAsset_t3973159845 * value)
	{
		___HtmlFile_2 = value;
		Il2CppCodeGenWriteBarrier(&___HtmlFile_2, value);
	}

	inline static int32_t get_offset_of_PowerBarGraphic_3() { return static_cast<int32_t>(offsetof(DynamicTexturesExample_t182350287, ___PowerBarGraphic_3)); }
	inline PowerBar_t2056144246 * get_PowerBarGraphic_3() const { return ___PowerBarGraphic_3; }
	inline PowerBar_t2056144246 ** get_address_of_PowerBarGraphic_3() { return &___PowerBarGraphic_3; }
	inline void set_PowerBarGraphic_3(PowerBar_t2056144246 * value)
	{
		___PowerBarGraphic_3 = value;
		Il2CppCodeGenWriteBarrier(&___PowerBarGraphic_3, value);
	}

	inline static int32_t get_offset_of_HealthBarGraphic_4() { return static_cast<int32_t>(offsetof(DynamicTexturesExample_t182350287, ___HealthBarGraphic_4)); }
	inline HealthBar_t1323021899 * get_HealthBarGraphic_4() const { return ___HealthBarGraphic_4; }
	inline HealthBar_t1323021899 ** get_address_of_HealthBarGraphic_4() { return &___HealthBarGraphic_4; }
	inline void set_HealthBarGraphic_4(HealthBar_t1323021899 * value)
	{
		___HealthBarGraphic_4 = value;
		Il2CppCodeGenWriteBarrier(&___HealthBarGraphic_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
