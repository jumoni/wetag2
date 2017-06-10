#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_ImageFormat2004029426.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.PictureFormat
struct  PictureFormat_t874171723  : public ImageFormat_t2004029426
{
public:
	// UnityEngine.Texture2D PowerUI.PictureFormat::Image
	Texture2D_t3542995729 * ___Image_0;
	// UnityEngine.Material PowerUI.PictureFormat::IsolatedMaterial
	Material_t193706927 * ___IsolatedMaterial_1;

public:
	inline static int32_t get_offset_of_Image_0() { return static_cast<int32_t>(offsetof(PictureFormat_t874171723, ___Image_0)); }
	inline Texture2D_t3542995729 * get_Image_0() const { return ___Image_0; }
	inline Texture2D_t3542995729 ** get_address_of_Image_0() { return &___Image_0; }
	inline void set_Image_0(Texture2D_t3542995729 * value)
	{
		___Image_0 = value;
		Il2CppCodeGenWriteBarrier(&___Image_0, value);
	}

	inline static int32_t get_offset_of_IsolatedMaterial_1() { return static_cast<int32_t>(offsetof(PictureFormat_t874171723, ___IsolatedMaterial_1)); }
	inline Material_t193706927 * get_IsolatedMaterial_1() const { return ___IsolatedMaterial_1; }
	inline Material_t193706927 ** get_address_of_IsolatedMaterial_1() { return &___IsolatedMaterial_1; }
	inline void set_IsolatedMaterial_1(Material_t193706927 * value)
	{
		___IsolatedMaterial_1 = value;
		Il2CppCodeGenWriteBarrier(&___IsolatedMaterial_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
