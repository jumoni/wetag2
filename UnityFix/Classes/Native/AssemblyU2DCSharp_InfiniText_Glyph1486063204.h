#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Blaze_VectorPath4108957350.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

// PowerUI.ImagePackage
struct ImagePackage_t3498155007;
// Blaze.AtlasLocation
struct AtlasLocation_t2349679574;
// InfiniText.FontFace
struct FontFace_t285613274;
// System.Collections.Generic.Dictionary`2<InfiniText.Glyph,System.Single>
struct Dictionary_2_t3672681155;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfiniText.Glyph
struct  Glyph_t1486063204  : public VectorPath_t4108957350
{
public:
	// PowerUI.ImagePackage InfiniText.Glyph::Image
	ImagePackage_t3498155007 * ___Image_9;
	// Blaze.AtlasLocation InfiniText.Glyph::Location
	AtlasLocation_t2349679574 * ___Location_10;
	// System.Int32 InfiniText.Glyph::UniqueID
	int32_t ___UniqueID_12;
	// InfiniText.FontFace InfiniText.Glyph::Font
	FontFace_t285613274 * ___Font_13;
	// System.Int32 InfiniText.Glyph::RawCharcode
	int32_t ___RawCharcode_14;
	// System.Single InfiniText.Glyph::AdvanceWidth
	float ___AdvanceWidth_15;
	// System.Single InfiniText.Glyph::LeftSideBearing
	float ___LeftSideBearing_16;
	// System.Collections.Generic.Dictionary`2<InfiniText.Glyph,System.Single> InfiniText.Glyph::Kerning
	Dictionary_2_t3672681155 * ___Kerning_17;

public:
	inline static int32_t get_offset_of_Image_9() { return static_cast<int32_t>(offsetof(Glyph_t1486063204, ___Image_9)); }
	inline ImagePackage_t3498155007 * get_Image_9() const { return ___Image_9; }
	inline ImagePackage_t3498155007 ** get_address_of_Image_9() { return &___Image_9; }
	inline void set_Image_9(ImagePackage_t3498155007 * value)
	{
		___Image_9 = value;
		Il2CppCodeGenWriteBarrier(&___Image_9, value);
	}

	inline static int32_t get_offset_of_Location_10() { return static_cast<int32_t>(offsetof(Glyph_t1486063204, ___Location_10)); }
	inline AtlasLocation_t2349679574 * get_Location_10() const { return ___Location_10; }
	inline AtlasLocation_t2349679574 ** get_address_of_Location_10() { return &___Location_10; }
	inline void set_Location_10(AtlasLocation_t2349679574 * value)
	{
		___Location_10 = value;
		Il2CppCodeGenWriteBarrier(&___Location_10, value);
	}

	inline static int32_t get_offset_of_UniqueID_12() { return static_cast<int32_t>(offsetof(Glyph_t1486063204, ___UniqueID_12)); }
	inline int32_t get_UniqueID_12() const { return ___UniqueID_12; }
	inline int32_t* get_address_of_UniqueID_12() { return &___UniqueID_12; }
	inline void set_UniqueID_12(int32_t value)
	{
		___UniqueID_12 = value;
	}

	inline static int32_t get_offset_of_Font_13() { return static_cast<int32_t>(offsetof(Glyph_t1486063204, ___Font_13)); }
	inline FontFace_t285613274 * get_Font_13() const { return ___Font_13; }
	inline FontFace_t285613274 ** get_address_of_Font_13() { return &___Font_13; }
	inline void set_Font_13(FontFace_t285613274 * value)
	{
		___Font_13 = value;
		Il2CppCodeGenWriteBarrier(&___Font_13, value);
	}

	inline static int32_t get_offset_of_RawCharcode_14() { return static_cast<int32_t>(offsetof(Glyph_t1486063204, ___RawCharcode_14)); }
	inline int32_t get_RawCharcode_14() const { return ___RawCharcode_14; }
	inline int32_t* get_address_of_RawCharcode_14() { return &___RawCharcode_14; }
	inline void set_RawCharcode_14(int32_t value)
	{
		___RawCharcode_14 = value;
	}

	inline static int32_t get_offset_of_AdvanceWidth_15() { return static_cast<int32_t>(offsetof(Glyph_t1486063204, ___AdvanceWidth_15)); }
	inline float get_AdvanceWidth_15() const { return ___AdvanceWidth_15; }
	inline float* get_address_of_AdvanceWidth_15() { return &___AdvanceWidth_15; }
	inline void set_AdvanceWidth_15(float value)
	{
		___AdvanceWidth_15 = value;
	}

	inline static int32_t get_offset_of_LeftSideBearing_16() { return static_cast<int32_t>(offsetof(Glyph_t1486063204, ___LeftSideBearing_16)); }
	inline float get_LeftSideBearing_16() const { return ___LeftSideBearing_16; }
	inline float* get_address_of_LeftSideBearing_16() { return &___LeftSideBearing_16; }
	inline void set_LeftSideBearing_16(float value)
	{
		___LeftSideBearing_16 = value;
	}

	inline static int32_t get_offset_of_Kerning_17() { return static_cast<int32_t>(offsetof(Glyph_t1486063204, ___Kerning_17)); }
	inline Dictionary_2_t3672681155 * get_Kerning_17() const { return ___Kerning_17; }
	inline Dictionary_2_t3672681155 ** get_address_of_Kerning_17() { return &___Kerning_17; }
	inline void set_Kerning_17(Dictionary_2_t3672681155 * value)
	{
		___Kerning_17 = value;
		Il2CppCodeGenWriteBarrier(&___Kerning_17, value);
	}
};

struct Glyph_t1486063204_StaticFields
{
public:
	// UnityEngine.Color32 InfiniText.Glyph::Fill
	Color32_t874517518  ___Fill_11;

public:
	inline static int32_t get_offset_of_Fill_11() { return static_cast<int32_t>(offsetof(Glyph_t1486063204_StaticFields, ___Fill_11)); }
	inline Color32_t874517518  get_Fill_11() const { return ___Fill_11; }
	inline Color32_t874517518 * get_address_of_Fill_11() { return &___Fill_11; }
	inline void set_Fill_11(Color32_t874517518  value)
	{
		___Fill_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
