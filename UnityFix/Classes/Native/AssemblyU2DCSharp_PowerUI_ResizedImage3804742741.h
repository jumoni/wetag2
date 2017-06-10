#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.ResizedImage
struct  ResizedImage_t3804742741  : public Il2CppObject
{
public:
	// System.Int32 PowerUI.ResizedImage::Width
	int32_t ___Width_0;
	// System.Int32 PowerUI.ResizedImage::Height
	int32_t ___Height_1;
	// System.Int32 PowerUI.ResizedImage::OriginalWidth
	int32_t ___OriginalWidth_2;
	// System.Int32 PowerUI.ResizedImage::OriginalHeight
	int32_t ___OriginalHeight_3;
	// UnityEngine.Texture2D PowerUI.ResizedImage::Image
	Texture2D_t3542995729 * ___Image_4;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(ResizedImage_t3804742741, ___Width_0)); }
	inline int32_t get_Width_0() const { return ___Width_0; }
	inline int32_t* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(int32_t value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(ResizedImage_t3804742741, ___Height_1)); }
	inline int32_t get_Height_1() const { return ___Height_1; }
	inline int32_t* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(int32_t value)
	{
		___Height_1 = value;
	}

	inline static int32_t get_offset_of_OriginalWidth_2() { return static_cast<int32_t>(offsetof(ResizedImage_t3804742741, ___OriginalWidth_2)); }
	inline int32_t get_OriginalWidth_2() const { return ___OriginalWidth_2; }
	inline int32_t* get_address_of_OriginalWidth_2() { return &___OriginalWidth_2; }
	inline void set_OriginalWidth_2(int32_t value)
	{
		___OriginalWidth_2 = value;
	}

	inline static int32_t get_offset_of_OriginalHeight_3() { return static_cast<int32_t>(offsetof(ResizedImage_t3804742741, ___OriginalHeight_3)); }
	inline int32_t get_OriginalHeight_3() const { return ___OriginalHeight_3; }
	inline int32_t* get_address_of_OriginalHeight_3() { return &___OriginalHeight_3; }
	inline void set_OriginalHeight_3(int32_t value)
	{
		___OriginalHeight_3 = value;
	}

	inline static int32_t get_offset_of_Image_4() { return static_cast<int32_t>(offsetof(ResizedImage_t3804742741, ___Image_4)); }
	inline Texture2D_t3542995729 * get_Image_4() const { return ___Image_4; }
	inline Texture2D_t3542995729 ** get_address_of_Image_4() { return &___Image_4; }
	inline void set_Image_4(Texture2D_t3542995729 * value)
	{
		___Image_4 = value;
		Il2CppCodeGenWriteBarrier(&___Image_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
