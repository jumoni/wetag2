#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Wrench_MLElement1615846541.h"
#include "AssemblyU2DCSharp_PowerUI_MouseOverState4109872770.h"

// System.Object
struct Il2CppObject;
// PowerUI.Document
struct Document_t1565145681;
// PowerUI.Element
struct Element_t3532621832;
// PowerUI.Css.ElementStyle
struct ElementStyle_t20514161;
// PowerUI.HtmlTagHandler
struct HtmlTagHandler_t2082879697;
// PowerUI.InputTag
struct InputTag_t2319782330;
// System.Collections.Generic.List`1<PowerUI.Element>
struct List_1_t2901742964;
// PowerUI.EventHandler
struct EventHandler_t628275786;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Element
struct  Element_t3532621832  : public MLElement_t1615846541
{
public:
	// System.Object PowerUI.Element::Data
	Il2CppObject * ___Data_3;
	// System.Boolean PowerUI.Element::HScrollbar
	bool ___HScrollbar_4;
	// System.Boolean PowerUI.Element::VScrollbar
	bool ___VScrollbar_5;
	// PowerUI.Document PowerUI.Element::Document
	Document_t1565145681 * ___Document_6;
	// PowerUI.Element PowerUI.Element::ParentNode
	Element_t3532621832 * ___ParentNode_7;
	// PowerUI.Css.ElementStyle PowerUI.Element::Style
	ElementStyle_t20514161 * ___Style_8;
	// PowerUI.HtmlTagHandler PowerUI.Element::Handler
	HtmlTagHandler_t2082879697 * ___Handler_9;
	// PowerUI.MouseOverState PowerUI.Element::MousedOver
	int32_t ___MousedOver_10;
	// PowerUI.InputTag PowerUI.Element::VerticalScrollbar
	InputTag_t2319782330 * ___VerticalScrollbar_11;
	// System.Collections.Generic.List`1<PowerUI.Element> PowerUI.Element::ChildNodes
	List_1_t2901742964 * ___ChildNodes_12;
	// PowerUI.InputTag PowerUI.Element::HorizontalScrollbar
	InputTag_t2319782330 * ___HorizontalScrollbar_13;
	// System.Collections.Generic.List`1<PowerUI.Element> PowerUI.Element::KidsToRender
	List_1_t2901742964 * ___KidsToRender_14;
	// System.Boolean PowerUI.Element::IsRebuildingChildren
	bool ___IsRebuildingChildren_15;
	// PowerUI.EventHandler PowerUI.Element::OnKeyUp
	EventHandler_t628275786 * ___OnKeyUp_16;
	// PowerUI.EventHandler PowerUI.Element::OnKeyDown
	EventHandler_t628275786 * ___OnKeyDown_17;
	// PowerUI.EventHandler PowerUI.Element::OnMouseUp
	EventHandler_t628275786 * ___OnMouseUp_18;
	// PowerUI.EventHandler PowerUI.Element::OnMouseOut
	EventHandler_t628275786 * ___OnMouseOut_19;
	// PowerUI.EventHandler PowerUI.Element::OnMouseDown
	EventHandler_t628275786 * ___OnMouseDown_20;
	// PowerUI.EventHandler PowerUI.Element::OnMouseMove
	EventHandler_t628275786 * ___OnMouseMove_21;
	// PowerUI.EventHandler PowerUI.Element::OnMouseOver
	EventHandler_t628275786 * ___OnMouseOver_22;
	// PowerUI.EventHandler PowerUI.Element::OnLoadedEvent
	EventHandler_t628275786 * ___OnLoadedEvent_23;
	// PowerUI.EventHandler PowerUI.Element::OnFocus
	EventHandler_t628275786 * ___OnFocus_24;
	// PowerUI.EventHandler PowerUI.Element::OnBlur
	EventHandler_t628275786 * ___OnBlur_25;
	// PowerUI.EventHandler PowerUI.Element::OnClick
	EventHandler_t628275786 * ___OnClick_26;

public:
	inline static int32_t get_offset_of_Data_3() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___Data_3)); }
	inline Il2CppObject * get_Data_3() const { return ___Data_3; }
	inline Il2CppObject ** get_address_of_Data_3() { return &___Data_3; }
	inline void set_Data_3(Il2CppObject * value)
	{
		___Data_3 = value;
		Il2CppCodeGenWriteBarrier(&___Data_3, value);
	}

	inline static int32_t get_offset_of_HScrollbar_4() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___HScrollbar_4)); }
	inline bool get_HScrollbar_4() const { return ___HScrollbar_4; }
	inline bool* get_address_of_HScrollbar_4() { return &___HScrollbar_4; }
	inline void set_HScrollbar_4(bool value)
	{
		___HScrollbar_4 = value;
	}

	inline static int32_t get_offset_of_VScrollbar_5() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___VScrollbar_5)); }
	inline bool get_VScrollbar_5() const { return ___VScrollbar_5; }
	inline bool* get_address_of_VScrollbar_5() { return &___VScrollbar_5; }
	inline void set_VScrollbar_5(bool value)
	{
		___VScrollbar_5 = value;
	}

	inline static int32_t get_offset_of_Document_6() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___Document_6)); }
	inline Document_t1565145681 * get_Document_6() const { return ___Document_6; }
	inline Document_t1565145681 ** get_address_of_Document_6() { return &___Document_6; }
	inline void set_Document_6(Document_t1565145681 * value)
	{
		___Document_6 = value;
		Il2CppCodeGenWriteBarrier(&___Document_6, value);
	}

	inline static int32_t get_offset_of_ParentNode_7() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___ParentNode_7)); }
	inline Element_t3532621832 * get_ParentNode_7() const { return ___ParentNode_7; }
	inline Element_t3532621832 ** get_address_of_ParentNode_7() { return &___ParentNode_7; }
	inline void set_ParentNode_7(Element_t3532621832 * value)
	{
		___ParentNode_7 = value;
		Il2CppCodeGenWriteBarrier(&___ParentNode_7, value);
	}

	inline static int32_t get_offset_of_Style_8() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___Style_8)); }
	inline ElementStyle_t20514161 * get_Style_8() const { return ___Style_8; }
	inline ElementStyle_t20514161 ** get_address_of_Style_8() { return &___Style_8; }
	inline void set_Style_8(ElementStyle_t20514161 * value)
	{
		___Style_8 = value;
		Il2CppCodeGenWriteBarrier(&___Style_8, value);
	}

	inline static int32_t get_offset_of_Handler_9() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___Handler_9)); }
	inline HtmlTagHandler_t2082879697 * get_Handler_9() const { return ___Handler_9; }
	inline HtmlTagHandler_t2082879697 ** get_address_of_Handler_9() { return &___Handler_9; }
	inline void set_Handler_9(HtmlTagHandler_t2082879697 * value)
	{
		___Handler_9 = value;
		Il2CppCodeGenWriteBarrier(&___Handler_9, value);
	}

	inline static int32_t get_offset_of_MousedOver_10() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___MousedOver_10)); }
	inline int32_t get_MousedOver_10() const { return ___MousedOver_10; }
	inline int32_t* get_address_of_MousedOver_10() { return &___MousedOver_10; }
	inline void set_MousedOver_10(int32_t value)
	{
		___MousedOver_10 = value;
	}

	inline static int32_t get_offset_of_VerticalScrollbar_11() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___VerticalScrollbar_11)); }
	inline InputTag_t2319782330 * get_VerticalScrollbar_11() const { return ___VerticalScrollbar_11; }
	inline InputTag_t2319782330 ** get_address_of_VerticalScrollbar_11() { return &___VerticalScrollbar_11; }
	inline void set_VerticalScrollbar_11(InputTag_t2319782330 * value)
	{
		___VerticalScrollbar_11 = value;
		Il2CppCodeGenWriteBarrier(&___VerticalScrollbar_11, value);
	}

	inline static int32_t get_offset_of_ChildNodes_12() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___ChildNodes_12)); }
	inline List_1_t2901742964 * get_ChildNodes_12() const { return ___ChildNodes_12; }
	inline List_1_t2901742964 ** get_address_of_ChildNodes_12() { return &___ChildNodes_12; }
	inline void set_ChildNodes_12(List_1_t2901742964 * value)
	{
		___ChildNodes_12 = value;
		Il2CppCodeGenWriteBarrier(&___ChildNodes_12, value);
	}

	inline static int32_t get_offset_of_HorizontalScrollbar_13() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___HorizontalScrollbar_13)); }
	inline InputTag_t2319782330 * get_HorizontalScrollbar_13() const { return ___HorizontalScrollbar_13; }
	inline InputTag_t2319782330 ** get_address_of_HorizontalScrollbar_13() { return &___HorizontalScrollbar_13; }
	inline void set_HorizontalScrollbar_13(InputTag_t2319782330 * value)
	{
		___HorizontalScrollbar_13 = value;
		Il2CppCodeGenWriteBarrier(&___HorizontalScrollbar_13, value);
	}

	inline static int32_t get_offset_of_KidsToRender_14() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___KidsToRender_14)); }
	inline List_1_t2901742964 * get_KidsToRender_14() const { return ___KidsToRender_14; }
	inline List_1_t2901742964 ** get_address_of_KidsToRender_14() { return &___KidsToRender_14; }
	inline void set_KidsToRender_14(List_1_t2901742964 * value)
	{
		___KidsToRender_14 = value;
		Il2CppCodeGenWriteBarrier(&___KidsToRender_14, value);
	}

	inline static int32_t get_offset_of_IsRebuildingChildren_15() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___IsRebuildingChildren_15)); }
	inline bool get_IsRebuildingChildren_15() const { return ___IsRebuildingChildren_15; }
	inline bool* get_address_of_IsRebuildingChildren_15() { return &___IsRebuildingChildren_15; }
	inline void set_IsRebuildingChildren_15(bool value)
	{
		___IsRebuildingChildren_15 = value;
	}

	inline static int32_t get_offset_of_OnKeyUp_16() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___OnKeyUp_16)); }
	inline EventHandler_t628275786 * get_OnKeyUp_16() const { return ___OnKeyUp_16; }
	inline EventHandler_t628275786 ** get_address_of_OnKeyUp_16() { return &___OnKeyUp_16; }
	inline void set_OnKeyUp_16(EventHandler_t628275786 * value)
	{
		___OnKeyUp_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnKeyUp_16, value);
	}

	inline static int32_t get_offset_of_OnKeyDown_17() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___OnKeyDown_17)); }
	inline EventHandler_t628275786 * get_OnKeyDown_17() const { return ___OnKeyDown_17; }
	inline EventHandler_t628275786 ** get_address_of_OnKeyDown_17() { return &___OnKeyDown_17; }
	inline void set_OnKeyDown_17(EventHandler_t628275786 * value)
	{
		___OnKeyDown_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnKeyDown_17, value);
	}

	inline static int32_t get_offset_of_OnMouseUp_18() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___OnMouseUp_18)); }
	inline EventHandler_t628275786 * get_OnMouseUp_18() const { return ___OnMouseUp_18; }
	inline EventHandler_t628275786 ** get_address_of_OnMouseUp_18() { return &___OnMouseUp_18; }
	inline void set_OnMouseUp_18(EventHandler_t628275786 * value)
	{
		___OnMouseUp_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnMouseUp_18, value);
	}

	inline static int32_t get_offset_of_OnMouseOut_19() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___OnMouseOut_19)); }
	inline EventHandler_t628275786 * get_OnMouseOut_19() const { return ___OnMouseOut_19; }
	inline EventHandler_t628275786 ** get_address_of_OnMouseOut_19() { return &___OnMouseOut_19; }
	inline void set_OnMouseOut_19(EventHandler_t628275786 * value)
	{
		___OnMouseOut_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnMouseOut_19, value);
	}

	inline static int32_t get_offset_of_OnMouseDown_20() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___OnMouseDown_20)); }
	inline EventHandler_t628275786 * get_OnMouseDown_20() const { return ___OnMouseDown_20; }
	inline EventHandler_t628275786 ** get_address_of_OnMouseDown_20() { return &___OnMouseDown_20; }
	inline void set_OnMouseDown_20(EventHandler_t628275786 * value)
	{
		___OnMouseDown_20 = value;
		Il2CppCodeGenWriteBarrier(&___OnMouseDown_20, value);
	}

	inline static int32_t get_offset_of_OnMouseMove_21() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___OnMouseMove_21)); }
	inline EventHandler_t628275786 * get_OnMouseMove_21() const { return ___OnMouseMove_21; }
	inline EventHandler_t628275786 ** get_address_of_OnMouseMove_21() { return &___OnMouseMove_21; }
	inline void set_OnMouseMove_21(EventHandler_t628275786 * value)
	{
		___OnMouseMove_21 = value;
		Il2CppCodeGenWriteBarrier(&___OnMouseMove_21, value);
	}

	inline static int32_t get_offset_of_OnMouseOver_22() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___OnMouseOver_22)); }
	inline EventHandler_t628275786 * get_OnMouseOver_22() const { return ___OnMouseOver_22; }
	inline EventHandler_t628275786 ** get_address_of_OnMouseOver_22() { return &___OnMouseOver_22; }
	inline void set_OnMouseOver_22(EventHandler_t628275786 * value)
	{
		___OnMouseOver_22 = value;
		Il2CppCodeGenWriteBarrier(&___OnMouseOver_22, value);
	}

	inline static int32_t get_offset_of_OnLoadedEvent_23() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___OnLoadedEvent_23)); }
	inline EventHandler_t628275786 * get_OnLoadedEvent_23() const { return ___OnLoadedEvent_23; }
	inline EventHandler_t628275786 ** get_address_of_OnLoadedEvent_23() { return &___OnLoadedEvent_23; }
	inline void set_OnLoadedEvent_23(EventHandler_t628275786 * value)
	{
		___OnLoadedEvent_23 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoadedEvent_23, value);
	}

	inline static int32_t get_offset_of_OnFocus_24() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___OnFocus_24)); }
	inline EventHandler_t628275786 * get_OnFocus_24() const { return ___OnFocus_24; }
	inline EventHandler_t628275786 ** get_address_of_OnFocus_24() { return &___OnFocus_24; }
	inline void set_OnFocus_24(EventHandler_t628275786 * value)
	{
		___OnFocus_24 = value;
		Il2CppCodeGenWriteBarrier(&___OnFocus_24, value);
	}

	inline static int32_t get_offset_of_OnBlur_25() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___OnBlur_25)); }
	inline EventHandler_t628275786 * get_OnBlur_25() const { return ___OnBlur_25; }
	inline EventHandler_t628275786 ** get_address_of_OnBlur_25() { return &___OnBlur_25; }
	inline void set_OnBlur_25(EventHandler_t628275786 * value)
	{
		___OnBlur_25 = value;
		Il2CppCodeGenWriteBarrier(&___OnBlur_25, value);
	}

	inline static int32_t get_offset_of_OnClick_26() { return static_cast<int32_t>(offsetof(Element_t3532621832, ___OnClick_26)); }
	inline EventHandler_t628275786 * get_OnClick_26() const { return ___OnClick_26; }
	inline EventHandler_t628275786 ** get_address_of_OnClick_26() { return &___OnClick_26; }
	inline void set_OnClick_26(EventHandler_t628275786 * value)
	{
		___OnClick_26 = value;
		Il2CppCodeGenWriteBarrier(&___OnClick_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
