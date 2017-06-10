#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Blaze_UVBlock2782732346.h"

// Blaze.AtlasLocation
struct AtlasLocation_t2349679574;
// Blaze.AtlasEntity
struct AtlasEntity_t279341210;
// Blaze.TextureAtlas
struct TextureAtlas_t1022099648;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blaze.AtlasLocation
struct  AtlasLocation_t2349679574  : public UVBlock_t2782732346
{
public:
	// System.Int32 Blaze.AtlasLocation::UsageCount
	int32_t ___UsageCount_4;
	// Blaze.AtlasLocation Blaze.AtlasLocation::EmptyAfter
	AtlasLocation_t2349679574 * ___EmptyAfter_5;
	// Blaze.AtlasLocation Blaze.AtlasLocation::EmptyBefore
	AtlasLocation_t2349679574 * ___EmptyBefore_6;
	// System.Int32 Blaze.AtlasLocation::X
	int32_t ___X_7;
	// System.Int32 Blaze.AtlasLocation::Y
	int32_t ___Y_8;
	// System.Int32 Blaze.AtlasLocation::Area
	int32_t ___Area_9;
	// System.Int32 Blaze.AtlasLocation::Width
	int32_t ___Width_10;
	// System.Int32 Blaze.AtlasLocation::Height
	int32_t ___Height_11;
	// System.Boolean Blaze.AtlasLocation::Empty
	bool ___Empty_12;
	// Blaze.AtlasEntity Blaze.AtlasLocation::Image
	Il2CppObject * ___Image_13;
	// System.Int32 Blaze.AtlasLocation::AtlasID
	int32_t ___AtlasID_14;
	// Blaze.TextureAtlas Blaze.AtlasLocation::Atlas
	TextureAtlas_t1022099648 * ___Atlas_15;
	// System.Single Blaze.AtlasLocation::InvertedSizeX
	float ___InvertedSizeX_16;
	// System.Single Blaze.AtlasLocation::InvertedSizeY
	float ___InvertedSizeY_17;
	// System.Int32 Blaze.AtlasLocation::Spacing
	int32_t ___Spacing_18;

public:
	inline static int32_t get_offset_of_UsageCount_4() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___UsageCount_4)); }
	inline int32_t get_UsageCount_4() const { return ___UsageCount_4; }
	inline int32_t* get_address_of_UsageCount_4() { return &___UsageCount_4; }
	inline void set_UsageCount_4(int32_t value)
	{
		___UsageCount_4 = value;
	}

	inline static int32_t get_offset_of_EmptyAfter_5() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___EmptyAfter_5)); }
	inline AtlasLocation_t2349679574 * get_EmptyAfter_5() const { return ___EmptyAfter_5; }
	inline AtlasLocation_t2349679574 ** get_address_of_EmptyAfter_5() { return &___EmptyAfter_5; }
	inline void set_EmptyAfter_5(AtlasLocation_t2349679574 * value)
	{
		___EmptyAfter_5 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyAfter_5, value);
	}

	inline static int32_t get_offset_of_EmptyBefore_6() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___EmptyBefore_6)); }
	inline AtlasLocation_t2349679574 * get_EmptyBefore_6() const { return ___EmptyBefore_6; }
	inline AtlasLocation_t2349679574 ** get_address_of_EmptyBefore_6() { return &___EmptyBefore_6; }
	inline void set_EmptyBefore_6(AtlasLocation_t2349679574 * value)
	{
		___EmptyBefore_6 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyBefore_6, value);
	}

	inline static int32_t get_offset_of_X_7() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___X_7)); }
	inline int32_t get_X_7() const { return ___X_7; }
	inline int32_t* get_address_of_X_7() { return &___X_7; }
	inline void set_X_7(int32_t value)
	{
		___X_7 = value;
	}

	inline static int32_t get_offset_of_Y_8() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___Y_8)); }
	inline int32_t get_Y_8() const { return ___Y_8; }
	inline int32_t* get_address_of_Y_8() { return &___Y_8; }
	inline void set_Y_8(int32_t value)
	{
		___Y_8 = value;
	}

	inline static int32_t get_offset_of_Area_9() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___Area_9)); }
	inline int32_t get_Area_9() const { return ___Area_9; }
	inline int32_t* get_address_of_Area_9() { return &___Area_9; }
	inline void set_Area_9(int32_t value)
	{
		___Area_9 = value;
	}

	inline static int32_t get_offset_of_Width_10() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___Width_10)); }
	inline int32_t get_Width_10() const { return ___Width_10; }
	inline int32_t* get_address_of_Width_10() { return &___Width_10; }
	inline void set_Width_10(int32_t value)
	{
		___Width_10 = value;
	}

	inline static int32_t get_offset_of_Height_11() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___Height_11)); }
	inline int32_t get_Height_11() const { return ___Height_11; }
	inline int32_t* get_address_of_Height_11() { return &___Height_11; }
	inline void set_Height_11(int32_t value)
	{
		___Height_11 = value;
	}

	inline static int32_t get_offset_of_Empty_12() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___Empty_12)); }
	inline bool get_Empty_12() const { return ___Empty_12; }
	inline bool* get_address_of_Empty_12() { return &___Empty_12; }
	inline void set_Empty_12(bool value)
	{
		___Empty_12 = value;
	}

	inline static int32_t get_offset_of_Image_13() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___Image_13)); }
	inline Il2CppObject * get_Image_13() const { return ___Image_13; }
	inline Il2CppObject ** get_address_of_Image_13() { return &___Image_13; }
	inline void set_Image_13(Il2CppObject * value)
	{
		___Image_13 = value;
		Il2CppCodeGenWriteBarrier(&___Image_13, value);
	}

	inline static int32_t get_offset_of_AtlasID_14() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___AtlasID_14)); }
	inline int32_t get_AtlasID_14() const { return ___AtlasID_14; }
	inline int32_t* get_address_of_AtlasID_14() { return &___AtlasID_14; }
	inline void set_AtlasID_14(int32_t value)
	{
		___AtlasID_14 = value;
	}

	inline static int32_t get_offset_of_Atlas_15() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___Atlas_15)); }
	inline TextureAtlas_t1022099648 * get_Atlas_15() const { return ___Atlas_15; }
	inline TextureAtlas_t1022099648 ** get_address_of_Atlas_15() { return &___Atlas_15; }
	inline void set_Atlas_15(TextureAtlas_t1022099648 * value)
	{
		___Atlas_15 = value;
		Il2CppCodeGenWriteBarrier(&___Atlas_15, value);
	}

	inline static int32_t get_offset_of_InvertedSizeX_16() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___InvertedSizeX_16)); }
	inline float get_InvertedSizeX_16() const { return ___InvertedSizeX_16; }
	inline float* get_address_of_InvertedSizeX_16() { return &___InvertedSizeX_16; }
	inline void set_InvertedSizeX_16(float value)
	{
		___InvertedSizeX_16 = value;
	}

	inline static int32_t get_offset_of_InvertedSizeY_17() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___InvertedSizeY_17)); }
	inline float get_InvertedSizeY_17() const { return ___InvertedSizeY_17; }
	inline float* get_address_of_InvertedSizeY_17() { return &___InvertedSizeY_17; }
	inline void set_InvertedSizeY_17(float value)
	{
		___InvertedSizeY_17 = value;
	}

	inline static int32_t get_offset_of_Spacing_18() { return static_cast<int32_t>(offsetof(AtlasLocation_t2349679574, ___Spacing_18)); }
	inline int32_t get_Spacing_18() const { return ___Spacing_18; }
	inline int32_t* get_address_of_Spacing_18() { return &___Spacing_18; }
	inline void set_Spacing_18(int32_t value)
	{
		___Spacing_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
