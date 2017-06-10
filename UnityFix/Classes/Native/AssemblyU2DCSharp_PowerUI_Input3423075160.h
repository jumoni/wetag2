#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "AssemblyU2DCSharp_PowerUI_InputMode136816565.h"

// PowerUI.Element
struct Element_t3532621832;
// UnityEngine.Camera
struct Camera_t189460977;
// PowerUI.MousePositionResolver2D
struct MousePositionResolver2D_t2898051450;
// PowerUI.MousePositionResolver3D
struct MousePositionResolver3D_t169168095;
// System.Collections.Generic.List`1<PowerUI.Element>
struct List_1_t2901742964;
// System.String
struct String_t;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t601950206;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Input
struct  Input_t3423075160  : public Il2CppObject
{
public:

public:
};

struct Input_t3423075160_StaticFields
{
public:
	// System.Int32 PowerUI.Input::MouseX
	int32_t ___MouseX_0;
	// System.Int32 PowerUI.Input::MouseY
	int32_t ___MouseY_1;
	// PowerUI.Element PowerUI.Input::Focused
	Element_t3532621832 * ___Focused_2;
	// PowerUI.Element PowerUI.Input::Focusing
	Element_t3532621832 * ___Focusing_3;
	// UnityEngine.Vector2 PowerUI.Input::MousePosition
	Vector2_t2243707579  ___MousePosition_4;
	// UnityEngine.RaycastHit PowerUI.Input::LatestRayHit
	RaycastHit_t87180320  ___LatestRayHit_5;
	// UnityEngine.Camera PowerUI.Input::CameraFor3DInput
	Camera_t189460977 * ___CameraFor3DInput_6;
	// PowerUI.InputMode PowerUI.Input::Mode
	int32_t ___Mode_7;
	// PowerUI.MousePositionResolver2D PowerUI.Input::OnResolve2D
	MousePositionResolver2D_t2898051450 * ___OnResolve2D_8;
	// PowerUI.MousePositionResolver3D PowerUI.Input::OnResolve3D
	MousePositionResolver3D_t169168095 * ___OnResolve3D_9;
	// PowerUI.InputMode PowerUI.Input::WorldInputMode
	int32_t ___WorldInputMode_10;
	// System.Collections.Generic.List`1<PowerUI.Element> PowerUI.Input::MouseOvers
	List_1_t2901742964 * ___MouseOvers_11;
	// System.Collections.Generic.List`1<PowerUI.Element> PowerUI.Input::LastMouseDown
	List_1_t2901742964 * ___LastMouseDown_12;
	// System.Boolean PowerUI.Input::Autocorrect
	bool ___Autocorrect_13;
	// System.Boolean PowerUI.Input::MouseoverActive
	bool ___MouseoverActive_14;
	// System.String PowerUI.Input::CachedKeyboardValue
	String_t* ___CachedKeyboardValue_15;
	// UnityEngine.TouchScreenKeyboard PowerUI.Input::MobileKeyboard
	TouchScreenKeyboard_t601950206 * ___MobileKeyboard_16;

public:
	inline static int32_t get_offset_of_MouseX_0() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___MouseX_0)); }
	inline int32_t get_MouseX_0() const { return ___MouseX_0; }
	inline int32_t* get_address_of_MouseX_0() { return &___MouseX_0; }
	inline void set_MouseX_0(int32_t value)
	{
		___MouseX_0 = value;
	}

	inline static int32_t get_offset_of_MouseY_1() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___MouseY_1)); }
	inline int32_t get_MouseY_1() const { return ___MouseY_1; }
	inline int32_t* get_address_of_MouseY_1() { return &___MouseY_1; }
	inline void set_MouseY_1(int32_t value)
	{
		___MouseY_1 = value;
	}

	inline static int32_t get_offset_of_Focused_2() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___Focused_2)); }
	inline Element_t3532621832 * get_Focused_2() const { return ___Focused_2; }
	inline Element_t3532621832 ** get_address_of_Focused_2() { return &___Focused_2; }
	inline void set_Focused_2(Element_t3532621832 * value)
	{
		___Focused_2 = value;
		Il2CppCodeGenWriteBarrier(&___Focused_2, value);
	}

	inline static int32_t get_offset_of_Focusing_3() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___Focusing_3)); }
	inline Element_t3532621832 * get_Focusing_3() const { return ___Focusing_3; }
	inline Element_t3532621832 ** get_address_of_Focusing_3() { return &___Focusing_3; }
	inline void set_Focusing_3(Element_t3532621832 * value)
	{
		___Focusing_3 = value;
		Il2CppCodeGenWriteBarrier(&___Focusing_3, value);
	}

	inline static int32_t get_offset_of_MousePosition_4() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___MousePosition_4)); }
	inline Vector2_t2243707579  get_MousePosition_4() const { return ___MousePosition_4; }
	inline Vector2_t2243707579 * get_address_of_MousePosition_4() { return &___MousePosition_4; }
	inline void set_MousePosition_4(Vector2_t2243707579  value)
	{
		___MousePosition_4 = value;
	}

	inline static int32_t get_offset_of_LatestRayHit_5() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___LatestRayHit_5)); }
	inline RaycastHit_t87180320  get_LatestRayHit_5() const { return ___LatestRayHit_5; }
	inline RaycastHit_t87180320 * get_address_of_LatestRayHit_5() { return &___LatestRayHit_5; }
	inline void set_LatestRayHit_5(RaycastHit_t87180320  value)
	{
		___LatestRayHit_5 = value;
	}

	inline static int32_t get_offset_of_CameraFor3DInput_6() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___CameraFor3DInput_6)); }
	inline Camera_t189460977 * get_CameraFor3DInput_6() const { return ___CameraFor3DInput_6; }
	inline Camera_t189460977 ** get_address_of_CameraFor3DInput_6() { return &___CameraFor3DInput_6; }
	inline void set_CameraFor3DInput_6(Camera_t189460977 * value)
	{
		___CameraFor3DInput_6 = value;
		Il2CppCodeGenWriteBarrier(&___CameraFor3DInput_6, value);
	}

	inline static int32_t get_offset_of_Mode_7() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___Mode_7)); }
	inline int32_t get_Mode_7() const { return ___Mode_7; }
	inline int32_t* get_address_of_Mode_7() { return &___Mode_7; }
	inline void set_Mode_7(int32_t value)
	{
		___Mode_7 = value;
	}

	inline static int32_t get_offset_of_OnResolve2D_8() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___OnResolve2D_8)); }
	inline MousePositionResolver2D_t2898051450 * get_OnResolve2D_8() const { return ___OnResolve2D_8; }
	inline MousePositionResolver2D_t2898051450 ** get_address_of_OnResolve2D_8() { return &___OnResolve2D_8; }
	inline void set_OnResolve2D_8(MousePositionResolver2D_t2898051450 * value)
	{
		___OnResolve2D_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnResolve2D_8, value);
	}

	inline static int32_t get_offset_of_OnResolve3D_9() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___OnResolve3D_9)); }
	inline MousePositionResolver3D_t169168095 * get_OnResolve3D_9() const { return ___OnResolve3D_9; }
	inline MousePositionResolver3D_t169168095 ** get_address_of_OnResolve3D_9() { return &___OnResolve3D_9; }
	inline void set_OnResolve3D_9(MousePositionResolver3D_t169168095 * value)
	{
		___OnResolve3D_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnResolve3D_9, value);
	}

	inline static int32_t get_offset_of_WorldInputMode_10() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___WorldInputMode_10)); }
	inline int32_t get_WorldInputMode_10() const { return ___WorldInputMode_10; }
	inline int32_t* get_address_of_WorldInputMode_10() { return &___WorldInputMode_10; }
	inline void set_WorldInputMode_10(int32_t value)
	{
		___WorldInputMode_10 = value;
	}

	inline static int32_t get_offset_of_MouseOvers_11() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___MouseOvers_11)); }
	inline List_1_t2901742964 * get_MouseOvers_11() const { return ___MouseOvers_11; }
	inline List_1_t2901742964 ** get_address_of_MouseOvers_11() { return &___MouseOvers_11; }
	inline void set_MouseOvers_11(List_1_t2901742964 * value)
	{
		___MouseOvers_11 = value;
		Il2CppCodeGenWriteBarrier(&___MouseOvers_11, value);
	}

	inline static int32_t get_offset_of_LastMouseDown_12() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___LastMouseDown_12)); }
	inline List_1_t2901742964 * get_LastMouseDown_12() const { return ___LastMouseDown_12; }
	inline List_1_t2901742964 ** get_address_of_LastMouseDown_12() { return &___LastMouseDown_12; }
	inline void set_LastMouseDown_12(List_1_t2901742964 * value)
	{
		___LastMouseDown_12 = value;
		Il2CppCodeGenWriteBarrier(&___LastMouseDown_12, value);
	}

	inline static int32_t get_offset_of_Autocorrect_13() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___Autocorrect_13)); }
	inline bool get_Autocorrect_13() const { return ___Autocorrect_13; }
	inline bool* get_address_of_Autocorrect_13() { return &___Autocorrect_13; }
	inline void set_Autocorrect_13(bool value)
	{
		___Autocorrect_13 = value;
	}

	inline static int32_t get_offset_of_MouseoverActive_14() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___MouseoverActive_14)); }
	inline bool get_MouseoverActive_14() const { return ___MouseoverActive_14; }
	inline bool* get_address_of_MouseoverActive_14() { return &___MouseoverActive_14; }
	inline void set_MouseoverActive_14(bool value)
	{
		___MouseoverActive_14 = value;
	}

	inline static int32_t get_offset_of_CachedKeyboardValue_15() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___CachedKeyboardValue_15)); }
	inline String_t* get_CachedKeyboardValue_15() const { return ___CachedKeyboardValue_15; }
	inline String_t** get_address_of_CachedKeyboardValue_15() { return &___CachedKeyboardValue_15; }
	inline void set_CachedKeyboardValue_15(String_t* value)
	{
		___CachedKeyboardValue_15 = value;
		Il2CppCodeGenWriteBarrier(&___CachedKeyboardValue_15, value);
	}

	inline static int32_t get_offset_of_MobileKeyboard_16() { return static_cast<int32_t>(offsetof(Input_t3423075160_StaticFields, ___MobileKeyboard_16)); }
	inline TouchScreenKeyboard_t601950206 * get_MobileKeyboard_16() const { return ___MobileKeyboard_16; }
	inline TouchScreenKeyboard_t601950206 ** get_address_of_MobileKeyboard_16() { return &___MobileKeyboard_16; }
	inline void set_MobileKeyboard_16(TouchScreenKeyboard_t601950206 * value)
	{
		___MobileKeyboard_16 = value;
		Il2CppCodeGenWriteBarrier(&___MobileKeyboard_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
