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

// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,PowerUI.WorldUI>
struct Dictionary_2_t2089635245;
// PowerUI.Document
struct Document_t1565145681;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// PowerUI.WorldUI
struct WorldUI_t2347980340;
// PowerUI.Renderman
struct Renderman_t1984383802;
// UnityEngine.Camera
struct Camera_t189460977;
// PowerUI.WorldUIExpiryEvent
struct WorldUIExpiryEvent_t1944710831;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.WorldUI
struct  WorldUI_t2347980340  : public Il2CppObject
{
public:
	// System.Boolean PowerUI.WorldUI::Flat
	bool ___Flat_2;
	// System.Single PowerUI.WorldUI::Ratio
	float ___Ratio_3;
	// System.Int32 PowerUI.WorldUI::pixelWidth
	int32_t ___pixelWidth_4;
	// System.Int32 PowerUI.WorldUI::pixelHeight
	int32_t ___pixelHeight_5;
	// PowerUI.Document PowerUI.WorldUI::document
	Document_t1565145681 * ___document_6;
	// UnityEngine.Transform PowerUI.WorldUI::transform
	Transform_t3275118058 * ___transform_7;
	// UnityEngine.GameObject PowerUI.WorldUI::gameObject
	GameObject_t1756533147 * ___gameObject_8;
	// System.String PowerUI.WorldUI::Name
	String_t* ___Name_9;
	// System.Boolean PowerUI.WorldUI::Expires
	bool ___Expires_10;
	// System.Single PowerUI.WorldUI::ExpiresIn
	float ___ExpiresIn_11;
	// PowerUI.WorldUI PowerUI.WorldUI::UIAfter
	WorldUI_t2347980340 * ___UIAfter_12;
	// PowerUI.WorldUI PowerUI.WorldUI::UIBefore
	WorldUI_t2347980340 * ___UIBefore_13;
	// System.Single PowerUI.WorldUI::PixelHeightF
	float ___PixelHeightF_14;
	// PowerUI.Renderman PowerUI.WorldUI::Renderer
	Renderman_t1984383802 * ___Renderer_15;
	// UnityEngine.Camera PowerUI.WorldUI::CameraToFace
	Camera_t189460977 * ___CameraToFace_16;
	// System.Boolean PowerUI.WorldUI::IsPixelPerfect
	bool ___IsPixelPerfect_17;
	// System.Boolean PowerUI.WorldUI::AlwaysFaceCamera
	bool ___AlwaysFaceCamera_18;
	// PowerUI.WorldUIExpiryEvent PowerUI.WorldUI::OnExpire
	WorldUIExpiryEvent_t1944710831 * ___OnExpire_19;
	// System.Single PowerUI.WorldUI::ScreenSpaceProportion
	float ___ScreenSpaceProportion_20;
	// UnityEngine.Vector2 PowerUI.WorldUI::WorldScreenOrigin
	Vector2_t2243707579  ___WorldScreenOrigin_21;
	// UnityEngine.Vector2 PowerUI.WorldUI::OriginLocation
	Vector2_t2243707579  ___OriginLocation_22;
	// System.Int32 PowerUI.WorldUI::AtlasSize
	int32_t ___AtlasSize_23;

public:
	inline static int32_t get_offset_of_Flat_2() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___Flat_2)); }
	inline bool get_Flat_2() const { return ___Flat_2; }
	inline bool* get_address_of_Flat_2() { return &___Flat_2; }
	inline void set_Flat_2(bool value)
	{
		___Flat_2 = value;
	}

	inline static int32_t get_offset_of_Ratio_3() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___Ratio_3)); }
	inline float get_Ratio_3() const { return ___Ratio_3; }
	inline float* get_address_of_Ratio_3() { return &___Ratio_3; }
	inline void set_Ratio_3(float value)
	{
		___Ratio_3 = value;
	}

	inline static int32_t get_offset_of_pixelWidth_4() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___pixelWidth_4)); }
	inline int32_t get_pixelWidth_4() const { return ___pixelWidth_4; }
	inline int32_t* get_address_of_pixelWidth_4() { return &___pixelWidth_4; }
	inline void set_pixelWidth_4(int32_t value)
	{
		___pixelWidth_4 = value;
	}

	inline static int32_t get_offset_of_pixelHeight_5() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___pixelHeight_5)); }
	inline int32_t get_pixelHeight_5() const { return ___pixelHeight_5; }
	inline int32_t* get_address_of_pixelHeight_5() { return &___pixelHeight_5; }
	inline void set_pixelHeight_5(int32_t value)
	{
		___pixelHeight_5 = value;
	}

	inline static int32_t get_offset_of_document_6() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___document_6)); }
	inline Document_t1565145681 * get_document_6() const { return ___document_6; }
	inline Document_t1565145681 ** get_address_of_document_6() { return &___document_6; }
	inline void set_document_6(Document_t1565145681 * value)
	{
		___document_6 = value;
		Il2CppCodeGenWriteBarrier(&___document_6, value);
	}

	inline static int32_t get_offset_of_transform_7() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___transform_7)); }
	inline Transform_t3275118058 * get_transform_7() const { return ___transform_7; }
	inline Transform_t3275118058 ** get_address_of_transform_7() { return &___transform_7; }
	inline void set_transform_7(Transform_t3275118058 * value)
	{
		___transform_7 = value;
		Il2CppCodeGenWriteBarrier(&___transform_7, value);
	}

	inline static int32_t get_offset_of_gameObject_8() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___gameObject_8)); }
	inline GameObject_t1756533147 * get_gameObject_8() const { return ___gameObject_8; }
	inline GameObject_t1756533147 ** get_address_of_gameObject_8() { return &___gameObject_8; }
	inline void set_gameObject_8(GameObject_t1756533147 * value)
	{
		___gameObject_8 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_8, value);
	}

	inline static int32_t get_offset_of_Name_9() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___Name_9)); }
	inline String_t* get_Name_9() const { return ___Name_9; }
	inline String_t** get_address_of_Name_9() { return &___Name_9; }
	inline void set_Name_9(String_t* value)
	{
		___Name_9 = value;
		Il2CppCodeGenWriteBarrier(&___Name_9, value);
	}

	inline static int32_t get_offset_of_Expires_10() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___Expires_10)); }
	inline bool get_Expires_10() const { return ___Expires_10; }
	inline bool* get_address_of_Expires_10() { return &___Expires_10; }
	inline void set_Expires_10(bool value)
	{
		___Expires_10 = value;
	}

	inline static int32_t get_offset_of_ExpiresIn_11() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___ExpiresIn_11)); }
	inline float get_ExpiresIn_11() const { return ___ExpiresIn_11; }
	inline float* get_address_of_ExpiresIn_11() { return &___ExpiresIn_11; }
	inline void set_ExpiresIn_11(float value)
	{
		___ExpiresIn_11 = value;
	}

	inline static int32_t get_offset_of_UIAfter_12() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___UIAfter_12)); }
	inline WorldUI_t2347980340 * get_UIAfter_12() const { return ___UIAfter_12; }
	inline WorldUI_t2347980340 ** get_address_of_UIAfter_12() { return &___UIAfter_12; }
	inline void set_UIAfter_12(WorldUI_t2347980340 * value)
	{
		___UIAfter_12 = value;
		Il2CppCodeGenWriteBarrier(&___UIAfter_12, value);
	}

	inline static int32_t get_offset_of_UIBefore_13() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___UIBefore_13)); }
	inline WorldUI_t2347980340 * get_UIBefore_13() const { return ___UIBefore_13; }
	inline WorldUI_t2347980340 ** get_address_of_UIBefore_13() { return &___UIBefore_13; }
	inline void set_UIBefore_13(WorldUI_t2347980340 * value)
	{
		___UIBefore_13 = value;
		Il2CppCodeGenWriteBarrier(&___UIBefore_13, value);
	}

	inline static int32_t get_offset_of_PixelHeightF_14() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___PixelHeightF_14)); }
	inline float get_PixelHeightF_14() const { return ___PixelHeightF_14; }
	inline float* get_address_of_PixelHeightF_14() { return &___PixelHeightF_14; }
	inline void set_PixelHeightF_14(float value)
	{
		___PixelHeightF_14 = value;
	}

	inline static int32_t get_offset_of_Renderer_15() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___Renderer_15)); }
	inline Renderman_t1984383802 * get_Renderer_15() const { return ___Renderer_15; }
	inline Renderman_t1984383802 ** get_address_of_Renderer_15() { return &___Renderer_15; }
	inline void set_Renderer_15(Renderman_t1984383802 * value)
	{
		___Renderer_15 = value;
		Il2CppCodeGenWriteBarrier(&___Renderer_15, value);
	}

	inline static int32_t get_offset_of_CameraToFace_16() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___CameraToFace_16)); }
	inline Camera_t189460977 * get_CameraToFace_16() const { return ___CameraToFace_16; }
	inline Camera_t189460977 ** get_address_of_CameraToFace_16() { return &___CameraToFace_16; }
	inline void set_CameraToFace_16(Camera_t189460977 * value)
	{
		___CameraToFace_16 = value;
		Il2CppCodeGenWriteBarrier(&___CameraToFace_16, value);
	}

	inline static int32_t get_offset_of_IsPixelPerfect_17() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___IsPixelPerfect_17)); }
	inline bool get_IsPixelPerfect_17() const { return ___IsPixelPerfect_17; }
	inline bool* get_address_of_IsPixelPerfect_17() { return &___IsPixelPerfect_17; }
	inline void set_IsPixelPerfect_17(bool value)
	{
		___IsPixelPerfect_17 = value;
	}

	inline static int32_t get_offset_of_AlwaysFaceCamera_18() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___AlwaysFaceCamera_18)); }
	inline bool get_AlwaysFaceCamera_18() const { return ___AlwaysFaceCamera_18; }
	inline bool* get_address_of_AlwaysFaceCamera_18() { return &___AlwaysFaceCamera_18; }
	inline void set_AlwaysFaceCamera_18(bool value)
	{
		___AlwaysFaceCamera_18 = value;
	}

	inline static int32_t get_offset_of_OnExpire_19() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___OnExpire_19)); }
	inline WorldUIExpiryEvent_t1944710831 * get_OnExpire_19() const { return ___OnExpire_19; }
	inline WorldUIExpiryEvent_t1944710831 ** get_address_of_OnExpire_19() { return &___OnExpire_19; }
	inline void set_OnExpire_19(WorldUIExpiryEvent_t1944710831 * value)
	{
		___OnExpire_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnExpire_19, value);
	}

	inline static int32_t get_offset_of_ScreenSpaceProportion_20() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___ScreenSpaceProportion_20)); }
	inline float get_ScreenSpaceProportion_20() const { return ___ScreenSpaceProportion_20; }
	inline float* get_address_of_ScreenSpaceProportion_20() { return &___ScreenSpaceProportion_20; }
	inline void set_ScreenSpaceProportion_20(float value)
	{
		___ScreenSpaceProportion_20 = value;
	}

	inline static int32_t get_offset_of_WorldScreenOrigin_21() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___WorldScreenOrigin_21)); }
	inline Vector2_t2243707579  get_WorldScreenOrigin_21() const { return ___WorldScreenOrigin_21; }
	inline Vector2_t2243707579 * get_address_of_WorldScreenOrigin_21() { return &___WorldScreenOrigin_21; }
	inline void set_WorldScreenOrigin_21(Vector2_t2243707579  value)
	{
		___WorldScreenOrigin_21 = value;
	}

	inline static int32_t get_offset_of_OriginLocation_22() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___OriginLocation_22)); }
	inline Vector2_t2243707579  get_OriginLocation_22() const { return ___OriginLocation_22; }
	inline Vector2_t2243707579 * get_address_of_OriginLocation_22() { return &___OriginLocation_22; }
	inline void set_OriginLocation_22(Vector2_t2243707579  value)
	{
		___OriginLocation_22 = value;
	}

	inline static int32_t get_offset_of_AtlasSize_23() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340, ___AtlasSize_23)); }
	inline int32_t get_AtlasSize_23() const { return ___AtlasSize_23; }
	inline int32_t* get_address_of_AtlasSize_23() { return &___AtlasSize_23; }
	inline void set_AtlasSize_23(int32_t value)
	{
		___AtlasSize_23 = value;
	}
};

