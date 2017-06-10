#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_Css_DisplayableProperty2567878243.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.String
struct String_t;
// PowerUI.Css.TextDecorationInfo
struct TextDecorationInfo_t1386805745;
// PowerUI.DynamicFont
struct DynamicFont_t2669411424;
// InfiniText.Glyph[]
struct GlyphU5BU5D_t1323777933;
// System.Single[]
struct SingleU5BU5D_t577127397;
// PowerUI.Text3D
struct Text3D_t3246927876;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.TextRenderingProperty
struct  TextRenderingProperty_t409384982  : public DisplayableProperty_t2567878243
{
public:
	// System.Int32 PowerUI.Css.TextRenderingProperty::Weight
	int32_t ___Weight_7;
	// System.Boolean PowerUI.Css.TextRenderingProperty::Italic
	bool ___Italic_8;
	// System.String PowerUI.Css.TextRenderingProperty::Text
	String_t* ___Text_9;
	// System.Single PowerUI.Css.TextRenderingProperty::FontSize
	float ___FontSize_10;
	// System.Single PowerUI.Css.TextRenderingProperty::SpaceSize
	float ___SpaceSize_11;
	// UnityEngine.Color PowerUI.Css.TextRenderingProperty::BaseColour
	Color_t2020392075  ___BaseColour_12;
	// UnityEngine.Color PowerUI.Css.TextRenderingProperty::FontColour
	Color_t2020392075  ___FontColour_13;
	// System.Single PowerUI.Css.TextRenderingProperty::Alias
	float ___Alias_14;
	// System.Single PowerUI.Css.TextRenderingProperty::Ascender
	float ___Ascender_15;
	// System.Single PowerUI.Css.TextRenderingProperty::LineGap
	float ___LineGap_16;
	// System.Boolean PowerUI.Css.TextRenderingProperty::AllWhitespace
	bool ___AllWhitespace_17;
	// System.Single PowerUI.Css.TextRenderingProperty::ScaleFactor
	float ___ScaleFactor_18;
	// System.Single PowerUI.Css.TextRenderingProperty::LetterSpacing
	float ___LetterSpacing_19;
	// PowerUI.Css.TextDecorationInfo PowerUI.Css.TextRenderingProperty::TextLine
	TextDecorationInfo_t1386805745 * ___TextLine_20;
	// PowerUI.DynamicFont PowerUI.Css.TextRenderingProperty::FontToDraw
	DynamicFont_t2669411424 * ___FontToDraw_21;
	// System.Int32 PowerUI.Css.TextRenderingProperty::EndPunctuationCount
	int32_t ___EndPunctuationCount_22;
	// System.Int32 PowerUI.Css.TextRenderingProperty::StartPunctuationCount
	int32_t ___StartPunctuationCount_23;
	// InfiniText.Glyph[] PowerUI.Css.TextRenderingProperty::Characters
	GlyphU5BU5D_t1323777933* ___Characters_24;
	// System.Single[] PowerUI.Css.TextRenderingProperty::Kerning
	SingleU5BU5D_t577127397* ___Kerning_25;
	// PowerUI.Text3D PowerUI.Css.TextRenderingProperty::Text3D
	Text3D_t3246927876 * ___Text3D_26;
	// System.Single PowerUI.Css.TextRenderingProperty::Extrude
	float ___Extrude_27;

public:
	inline static int32_t get_offset_of_Weight_7() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___Weight_7)); }
	inline int32_t get_Weight_7() const { return ___Weight_7; }
	inline int32_t* get_address_of_Weight_7() { return &___Weight_7; }
	inline void set_Weight_7(int32_t value)
	{
		___Weight_7 = value;
	}

	inline static int32_t get_offset_of_Italic_8() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___Italic_8)); }
	inline bool get_Italic_8() const { return ___Italic_8; }
	inline bool* get_address_of_Italic_8() { return &___Italic_8; }
	inline void set_Italic_8(bool value)
	{
		___Italic_8 = value;
	}

	inline static int32_t get_offset_of_Text_9() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___Text_9)); }
	inline String_t* get_Text_9() const { return ___Text_9; }
	inline String_t** get_address_of_Text_9() { return &___Text_9; }
	inline void set_Text_9(String_t* value)
	{
		___Text_9 = value;
		Il2CppCodeGenWriteBarrier(&___Text_9, value);
	}

	inline static int32_t get_offset_of_FontSize_10() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___FontSize_10)); }
	inline float get_FontSize_10() const { return ___FontSize_10; }
	inline float* get_address_of_FontSize_10() { return &___FontSize_10; }
	inline void set_FontSize_10(float value)
	{
		___FontSize_10 = value;
	}

	inline static int32_t get_offset_of_SpaceSize_11() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___SpaceSize_11)); }
	inline float get_SpaceSize_11() const { return ___SpaceSize_11; }
	inline float* get_address_of_SpaceSize_11() { return &___SpaceSize_11; }
	inline void set_SpaceSize_11(float value)
	{
		___SpaceSize_11 = value;
	}

	inline static int32_t get_offset_of_BaseColour_12() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___BaseColour_12)); }
	inline Color_t2020392075  get_BaseColour_12() const { return ___BaseColour_12; }
	inline Color_t2020392075 * get_address_of_BaseColour_12() { return &___BaseColour_12; }
	inline void set_BaseColour_12(Color_t2020392075  value)
	{
		___BaseColour_12 = value;
	}

	inline static int32_t get_offset_of_FontColour_13() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___FontColour_13)); }
	inline Color_t2020392075  get_FontColour_13() const { return ___FontColour_13; }
	inline Color_t2020392075 * get_address_of_FontColour_13() { return &___FontColour_13; }
	inline void set_FontColour_13(Color_t2020392075  value)
	{
		___FontColour_13 = value;
	}

	inline static int32_t get_offset_of_Alias_14() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___Alias_14)); }
	inline float get_Alias_14() const { return ___Alias_14; }
	inline float* get_address_of_Alias_14() { return &___Alias_14; }
	inline void set_Alias_14(float value)
	{
		___Alias_14 = value;
	}

	inline static int32_t get_offset_of_Ascender_15() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___Ascender_15)); }
	inline float get_Ascender_15() const { return ___Ascender_15; }
	inline float* get_address_of_Ascender_15() { return &___Ascender_15; }
	inline void set_Ascender_15(float value)
	{
		___Ascender_15 = value;
	}

	inline static int32_t get_offset_of_LineGap_16() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___LineGap_16)); }
	inline float get_LineGap_16() const { return ___LineGap_16; }
	inline float* get_address_of_LineGap_16() { return &___LineGap_16; }
	inline void set_LineGap_16(float value)
	{
		___LineGap_16 = value;
	}

	inline static int32_t get_offset_of_AllWhitespace_17() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___AllWhitespace_17)); }
	inline bool get_AllWhitespace_17() const { return ___AllWhitespace_17; }
	inline bool* get_address_of_AllWhitespace_17() { return &___AllWhitespace_17; }
	inline void set_AllWhitespace_17(bool value)
	{
		___AllWhitespace_17 = value;
	}

	inline static int32_t get_offset_of_ScaleFactor_18() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___ScaleFactor_18)); }
	inline float get_ScaleFactor_18() const { return ___ScaleFactor_18; }
	inline float* get_address_of_ScaleFactor_18() { return &___ScaleFactor_18; }
	inline void set_ScaleFactor_18(float value)
	{
		___ScaleFactor_18 = value;
	}

	inline static int32_t get_offset_of_LetterSpacing_19() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___LetterSpacing_19)); }
	inline float get_LetterSpacing_19() const { return ___LetterSpacing_19; }
	inline float* get_address_of_LetterSpacing_19() { return &___LetterSpacing_19; }
	inline void set_LetterSpacing_19(float value)
	{
		___LetterSpacing_19 = value;
	}

	inline static int32_t get_offset_of_TextLine_20() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___TextLine_20)); }
	inline TextDecorationInfo_t1386805745 * get_TextLine_20() const { return ___TextLine_20; }
	inline TextDecorationInfo_t1386805745 ** get_address_of_TextLine_20() { return &___TextLine_20; }
	inline void set_TextLine_20(TextDecorationInfo_t1386805745 * value)
	{
		___TextLine_20 = value;
		Il2CppCodeGenWriteBarrier(&___TextLine_20, value);
	}

	inline static int32_t get_offset_of_FontToDraw_21() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___FontToDraw_21)); }
	inline DynamicFont_t2669411424 * get_FontToDraw_21() const { return ___FontToDraw_21; }
	inline DynamicFont_t2669411424 ** get_address_of_FontToDraw_21() { return &___FontToDraw_21; }
	inline void set_FontToDraw_21(DynamicFont_t2669411424 * value)
	{
		___FontToDraw_21 = value;
		Il2CppCodeGenWriteBarrier(&___FontToDraw_21, value);
	}

	inline static int32_t get_offset_of_EndPunctuationCount_22() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___EndPunctuationCount_22)); }
	inline int32_t get_EndPunctuationCount_22() const { return ___EndPunctuationCount_22; }
	inline int32_t* get_address_of_EndPunctuationCount_22() { return &___EndPunctuationCount_22; }
	inline void set_EndPunctuationCount_22(int32_t value)
	{
		___EndPunctuationCount_22 = value;
	}

	inline static int32_t get_offset_of_StartPunctuationCount_23() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___StartPunctuationCount_23)); }
	inline int32_t get_StartPunctuationCount_23() const { return ___StartPunctuationCount_23; }
	inline int32_t* get_address_of_StartPunctuationCount_23() { return &___StartPunctuationCount_23; }
	inline void set_StartPunctuationCount_23(int32_t value)
	{
		___StartPunctuationCount_23 = value;
	}

	inline static int32_t get_offset_of_Characters_24() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___Characters_24)); }
	inline GlyphU5BU5D_t1323777933* get_Characters_24() const { return ___Characters_24; }
	inline GlyphU5BU5D_t1323777933** get_address_of_Characters_24() { return &___Characters_24; }
	inline void set_Characters_24(GlyphU5BU5D_t1323777933* value)
	{
		___Characters_24 = value;
		Il2CppCodeGenWriteBarrier(&___Characters_24, value);
	}

	inline static int32_t get_offset_of_Kerning_25() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___Kerning_25)); }
	inline SingleU5BU5D_t577127397* get_Kerning_25() const { return ___Kerning_25; }
	inline SingleU5BU5D_t577127397** get_address_of_Kerning_25() { return &___Kerning_25; }
	inline void set_Kerning_25(SingleU5BU5D_t577127397* value)
	{
		___Kerning_25 = value;
		Il2CppCodeGenWriteBarrier(&___Kerning_25, value);
	}

	inline static int32_t get_offset_of_Text3D_26() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___Text3D_26)); }
	inline Text3D_t3246927876 * get_Text3D_26() const { return ___Text3D_26; }
	inline Text3D_t3246927876 ** get_address_of_Text3D_26() { return &___Text3D_26; }
	inline void set_Text3D_26(Text3D_t3246927876 * value)
	{
		___Text3D_26 = value;
		Il2CppCodeGenWriteBarrier(&___Text3D_26, value);
	}

	inline static int32_t get_offset_of_Extrude_27() { return static_cast<int32_t>(offsetof(TextRenderingProperty_t409384982, ___Extrude_27)); }
	inline float get_Extrude_27() const { return ___Extrude_27; }
	inline float* get_address_of_Extrude_27() { return &___Extrude_27; }
	inline void set_Extrude_27(float value)
	{
		___Extrude_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
