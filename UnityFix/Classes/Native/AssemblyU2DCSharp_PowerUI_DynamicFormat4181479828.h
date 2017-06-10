#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_ImageFormat2004029426.h"

// PowerUI.DynamicTexture
struct DynamicTexture_t3994024308;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.DynamicFormat
struct  DynamicFormat_t4181479828  : public ImageFormat_t2004029426
{
public:
	// PowerUI.DynamicTexture PowerUI.DynamicFormat::DynamicImage
	DynamicTexture_t3994024308 * ___DynamicImage_0;

public:
	inline static int32_t get_offset_of_DynamicImage_0() { return static_cast<int32_t>(offsetof(DynamicFormat_t4181479828, ___DynamicImage_0)); }
	inline DynamicTexture_t3994024308 * get_DynamicImage_0() const { return ___DynamicImage_0; }
	inline DynamicTexture_t3994024308 ** get_address_of_DynamicImage_0() { return &___DynamicImage_0; }
	inline void set_DynamicImage_0(DynamicTexture_t3994024308 * value)
	{
		___DynamicImage_0 = value;
		Il2CppCodeGenWriteBarrier(&___DynamicImage_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
