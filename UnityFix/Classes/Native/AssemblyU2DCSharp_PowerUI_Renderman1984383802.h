#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_FilterMode10814199.h"
#include "AssemblyU2DCSharp_PowerUI_RenderMode231078595.h"

// PowerUI.TransformationStack
struct TransformationStack_t394230713;
// PowerUI.Css.ComputedStyle
struct ComputedStyle_t965371762;
// PowerUI.UIBatch
struct UIBatch_t1637790214;
// PowerUI.BoxRegion
struct BoxRegion_t3246653567;
// System.Collections.Generic.List`1<PowerUI.Css.ComputedStyle>
struct List_1_t334492894;
// PowerUI.Document
struct Document_t1565145681;
// UnityEngine.Shader
struct Shader_t2430389951;
// PowerUI.Css.ElementStyle
struct ElementStyle_t20514161;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PowerUI.WorldUI
struct WorldUI_t2347980340;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Renderman
struct  Renderman_t1984383802  : public Il2CppObject
{
public:
	// System.Int32 PowerUI.Renderman::PenX
	int32_t ___PenX_0;
	// System.Int32 PowerUI.Renderman::PenY
	int32_t ___PenY_1;
	// System.Int32 PowerUI.Renderman::LineHeight
	int32_t ___LineHeight_2;
	// System.Single PowerUI.Renderman::Depth
	float ___Depth_3;
	// System.Single PowerUI.Renderman::MaxDepth
	float ___MaxDepth_4;
	// System.Boolean PowerUI.Renderman::DepthUsed
	bool ___DepthUsed_5;
	// PowerUI.TransformationStack PowerUI.Renderman::Transformations
	TransformationStack_t394230713 * ___Transformations_6;
	// PowerUI.Css.ComputedStyle PowerUI.Renderman::LastOnLine
	ComputedStyle_t965371762 * ___LastOnLine_7;
	// PowerUI.Css.ComputedStyle PowerUI.Renderman::FirstOnLine
	ComputedStyle_t965371762 * ___FirstOnLine_8;
	// System.Boolean PowerUI.Renderman::GoingLeftwards
	bool ___GoingLeftwards_9;
	// PowerUI.UIBatch PowerUI.Renderman::CurrentBatch
	UIBatch_t1637790214 * ___CurrentBatch_10;
	// PowerUI.Css.ComputedStyle PowerUI.Renderman::LastPacked
	ComputedStyle_t965371762 * ___LastPacked_11;
	// PowerUI.Css.ComputedStyle PowerUI.Renderman::FirstPacked
	ComputedStyle_t965371762 * ___FirstPacked_12;
	// PowerUI.BoxRegion PowerUI.Renderman::ClippingBoundary
	BoxRegion_t3246653567 * ___ClippingBoundary_13;
	// System.Int32 PowerUI.Renderman::BatchDepth
	int32_t ___BatchDepth_14;
	// System.Int32 PowerUI.Renderman::LineStart
	int32_t ___LineStart_15;
	// System.Collections.Generic.List`1<PowerUI.Css.ComputedStyle> PowerUI.Renderman::ActiveFloats
	List_1_t334492894 * ___ActiveFloats_16;
	// System.Int32 PowerUI.Renderman::MaxX
	int32_t ___MaxX_17;
	// System.Int32 PowerUI.Renderman::Baseline
	int32_t ___Baseline_18;
	// System.Int32 PowerUI.Renderman::LargestLineWidth
	int32_t ___LargestLineWidth_19;
	// System.Single PowerUI.Renderman::FontAliasing
	float ___FontAliasing_20;
	// System.Int32 PowerUI.Renderman::RenderLayer
	int32_t ___RenderLayer_21;
	// System.Boolean PowerUI.Renderman::LayoutOccuring
	bool ___LayoutOccuring_22;
	// PowerUI.UIBatch PowerUI.Renderman::LastBatch
	UIBatch_t1637790214 * ___LastBatch_23;
	// PowerUI.UIBatch PowerUI.Renderman::FirstBatch
	UIBatch_t1637790214 * ___FirstBatch_24;
	// PowerUI.Document PowerUI.Renderman::RootDocument
	Document_t1565145681 * ___RootDocument_25;
	// System.Single PowerUI.Renderman::DepthResolution
	float ___DepthResolution_26;
	// System.Boolean PowerUI.Renderman::DoLayout
	bool ___DoLayout_27;
	// UnityEngine.Shader PowerUI.Renderman::CustomShader
	Shader_t2430389951 * ___CustomShader_28;
	// PowerUI.Css.ElementStyle PowerUI.Renderman::StylesToPaint
	ElementStyle_t20514161 * ___StylesToPaint_29;
	// PowerUI.Css.ElementStyle PowerUI.Renderman::StylesToRecompute
	ElementStyle_t20514161 * ___StylesToRecompute_30;
	// UnityEngine.GameObject PowerUI.Renderman::Node
	GameObject_t1756533147 * ___Node_31;
	// System.Boolean PowerUI.Renderman::ScreenClip
	bool ___ScreenClip_32;
	// PowerUI.WorldUI PowerUI.Renderman::InWorldUI
	WorldUI_t2347980340 * ___InWorldUI_33;
	// UnityEngine.Transform PowerUI.Renderman::PhysicsModeCollider
	Transform_t3275118058 * ___PhysicsModeCollider_34;
	// UnityEngine.FilterMode PowerUI.Renderman::ImageFilterMode
	int32_t ___ImageFilterMode_35;

public:
	inline static int32_t get_offset_of_PenX_0() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___PenX_0)); }
	inline int32_t get_PenX_0() const { return ___PenX_0; }
	inline int32_t* get_address_of_PenX_0() { return &___PenX_0; }
	inline void set_PenX_0(int32_t value)
	{
		___PenX_0 = value;
	}

	inline static int32_t get_offset_of_PenY_1() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___PenY_1)); }
	inline int32_t get_PenY_1() const { return ___PenY_1; }
	inline int32_t* get_address_of_PenY_1() { return &___PenY_1; }
	inline void set_PenY_1(int32_t value)
	{
		___PenY_1 = value;
	}

	inline static int32_t get_offset_of_LineHeight_2() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___LineHeight_2)); }
	inline int32_t get_LineHeight_2() const { return ___LineHeight_2; }
	inline int32_t* get_address_of_LineHeight_2() { return &___LineHeight_2; }
	inline void set_LineHeight_2(int32_t value)
	{
		___LineHeight_2 = value;
	}

	inline static int32_t get_offset_of_Depth_3() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___Depth_3)); }
	inline float get_Depth_3() const { return ___Depth_3; }
	inline float* get_address_of_Depth_3() { return &___Depth_3; }
	inline void set_Depth_3(float value)
	{
		___Depth_3 = value;
	}

	inline static int32_t get_offset_of_MaxDepth_4() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___MaxDepth_4)); }
	inline float get_MaxDepth_4() const { return ___MaxDepth_4; }
	inline float* get_address_of_MaxDepth_4() { return &___MaxDepth_4; }
	inline void set_MaxDepth_4(float value)
	{
		___MaxDepth_4 = value;
	}

	inline static int32_t get_offset_of_DepthUsed_5() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___DepthUsed_5)); }
	inline bool get_DepthUsed_5() const { return ___DepthUsed_5; }
	inline bool* get_address_of_DepthUsed_5() { return &___DepthUsed_5; }
	inline void set_DepthUsed_5(bool value)
	{
		___DepthUsed_5 = value;
	}

	inline static int32_t get_offset_of_Transformations_6() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___Transformations_6)); }
	inline TransformationStack_t394230713 * get_Transformations_6() const { return ___Transformations_6; }
	inline TransformationStack_t394230713 ** get_address_of_Transformations_6() { return &___Transformations_6; }
	inline void set_Transformations_6(TransformationStack_t394230713 * value)
	{
		___Transformations_6 = value;
		Il2CppCodeGenWriteBarrier(&___Transformations_6, value);
	}

	inline static int32_t get_offset_of_LastOnLine_7() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___LastOnLine_7)); }
	inline ComputedStyle_t965371762 * get_LastOnLine_7() const { return ___LastOnLine_7; }
	inline ComputedStyle_t965371762 ** get_address_of_LastOnLine_7() { return &___LastOnLine_7; }
	inline void set_LastOnLine_7(ComputedStyle_t965371762 * value)
	{
		___LastOnLine_7 = value;
		Il2CppCodeGenWriteBarrier(&___LastOnLine_7, value);
	}

	inline static int32_t get_offset_of_FirstOnLine_8() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___FirstOnLine_8)); }
	inline ComputedStyle_t965371762 * get_FirstOnLine_8() const { return ___FirstOnLine_8; }
	inline ComputedStyle_t965371762 ** get_address_of_FirstOnLine_8() { return &___FirstOnLine_8; }
	inline void set_FirstOnLine_8(ComputedStyle_t965371762 * value)
	{
		___FirstOnLine_8 = value;
		Il2CppCodeGenWriteBarrier(&___FirstOnLine_8, value);
	}

	inline static int32_t get_offset_of_GoingLeftwards_9() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___GoingLeftwards_9)); }
	inline bool get_GoingLeftwards_9() const { return ___GoingLeftwards_9; }
	inline bool* get_address_of_GoingLeftwards_9() { return &___GoingLeftwards_9; }
	inline void set_GoingLeftwards_9(bool value)
	{
		___GoingLeftwards_9 = value;
	}

	inline static int32_t get_offset_of_CurrentBatch_10() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___CurrentBatch_10)); }
	inline UIBatch_t1637790214 * get_CurrentBatch_10() const { return ___CurrentBatch_10; }
	inline UIBatch_t1637790214 ** get_address_of_CurrentBatch_10() { return &___CurrentBatch_10; }
	inline void set_CurrentBatch_10(UIBatch_t1637790214 * value)
	{
		___CurrentBatch_10 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentBatch_10, value);
	}

	inline static int32_t get_offset_of_LastPacked_11() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___LastPacked_11)); }
	inline ComputedStyle_t965371762 * get_LastPacked_11() const { return ___LastPacked_11; }
	inline ComputedStyle_t965371762 ** get_address_of_LastPacked_11() { return &___LastPacked_11; }
	inline void set_LastPacked_11(ComputedStyle_t965371762 * value)
	{
		___LastPacked_11 = value;
		Il2CppCodeGenWriteBarrier(&___LastPacked_11, value);
	}

	inline static int32_t get_offset_of_FirstPacked_12() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___FirstPacked_12)); }
	inline ComputedStyle_t965371762 * get_FirstPacked_12() const { return ___FirstPacked_12; }
	inline ComputedStyle_t965371762 ** get_address_of_FirstPacked_12() { return &___FirstPacked_12; }
	inline void set_FirstPacked_12(ComputedStyle_t965371762 * value)
	{
		___FirstPacked_12 = value;
		Il2CppCodeGenWriteBarrier(&___FirstPacked_12, value);
	}

	inline static int32_t get_offset_of_ClippingBoundary_13() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___ClippingBoundary_13)); }
	inline BoxRegion_t3246653567 * get_ClippingBoundary_13() const { return ___ClippingBoundary_13; }
	inline BoxRegion_t3246653567 ** get_address_of_ClippingBoundary_13() { return &___ClippingBoundary_13; }
	inline void set_ClippingBoundary_13(BoxRegion_t3246653567 * value)
	{
		___ClippingBoundary_13 = value;
		Il2CppCodeGenWriteBarrier(&___ClippingBoundary_13, value);
	}

	inline static int32_t get_offset_of_BatchDepth_14() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___BatchDepth_14)); }
	inline int32_t get_BatchDepth_14() const { return ___BatchDepth_14; }
	inline int32_t* get_address_of_BatchDepth_14() { return &___BatchDepth_14; }
	inline void set_BatchDepth_14(int32_t value)
	{
		___BatchDepth_14 = value;
	}

	inline static int32_t get_offset_of_LineStart_15() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___LineStart_15)); }
	inline int32_t get_LineStart_15() const { return ___LineStart_15; }
	inline int32_t* get_address_of_LineStart_15() { return &___LineStart_15; }
	inline void set_LineStart_15(int32_t value)
	{
		___LineStart_15 = value;
	}

	inline static int32_t get_offset_of_ActiveFloats_16() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___ActiveFloats_16)); }
	inline List_1_t334492894 * get_ActiveFloats_16() const { return ___ActiveFloats_16; }
	inline List_1_t334492894 ** get_address_of_ActiveFloats_16() { return &___ActiveFloats_16; }
	inline void set_ActiveFloats_16(List_1_t334492894 * value)
	{
		___ActiveFloats_16 = value;
		Il2CppCodeGenWriteBarrier(&___ActiveFloats_16, value);
	}

	inline static int32_t get_offset_of_MaxX_17() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___MaxX_17)); }
	inline int32_t get_MaxX_17() const { return ___MaxX_17; }
	inline int32_t* get_address_of_MaxX_17() { return &___MaxX_17; }
	inline void set_MaxX_17(int32_t value)
	{
		___MaxX_17 = value;
	}

	inline static int32_t get_offset_of_Baseline_18() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___Baseline_18)); }
	inline int32_t get_Baseline_18() const { return ___Baseline_18; }
	inline int32_t* get_address_of_Baseline_18() { return &___Baseline_18; }
	inline void set_Baseline_18(int32_t value)
	{
		___Baseline_18 = value;
	}

	inline static int32_t get_offset_of_LargestLineWidth_19() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___LargestLineWidth_19)); }
	inline int32_t get_LargestLineWidth_19() const { return ___LargestLineWidth_19; }
	inline int32_t* get_address_of_LargestLineWidth_19() { return &___LargestLineWidth_19; }
	inline void set_LargestLineWidth_19(int32_t value)
	{
		___LargestLineWidth_19 = value;
	}

	inline static int32_t get_offset_of_FontAliasing_20() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___FontAliasing_20)); }
	inline float get_FontAliasing_20() const { return ___FontAliasing_20; }
	inline float* get_address_of_FontAliasing_20() { return &___FontAliasing_20; }
	inline void set_FontAliasing_20(float value)
	{
		___FontAliasing_20 = value;
	}

	inline static int32_t get_offset_of_RenderLayer_21() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___RenderLayer_21)); }
	inline int32_t get_RenderLayer_21() const { return ___RenderLayer_21; }
	inline int32_t* get_address_of_RenderLayer_21() { return &___RenderLayer_21; }
	inline void set_RenderLayer_21(int32_t value)
	{
		___RenderLayer_21 = value;
	}

	inline static int32_t get_offset_of_LayoutOccuring_22() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___LayoutOccuring_22)); }
	inline bool get_LayoutOccuring_22() const { return ___LayoutOccuring_22; }
	inline bool* get_address_of_LayoutOccuring_22() { return &___LayoutOccuring_22; }
	inline void set_LayoutOccuring_22(bool value)
	{
		___LayoutOccuring_22 = value;
	}

	inline static int32_t get_offset_of_LastBatch_23() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___LastBatch_23)); }
	inline UIBatch_t1637790214 * get_LastBatch_23() const { return ___LastBatch_23; }
	inline UIBatch_t1637790214 ** get_address_of_LastBatch_23() { return &___LastBatch_23; }
	inline void set_LastBatch_23(UIBatch_t1637790214 * value)
	{
		___LastBatch_23 = value;
		Il2CppCodeGenWriteBarrier(&___LastBatch_23, value);
	}

	inline static int32_t get_offset_of_FirstBatch_24() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___FirstBatch_24)); }
	inline UIBatch_t1637790214 * get_FirstBatch_24() const { return ___FirstBatch_24; }
	inline UIBatch_t1637790214 ** get_address_of_FirstBatch_24() { return &___FirstBatch_24; }
	inline void set_FirstBatch_24(UIBatch_t1637790214 * value)
	{
		___FirstBatch_24 = value;
		Il2CppCodeGenWriteBarrier(&___FirstBatch_24, value);
	}

	inline static int32_t get_offset_of_RootDocument_25() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___RootDocument_25)); }
	inline Document_t1565145681 * get_RootDocument_25() const { return ___RootDocument_25; }
	inline Document_t1565145681 ** get_address_of_RootDocument_25() { return &___RootDocument_25; }
	inline void set_RootDocument_25(Document_t1565145681 * value)
	{
		___RootDocument_25 = value;
		Il2CppCodeGenWriteBarrier(&___RootDocument_25, value);
	}

	inline static int32_t get_offset_of_DepthResolution_26() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___DepthResolution_26)); }
	inline float get_DepthResolution_26() const { return ___DepthResolution_26; }
	inline float* get_address_of_DepthResolution_26() { return &___DepthResolution_26; }
	inline void set_DepthResolution_26(float value)
	{
		___DepthResolution_26 = value;
	}

	inline static int32_t get_offset_of_DoLayout_27() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___DoLayout_27)); }
	inline bool get_DoLayout_27() const { return ___DoLayout_27; }
	inline bool* get_address_of_DoLayout_27() { return &___DoLayout_27; }
	inline void set_DoLayout_27(bool value)
	{
		___DoLayout_27 = value;
	}

	inline static int32_t get_offset_of_CustomShader_28() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___CustomShader_28)); }
	inline Shader_t2430389951 * get_CustomShader_28() const { return ___CustomShader_28; }
	inline Shader_t2430389951 ** get_address_of_CustomShader_28() { return &___CustomShader_28; }
	inline void set_CustomShader_28(Shader_t2430389951 * value)
	{
		___CustomShader_28 = value;
		Il2CppCodeGenWriteBarrier(&___CustomShader_28, value);
	}

	inline static int32_t get_offset_of_StylesToPaint_29() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___StylesToPaint_29)); }
	inline ElementStyle_t20514161 * get_StylesToPaint_29() const { return ___StylesToPaint_29; }
	inline ElementStyle_t20514161 ** get_address_of_StylesToPaint_29() { return &___StylesToPaint_29; }
	inline void set_StylesToPaint_29(ElementStyle_t20514161 * value)
	{
		___StylesToPaint_29 = value;
		Il2CppCodeGenWriteBarrier(&___StylesToPaint_29, value);
	}

	inline static int32_t get_offset_of_StylesToRecompute_30() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___StylesToRecompute_30)); }
	inline ElementStyle_t20514161 * get_StylesToRecompute_30() const { return ___StylesToRecompute_30; }
	inline ElementStyle_t20514161 ** get_address_of_StylesToRecompute_30() { return &___StylesToRecompute_30; }
	inline void set_StylesToRecompute_30(ElementStyle_t20514161 * value)
	{
		___StylesToRecompute_30 = value;
		Il2CppCodeGenWriteBarrier(&___StylesToRecompute_30, value);
	}

	inline static int32_t get_offset_of_Node_31() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___Node_31)); }
	inline GameObject_t1756533147 * get_Node_31() const { return ___Node_31; }
	inline GameObject_t1756533147 ** get_address_of_Node_31() { return &___Node_31; }
	inline void set_Node_31(GameObject_t1756533147 * value)
	{
		___Node_31 = value;
		Il2CppCodeGenWriteBarrier(&___Node_31, value);
	}

	inline static int32_t get_offset_of_ScreenClip_32() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___ScreenClip_32)); }
	inline bool get_ScreenClip_32() const { return ___ScreenClip_32; }
	inline bool* get_address_of_ScreenClip_32() { return &___ScreenClip_32; }
	inline void set_ScreenClip_32(bool value)
	{
		___ScreenClip_32 = value;
	}

	inline static int32_t get_offset_of_InWorldUI_33() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___InWorldUI_33)); }
	inline WorldUI_t2347980340 * get_InWorldUI_33() const { return ___InWorldUI_33; }
	inline WorldUI_t2347980340 ** get_address_of_InWorldUI_33() { return &___InWorldUI_33; }
	inline void set_InWorldUI_33(WorldUI_t2347980340 * value)
	{
		___InWorldUI_33 = value;
		Il2CppCodeGenWriteBarrier(&___InWorldUI_33, value);
	}

	inline static int32_t get_offset_of_PhysicsModeCollider_34() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___PhysicsModeCollider_34)); }
	inline Transform_t3275118058 * get_PhysicsModeCollider_34() const { return ___PhysicsModeCollider_34; }
	inline Transform_t3275118058 ** get_address_of_PhysicsModeCollider_34() { return &___PhysicsModeCollider_34; }
	inline void set_PhysicsModeCollider_34(Transform_t3275118058 * value)
	{
		___PhysicsModeCollider_34 = value;
		Il2CppCodeGenWriteBarrier(&___PhysicsModeCollider_34, value);
	}

	inline static int32_t get_offset_of_ImageFilterMode_35() { return static_cast<int32_t>(offsetof(Renderman_t1984383802, ___ImageFilterMode_35)); }
	inline int32_t get_ImageFilterMode_35() const { return ___ImageFilterMode_35; }
	inline int32_t* get_address_of_ImageFilterMode_35() { return &___ImageFilterMode_35; }
	inline void set_ImageFilterMode_35(int32_t value)
	{
		___ImageFilterMode_35 = value;
	}
};

struct Renderman_t1984383802_StaticFields
{
public:
	// PowerUI.RenderMode PowerUI.Renderman::UIRenderMode
	int32_t ___UIRenderMode_36;

public:
	inline static int32_t get_offset_of_UIRenderMode_36() { return static_cast<int32_t>(offsetof(Renderman_t1984383802_StaticFields, ___UIRenderMode_36)); }
	inline int32_t get_UIRenderMode_36() const { return ___UIRenderMode_36; }
	inline int32_t* get_address_of_UIRenderMode_36() { return &___UIRenderMode_36; }
	inline void set_UIRenderMode_36(int32_t value)
	{
		___UIRenderMode_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
