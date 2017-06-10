#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

// Blaze.Scanner
struct Scanner_t1141787724;
// Blaze.VectorPath
struct VectorPath_t4108957350;
// PowerUI.CanvasTag
struct CanvasTag_t4010921588;
// PowerUI.ImagePackage
struct ImagePackage_t3498155007;
// PowerUI.DynamicTexture
struct DynamicTexture_t3994024308;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.CanvasContext
struct  CanvasContext_t3752883585  : public Il2CppObject
{
public:
	// Blaze.Scanner PowerUI.CanvasContext::Rasteriser
	Scanner_t1141787724 * ___Rasteriser_0;
	// Blaze.VectorPath PowerUI.CanvasContext::Path
	VectorPath_t4108957350 * ___Path_1;
	// PowerUI.CanvasTag PowerUI.CanvasContext::Canvas
	CanvasTag_t4010921588 * ___Canvas_2;
	// PowerUI.ImagePackage PowerUI.CanvasContext::Package
	ImagePackage_t3498155007 * ___Package_3;
	// PowerUI.DynamicTexture PowerUI.CanvasContext::ImageData
	DynamicTexture_t3994024308 * ___ImageData_4;
	// UnityEngine.Color32 PowerUI.CanvasContext::FillColour
	Color32_t874517518  ___FillColour_5;
	// UnityEngine.Color32 PowerUI.CanvasContext::StrokeColour
	Color32_t874517518  ___StrokeColour_6;

public:
	inline static int32_t get_offset_of_Rasteriser_0() { return static_cast<int32_t>(offsetof(CanvasContext_t3752883585, ___Rasteriser_0)); }
	inline Scanner_t1141787724 * get_Rasteriser_0() const { return ___Rasteriser_0; }
	inline Scanner_t1141787724 ** get_address_of_Rasteriser_0() { return &___Rasteriser_0; }
	inline void set_Rasteriser_0(Scanner_t1141787724 * value)
	{
		___Rasteriser_0 = value;
		Il2CppCodeGenWriteBarrier(&___Rasteriser_0, value);
	}

	inline static int32_t get_offset_of_Path_1() { return static_cast<int32_t>(offsetof(CanvasContext_t3752883585, ___Path_1)); }
	inline VectorPath_t4108957350 * get_Path_1() const { return ___Path_1; }
	inline VectorPath_t4108957350 ** get_address_of_Path_1() { return &___Path_1; }
	inline void set_Path_1(VectorPath_t4108957350 * value)
	{
		___Path_1 = value;
		Il2CppCodeGenWriteBarrier(&___Path_1, value);
	}

	inline static int32_t get_offset_of_Canvas_2() { return static_cast<int32_t>(offsetof(CanvasContext_t3752883585, ___Canvas_2)); }
	inline CanvasTag_t4010921588 * get_Canvas_2() const { return ___Canvas_2; }
	inline CanvasTag_t4010921588 ** get_address_of_Canvas_2() { return &___Canvas_2; }
	inline void set_Canvas_2(CanvasTag_t4010921588 * value)
	{
		___Canvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___Canvas_2, value);
	}

	inline static int32_t get_offset_of_Package_3() { return static_cast<int32_t>(offsetof(CanvasContext_t3752883585, ___Package_3)); }
	inline ImagePackage_t3498155007 * get_Package_3() const { return ___Package_3; }
	inline ImagePackage_t3498155007 ** get_address_of_Package_3() { return &___Package_3; }
	inline void set_Package_3(ImagePackage_t3498155007 * value)
	{
		___Package_3 = value;
		Il2CppCodeGenWriteBarrier(&___Package_3, value);
	}

	inline static int32_t get_offset_of_ImageData_4() { return static_cast<int32_t>(offsetof(CanvasContext_t3752883585, ___ImageData_4)); }
	inline DynamicTexture_t3994024308 * get_ImageData_4() const { return ___ImageData_4; }
	inline DynamicTexture_t3994024308 ** get_address_of_ImageData_4() { return &___ImageData_4; }
	inline void set_ImageData_4(DynamicTexture_t3994024308 * value)
	{
		___ImageData_4 = value;
		Il2CppCodeGenWriteBarrier(&___ImageData_4, value);
	}

	inline static int32_t get_offset_of_FillColour_5() { return static_cast<int32_t>(offsetof(CanvasContext_t3752883585, ___FillColour_5)); }
	inline Color32_t874517518  get_FillColour_5() const { return ___FillColour_5; }
	inline Color32_t874517518 * get_address_of_FillColour_5() { return &___FillColour_5; }
	inline void set_FillColour_5(Color32_t874517518  value)
	{
		___FillColour_5 = value;
	}

	inline static int32_t get_offset_of_StrokeColour_6() { return static_cast<int32_t>(offsetof(CanvasContext_t3752883585, ___StrokeColour_6)); }
	inline Color32_t874517518  get_StrokeColour_6() const { return ___StrokeColour_6; }
	inline Color32_t874517518 * get_address_of_StrokeColour_6() { return &___StrokeColour_6; }
	inline void set_StrokeColour_6(Color32_t874517518  value)
	{
		___StrokeColour_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
