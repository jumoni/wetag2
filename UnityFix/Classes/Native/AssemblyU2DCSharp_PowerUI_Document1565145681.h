#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,PowerUI.AttributeLookup>
struct Dictionary_2_t328517330;
// PowerUI.Css.StyleSheet
struct StyleSheet_t3603472974;
// PowerUI.Element
struct Element_t3532621832;
// PowerUI.Window
struct Window_t3494270094;
// PowerUI.FilePath
struct FilePath_t3025149829;
// PowerUI.Renderman
struct Renderman_t1984383802;
// System.String[]
struct StringU5BU5D_t1642385972;
// PowerUI.UICode
struct UICode_t92947415;
// System.String
struct String_t;
// PowerUI.OnSizeChange
struct OnSizeChange_t566739484;
// PowerUI.InputEvent
struct InputEvent_t1529464268;
// PowerUI.TitleChange
struct TitleChange_t3181823260;
// Nitro.DynamicMethod`1<Nitro.Void>
struct DynamicMethod_1_t377489974;
// System.Collections.Generic.Dictionary`2<System.String,PowerUI.DynamicFont>
struct Dictionary_2_t289223390;
// Nitro.NitroDomainManager
struct NitroDomainManager_t1456940179;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Document
struct  Document_t1565145681  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,PowerUI.AttributeLookup> PowerUI.Document::AttributeIndex
	Dictionary_2_t328517330 * ___AttributeIndex_0;
	// PowerUI.Element PowerUI.Document::html
	Element_t3532621832 * ___html_2;
	// PowerUI.Element PowerUI.Document::body
	Element_t3532621832 * ___body_3;
	// PowerUI.Window PowerUI.Document::window
	Window_t3494270094 * ___window_4;
	// PowerUI.FilePath PowerUI.Document::location
	FilePath_t3025149829 * ___location_5;
	// System.Boolean PowerUI.Document::AotDocument
	bool ___AotDocument_6;
	// PowerUI.Renderman PowerUI.Document::Renderer
	Renderman_t1984383802 * ___Renderer_7;
	// System.String[] PowerUI.Document::CodeBuffer
	StringU5BU5D_t1642385972* ___CodeBuffer_8;
	// PowerUI.UICode PowerUI.Document::CodeInstance
	UICode_t92947415 * ___CodeInstance_9;
	// PowerUI.Element PowerUI.Document::DropdownBox
	Element_t3532621832 * ___DropdownBox_10;
	// System.String[] PowerUI.Document::StyleBuffer
	StringU5BU5D_t1642385972* ___StyleBuffer_11;
	// System.Boolean PowerUI.Document::FinishedParsing
	bool ___FinishedParsing_12;
	// PowerUI.Css.StyleSheet PowerUI.Document::Style
	StyleSheet_t3603472974 * ___Style_13;
	// System.String PowerUI.Document::CurrentTitle
	String_t* ___CurrentTitle_14;
	// System.String PowerUI.Document::ScriptLocation
	String_t* ___ScriptLocation_15;
	// PowerUI.OnSizeChange PowerUI.Document::OnResized
	OnSizeChange_t566739484 * ___OnResized_16;
	// System.String PowerUI.Document::CurrentTooltip
	String_t* ___CurrentTooltip_17;
	// PowerUI.InputEvent PowerUI.Document::KeyUp
	InputEvent_t1529464268 * ___KeyUp_18;
	// PowerUI.InputEvent PowerUI.Document::KeyDown
	InputEvent_t1529464268 * ___KeyDown_19;
	// PowerUI.InputEvent PowerUI.Document::MouseMove
	InputEvent_t1529464268 * ___MouseMove_20;
	// PowerUI.TitleChange PowerUI.Document::OnTitleChange
	TitleChange_t3181823260 * ___OnTitleChange_21;
	// PowerUI.TitleChange PowerUI.Document::OnTooltipChange
	TitleChange_t3181823260 * ___OnTooltipChange_22;
	// Nitro.DynamicMethod`1<Nitro.Void> PowerUI.Document::onkeyup
	DynamicMethod_1_t377489974 * ___onkeyup_23;
	// Nitro.DynamicMethod`1<Nitro.Void> PowerUI.Document::onresize
	DynamicMethod_1_t377489974 * ___onresize_24;
	// Nitro.DynamicMethod`1<Nitro.Void> PowerUI.Document::onkeydown
	DynamicMethod_1_t377489974 * ___onkeydown_25;
	// Nitro.DynamicMethod`1<Nitro.Void> PowerUI.Document::onmousemove
	DynamicMethod_1_t377489974 * ___onmousemove_26;
	// System.Collections.Generic.Dictionary`2<System.String,PowerUI.DynamicFont> PowerUI.Document::ActiveFonts
	Dictionary_2_t289223390 * ___ActiveFonts_27;
	// Nitro.NitroDomainManager PowerUI.Document::SecurityDomain
	NitroDomainManager_t1456940179 * ___SecurityDomain_28;

