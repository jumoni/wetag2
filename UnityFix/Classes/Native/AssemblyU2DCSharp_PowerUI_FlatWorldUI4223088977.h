#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_WorldUI2347980340.h"

// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.FlatWorldUI
struct  FlatWorldUI_t4223088977  : public WorldUI_t2347980340
{
public:
	// System.Int32 PowerUI.FlatWorldUI::DefaultLayer
	int32_t ___DefaultLayer_25;
	// UnityEngine.Texture PowerUI.FlatWorldUI::Texture
	Texture_t2243626319 * ___Texture_26;
	// UnityEngine.Camera PowerUI.FlatWorldUI::SourceCamera
	Camera_t189460977 * ___SourceCamera_27;
	// UnityEngine.GameObject PowerUI.FlatWorldUI::CameraObject
	GameObject_t1756533147 * ___CameraObject_28;

public:
	inline static int32_t get_offset_of_DefaultLayer_25() { return static_cast<int32_t>(offsetof(FlatWorldUI_t4223088977, ___DefaultLayer_25)); }
	inline int32_t get_DefaultLayer_25() const { return ___DefaultLayer_25; }
	inline int32_t* get_address_of_DefaultLayer_25() { return &___DefaultLayer_25; }
	inline void set_DefaultLayer_25(int32_t value)
	{
		___DefaultLayer_25 = value;
	}

	inline static int32_t get_offset_of_Texture_26() { return static_cast<int32_t>(offsetof(FlatWorldUI_t4223088977, ___Texture_26)); }
	inline Texture_t2243626319 * get_Texture_26() const { return ___Texture_26; }
	inline Texture_t2243626319 ** get_address_of_Texture_26() { return &___Texture_26; }
	inline void set_Texture_26(Texture_t2243626319 * value)
	{
		___Texture_26 = value;
		Il2CppCodeGenWriteBarrier(&___Texture_26, value);
	}

	inline static int32_t get_offset_of_SourceCamera_27() { return static_cast<int32_t>(offsetof(FlatWorldUI_t4223088977, ___SourceCamera_27)); }
	inline Camera_t189460977 * get_SourceCamera_27() const { return ___SourceCamera_27; }
	inline Camera_t189460977 ** get_address_of_SourceCamera_27() { return &___SourceCamera_27; }
	inline void set_SourceCamera_27(Camera_t189460977 * value)
	{
		___SourceCamera_27 = value;
		Il2CppCodeGenWriteBarrier(&___SourceCamera_27, value);
	}

	inline static int32_t get_offset_of_CameraObject_28() { return static_cast<int32_t>(offsetof(FlatWorldUI_t4223088977, ___CameraObject_28)); }
	inline GameObject_t1756533147 * get_CameraObject_28() const { return ___CameraObject_28; }
	inline GameObject_t1756533147 ** get_address_of_CameraObject_28() { return &___CameraObject_28; }
	inline void set_CameraObject_28(GameObject_t1756533147 * value)
	{
		___CameraObject_28 = value;
		Il2CppCodeGenWriteBarrier(&___CameraObject_28, value);
	}
};

struct FlatWorldUI_t4223088977_StaticFields
{
public:
	// System.Single PowerUI.FlatWorldUI::GlobalOffset
	float ___GlobalOffset_24;

public:
	inline static int32_t get_offset_of_GlobalOffset_24() { return static_cast<int32_t>(offsetof(FlatWorldUI_t4223088977_StaticFields, ___GlobalOffset_24)); }
	inline float get_GlobalOffset_24() const { return ___GlobalOffset_24; }
	inline float* get_address_of_GlobalOffset_24() { return &___GlobalOffset_24; }
	inline void set_GlobalOffset_24(float value)
	{
		___GlobalOffset_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
