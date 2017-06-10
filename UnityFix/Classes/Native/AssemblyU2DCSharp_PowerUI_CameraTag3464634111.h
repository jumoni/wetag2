#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_HtmlTagHandler2082879697.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.CameraTag
struct  CameraTag_t3464634111  : public HtmlTagHandler_t2082879697
{
public:
	// UnityEngine.Camera PowerUI.CameraTag::Camera
	Camera_t189460977 * ___Camera_7;
	// UnityEngine.Transform PowerUI.CameraTag::Mask
	Transform_t3275118058 * ___Mask_8;
	// System.Single PowerUI.CameraTag::DepthFactor
	float ___DepthFactor_9;
	// System.Single PowerUI.CameraTag::FieldOfView
	float ___FieldOfView_10;

public:
	inline static int32_t get_offset_of_Camera_7() { return static_cast<int32_t>(offsetof(CameraTag_t3464634111, ___Camera_7)); }
	inline Camera_t189460977 * get_Camera_7() const { return ___Camera_7; }
	inline Camera_t189460977 ** get_address_of_Camera_7() { return &___Camera_7; }
	inline void set_Camera_7(Camera_t189460977 * value)
	{
		___Camera_7 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_7, value);
	}

	inline static int32_t get_offset_of_Mask_8() { return static_cast<int32_t>(offsetof(CameraTag_t3464634111, ___Mask_8)); }
	inline Transform_t3275118058 * get_Mask_8() const { return ___Mask_8; }
	inline Transform_t3275118058 ** get_address_of_Mask_8() { return &___Mask_8; }
	inline void set_Mask_8(Transform_t3275118058 * value)
	{
		___Mask_8 = value;
		Il2CppCodeGenWriteBarrier(&___Mask_8, value);
	}

	inline static int32_t get_offset_of_DepthFactor_9() { return static_cast<int32_t>(offsetof(CameraTag_t3464634111, ___DepthFactor_9)); }
	inline float get_DepthFactor_9() const { return ___DepthFactor_9; }
	inline float* get_address_of_DepthFactor_9() { return &___DepthFactor_9; }
	inline void set_DepthFactor_9(float value)
	{
		___DepthFactor_9 = value;
	}

	inline static int32_t get_offset_of_FieldOfView_10() { return static_cast<int32_t>(offsetof(CameraTag_t3464634111, ___FieldOfView_10)); }
	inline float get_FieldOfView_10() const { return ___FieldOfView_10; }
	inline float* get_address_of_FieldOfView_10() { return &___FieldOfView_10; }
	inline void set_FieldOfView_10(float value)
	{
		___FieldOfView_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
