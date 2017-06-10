#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.Renderman
struct Renderman_t1984383802;
// UnityEngine.Camera
struct Camera_t189460977;
// PowerUI.UICamera
struct UICamera_t701229601;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.UICamera
struct  UICamera_t701229601  : public Il2CppObject
{
public:
	// PowerUI.Renderman PowerUI.UICamera::Renderer
	Renderman_t1984383802 * ___Renderer_0;
	// UnityEngine.Camera PowerUI.UICamera::SourceCamera
	Camera_t189460977 * ___SourceCamera_1;
	// PowerUI.UICamera PowerUI.UICamera::CameraAfter
	UICamera_t701229601 * ___CameraAfter_2;
	// System.Single PowerUI.UICamera::CameraDistance
	float ___CameraDistance_3;
	// PowerUI.UICamera PowerUI.UICamera::CameraBefore
	UICamera_t701229601 * ___CameraBefore_4;
	// UnityEngine.GameObject PowerUI.UICamera::Gameobject
	GameObject_t1756533147 * ___Gameobject_5;
	// UnityEngine.GameObject PowerUI.UICamera::CameraObject
	GameObject_t1756533147 * ___CameraObject_6;

public:
	inline static int32_t get_offset_of_Renderer_0() { return static_cast<int32_t>(offsetof(UICamera_t701229601, ___Renderer_0)); }
	inline Renderman_t1984383802 * get_Renderer_0() const { return ___Renderer_0; }
	inline Renderman_t1984383802 ** get_address_of_Renderer_0() { return &___Renderer_0; }
	inline void set_Renderer_0(Renderman_t1984383802 * value)
	{
		___Renderer_0 = value;
		Il2CppCodeGenWriteBarrier(&___Renderer_0, value);
	}

	inline static int32_t get_offset_of_SourceCamera_1() { return static_cast<int32_t>(offsetof(UICamera_t701229601, ___SourceCamera_1)); }
	inline Camera_t189460977 * get_SourceCamera_1() const { return ___SourceCamera_1; }
	inline Camera_t189460977 ** get_address_of_SourceCamera_1() { return &___SourceCamera_1; }
	inline void set_SourceCamera_1(Camera_t189460977 * value)
	{
		___SourceCamera_1 = value;
		Il2CppCodeGenWriteBarrier(&___SourceCamera_1, value);
	}

	inline static int32_t get_offset_of_CameraAfter_2() { return static_cast<int32_t>(offsetof(UICamera_t701229601, ___CameraAfter_2)); }
	inline UICamera_t701229601 * get_CameraAfter_2() const { return ___CameraAfter_2; }
	inline UICamera_t701229601 ** get_address_of_CameraAfter_2() { return &___CameraAfter_2; }
	inline void set_CameraAfter_2(UICamera_t701229601 * value)
	{
		___CameraAfter_2 = value;
		Il2CppCodeGenWriteBarrier(&___CameraAfter_2, value);
	}

	inline static int32_t get_offset_of_CameraDistance_3() { return static_cast<int32_t>(offsetof(UICamera_t701229601, ___CameraDistance_3)); }
	inline float get_CameraDistance_3() const { return ___CameraDistance_3; }
	inline float* get_address_of_CameraDistance_3() { return &___CameraDistance_3; }
	inline void set_CameraDistance_3(float value)
	{
		___CameraDistance_3 = value;
	}

	inline static int32_t get_offset_of_CameraBefore_4() { return static_cast<int32_t>(offsetof(UICamera_t701229601, ___CameraBefore_4)); }
	inline UICamera_t701229601 * get_CameraBefore_4() const { return ___CameraBefore_4; }
	inline UICamera_t701229601 ** get_address_of_CameraBefore_4() { return &___CameraBefore_4; }
	inline void set_CameraBefore_4(UICamera_t701229601 * value)
	{
		___CameraBefore_4 = value;
		Il2CppCodeGenWriteBarrier(&___CameraBefore_4, value);
	}

	inline static int32_t get_offset_of_Gameobject_5() { return static_cast<int32_t>(offsetof(UICamera_t701229601, ___Gameobject_5)); }
	inline GameObject_t1756533147 * get_Gameobject_5() const { return ___Gameobject_5; }
	inline GameObject_t1756533147 ** get_address_of_Gameobject_5() { return &___Gameobject_5; }
	inline void set_Gameobject_5(GameObject_t1756533147 * value)
	{
		___Gameobject_5 = value;
		Il2CppCodeGenWriteBarrier(&___Gameobject_5, value);
	}

	inline static int32_t get_offset_of_CameraObject_6() { return static_cast<int32_t>(offsetof(UICamera_t701229601, ___CameraObject_6)); }
	inline GameObject_t1756533147 * get_CameraObject_6() const { return ___CameraObject_6; }
	inline GameObject_t1756533147 ** get_address_of_CameraObject_6() { return &___CameraObject_6; }
	inline void set_CameraObject_6(GameObject_t1756533147 * value)
	{
		___CameraObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___CameraObject_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
