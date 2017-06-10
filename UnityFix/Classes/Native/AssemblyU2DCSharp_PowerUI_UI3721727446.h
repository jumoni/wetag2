#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_PowerUI_CameraMode3196503116.h"

// PowerUI.Element
struct Element_t3532621832;
// UnityEngine.Camera
struct Camera_t189460977;
// PowerUI.Document
struct Document_t1565145681;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PowerUI.Renderman
struct Renderman_t1984383802;
// UnityEngine.Transform
struct Transform_t3275118058;
// Wrench.FullVariableSet
struct FullVariableSet_t315729381;
// PowerUI.WorldUI
struct WorldUI_t2347980340;
// PowerUI.CameraPool
struct CameraPool_t1986649901;
// PowerUI.StandardUpdater
struct StandardUpdater_t4051454526;
// System.Type
struct Type_t;
// PowerUI.CameraCreated
struct CameraCreated_t4052339439;
// Wrench.UnityLanguageLoader
struct UnityLanguageLoader_t3673306454;
// GetSecurityDomain
struct GetSecurityDomain_t3814748782;
// Wrench.OnLogEvent
struct OnLogEvent_t3913109635;
// InfiniText.OnLogEvent
struct OnLogEvent_t355888959;
// Wrench.OnVariableChange
struct OnVariableChange_t4274501541;
// Wrench.LanguageChange
struct LanguageChange_t479106978;
// Wrench.TextModifierChange
struct TextModifierChange_t3642518626;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.UI
struct  UI_t3721727446  : public Il2CppObject
{
public:

public:
};

