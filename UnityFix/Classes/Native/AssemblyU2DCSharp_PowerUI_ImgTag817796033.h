#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_HtmlTagHandler2082879697.h"

// PowerUI.ImagePackage
struct ImagePackage_t3498155007;
// PowerUI.Css.Value
struct Value_t2499464907;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.ImgTag
struct  ImgTag_t817796033  : public HtmlTagHandler_t2082879697
{
public:
	// System.Single PowerUI.ImgTag::AspectRatio
	float ___AspectRatio_7;
	// PowerUI.ImagePackage PowerUI.ImgTag::Image
	ImagePackage_t3498155007 * ___Image_8;
	// PowerUI.Css.Value PowerUI.ImgTag::TagWidth
	Value_t2499464907 * ___TagWidth_9;
	// PowerUI.Css.Value PowerUI.ImgTag::TagHeight
	Value_t2499464907 * ___TagHeight_10;
	// System.Single PowerUI.ImgTag::InverseAspectRatio
	float ___InverseAspectRatio_11;

public:
	inline static int32_t get_offset_of_AspectRatio_7() { return static_cast<int32_t>(offsetof(ImgTag_t817796033, ___AspectRatio_7)); }
	inline float get_AspectRatio_7() const { return ___AspectRatio_7; }
	inline float* get_address_of_AspectRatio_7() { return &___AspectRatio_7; }
	inline void set_AspectRatio_7(float value)
	{
		___AspectRatio_7 = value;
	}

	inline static int32_t get_offset_of_Image_8() { return static_cast<int32_t>(offsetof(ImgTag_t817796033, ___Image_8)); }
	inline ImagePackage_t3498155007 * get_Image_8() const { return ___Image_8; }
	inline ImagePackage_t3498155007 ** get_address_of_Image_8() { return &___Image_8; }
	inline void set_Image_8(ImagePackage_t3498155007 * value)
	{
		___Image_8 = value;
		Il2CppCodeGenWriteBarrier(&___Image_8, value);
	}

	inline static int32_t get_offset_of_TagWidth_9() { return static_cast<int32_t>(offsetof(ImgTag_t817796033, ___TagWidth_9)); }
	inline Value_t2499464907 * get_TagWidth_9() const { return ___TagWidth_9; }
	inline Value_t2499464907 ** get_address_of_TagWidth_9() { return &___TagWidth_9; }
	inline void set_TagWidth_9(Value_t2499464907 * value)
	{
		___TagWidth_9 = value;
		Il2CppCodeGenWriteBarrier(&___TagWidth_9, value);
	}

	inline static int32_t get_offset_of_TagHeight_10() { return static_cast<int32_t>(offsetof(ImgTag_t817796033, ___TagHeight_10)); }
	inline Value_t2499464907 * get_TagHeight_10() const { return ___TagHeight_10; }
	inline Value_t2499464907 ** get_address_of_TagHeight_10() { return &___TagHeight_10; }
	inline void set_TagHeight_10(Value_t2499464907 * value)
	{
		___TagHeight_10 = value;
		Il2CppCodeGenWriteBarrier(&___TagHeight_10, value);
	}

	inline static int32_t get_offset_of_InverseAspectRatio_11() { return static_cast<int32_t>(offsetof(ImgTag_t817796033, ___InverseAspectRatio_11)); }
	inline float get_InverseAspectRatio_11() const { return ___InverseAspectRatio_11; }
	inline float* get_address_of_InverseAspectRatio_11() { return &___InverseAspectRatio_11; }
	inline void set_InverseAspectRatio_11(float value)
	{
		___InverseAspectRatio_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
