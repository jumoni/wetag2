#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_PowerUI_Css_RoundCornerPosition2110287632.h"

// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// PowerUI.Css.BorderProperty
struct BorderProperty_t2105551635;
// PowerUI.Css.RoundedCorners
struct RoundedCorners_t1777809075;
// PowerUI.Css.RoundBorderInverseProperty
struct RoundBorderInverseProperty_t4230439157;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.RoundCorner
struct  RoundCorner_t3140975145  : public Il2CppObject
{
public:
	// System.Int32 PowerUI.Css.RoundCorner::ToIndex
	int32_t ___ToIndex_2;
	// System.Int32 PowerUI.Css.RoundCorner::FromIndex
	int32_t ___FromIndex_3;
	// System.Int32 PowerUI.Css.RoundCorner::CornerRadius
	int32_t ___CornerRadius_4;
	// UnityEngine.Vector2[] PowerUI.Css.RoundCorner::OuterArc
	Vector2U5BU5D_t686124026* ___OuterArc_5;
	// UnityEngine.Vector2[] PowerUI.Css.RoundCorner::InnerArc
	Vector2U5BU5D_t686124026* ___InnerArc_6;
	// System.Int32 PowerUI.Css.RoundCorner::BlocksRequired
	int32_t ___BlocksRequired_7;
	// PowerUI.Css.BorderProperty PowerUI.Css.RoundCorner::Border
	BorderProperty_t2105551635 * ___Border_8;
	// System.Int32 PowerUI.Css.RoundCorner::InverseBlocksRequired
	int32_t ___InverseBlocksRequired_9;
	// PowerUI.Css.RoundedCorners PowerUI.Css.RoundCorner::RoundCorners
	RoundedCorners_t1777809075 * ___RoundCorners_10;
	// PowerUI.Css.RoundCornerPosition PowerUI.Css.RoundCorner::Position
	int32_t ___Position_11;
	// PowerUI.Css.RoundBorderInverseProperty PowerUI.Css.RoundCorner::InverseBorder
	RoundBorderInverseProperty_t4230439157 * ___InverseBorder_12;

public:
	inline static int32_t get_offset_of_ToIndex_2() { return static_cast<int32_t>(offsetof(RoundCorner_t3140975145, ___ToIndex_2)); }
	inline int32_t get_ToIndex_2() const { return ___ToIndex_2; }
	inline int32_t* get_address_of_ToIndex_2() { return &___ToIndex_2; }
	inline void set_ToIndex_2(int32_t value)
	{
		___ToIndex_2 = value;
	}

	inline static int32_t get_offset_of_FromIndex_3() { return static_cast<int32_t>(offsetof(RoundCorner_t3140975145, ___FromIndex_3)); }
	inline int32_t get_FromIndex_3() const { return ___FromIndex_3; }
	inline int32_t* get_address_of_FromIndex_3() { return &___FromIndex_3; }
	inline void set_FromIndex_3(int32_t value)
	{
		___FromIndex_3 = value;
	}

	inline static int32_t get_offset_of_CornerRadius_4() { return static_cast<int32_t>(offsetof(RoundCorner_t3140975145, ___CornerRadius_4)); }
	inline int32_t get_CornerRadius_4() const { return ___CornerRadius_4; }
	inline int32_t* get_address_of_CornerRadius_4() { return &___CornerRadius_4; }
	inline void set_CornerRadius_4(int32_t value)
	{
		___CornerRadius_4 = value;
	}

	inline static int32_t get_offset_of_OuterArc_5() { return static_cast<int32_t>(offsetof(RoundCorner_t3140975145, ___OuterArc_5)); }
	inline Vector2U5BU5D_t686124026* get_OuterArc_5() const { return ___OuterArc_5; }
	inline Vector2U5BU5D_t686124026** get_address_of_OuterArc_5() { return &___OuterArc_5; }
	inline void set_OuterArc_5(Vector2U5BU5D_t686124026* value)
	{
		___OuterArc_5 = value;
		Il2CppCodeGenWriteBarrier(&___OuterArc_5, value);
	}

	inline static int32_t get_offset_of_InnerArc_6() { return static_cast<int32_t>(offsetof(RoundCorner_t3140975145, ___InnerArc_6)); }
	inline Vector2U5BU5D_t686124026* get_InnerArc_6() const { return ___InnerArc_6; }
	inline Vector2U5BU5D_t686124026** get_address_of_InnerArc_6() { return &___InnerArc_6; }
	inline void set_InnerArc_6(Vector2U5BU5D_t686124026* value)
	{
		___InnerArc_6 = value;
		Il2CppCodeGenWriteBarrier(&___InnerArc_6, value);
	}