struct UI_t3721727446_StaticFields
{
public:
	// System.Int32 PowerUI.UI::Layer
	int32_t ___Layer_1;
	// System.Boolean PowerUI.UI::Started
	bool ___Started_2;
	// PowerUI.Element PowerUI.UI::content
	Element_t3532621832 * ___content_3;
	// System.Single PowerUI.UI::RedrawRate
	float ___RedrawRate_4;
	// UnityEngine.Camera PowerUI.UI::GUICamera
	Camera_t189460977 * ___GUICamera_5;
	// PowerUI.Document PowerUI.UI::document
	Document_t1565145681 * ___document_6;
	// System.Boolean PowerUI.UI::HandledInput
	bool ___HandledInput_7;
	// System.Single PowerUI.UI::FieldOfView
	float ___FieldOfView_8;
	// System.Single PowerUI.UI::RedrawTimer
	float ___RedrawTimer_9;
	// UnityEngine.GameObject PowerUI.UI::GUINode
	GameObject_t1756533147 * ___GUINode_10;
	// PowerUI.Renderman PowerUI.UI::Renderer
	Renderman_t1984383802 * ___Renderer_11;
	// System.Single PowerUI.UI::CameraDistance
	float ___CameraDistance_12;
	// UnityEngine.GameObject PowerUI.UI::CameraNode
	GameObject_t1756533147 * ___CameraNode_13;
	// UnityEngine.Transform PowerUI.UI::CameraTransform
	Transform_t3275118058 * ___CameraTransform_14;
	// Wrench.FullVariableSet PowerUI.UI::Variables
	FullVariableSet_t315729381 * ___Variables_15;
	// PowerUI.WorldUI PowerUI.UI::LastWorldUI
	WorldUI_t2347980340 * ___LastWorldUI_16;
	// PowerUI.WorldUI PowerUI.UI::FirstWorldUI
	WorldUI_t2347980340 * ___FirstWorldUI_17;
	// System.Int32 PowerUI.UI::CameraDepth
	int32_t ___CameraDepth_18;
	// PowerUI.CameraPool PowerUI.UI::MainCameraPool
	CameraPool_t1986649901 * ___MainCameraPool_19;
	// PowerUI.StandardUpdater PowerUI.UI::GlobalUpdater
	StandardUpdater_t4051454526 * ___GlobalUpdater_20;
	// System.Type PowerUI.UI::BaseCodeType
	Type_t * ___BaseCodeType_21;
	// PowerUI.CameraCreated PowerUI.UI::OnCameraCreated
	CameraCreated_t4052339439 * ___OnCameraCreated_22;
	// Wrench.UnityLanguageLoader PowerUI.UI::LanguageLoader
	UnityLanguageLoader_t3673306454 * ___LanguageLoader_23;
	// GetSecurityDomain PowerUI.UI::OnGetSecurityDomain
	GetSecurityDomain_t3814748782 * ___OnGetSecurityDomain_24;
	// PowerUI.CameraMode PowerUI.UI::CurrentCameraMode
	int32_t ___CurrentCameraMode_25;
	// System.Int32 PowerUI.UI::AtlasSize
	int32_t ___AtlasSize_26;
	// Wrench.OnLogEvent PowerUI.UI::<>f__mg$cache0
	OnLogEvent_t3913109635 * ___U3CU3Ef__mgU24cache0_27;
	// InfiniText.OnLogEvent PowerUI.UI::<>f__mg$cache1
	OnLogEvent_t355888959 * ___U3CU3Ef__mgU24cache1_28;
	// Wrench.OnVariableChange PowerUI.UI::<>f__mg$cache2
	OnVariableChange_t4274501541 * ___U3CU3Ef__mgU24cache2_29;
	// Wrench.LanguageChange PowerUI.UI::<>f__mg$cache3
	LanguageChange_t479106978 * ___U3CU3Ef__mgU24cache3_30;
	// Wrench.TextModifierChange PowerUI.UI::<>f__mg$cache4
	TextModifierChange_t3642518626 * ___U3CU3Ef__mgU24cache4_31;

public:
	inline static int32_t get_offset_of_Layer_1() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___Layer_1)); }
	inline int32_t get_Layer_1() const { return ___Layer_1; }
	inline int32_t* get_address_of_Layer_1() { return &___Layer_1; }
	inline void set_Layer_1(int32_t value)
	{
		___Layer_1 = value;
	}

	inline static int32_t get_offset_of_Started_2() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___Started_2)); }
	inline bool get_Started_2() const { return ___Started_2; }
	inline bool* get_address_of_Started_2() { return &___Started_2; }
	inline void set_Started_2(bool value)
	{
		___Started_2 = value;
	}

	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___content_3)); }
	inline Element_t3532621832 * get_content_3() const { return ___content_3; }
	inline Element_t3532621832 ** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(Element_t3532621832 * value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier(&___content_3, value);
	}

	inline static int32_t get_offset_of_RedrawRate_4() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___RedrawRate_4)); }
	inline float get_RedrawRate_4() const { return ___RedrawRate_4; }
	inline float* get_address_of_RedrawRate_4() { return &___RedrawRate_4; }
	inline void set_RedrawRate_4(float value)
	{
		___RedrawRate_4 = value;
	}

	inline static int32_t get_offset_of_GUICamera_5() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___GUICamera_5)); }
	inline Camera_t189460977 * get_GUICamera_5() const { return ___GUICamera_5; }
	inline Camera_t189460977 ** get_address_of_GUICamera_5() { return &___GUICamera_5; }
	inline void set_GUICamera_5(Camera_t189460977 * value)
	{
		___GUICamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___GUICamera_5, value);
	}

	inline static int32_t get_offset_of_document_6() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___document_6)); }
	inline Document_t1565145681 * get_document_6() const { return ___document_6; }
	inline Document_t1565145681 ** get_address_of_document_6() { return &___document_6; }
	inline void set_document_6(Document_t1565145681 * value)
	{
		___document_6 = value;
		Il2CppCodeGenWriteBarrier(&___document_6, value);
	}

	inline static int32_t get_offset_of_HandledInput_7() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___HandledInput_7)); }
	inline bool get_HandledInput_7() const { return ___HandledInput_7; }
	inline bool* get_address_of_HandledInput_7() { return &___HandledInput_7; }
	inline void set_HandledInput_7(bool value)
	{
		___HandledInput_7 = value;
	}

	inline static int32_t get_offset_of_FieldOfView_8() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___FieldOfView_8)); }
	inline float get_FieldOfView_8() const { return ___FieldOfView_8; }
	inline float* get_address_of_FieldOfView_8() { return &___FieldOfView_8; }
	inline void set_FieldOfView_8(float value)
	{
		___FieldOfView_8 = value;
	}

	inline static int32_t get_offset_of_RedrawTimer_9() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___RedrawTimer_9)); }
	inline float get_RedrawTimer_9() const { return ___RedrawTimer_9; }
	inline float* get_address_of_RedrawTimer_9() { return &___RedrawTimer_9; }
	inline void set_RedrawTimer_9(float value)
	{
		___RedrawTimer_9 = value;
	}

	inline static int32_t get_offset_of_GUINode_10() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___GUINode_10)); }
	inline GameObject_t1756533147 * get_GUINode_10() const { return ___GUINode_10; }
	inline GameObject_t1756533147 ** get_address_of_GUINode_10() { return &___GUINode_10; }
	inline void set_GUINode_10(GameObject_t1756533147 * value)
	{
		___GUINode_10 = value;
		Il2CppCodeGenWriteBarrier(&___GUINode_10, value);
	}

	inline static int32_t get_offset_of_Renderer_11() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___Renderer_11)); }
	inline Renderman_t1984383802 * get_Renderer_11() const { return ___Renderer_11; }
	inline Renderman_t1984383802 ** get_address_of_Renderer_11() { return &___Renderer_11; }
	inline void set_Renderer_11(Renderman_t1984383802 * value)
	{
		___Renderer_11 = value;
		Il2CppCodeGenWriteBarrier(&___Renderer_11, value);
	}

	inline static int32_t get_offset_of_CameraDistance_12() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___CameraDistance_12)); }
	inline float get_CameraDistance_12() const { return ___CameraDistance_12; }
	inline float* get_address_of_CameraDistance_12() { return &___CameraDistance_12; }
	inline void set_CameraDistance_12(float value)
	{
		___CameraDistance_12 = value;
	}

	inline static int32_t get_offset_of_CameraNode_13() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___CameraNode_13)); }
	inline GameObject_t1756533147 * get_CameraNode_13() const { return ___CameraNode_13; }
	inline GameObject_t1756533147 ** get_address_of_CameraNode_13() { return &___CameraNode_13; }
	inline void set_CameraNode_13(GameObject_t1756533147 * value)
	{
		___CameraNode_13 = value;
		Il2CppCodeGenWriteBarrier(&___CameraNode_13, value);
	}

	inline static int32_t get_offset_of_CameraTransform_14() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___CameraTransform_14)); }
	inline Transform_t3275118058 * get_CameraTransform_14() const { return ___CameraTransform_14; }
	inline Transform_t3275118058 ** get_address_of_CameraTransform_14() { return &___CameraTransform_14; }
	inline void set_CameraTransform_14(Transform_t3275118058 * value)
	{
		___CameraTransform_14 = value;
		Il2CppCodeGenWriteBarrier(&___CameraTransform_14, value);
	}

	inline static int32_t get_offset_of_Variables_15() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___Variables_15)); }
	inline FullVariableSet_t315729381 * get_Variables_15() const { return ___Variables_15; }
	inline FullVariableSet_t315729381 ** get_address_of_Variables_15() { return &___Variables_15; }
	inline void set_Variables_15(FullVariableSet_t315729381 * value)
	{
		___Variables_15 = value;
		Il2CppCodeGenWriteBarrier(&___Variables_15, value);
	}

	inline static int32_t get_offset_of_LastWorldUI_16() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___LastWorldUI_16)); }
	inline WorldUI_t2347980340 * get_LastWorldUI_16() const { return ___LastWorldUI_16; }
	inline WorldUI_t2347980340 ** get_address_of_LastWorldUI_16() { return &___LastWorldUI_16; }
	inline void set_LastWorldUI_16(WorldUI_t2347980340 * value)
	{
		___LastWorldUI_16 = value;
		Il2CppCodeGenWriteBarrier(&___LastWorldUI_16, value);
	}

	inline static int32_t get_offset_of_FirstWorldUI_17() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___FirstWorldUI_17)); }
	inline WorldUI_t2347980340 * get_FirstWorldUI_17() const { return ___FirstWorldUI_17; }
	inline WorldUI_t2347980340 ** get_address_of_FirstWorldUI_17() { return &___FirstWorldUI_17; }
	inline void set_FirstWorldUI_17(WorldUI_t2347980340 * value)
	{
		___FirstWorldUI_17 = value;
		Il2CppCodeGenWriteBarrier(&___FirstWorldUI_17, value);
	}

	inline static int32_t get_offset_of_CameraDepth_18() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___CameraDepth_18)); }
	inline int32_t get_CameraDepth_18() const { return ___CameraDepth_18; }
	inline int32_t* get_address_of_CameraDepth_18() { return &___CameraDepth_18; }
	inline void set_CameraDepth_18(int32_t value)
	{
		___CameraDepth_18 = value;
	}

	inline static int32_t get_offset_of_MainCameraPool_19() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___MainCameraPool_19)); }
	inline CameraPool_t1986649901 * get_MainCameraPool_19() const { return ___MainCameraPool_19; }
	inline CameraPool_t1986649901 ** get_address_of_MainCameraPool_19() { return &___MainCameraPool_19; }
	inline void set_MainCameraPool_19(CameraPool_t1986649901 * value)
	{
		___MainCameraPool_19 = value;
		Il2CppCodeGenWriteBarrier(&___MainCameraPool_19, value);
	}

	inline static int32_t get_offset_of_GlobalUpdater_20() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___GlobalUpdater_20)); }
	inline StandardUpdater_t4051454526 * get_GlobalUpdater_20() const { return ___GlobalUpdater_20; }
	inline StandardUpdater_t4051454526 ** get_address_of_GlobalUpdater_20() { return &___GlobalUpdater_20; }
	inline void set_GlobalUpdater_20(StandardUpdater_t4051454526 * value)
	{
		___GlobalUpdater_20 = value;
		Il2CppCodeGenWriteBarrier(&___GlobalUpdater_20, value);
	}

	inline static int32_t get_offset_of_BaseCodeType_21() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___BaseCodeType_21)); }
	inline Type_t * get_BaseCodeType_21() const { return ___BaseCodeType_21; }
	inline Type_t ** get_address_of_BaseCodeType_21() { return &___BaseCodeType_21; }
	inline void set_BaseCodeType_21(Type_t * value)
	{
		___BaseCodeType_21 = value;
		Il2CppCodeGenWriteBarrier(&___BaseCodeType_21, value);
	}

	inline static int32_t get_offset_of_OnCameraCreated_22() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___OnCameraCreated_22)); }
	inline CameraCreated_t4052339439 * get_OnCameraCreated_22() const { return ___OnCameraCreated_22; }
	inline CameraCreated_t4052339439 ** get_address_of_OnCameraCreated_22() { return &___OnCameraCreated_22; }
	inline void set_OnCameraCreated_22(CameraCreated_t4052339439 * value)
	{
		___OnCameraCreated_22 = value;
		Il2CppCodeGenWriteBarrier(&___OnCameraCreated_22, value);
	}

	inline static int32_t get_offset_of_LanguageLoader_23() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___LanguageLoader_23)); }
	inline UnityLanguageLoader_t3673306454 * get_LanguageLoader_23() const { return ___LanguageLoader_23; }
	inline UnityLanguageLoader_t3673306454 ** get_address_of_LanguageLoader_23() { return &___LanguageLoader_23; }
	inline void set_LanguageLoader_23(UnityLanguageLoader_t3673306454 * value)
	{
		___LanguageLoader_23 = value;
		Il2CppCodeGenWriteBarrier(&___LanguageLoader_23, value);
	}

	inline static int32_t get_offset_of_OnGetSecurityDomain_24() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___OnGetSecurityDomain_24)); }
	inline GetSecurityDomain_t3814748782 * get_OnGetSecurityDomain_24() const { return ___OnGetSecurityDomain_24; }
	inline GetSecurityDomain_t3814748782 ** get_address_of_OnGetSecurityDomain_24() { return &___OnGetSecurityDomain_24; }
	inline void set_OnGetSecurityDomain_24(GetSecurityDomain_t3814748782 * value)
	{
		___OnGetSecurityDomain_24 = value;
		Il2CppCodeGenWriteBarrier(&___OnGetSecurityDomain_24, value);
	}

	inline static int32_t get_offset_of_CurrentCameraMode_25() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___CurrentCameraMode_25)); }
	inline int32_t get_CurrentCameraMode_25() const { return ___CurrentCameraMode_25; }
	inline int32_t* get_address_of_CurrentCameraMode_25() { return &___CurrentCameraMode_25; }
	inline void set_CurrentCameraMode_25(int32_t value)
	{
		___CurrentCameraMode_25 = value;
	}

	inline static int32_t get_offset_of_AtlasSize_26() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___AtlasSize_26)); }
	inline int32_t get_AtlasSize_26() const { return ___AtlasSize_26; }
	inline int32_t* get_address_of_AtlasSize_26() { return &___AtlasSize_26; }
	inline void set_AtlasSize_26(int32_t value)
	{
		___AtlasSize_26 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_27() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___U3CU3Ef__mgU24cache0_27)); }
	inline OnLogEvent_t3913109635 * get_U3CU3Ef__mgU24cache0_27() const { return ___U3CU3Ef__mgU24cache0_27; }
	inline OnLogEvent_t3913109635 ** get_address_of_U3CU3Ef__mgU24cache0_27() { return &___U3CU3Ef__mgU24cache0_27; }
	inline void set_U3CU3Ef__mgU24cache0_27(OnLogEvent_t3913109635 * value)
	{
		___U3CU3Ef__mgU24cache0_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_28() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___U3CU3Ef__mgU24cache1_28)); }
	inline OnLogEvent_t355888959 * get_U3CU3Ef__mgU24cache1_28() const { return ___U3CU3Ef__mgU24cache1_28; }
	inline OnLogEvent_t355888959 ** get_address_of_U3CU3Ef__mgU24cache1_28() { return &___U3CU3Ef__mgU24cache1_28; }
	inline void set_U3CU3Ef__mgU24cache1_28(OnLogEvent_t355888959 * value)
	{
		___U3CU3Ef__mgU24cache1_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_29() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___U3CU3Ef__mgU24cache2_29)); }
	inline OnVariableChange_t4274501541 * get_U3CU3Ef__mgU24cache2_29() const { return ___U3CU3Ef__mgU24cache2_29; }
	inline OnVariableChange_t4274501541 ** get_address_of_U3CU3Ef__mgU24cache2_29() { return &___U3CU3Ef__mgU24cache2_29; }
	inline void set_U3CU3Ef__mgU24cache2_29(OnVariableChange_t4274501541 * value)
	{
		___U3CU3Ef__mgU24cache2_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_30() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___U3CU3Ef__mgU24cache3_30)); }
	inline LanguageChange_t479106978 * get_U3CU3Ef__mgU24cache3_30() const { return ___U3CU3Ef__mgU24cache3_30; }
	inline LanguageChange_t479106978 ** get_address_of_U3CU3Ef__mgU24cache3_30() { return &___U3CU3Ef__mgU24cache3_30; }
	inline void set_U3CU3Ef__mgU24cache3_30(LanguageChange_t479106978 * value)
	{
		___U3CU3Ef__mgU24cache3_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_31() { return static_cast<int32_t>(offsetof(UI_t3721727446_StaticFields, ___U3CU3Ef__mgU24cache4_31)); }
	inline TextModifierChange_t3642518626 * get_U3CU3Ef__mgU24cache4_31() const { return ___U3CU3Ef__mgU24cache4_31; }
	inline TextModifierChange_t3642518626 ** get_address_of_U3CU3Ef__mgU24cache4_31() { return &___U3CU3Ef__mgU24cache4_31; }
	inline void set_U3CU3Ef__mgU24cache4_31(TextModifierChange_t3642518626 * value)
	{
		___U3CU3Ef__mgU24cache4_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