struct WorldUI_t2347980340_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,PowerUI.WorldUI> PowerUI.WorldUI::PhysicsLookup
	Dictionary_2_t2089635245 * ___PhysicsLookup_0;
	// System.Boolean PowerUI.WorldUI::LiveUpdatablesAvailable
	bool ___LiveUpdatablesAvailable_1;

public:
	inline static int32_t get_offset_of_PhysicsLookup_0() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340_StaticFields, ___PhysicsLookup_0)); }
	inline Dictionary_2_t2089635245 * get_PhysicsLookup_0() const { return ___PhysicsLookup_0; }
	inline Dictionary_2_t2089635245 ** get_address_of_PhysicsLookup_0() { return &___PhysicsLookup_0; }
	inline void set_PhysicsLookup_0(Dictionary_2_t2089635245 * value)
	{
		___PhysicsLookup_0 = value;
		Il2CppCodeGenWriteBarrier(&___PhysicsLookup_0, value);
	}

	inline static int32_t get_offset_of_LiveUpdatablesAvailable_1() { return static_cast<int32_t>(offsetof(WorldUI_t2347980340_StaticFields, ___LiveUpdatablesAvailable_1)); }
	inline bool get_LiveUpdatablesAvailable_1() const { return ___LiveUpdatablesAvailable_1; }
	inline bool* get_address_of_LiveUpdatablesAvailable_1() { return &___LiveUpdatablesAvailable_1; }
	inline void set_LiveUpdatablesAvailable_1(bool value)
	{
		___LiveUpdatablesAvailable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