public:
	inline static int32_t get_offset_of_AttributeIndex_0() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___AttributeIndex_0)); }
	inline Dictionary_2_t328517330 * get_AttributeIndex_0() const { return ___AttributeIndex_0; }
	inline Dictionary_2_t328517330 ** get_address_of_AttributeIndex_0() { return &___AttributeIndex_0; }
	inline void set_AttributeIndex_0(Dictionary_2_t328517330 * value)
	{
		___AttributeIndex_0 = value;
		Il2CppCodeGenWriteBarrier(&___AttributeIndex_0, value);
	}

	inline static int32_t get_offset_of_html_2() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___html_2)); }
	inline Element_t3532621832 * get_html_2() const { return ___html_2; }
	inline Element_t3532621832 ** get_address_of_html_2() { return &___html_2; }
	inline void set_html_2(Element_t3532621832 * value)
	{
		___html_2 = value;
		Il2CppCodeGenWriteBarrier(&___html_2, value);
	}

	inline static int32_t get_offset_of_body_3() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___body_3)); }
	inline Element_t3532621832 * get_body_3() const { return ___body_3; }
	inline Element_t3532621832 ** get_address_of_body_3() { return &___body_3; }
	inline void set_body_3(Element_t3532621832 * value)
	{
		___body_3 = value;
		Il2CppCodeGenWriteBarrier(&___body_3, value);
	}

	inline static int32_t get_offset_of_window_4() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___window_4)); }
	inline Window_t3494270094 * get_window_4() const { return ___window_4; }
	inline Window_t3494270094 ** get_address_of_window_4() { return &___window_4; }
	inline void set_window_4(Window_t3494270094 * value)
	{
		___window_4 = value;
		Il2CppCodeGenWriteBarrier(&___window_4, value);
	}

	inline static int32_t get_offset_of_location_5() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___location_5)); }
	inline FilePath_t3025149829 * get_location_5() const { return ___location_5; }
	inline FilePath_t3025149829 ** get_address_of_location_5() { return &___location_5; }
	inline void set_location_5(FilePath_t3025149829 * value)
	{
		___location_5 = value;
		Il2CppCodeGenWriteBarrier(&___location_5, value);
	}

	inline static int32_t get_offset_of_AotDocument_6() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___AotDocument_6)); }
	inline bool get_AotDocument_6() const { return ___AotDocument_6; }
	inline bool* get_address_of_AotDocument_6() { return &___AotDocument_6; }
	inline void set_AotDocument_6(bool value)
	{
		___AotDocument_6 = value;
	}

	inline static int32_t get_offset_of_Renderer_7() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___Renderer_7)); }
	inline Renderman_t1984383802 * get_Renderer_7() const { return ___Renderer_7; }
	inline Renderman_t1984383802 ** get_address_of_Renderer_7() { return &___Renderer_7; }
	inline void set_Renderer_7(Renderman_t1984383802 * value)
	{
		___Renderer_7 = value;
		Il2CppCodeGenWriteBarrier(&___Renderer_7, value);
	}

	inline static int32_t get_offset_of_CodeBuffer_8() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___CodeBuffer_8)); }
	inline StringU5BU5D_t1642385972* get_CodeBuffer_8() const { return ___CodeBuffer_8; }
	inline StringU5BU5D_t1642385972** get_address_of_CodeBuffer_8() { return &___CodeBuffer_8; }
	inline void set_CodeBuffer_8(StringU5BU5D_t1642385972* value)
	{
		___CodeBuffer_8 = value;
		Il2CppCodeGenWriteBarrier(&___CodeBuffer_8, value);
	}

	inline static int32_t get_offset_of_CodeInstance_9() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___CodeInstance_9)); }
	inline UICode_t92947415 * get_CodeInstance_9() const { return ___CodeInstance_9; }
	inline UICode_t92947415 ** get_address_of_CodeInstance_9() { return &___CodeInstance_9; }
	inline void set_CodeInstance_9(UICode_t92947415 * value)
	{
		___CodeInstance_9 = value;
		Il2CppCodeGenWriteBarrier(&___CodeInstance_9, value);
	}

	inline static int32_t get_offset_of_DropdownBox_10() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___DropdownBox_10)); }
	inline Element_t3532621832 * get_DropdownBox_10() const { return ___DropdownBox_10; }
	inline Element_t3532621832 ** get_address_of_DropdownBox_10() { return &___DropdownBox_10; }
	inline void set_DropdownBox_10(Element_t3532621832 * value)
	{
		___DropdownBox_10 = value;
		Il2CppCodeGenWriteBarrier(&___DropdownBox_10, value);
	}

	inline static int32_t get_offset_of_StyleBuffer_11() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___StyleBuffer_11)); }
	inline StringU5BU5D_t1642385972* get_StyleBuffer_11() const { return ___StyleBuffer_11; }
	inline StringU5BU5D_t1642385972** get_address_of_StyleBuffer_11() { return &___StyleBuffer_11; }
	inline void set_StyleBuffer_11(StringU5BU5D_t1642385972* value)
	{
		___StyleBuffer_11 = value;
		Il2CppCodeGenWriteBarrier(&___StyleBuffer_11, value);
	}

	inline static int32_t get_offset_of_FinishedParsing_12() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___FinishedParsing_12)); }
	inline bool get_FinishedParsing_12() const { return ___FinishedParsing_12; }
	inline bool* get_address_of_FinishedParsing_12() { return &___FinishedParsing_12; }
	inline void set_FinishedParsing_12(bool value)
	{
		___FinishedParsing_12 = value;
	}

	inline static int32_t get_offset_of_Style_13() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___Style_13)); }
	inline StyleSheet_t3603472974 * get_Style_13() const { return ___Style_13; }
	inline StyleSheet_t3603472974 ** get_address_of_Style_13() { return &___Style_13; }
	inline void set_Style_13(StyleSheet_t3603472974 * value)
	{
		___Style_13 = value;
		Il2CppCodeGenWriteBarrier(&___Style_13, value);
	}

	inline static int32_t get_offset_of_CurrentTitle_14() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___CurrentTitle_14)); }
	inline String_t* get_CurrentTitle_14() const { return ___CurrentTitle_14; }
	inline String_t** get_address_of_CurrentTitle_14() { return &___CurrentTitle_14; }
	inline void set_CurrentTitle_14(String_t* value)
	{
		___CurrentTitle_14 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentTitle_14, value);
	}

	inline static int32_t get_offset_of_ScriptLocation_15() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___ScriptLocation_15)); }
	inline String_t* get_ScriptLocation_15() const { return ___ScriptLocation_15; }
	inline String_t** get_address_of_ScriptLocation_15() { return &___ScriptLocation_15; }
	inline void set_ScriptLocation_15(String_t* value)
	{
		___ScriptLocation_15 = value;
		Il2CppCodeGenWriteBarrier(&___ScriptLocation_15, value);
	}

	inline static int32_t get_offset_of_OnResized_16() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___OnResized_16)); }
	inline OnSizeChange_t566739484 * get_OnResized_16() const { return ___OnResized_16; }
	inline OnSizeChange_t566739484 ** get_address_of_OnResized_16() { return &___OnResized_16; }
	inline void set_OnResized_16(OnSizeChange_t566739484 * value)
	{
		___OnResized_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnResized_16, value);
	}

	inline static int32_t get_offset_of_CurrentTooltip_17() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___CurrentTooltip_17)); }
	inline String_t* get_CurrentTooltip_17() const { return ___CurrentTooltip_17; }
	inline String_t** get_address_of_CurrentTooltip_17() { return &___CurrentTooltip_17; }
	inline void set_CurrentTooltip_17(String_t* value)
	{
		___CurrentTooltip_17 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentTooltip_17, value);
	}

	inline static int32_t get_offset_of_KeyUp_18() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___KeyUp_18)); }
	inline InputEvent_t1529464268 * get_KeyUp_18() const { return ___KeyUp_18; }
	inline InputEvent_t1529464268 ** get_address_of_KeyUp_18() { return &___KeyUp_18; }
	inline void set_KeyUp_18(InputEvent_t1529464268 * value)
	{
		___KeyUp_18 = value;
		Il2CppCodeGenWriteBarrier(&___KeyUp_18, value);
	}

	inline static int32_t get_offset_of_KeyDown_19() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___KeyDown_19)); }
	inline InputEvent_t1529464268 * get_KeyDown_19() const { return ___KeyDown_19; }
	inline InputEvent_t1529464268 ** get_address_of_KeyDown_19() { return &___KeyDown_19; }
	inline void set_KeyDown_19(InputEvent_t1529464268 * value)
	{
		___KeyDown_19 = value;
		Il2CppCodeGenWriteBarrier(&___KeyDown_19, value);
	}

	inline static int32_t get_offset_of_MouseMove_20() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___MouseMove_20)); }
	inline InputEvent_t1529464268 * get_MouseMove_20() const { return ___MouseMove_20; }
	inline InputEvent_t1529464268 ** get_address_of_MouseMove_20() { return &___MouseMove_20; }
	inline void set_MouseMove_20(InputEvent_t1529464268 * value)
	{
		___MouseMove_20 = value;
		Il2CppCodeGenWriteBarrier(&___MouseMove_20, value);
	}

	inline static int32_t get_offset_of_OnTitleChange_21() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___OnTitleChange_21)); }
	inline TitleChange_t3181823260 * get_OnTitleChange_21() const { return ___OnTitleChange_21; }
	inline TitleChange_t3181823260 ** get_address_of_OnTitleChange_21() { return &___OnTitleChange_21; }
	inline void set_OnTitleChange_21(TitleChange_t3181823260 * value)
	{
		___OnTitleChange_21 = value;
		Il2CppCodeGenWriteBarrier(&___OnTitleChange_21, value);
	}

	inline static int32_t get_offset_of_OnTooltipChange_22() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___OnTooltipChange_22)); }
	inline TitleChange_t3181823260 * get_OnTooltipChange_22() const { return ___OnTooltipChange_22; }
	inline TitleChange_t3181823260 ** get_address_of_OnTooltipChange_22() { return &___OnTooltipChange_22; }
	inline void set_OnTooltipChange_22(TitleChange_t3181823260 * value)
	{
		___OnTooltipChange_22 = value;
		Il2CppCodeGenWriteBarrier(&___OnTooltipChange_22, value);
	}

	inline static int32_t get_offset_of_onkeyup_23() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___onkeyup_23)); }
	inline DynamicMethod_1_t377489974 * get_onkeyup_23() const { return ___onkeyup_23; }
	inline DynamicMethod_1_t377489974 ** get_address_of_onkeyup_23() { return &___onkeyup_23; }
	inline void set_onkeyup_23(DynamicMethod_1_t377489974 * value)
	{
		___onkeyup_23 = value;
		Il2CppCodeGenWriteBarrier(&___onkeyup_23, value);
	}

	inline static int32_t get_offset_of_onresize_24() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___onresize_24)); }
	inline DynamicMethod_1_t377489974 * get_onresize_24() const { return ___onresize_24; }
	inline DynamicMethod_1_t377489974 ** get_address_of_onresize_24() { return &___onresize_24; }
	inline void set_onresize_24(DynamicMethod_1_t377489974 * value)
	{
		___onresize_24 = value;
		Il2CppCodeGenWriteBarrier(&___onresize_24, value);
	}

	inline static int32_t get_offset_of_onkeydown_25() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___onkeydown_25)); }
	inline DynamicMethod_1_t377489974 * get_onkeydown_25() const { return ___onkeydown_25; }
	inline DynamicMethod_1_t377489974 ** get_address_of_onkeydown_25() { return &___onkeydown_25; }
	inline void set_onkeydown_25(DynamicMethod_1_t377489974 * value)
	{
		___onkeydown_25 = value;
		Il2CppCodeGenWriteBarrier(&___onkeydown_25, value);
	}

	inline static int32_t get_offset_of_onmousemove_26() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___onmousemove_26)); }
	inline DynamicMethod_1_t377489974 * get_onmousemove_26() const { return ___onmousemove_26; }
	inline DynamicMethod_1_t377489974 ** get_address_of_onmousemove_26() { return &___onmousemove_26; }
	inline void set_onmousemove_26(DynamicMethod_1_t377489974 * value)
	{
		___onmousemove_26 = value;
		Il2CppCodeGenWriteBarrier(&___onmousemove_26, value);
	}

	inline static int32_t get_offset_of_ActiveFonts_27() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___ActiveFonts_27)); }
	inline Dictionary_2_t289223390 * get_ActiveFonts_27() const { return ___ActiveFonts_27; }
	inline Dictionary_2_t289223390 ** get_address_of_ActiveFonts_27() { return &___ActiveFonts_27; }
	inline void set_ActiveFonts_27(Dictionary_2_t289223390 * value)
	{
		___ActiveFonts_27 = value;
		Il2CppCodeGenWriteBarrier(&___ActiveFonts_27, value);
	}

	inline static int32_t get_offset_of_SecurityDomain_28() { return static_cast<int32_t>(offsetof(Document_t1565145681, ___SecurityDomain_28)); }
	inline NitroDomainManager_t1456940179 * get_SecurityDomain_28() const { return ___SecurityDomain_28; }
	inline NitroDomainManager_t1456940179 ** get_address_of_SecurityDomain_28() { return &___SecurityDomain_28; }
	inline void set_SecurityDomain_28(NitroDomainManager_t1456940179 * value)
	{
		___SecurityDomain_28 = value;
		Il2CppCodeGenWriteBarrier(&___SecurityDomain_28, value);
	}
};

struct Document_t1565145681_StaticFields
{
public:
	// PowerUI.Css.StyleSheet PowerUI.Document::DefaultStyleSheet
	StyleSheet_t3603472974 * ___DefaultStyleSheet_1;

public:
	inline static int32_t get_offset_of_DefaultStyleSheet_1() { return static_cast<int32_t>(offsetof(Document_t1565145681_StaticFields, ___DefaultStyleSheet_1)); }
	inline StyleSheet_t3603472974 * get_DefaultStyleSheet_1() const { return ___DefaultStyleSheet_1; }
	inline StyleSheet_t3603472974 ** get_address_of_DefaultStyleSheet_1() { return &___DefaultStyleSheet_1; }
	inline void set_DefaultStyleSheet_1(StyleSheet_t3603472974 * value)
	{
		___DefaultStyleSheet_1 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultStyleSheet_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
