#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.Element
struct Element_t3532621832;
// UnityEngine.Event
struct Event_t3028476042;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.UIEvent
struct  UIEvent_t3768262282  : public Il2CppObject
{
public:
	// System.Int32 PowerUI.UIEvent::clientX
	int32_t ___clientX_0;
	// System.Int32 PowerUI.UIEvent::clientY
	int32_t ___clientY_1;
	// System.Int32 PowerUI.UIEvent::keyCode
	int32_t ___keyCode_2;
	// System.Boolean PowerUI.UIEvent::heldDown
	bool ___heldDown_3;
	// PowerUI.Element PowerUI.UIEvent::target
	Element_t3532621832 * ___target_4;
	// System.Char PowerUI.UIEvent::character
	Il2CppChar ___character_5;
	// System.Int32 PowerUI.UIEvent::bubbleCount
	int32_t ___bubbleCount_6;
	// UnityEngine.Event PowerUI.UIEvent::unityEvent
	Event_t3028476042 * ___unityEvent_7;
	// System.Boolean PowerUI.UIEvent::cancelBubble
	bool ___cancelBubble_8;

public:
	inline static int32_t get_offset_of_clientX_0() { return static_cast<int32_t>(offsetof(UIEvent_t3768262282, ___clientX_0)); }
	inline int32_t get_clientX_0() const { return ___clientX_0; }
	inline int32_t* get_address_of_clientX_0() { return &___clientX_0; }
	inline void set_clientX_0(int32_t value)
	{
		___clientX_0 = value;
	}

	inline static int32_t get_offset_of_clientY_1() { return static_cast<int32_t>(offsetof(UIEvent_t3768262282, ___clientY_1)); }
	inline int32_t get_clientY_1() const { return ___clientY_1; }
	inline int32_t* get_address_of_clientY_1() { return &___clientY_1; }
	inline void set_clientY_1(int32_t value)
	{
		___clientY_1 = value;
	}

	inline static int32_t get_offset_of_keyCode_2() { return static_cast<int32_t>(offsetof(UIEvent_t3768262282, ___keyCode_2)); }
	inline int32_t get_keyCode_2() const { return ___keyCode_2; }
	inline int32_t* get_address_of_keyCode_2() { return &___keyCode_2; }
	inline void set_keyCode_2(int32_t value)
	{
		___keyCode_2 = value;
	}

	inline static int32_t get_offset_of_heldDown_3() { return static_cast<int32_t>(offsetof(UIEvent_t3768262282, ___heldDown_3)); }
	inline bool get_heldDown_3() const { return ___heldDown_3; }
	inline bool* get_address_of_heldDown_3() { return &___heldDown_3; }
	inline void set_heldDown_3(bool value)
	{
		___heldDown_3 = value;
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(UIEvent_t3768262282, ___target_4)); }
	inline Element_t3532621832 * get_target_4() const { return ___target_4; }
	inline Element_t3532621832 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Element_t3532621832 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_character_5() { return static_cast<int32_t>(offsetof(UIEvent_t3768262282, ___character_5)); }
	inline Il2CppChar get_character_5() const { return ___character_5; }
	inline Il2CppChar* get_address_of_character_5() { return &___character_5; }
	inline void set_character_5(Il2CppChar value)
	{
		___character_5 = value;
	}

	inline static int32_t get_offset_of_bubbleCount_6() { return static_cast<int32_t>(offsetof(UIEvent_t3768262282, ___bubbleCount_6)); }
	inline int32_t get_bubbleCount_6() const { return ___bubbleCount_6; }
	inline int32_t* get_address_of_bubbleCount_6() { return &___bubbleCount_6; }
	inline void set_bubbleCount_6(int32_t value)
	{
		___bubbleCount_6 = value;
	}

	inline static int32_t get_offset_of_unityEvent_7() { return static_cast<int32_t>(offsetof(UIEvent_t3768262282, ___unityEvent_7)); }
	inline Event_t3028476042 * get_unityEvent_7() const { return ___unityEvent_7; }
	inline Event_t3028476042 ** get_address_of_unityEvent_7() { return &___unityEvent_7; }
	inline void set_unityEvent_7(Event_t3028476042 * value)
	{
		___unityEvent_7 = value;
		Il2CppCodeGenWriteBarrier(&___unityEvent_7, value);
	}

	inline static int32_t get_offset_of_cancelBubble_8() { return static_cast<int32_t>(offsetof(UIEvent_t3768262282, ___cancelBubble_8)); }
	inline bool get_cancelBubble_8() const { return ___cancelBubble_8; }
	inline bool* get_address_of_cancelBubble_8() { return &___cancelBubble_8; }
	inline void set_cancelBubble_8(bool value)
	{
		___cancelBubble_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
