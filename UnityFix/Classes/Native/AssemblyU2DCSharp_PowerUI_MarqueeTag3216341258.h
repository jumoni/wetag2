#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_HtmlTagHandler2082879697.h"
#include "AssemblyU2DCSharp_PowerUI_MarqueeBehaviour106646375.h"
#include "AssemblyU2DCSharp_PowerUI_MarqueeDirection2008306745.h"

// PowerUI.UITimer
struct UITimer_t3996902997;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.MarqueeTag
struct  MarqueeTag_t3216341258  : public HtmlTagHandler_t2082879697
{
public:
	// System.Boolean PowerUI.MarqueeTag::Active
	bool ___Active_7;
	// System.Int32 PowerUI.MarqueeTag::Loop
	int32_t ___Loop_8;
	// PowerUI.UITimer PowerUI.MarqueeTag::Timer
	UITimer_t3996902997 * ___Timer_9;
	// System.Int32 PowerUI.MarqueeTag::ScrollAmount
	int32_t ___ScrollAmount_10;
	// System.Int32 PowerUI.MarqueeTag::ScrollDelay
	int32_t ___ScrollDelay_11;
	// PowerUI.MarqueeBehaviour PowerUI.MarqueeTag::Behaviour
	int32_t ___Behaviour_12;
	// PowerUI.MarqueeDirection PowerUI.MarqueeTag::Direction
	int32_t ___Direction_13;

public:
	inline static int32_t get_offset_of_Active_7() { return static_cast<int32_t>(offsetof(MarqueeTag_t3216341258, ___Active_7)); }
	inline bool get_Active_7() const { return ___Active_7; }
	inline bool* get_address_of_Active_7() { return &___Active_7; }
	inline void set_Active_7(bool value)
	{
		___Active_7 = value;
	}

	inline static int32_t get_offset_of_Loop_8() { return static_cast<int32_t>(offsetof(MarqueeTag_t3216341258, ___Loop_8)); }
	inline int32_t get_Loop_8() const { return ___Loop_8; }
	inline int32_t* get_address_of_Loop_8() { return &___Loop_8; }
	inline void set_Loop_8(int32_t value)
	{
		___Loop_8 = value;
	}

	inline static int32_t get_offset_of_Timer_9() { return static_cast<int32_t>(offsetof(MarqueeTag_t3216341258, ___Timer_9)); }
	inline UITimer_t3996902997 * get_Timer_9() const { return ___Timer_9; }
	inline UITimer_t3996902997 ** get_address_of_Timer_9() { return &___Timer_9; }
	inline void set_Timer_9(UITimer_t3996902997 * value)
	{
		___Timer_9 = value;
		Il2CppCodeGenWriteBarrier(&___Timer_9, value);
	}

	inline static int32_t get_offset_of_ScrollAmount_10() { return static_cast<int32_t>(offsetof(MarqueeTag_t3216341258, ___ScrollAmount_10)); }
	inline int32_t get_ScrollAmount_10() const { return ___ScrollAmount_10; }
	inline int32_t* get_address_of_ScrollAmount_10() { return &___ScrollAmount_10; }
	inline void set_ScrollAmount_10(int32_t value)
	{
		___ScrollAmount_10 = value;
	}

	inline static int32_t get_offset_of_ScrollDelay_11() { return static_cast<int32_t>(offsetof(MarqueeTag_t3216341258, ___ScrollDelay_11)); }
	inline int32_t get_ScrollDelay_11() const { return ___ScrollDelay_11; }
	inline int32_t* get_address_of_ScrollDelay_11() { return &___ScrollDelay_11; }
	inline void set_ScrollDelay_11(int32_t value)
	{
		___ScrollDelay_11 = value;
	}

	inline static int32_t get_offset_of_Behaviour_12() { return static_cast<int32_t>(offsetof(MarqueeTag_t3216341258, ___Behaviour_12)); }
	inline int32_t get_Behaviour_12() const { return ___Behaviour_12; }
	inline int32_t* get_address_of_Behaviour_12() { return &___Behaviour_12; }
	inline void set_Behaviour_12(int32_t value)
	{
		___Behaviour_12 = value;
	}

	inline static int32_t get_offset_of_Direction_13() { return static_cast<int32_t>(offsetof(MarqueeTag_t3216341258, ___Direction_13)); }
	inline int32_t get_Direction_13() const { return ___Direction_13; }
	inline int32_t* get_address_of_Direction_13() { return &___Direction_13; }
	inline void set_Direction_13(int32_t value)
	{
		___Direction_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
