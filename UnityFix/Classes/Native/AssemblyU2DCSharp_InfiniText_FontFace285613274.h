#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_InfiniText_FontFaceFlags1072134447.h"

// System.String
struct String_t;
// InfiniText.FontFamily
struct FontFamily_t2773376323;
// InfiniText.FontFace
struct FontFace_t285613274;
// System.Collections.Generic.Dictionary`2<System.Int32,InfiniText.Glyph>
struct Dictionary_2_t493888839;
// InfiniText.CffGlyphParser
struct CffGlyphParser_t159697976;
// InfiniText.FontParser
struct FontParser_t2451351668;
// InfiniText.Glyph[]
struct GlyphU5BU5D_t1323777933;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfiniText.FontFace
struct  FontFace_t285613274  : public Il2CppObject
{
public:
	// System.Int32 InfiniText.FontFace::Weight
	int32_t ___Weight_0;
	// System.String InfiniText.FontFace::Name
	String_t* ___Name_1;
	// System.Boolean InfiniText.FontFace::Clockness
	bool ___Clockness_2;
	// System.Boolean InfiniText.FontFace::DisableExtrude
	bool ___DisableExtrude_3;
	// System.Boolean InfiniText.FontFace::WindingUnknown
	bool ___WindingUnknown_4;
	// System.Boolean InfiniText.FontFace::RequiresLoad
	bool ___RequiresLoad_5;
	// System.Single InfiniText.FontFace::LineGap
	float ___LineGap_6;
	// System.Single InfiniText.FontFace::ItalicAngle
	float ___ItalicAngle_7;
	// System.Single InfiniText.FontFace::Ascender
	float ___Ascender_8;
	// System.Single InfiniText.FontFace::Descender
	float ___Descender_9;
	// InfiniText.FontFamily InfiniText.FontFace::Family
	FontFamily_t2773376323 * ___Family_10;
	// System.Int32 InfiniText.FontFace::CharacterCount
	int32_t ___CharacterCount_11;
	// System.Single InfiniText.FontFace::MaxAdvanceWidth
	float ___MaxAdvanceWidth_12;
	// System.Single InfiniText.FontFace::MinLeftSideBearing
	float ___MinLeftSideBearing_13;
	// System.Single InfiniText.FontFace::MinRightSideBearing
	float ___MinRightSideBearing_14;
	// System.Single InfiniText.FontFace::MaxXExtent
	float ___MaxXExtent_15;
	// System.Single InfiniText.FontFace::CaretAngle
	float ___CaretAngle_16;
	// System.Single InfiniText.FontFace::CaretOffset
	float ___CaretOffset_17;
	// System.Int32 InfiniText.FontFace::NumberOfHMetrics
	int32_t ___NumberOfHMetrics_18;
	// System.Int32 InfiniText.FontFace::UnitsPerEm
	int32_t ___UnitsPerEm_19;
	// System.Single InfiniText.FontFace::UnitsPerEmF
	float ___UnitsPerEmF_20;
	// System.Single InfiniText.FontFace::StrikeSize
	float ___StrikeSize_21;
	// System.Single InfiniText.FontFace::StrikeOffset
	float ___StrikeOffset_22;
	// InfiniText.FontFace InfiniText.FontFace::SyntheticDerivative
	FontFace_t285613274 * ___SyntheticDerivative_23;
	// InfiniText.FontFaceFlags InfiniText.FontFace::StyleFlags
	int32_t ___StyleFlags_24;
	// System.Collections.Generic.Dictionary`2<System.Int32,InfiniText.Glyph> InfiniText.FontFace::Glyphs
	Dictionary_2_t493888839 * ___Glyphs_25;
	// InfiniText.CffGlyphParser InfiniText.FontFace::CffParser
	CffGlyphParser_t159697976 * ___CffParser_26;
	// InfiniText.FontParser InfiniText.FontFace::Parser
	FontParser_t2451351668 * ___Parser_27;
	// InfiniText.Glyph[] InfiniText.FontFace::ParserGlyphs
	GlyphU5BU5D_t1323777933* ___ParserGlyphs_28;
	// System.Int32 InfiniText.FontFace::UnloadedGlyphs
	int32_t ___UnloadedGlyphs_29;

public:
	inline static int32_t get_offset_of_Weight_0() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___Weight_0)); }
	inline int32_t get_Weight_0() const { return ___Weight_0; }
	inline int32_t* get_address_of_Weight_0() { return &___Weight_0; }
	inline void set_Weight_0(int32_t value)
	{
		___Weight_0 = value;
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier(&___Name_1, value);
	}

	inline static int32_t get_offset_of_Clockness_2() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___Clockness_2)); }
	inline bool get_Clockness_2() const { return ___Clockness_2; }
	inline bool* get_address_of_Clockness_2() { return &___Clockness_2; }
	inline void set_Clockness_2(bool value)
	{
		___Clockness_2 = value;
	}

	inline static int32_t get_offset_of_DisableExtrude_3() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___DisableExtrude_3)); }
	inline bool get_DisableExtrude_3() const { return ___DisableExtrude_3; }
	inline bool* get_address_of_DisableExtrude_3() { return &___DisableExtrude_3; }
	inline void set_DisableExtrude_3(bool value)
	{
		___DisableExtrude_3 = value;
	}

	inline static int32_t get_offset_of_WindingUnknown_4() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___WindingUnknown_4)); }
	inline bool get_WindingUnknown_4() const { return ___WindingUnknown_4; }
	inline bool* get_address_of_WindingUnknown_4() { return &___WindingUnknown_4; }
	inline void set_WindingUnknown_4(bool value)
	{
		___WindingUnknown_4 = value;
	}

	inline static int32_t get_offset_of_RequiresLoad_5() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___RequiresLoad_5)); }
	inline bool get_RequiresLoad_5() const { return ___RequiresLoad_5; }
	inline bool* get_address_of_RequiresLoad_5() { return &___RequiresLoad_5; }
	inline void set_RequiresLoad_5(bool value)
	{
		___RequiresLoad_5 = value;
	}

	inline static int32_t get_offset_of_LineGap_6() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___LineGap_6)); }
	inline float get_LineGap_6() const { return ___LineGap_6; }
	inline float* get_address_of_LineGap_6() { return &___LineGap_6; }
	inline void set_LineGap_6(float value)
	{
		___LineGap_6 = value;
	}

	inline static int32_t get_offset_of_ItalicAngle_7() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___ItalicAngle_7)); }
	inline float get_ItalicAngle_7() const { return ___ItalicAngle_7; }
	inline float* get_address_of_ItalicAngle_7() { return &___ItalicAngle_7; }
	inline void set_ItalicAngle_7(float value)
	{
		___ItalicAngle_7 = value;
	}

	inline static int32_t get_offset_of_Ascender_8() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___Ascender_8)); }
	inline float get_Ascender_8() const { return ___Ascender_8; }
	inline float* get_address_of_Ascender_8() { return &___Ascender_8; }
	inline void set_Ascender_8(float value)
	{
		___Ascender_8 = value;
	}

	inline static int32_t get_offset_of_Descender_9() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___Descender_9)); }
	inline float get_Descender_9() const { return ___Descender_9; }
	inline float* get_address_of_Descender_9() { return &___Descender_9; }
	inline void set_Descender_9(float value)
	{
		___Descender_9 = value;
	}

	inline static int32_t get_offset_of_Family_10() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___Family_10)); }
	inline FontFamily_t2773376323 * get_Family_10() const { return ___Family_10; }
	inline FontFamily_t2773376323 ** get_address_of_Family_10() { return &___Family_10; }
	inline void set_Family_10(FontFamily_t2773376323 * value)
	{
		___Family_10 = value;
		Il2CppCodeGenWriteBarrier(&___Family_10, value);
	}

	inline static int32_t get_offset_of_CharacterCount_11() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___CharacterCount_11)); }
	inline int32_t get_CharacterCount_11() const { return ___CharacterCount_11; }
	inline int32_t* get_address_of_CharacterCount_11() { return &___CharacterCount_11; }
	inline void set_CharacterCount_11(int32_t value)
	{
		___CharacterCount_11 = value;
	}

	inline static int32_t get_offset_of_MaxAdvanceWidth_12() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___MaxAdvanceWidth_12)); }
	inline float get_MaxAdvanceWidth_12() const { return ___MaxAdvanceWidth_12; }
	inline float* get_address_of_MaxAdvanceWidth_12() { return &___MaxAdvanceWidth_12; }
	inline void set_MaxAdvanceWidth_12(float value)
	{
		___MaxAdvanceWidth_12 = value;
	}

	inline static int32_t get_offset_of_MinLeftSideBearing_13() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___MinLeftSideBearing_13)); }
	inline float get_MinLeftSideBearing_13() const { return ___MinLeftSideBearing_13; }
	inline float* get_address_of_MinLeftSideBearing_13() { return &___MinLeftSideBearing_13; }
	inline void set_MinLeftSideBearing_13(float value)
	{
		___MinLeftSideBearing_13 = value;
	}

	inline static int32_t get_offset_of_MinRightSideBearing_14() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___MinRightSideBearing_14)); }
	inline float get_MinRightSideBearing_14() const { return ___MinRightSideBearing_14; }
	inline float* get_address_of_MinRightSideBearing_14() { return &___MinRightSideBearing_14; }
	inline void set_MinRightSideBearing_14(float value)
	{
		___MinRightSideBearing_14 = value;
	}

	inline static int32_t get_offset_of_MaxXExtent_15() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___MaxXExtent_15)); }
	inline float get_MaxXExtent_15() const { return ___MaxXExtent_15; }
	inline float* get_address_of_MaxXExtent_15() { return &___MaxXExtent_15; }
	inline void set_MaxXExtent_15(float value)
	{
		___MaxXExtent_15 = value;
	}

	inline static int32_t get_offset_of_CaretAngle_16() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___CaretAngle_16)); }
	inline float get_CaretAngle_16() const { return ___CaretAngle_16; }
	inline float* get_address_of_CaretAngle_16() { return &___CaretAngle_16; }
	inline void set_CaretAngle_16(float value)
	{
		___CaretAngle_16 = value;
	}

	inline static int32_t get_offset_of_CaretOffset_17() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___CaretOffset_17)); }
	inline float get_CaretOffset_17() const { return ___CaretOffset_17; }
	inline float* get_address_of_CaretOffset_17() { return &___CaretOffset_17; }
	inline void set_CaretOffset_17(float value)
	{
		___CaretOffset_17 = value;
	}

	inline static int32_t get_offset_of_NumberOfHMetrics_18() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___NumberOfHMetrics_18)); }
	inline int32_t get_NumberOfHMetrics_18() const { return ___NumberOfHMetrics_18; }
	inline int32_t* get_address_of_NumberOfHMetrics_18() { return &___NumberOfHMetrics_18; }
	inline void set_NumberOfHMetrics_18(int32_t value)
	{
		___NumberOfHMetrics_18 = value;
	}

	inline static int32_t get_offset_of_UnitsPerEm_19() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___UnitsPerEm_19)); }
	inline int32_t get_UnitsPerEm_19() const { return ___UnitsPerEm_19; }
	inline int32_t* get_address_of_UnitsPerEm_19() { return &___UnitsPerEm_19; }
	inline void set_UnitsPerEm_19(int32_t value)
	{
		___UnitsPerEm_19 = value;
	}

	inline static int32_t get_offset_of_UnitsPerEmF_20() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___UnitsPerEmF_20)); }
	inline float get_UnitsPerEmF_20() const { return ___UnitsPerEmF_20; }
	inline float* get_address_of_UnitsPerEmF_20() { return &___UnitsPerEmF_20; }
	inline void set_UnitsPerEmF_20(float value)
	{
		___UnitsPerEmF_20 = value;
	}

	inline static int32_t get_offset_of_StrikeSize_21() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___StrikeSize_21)); }
	inline float get_StrikeSize_21() const { return ___StrikeSize_21; }
	inline float* get_address_of_StrikeSize_21() { return &___StrikeSize_21; }
	inline void set_StrikeSize_21(float value)
	{
		___StrikeSize_21 = value;
	}

	inline static int32_t get_offset_of_StrikeOffset_22() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___StrikeOffset_22)); }
	inline float get_StrikeOffset_22() const { return ___StrikeOffset_22; }
	inline float* get_address_of_StrikeOffset_22() { return &___StrikeOffset_22; }
	inline void set_StrikeOffset_22(float value)
	{
		___StrikeOffset_22 = value;
	}

	inline static int32_t get_offset_of_SyntheticDerivative_23() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___SyntheticDerivative_23)); }
	inline FontFace_t285613274 * get_SyntheticDerivative_23() const { return ___SyntheticDerivative_23; }
	inline FontFace_t285613274 ** get_address_of_SyntheticDerivative_23() { return &___SyntheticDerivative_23; }
	inline void set_SyntheticDerivative_23(FontFace_t285613274 * value)
	{
		___SyntheticDerivative_23 = value;
		Il2CppCodeGenWriteBarrier(&___SyntheticDerivative_23, value);
	}

	inline static int32_t get_offset_of_StyleFlags_24() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___StyleFlags_24)); }
	inline int32_t get_StyleFlags_24() const { return ___StyleFlags_24; }
	inline int32_t* get_address_of_StyleFlags_24() { return &___StyleFlags_24; }
	inline void set_StyleFlags_24(int32_t value)
	{
		___StyleFlags_24 = value;
	}

	inline static int32_t get_offset_of_Glyphs_25() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___Glyphs_25)); }
	inline Dictionary_2_t493888839 * get_Glyphs_25() const { return ___Glyphs_25; }
	inline Dictionary_2_t493888839 ** get_address_of_Glyphs_25() { return &___Glyphs_25; }
	inline void set_Glyphs_25(Dictionary_2_t493888839 * value)
	{
		___Glyphs_25 = value;
		Il2CppCodeGenWriteBarrier(&___Glyphs_25, value);
	}

	inline static int32_t get_offset_of_CffParser_26() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___CffParser_26)); }
	inline CffGlyphParser_t159697976 * get_CffParser_26() const { return ___CffParser_26; }
	inline CffGlyphParser_t159697976 ** get_address_of_CffParser_26() { return &___CffParser_26; }
	inline void set_CffParser_26(CffGlyphParser_t159697976 * value)
	{
		___CffParser_26 = value;
		Il2CppCodeGenWriteBarrier(&___CffParser_26, value);
	}

	inline static int32_t get_offset_of_Parser_27() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___Parser_27)); }
	inline FontParser_t2451351668 * get_Parser_27() const { return ___Parser_27; }
	inline FontParser_t2451351668 ** get_address_of_Parser_27() { return &___Parser_27; }
	inline void set_Parser_27(FontParser_t2451351668 * value)
	{
		___Parser_27 = value;
		Il2CppCodeGenWriteBarrier(&___Parser_27, value);
	}

	inline static int32_t get_offset_of_ParserGlyphs_28() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___ParserGlyphs_28)); }
	inline GlyphU5BU5D_t1323777933* get_ParserGlyphs_28() const { return ___ParserGlyphs_28; }
	inline GlyphU5BU5D_t1323777933** get_address_of_ParserGlyphs_28() { return &___ParserGlyphs_28; }
	inline void set_ParserGlyphs_28(GlyphU5BU5D_t1323777933* value)
	{
		___ParserGlyphs_28 = value;
		Il2CppCodeGenWriteBarrier(&___ParserGlyphs_28, value);
	}

	inline static int32_t get_offset_of_UnloadedGlyphs_29() { return static_cast<int32_t>(offsetof(FontFace_t285613274, ___UnloadedGlyphs_29)); }
	inline int32_t get_UnloadedGlyphs_29() const { return ___UnloadedGlyphs_29; }
	inline int32_t* get_address_of_UnloadedGlyphs_29() { return &___UnloadedGlyphs_29; }
	inline void set_UnloadedGlyphs_29(int32_t value)
	{
		___UnloadedGlyphs_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
