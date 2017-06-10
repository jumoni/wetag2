#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.FlatWorldUIHandler
struct  FlatWorldUIHandler_t3565988825  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rect PowerUI.FlatWorldUIHandler::Location
	Rect_t3681755626  ___Location_3;
	// UnityEngine.Texture2D PowerUI.FlatWorldUIHandler::Output
	Texture2D_t3542995729 * ___Output_4;
	// System.Single PowerUI.FlatWorldUIHandler::CurrentRate
	float ___CurrentRate_5;
	// System.Boolean PowerUI.FlatWorldUIHandler::Redraw
	bool ___Redraw_6;

public:
	inline static int32_t get_offset_of_Location_3() { return static_cast<int32_t>(offsetof(FlatWorldUIHandler_t3565988825, ___Location_3)); }
	inline Rect_t3681755626  get_Location_3() const { return ___Location_3; }
	inline Rect_t3681755626 * get_address_of_Location_3() { return &___Location_3; }
	inline void set_Location_3(Rect_t3681755626  value)
	{
		___Location_3 = value;
	}

	inline static int32_t get_offset_of_Output_4() { return static_cast<int32_t>(offsetof(FlatWorldUIHandler_t3565988825, ___Output_4)); }
	inline Texture2D_t3542995729 * get_Output_4() const { return ___Output_4; }
	inline Texture2D_t3542995729 ** get_address_of_Output_4() { return &___Output_4; }
	inline void set_Output_4(Texture2D_t3542995729 * value)
	{
		___Output_4 = value;
		Il2CppCodeGenWriteBarrier(&___Output_4, value);
	}

	inline static int32_t get_offset_of_CurrentRate_5() { return static_cast<int32_t>(offsetof(FlatWorldUIHandler_t3565988825, ___CurrentRate_5)); }
	inline float get_CurrentRate_5() const { return ___CurrentRate_5; }
	inline float* get_address_of_CurrentRate_5() { return &___CurrentRate_5; }
	inline void set_CurrentRate_5(float value)
	{
		___CurrentRate_5 = value;
	}

	inline static int32_t get_offset_of_Redraw_6() { return static_cast<int32_t>(offsetof(FlatWorldUIHandler_t3565988825, ___Redraw_6)); }
	inline bool get_Redraw_6() const { return ___Redraw_6; }
	inline bool* get_address_of_Redraw_6() { return &___Redraw_6; }
	inline void set_Redraw_6(bool value)
	{
		___Redraw_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
