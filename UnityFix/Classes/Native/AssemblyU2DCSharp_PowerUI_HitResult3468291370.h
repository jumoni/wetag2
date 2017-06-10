#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.WorldUI
struct WorldUI_t2347980340;
// PowerUI.Element
struct Element_t3532621832;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.HitResult
struct  HitResult_t3468291370  : public Il2CppObject
{
public:
	// System.Int32 PowerUI.HitResult::MouseX
	int32_t ___MouseX_0;
	// System.Int32 PowerUI.HitResult::MouseY
	int32_t ___MouseY_1;
	// System.Boolean PowerUI.HitResult::ScreenMode
	bool ___ScreenMode_2;
	// System.Boolean PowerUI.HitResult::Successful
	bool ___Successful_3;
	// PowerUI.WorldUI PowerUI.HitResult::OnWorldUI
	WorldUI_t2347980340 * ___OnWorldUI_4;
	// PowerUI.Element PowerUI.HitResult::HitElement
	Element_t3532621832 * ___HitElement_5;

public:
	inline static int32_t get_offset_of_MouseX_0() { return static_cast<int32_t>(offsetof(HitResult_t3468291370, ___MouseX_0)); }
	inline int32_t get_MouseX_0() const { return ___MouseX_0; }
	inline int32_t* get_address_of_MouseX_0() { return &___MouseX_0; }
	inline void set_MouseX_0(int32_t value)
	{
		___MouseX_0 = value;
	}

	inline static int32_t get_offset_of_MouseY_1() { return static_cast<int32_t>(offsetof(HitResult_t3468291370, ___MouseY_1)); }
	inline int32_t get_MouseY_1() const { return ___MouseY_1; }
	inline int32_t* get_address_of_MouseY_1() { return &___MouseY_1; }
	inline void set_MouseY_1(int32_t value)
	{
		___MouseY_1 = value;
	}

	inline static int32_t get_offset_of_ScreenMode_2() { return static_cast<int32_t>(offsetof(HitResult_t3468291370, ___ScreenMode_2)); }
	inline bool get_ScreenMode_2() const { return ___ScreenMode_2; }
	inline bool* get_address_of_ScreenMode_2() { return &___ScreenMode_2; }
	inline void set_ScreenMode_2(bool value)
	{
		___ScreenMode_2 = value;
	}

	inline static int32_t get_offset_of_Successful_3() { return static_cast<int32_t>(offsetof(HitResult_t3468291370, ___Successful_3)); }
	inline bool get_Successful_3() const { return ___Successful_3; }
	inline bool* get_address_of_Successful_3() { return &___Successful_3; }
	inline void set_Successful_3(bool value)
	{
		___Successful_3 = value;
	}

	inline static int32_t get_offset_of_OnWorldUI_4() { return static_cast<int32_t>(offsetof(HitResult_t3468291370, ___OnWorldUI_4)); }
	inline WorldUI_t2347980340 * get_OnWorldUI_4() const { return ___OnWorldUI_4; }
	inline WorldUI_t2347980340 ** get_address_of_OnWorldUI_4() { return &___OnWorldUI_4; }
	inline void set_OnWorldUI_4(WorldUI_t2347980340 * value)
	{
		___OnWorldUI_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnWorldUI_4, value);
	}

	inline static int32_t get_offset_of_HitElement_5() { return static_cast<int32_t>(offsetof(HitResult_t3468291370, ___HitElement_5)); }
	inline Element_t3532621832 * get_HitElement_5() const { return ___HitElement_5; }
	inline Element_t3532621832 ** get_address_of_HitElement_5() { return &___HitElement_5; }
	inline void set_HitElement_5(Element_t3532621832 * value)
	{
		___HitElement_5 = value;
		Il2CppCodeGenWriteBarrier(&___HitElement_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
