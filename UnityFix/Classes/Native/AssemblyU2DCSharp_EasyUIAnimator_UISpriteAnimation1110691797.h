#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_EasyUIAnimator_UIAnimation1105769640.h"

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// EasyUIAnimator.UpdateBehaviour
struct UpdateBehaviour_t3266695810;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyUIAnimator.UISpriteAnimation
struct  UISpriteAnimation_t1110691797  : public UIAnimation_t1105769640
{
public:
	// UnityEngine.UI.Image EasyUIAnimator.UISpriteAnimation::image
	Image_t2042527209 * ___image_6;
	// UnityEngine.Color[] EasyUIAnimator.UISpriteAnimation::colors
	ColorU5BU5D_t672350442* ___colors_7;

public:
	inline static int32_t get_offset_of_image_6() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t1110691797, ___image_6)); }
	inline Image_t2042527209 * get_image_6() const { return ___image_6; }
	inline Image_t2042527209 ** get_address_of_image_6() { return &___image_6; }
	inline void set_image_6(Image_t2042527209 * value)
	{
		___image_6 = value;
		Il2CppCodeGenWriteBarrier(&___image_6, value);
	}

	inline static int32_t get_offset_of_colors_7() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t1110691797, ___colors_7)); }
	inline ColorU5BU5D_t672350442* get_colors_7() const { return ___colors_7; }
	inline ColorU5BU5D_t672350442** get_address_of_colors_7() { return &___colors_7; }
	inline void set_colors_7(ColorU5BU5D_t672350442* value)
	{
		___colors_7 = value;
		Il2CppCodeGenWriteBarrier(&___colors_7, value);
	}
};

struct UISpriteAnimation_t1110691797_StaticFields
{
public:
	// EasyUIAnimator.UpdateBehaviour EasyUIAnimator.UISpriteAnimation::<>f__mg$cache0
	UpdateBehaviour_t3266695810 * ___U3CU3Ef__mgU24cache0_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_8() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t1110691797_StaticFields, ___U3CU3Ef__mgU24cache0_8)); }
	inline UpdateBehaviour_t3266695810 * get_U3CU3Ef__mgU24cache0_8() const { return ___U3CU3Ef__mgU24cache0_8; }
	inline UpdateBehaviour_t3266695810 ** get_address_of_U3CU3Ef__mgU24cache0_8() { return &___U3CU3Ef__mgU24cache0_8; }
	inline void set_U3CU3Ef__mgU24cache0_8(UpdateBehaviour_t3266695810 * value)
	{
		___U3CU3Ef__mgU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