	inline static int32_t get_offset_of_BlocksRequired_7() { return static_cast<int32_t>(offsetof(RoundCorner_t3140975145, ___BlocksRequired_7)); }
	inline int32_t get_BlocksRequired_7() const { return ___BlocksRequired_7; }
	inline int32_t* get_address_of_BlocksRequired_7() { return &___BlocksRequired_7; }
	inline void set_BlocksRequired_7(int32_t value)
	{
		___BlocksRequired_7 = value;
	}

	inline static int32_t get_offset_of_Border_8() { return static_cast<int32_t>(offsetof(RoundCorner_t3140975145, ___Border_8)); }
	inline BorderProperty_t2105551635 * get_Border_8() const { return ___Border_8; }
	inline BorderProperty_t2105551635 ** get_address_of_Border_8() { return &___Border_8; }
	inline void set_Border_8(BorderProperty_t2105551635 * value)
	{
		___Border_8 = value;
		Il2CppCodeGenWriteBarrier(&___Border_8, value);
	}

	inline static int32_t get_offset_of_InverseBlocksRequired_9() { return static_cast<int32_t>(offsetof(RoundCorner_t3140975145, ___InverseBlocksRequired_9)); }
	inline int32_t get_InverseBlocksRequired_9() const { return ___InverseBlocksRequired_9; }
	inline int32_t* get_address_of_InverseBlocksRequired_9() { return &___InverseBlocksRequired_9; }
	inline void set_InverseBlocksRequired_9(int32_t value)
	{
		___InverseBlocksRequired_9 = value;
	}

	inline static int32_t get_offset_of_RoundCorners_10() { return static_cast<int32_t>(offsetof(RoundCorner_t3140975145, ___RoundCorners_10)); }
	inline RoundedCorners_t1777809075 * get_RoundCorners_10() const { return ___RoundCorners_10; }
	inline RoundedCorners_t1777809075 ** get_address_of_RoundCorners_10() { return &___RoundCorners_10; }
	inline void set_RoundCorners_10(RoundedCorners_t1777809075 * value)
	{
		___RoundCorners_10 = value;
		Il2CppCodeGenWriteBarrier(&___RoundCorners_10, value);
	}

	inline static int32_t get_offset_of_Position_11() { return static_cast<int32_t>(offsetof(RoundCorner_t3140975145, ___Position_11)); }
	inline int32_t get_Position_11() const { return ___Position_11; }
	inline int32_t* get_address_of_Position_11() { return &___Position_11; }
	inline void set_Position_11(int32_t value)
	{
		___Position_11 = value;
	}

	inline static int32_t get_offset_of_InverseBorder_12() { return static_cast<int32_t>(offsetof(RoundCorner_t3140975145, ___InverseBorder_12)); }
	inline RoundBorderInverseProperty_t4230439157 * get_InverseBorder_12() const { return ___InverseBorder_12; }
	inline RoundBorderInverseProperty_t4230439157 ** get_address_of_InverseBorder_12() { return &___InverseBorder_12; }
	inline void set_InverseBorder_12(RoundBorderInverseProperty_t4230439157 * value)
	{
		___InverseBorder_12 = value;
		Il2CppCodeGenWriteBarrier(&___InverseBorder_12, value);
	}
};

struct RoundCorner_t3140975145_StaticFields
{
public:
	// System.Int32 PowerUI.Css.RoundCorner::Resolution
	int32_t ___Resolution_0;
	// System.Int32 PowerUI.Css.RoundCorner::MicroResolution
	int32_t ___MicroResolution_1;

public:
	inline static int32_t get_offset_of_Resolution_0() { return static_cast<int32_t>(offsetof(RoundCorner_t3140975145_StaticFields, ___Resolution_0)); }
	inline int32_t get_Resolution_0() const { return ___Resolution_0; }
	inline int32_t* get_address_of_Resolution_0() { return &___Resolution_0; }
	inline void set_Resolution_0(int32_t value)
	{
		___Resolution_0 = value;
	}

	inline static int32_t get_offset_of_MicroResolution_1() { return static_cast<int32_t>(offsetof(RoundCorner_t3140975145_StaticFields, ___MicroResolution_1)); }
	inline int32_t get_MicroResolution_1() const { return ___MicroResolution_1; }
	inline int32_t* get_address_of_MicroResolution_1() { return &___MicroResolution_1; }
	inline void set_MicroResolution_1(int32_t value)
	{
		___MicroResolution_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
