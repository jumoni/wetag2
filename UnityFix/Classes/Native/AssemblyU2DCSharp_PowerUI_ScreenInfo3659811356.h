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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.String
struct String_t;
// PowerUI.ResolutionInfo
struct ResolutionInfo_t3706515834;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.ScreenInfo
struct  ScreenInfo_t3659811356  : public Il2CppObject
{
public:

public:
};

struct ScreenInfo_t3659811356_StaticFields
{
public:
	// System.Int32 PowerUI.ScreenInfo::ScreenX
	int32_t ___ScreenX_0;
	// System.Int32 PowerUI.ScreenInfo::ScreenY
	int32_t ___ScreenY_1;
	// System.Single PowerUI.ScreenInfo::ScreenYFloat
	float ___ScreenYFloat_2;
	// System.String PowerUI.ScreenInfo::ResolutionName
	String_t* ___ResolutionName_3;
	// System.Single PowerUI.ScreenInfo::DepthDepreciation
	float ___DepthDepreciation_4;
	// System.Single PowerUI.ScreenInfo::ResolutionScale
	float ___ResolutionScale_5;
	// UnityEngine.Vector2 PowerUI.ScreenInfo::WorldSize
	Vector2_t2243707579  ___WorldSize_6;
	// PowerUI.ResolutionInfo PowerUI.ScreenInfo::CurrentResolution
	ResolutionInfo_t3706515834 * ___CurrentResolution_7;
	// UnityEngine.Vector2 PowerUI.ScreenInfo::WorldPerPixel
	Vector2_t2243707579  ___WorldPerPixel_8;
	// UnityEngine.Vector3 PowerUI.ScreenInfo::WorldScreenOrigin
	Vector3_t2243707580  ___WorldScreenOrigin_9;

public:
	inline static int32_t get_offset_of_ScreenX_0() { return static_cast<int32_t>(offsetof(ScreenInfo_t3659811356_StaticFields, ___ScreenX_0)); }
	inline int32_t get_ScreenX_0() const { return ___ScreenX_0; }
	inline int32_t* get_address_of_ScreenX_0() { return &___ScreenX_0; }
	inline void set_ScreenX_0(int32_t value)
	{
		___ScreenX_0 = value;
	}

	inline static int32_t get_offset_of_ScreenY_1() { return static_cast<int32_t>(offsetof(ScreenInfo_t3659811356_StaticFields, ___ScreenY_1)); }
	inline int32_t get_ScreenY_1() const { return ___ScreenY_1; }
	inline int32_t* get_address_of_ScreenY_1() { return &___ScreenY_1; }
	inline void set_ScreenY_1(int32_t value)
	{
		___ScreenY_1 = value;
	}

	inline static int32_t get_offset_of_ScreenYFloat_2() { return static_cast<int32_t>(offsetof(ScreenInfo_t3659811356_StaticFields, ___ScreenYFloat_2)); }
	inline float get_ScreenYFloat_2() const { return ___ScreenYFloat_2; }
	inline float* get_address_of_ScreenYFloat_2() { return &___ScreenYFloat_2; }
	inline void set_ScreenYFloat_2(float value)
	{
		___ScreenYFloat_2 = value;
	}

	inline static int32_t get_offset_of_ResolutionName_3() { return static_cast<int32_t>(offsetof(ScreenInfo_t3659811356_StaticFields, ___ResolutionName_3)); }
	inline String_t* get_ResolutionName_3() const { return ___ResolutionName_3; }
	inline String_t** get_address_of_ResolutionName_3() { return &___ResolutionName_3; }
	inline void set_ResolutionName_3(String_t* value)
	{
		___ResolutionName_3 = value;
		Il2CppCodeGenWriteBarrier(&___ResolutionName_3, value);
	}

	inline static int32_t get_offset_of_DepthDepreciation_4() { return static_cast<int32_t>(offsetof(ScreenInfo_t3659811356_StaticFields, ___DepthDepreciation_4)); }
	inline float get_DepthDepreciation_4() const { return ___DepthDepreciation_4; }
	inline float* get_address_of_DepthDepreciation_4() { return &___DepthDepreciation_4; }
	inline void set_DepthDepreciation_4(float value)
	{
		___DepthDepreciation_4 = value;
	}

	inline static int32_t get_offset_of_ResolutionScale_5() { return static_cast<int32_t>(offsetof(ScreenInfo_t3659811356_StaticFields, ___ResolutionScale_5)); }
	inline float get_ResolutionScale_5() const { return ___ResolutionScale_5; }
	inline float* get_address_of_ResolutionScale_5() { return &___ResolutionScale_5; }
	inline void set_ResolutionScale_5(float value)
	{
		___ResolutionScale_5 = value;
	}

	inline static int32_t get_offset_of_WorldSize_6() { return static_cast<int32_t>(offsetof(ScreenInfo_t3659811356_StaticFields, ___WorldSize_6)); }
	inline Vector2_t2243707579  get_WorldSize_6() const { return ___WorldSize_6; }
	inline Vector2_t2243707579 * get_address_of_WorldSize_6() { return &___WorldSize_6; }
	inline void set_WorldSize_6(Vector2_t2243707579  value)
	{
		___WorldSize_6 = value;
	}

	inline static int32_t get_offset_of_CurrentResolution_7() { return static_cast<int32_t>(offsetof(ScreenInfo_t3659811356_StaticFields, ___CurrentResolution_7)); }
	inline ResolutionInfo_t3706515834 * get_CurrentResolution_7() const { return ___CurrentResolution_7; }
	inline ResolutionInfo_t3706515834 ** get_address_of_CurrentResolution_7() { return &___CurrentResolution_7; }
	inline void set_CurrentResolution_7(ResolutionInfo_t3706515834 * value)
	{
		___CurrentResolution_7 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentResolution_7, value);
	}

	inline static int32_t get_offset_of_WorldPerPixel_8() { return static_cast<int32_t>(offsetof(ScreenInfo_t3659811356_StaticFields, ___WorldPerPixel_8)); }
	inline Vector2_t2243707579  get_WorldPerPixel_8() const { return ___WorldPerPixel_8; }
	inline Vector2_t2243707579 * get_address_of_WorldPerPixel_8() { return &___WorldPerPixel_8; }
	inline void set_WorldPerPixel_8(Vector2_t2243707579  value)
	{
		___WorldPerPixel_8 = value;
	}

	inline static int32_t get_offset_of_WorldScreenOrigin_9() { return static_cast<int32_t>(offsetof(ScreenInfo_t3659811356_StaticFields, ___WorldScreenOrigin_9)); }
	inline Vector3_t2243707580  get_WorldScreenOrigin_9() const { return ___WorldScreenOrigin_9; }
	inline Vector3_t2243707580 * get_address_of_WorldScreenOrigin_9() { return &___WorldScreenOrigin_9; }
	inline void set_WorldScreenOrigin_9(Vector3_t2243707580  value)
	{
		___WorldScreenOrigin_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
