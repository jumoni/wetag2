#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.Window
struct Window_t3494270094;
// PowerUI.UIEvent
struct UIEvent_t3768262282;
// PowerUI.Element
struct Element_t3532621832;
// PowerUI.Document
struct Document_t1565145681;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Window
struct  Window_t3494270094  : public Il2CppObject
{
public:
	// PowerUI.Window PowerUI.Window::top
	Window_t3494270094 * ___top_0;
	// PowerUI.Window PowerUI.Window::self
	Window_t3494270094 * ___self_1;
	// PowerUI.UIEvent PowerUI.Window::Event
	UIEvent_t3768262282 * ___Event_2;
	// PowerUI.Window PowerUI.Window::parent
	Window_t3494270094 * ___parent_3;
	// PowerUI.Element PowerUI.Window::iframe
	Element_t3532621832 * ___iframe_4;
	// PowerUI.Document PowerUI.Window::document
	Document_t1565145681 * ___document_5;

public:
	inline static int32_t get_offset_of_top_0() { return static_cast<int32_t>(offsetof(Window_t3494270094, ___top_0)); }
	inline Window_t3494270094 * get_top_0() const { return ___top_0; }
	inline Window_t3494270094 ** get_address_of_top_0() { return &___top_0; }
	inline void set_top_0(Window_t3494270094 * value)
	{
		___top_0 = value;
		Il2CppCodeGenWriteBarrier(&___top_0, value);
	}

	inline static int32_t get_offset_of_self_1() { return static_cast<int32_t>(offsetof(Window_t3494270094, ___self_1)); }
	inline Window_t3494270094 * get_self_1() const { return ___self_1; }
	inline Window_t3494270094 ** get_address_of_self_1() { return &___self_1; }
	inline void set_self_1(Window_t3494270094 * value)
	{
		___self_1 = value;
		Il2CppCodeGenWriteBarrier(&___self_1, value);
	}

	inline static int32_t get_offset_of_Event_2() { return static_cast<int32_t>(offsetof(Window_t3494270094, ___Event_2)); }
	inline UIEvent_t3768262282 * get_Event_2() const { return ___Event_2; }
	inline UIEvent_t3768262282 ** get_address_of_Event_2() { return &___Event_2; }
	inline void set_Event_2(UIEvent_t3768262282 * value)
	{
		___Event_2 = value;
		Il2CppCodeGenWriteBarrier(&___Event_2, value);
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(Window_t3494270094, ___parent_3)); }
	inline Window_t3494270094 * get_parent_3() const { return ___parent_3; }
	inline Window_t3494270094 ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(Window_t3494270094 * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier(&___parent_3, value);
	}

	inline static int32_t get_offset_of_iframe_4() { return static_cast<int32_t>(offsetof(Window_t3494270094, ___iframe_4)); }
	inline Element_t3532621832 * get_iframe_4() const { return ___iframe_4; }
	inline Element_t3532621832 ** get_address_of_iframe_4() { return &___iframe_4; }
	inline void set_iframe_4(Element_t3532621832 * value)
	{
		___iframe_4 = value;
		Il2CppCodeGenWriteBarrier(&___iframe_4, value);
	}

	inline static int32_t get_offset_of_document_5() { return static_cast<int32_t>(offsetof(Window_t3494270094, ___document_5)); }
	inline Document_t1565145681 * get_document_5() const { return ___document_5; }
	inline Document_t1565145681 ** get_address_of_document_5() { return &___document_5; }
	inline void set_document_5(Document_t1565145681 * value)
	{
		___document_5 = value;
		Il2CppCodeGenWriteBarrier(&___document_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
