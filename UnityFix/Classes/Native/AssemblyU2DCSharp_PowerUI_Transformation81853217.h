#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_PowerUI_Css_PositionType3946550813.h"

// PowerUI.Transformation
struct Transformation_t81853217;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Transformation
struct  Transformation_t81853217  : public Il2CppObject
{
public:
	// System.Boolean PowerUI.Transformation::HasSkew
	bool ___HasSkew_0;
	// System.Boolean PowerUI.Transformation::_Changed
	bool ____Changed_1;
	// UnityEngine.Matrix4x4 PowerUI.Transformation::_Skew
	Matrix4x4_t2933234003  ____Skew_2;
	// UnityEngine.Vector3 PowerUI.Transformation::_Origin
	Vector3_t2243707580  ____Origin_3;
	// UnityEngine.Matrix4x4 PowerUI.Transformation::_Matrix
	Matrix4x4_t2933234003  ____Matrix_4;
	// UnityEngine.Vector3 PowerUI.Transformation::_Translate
	Vector3_t2243707580  ____Translate_5;
	// UnityEngine.Quaternion PowerUI.Transformation::_Rotation
	Quaternion_t4030073918  ____Rotation_6;
	// PowerUI.Transformation PowerUI.Transformation::Parent
	Transformation_t81853217 * ___Parent_7;
	// UnityEngine.Vector3 PowerUI.Transformation::_OriginOffset
	Vector3_t2243707580  ____OriginOffset_8;
	// UnityEngine.Matrix4x4 PowerUI.Transformation::_LocalMatrix
	Matrix4x4_t2933234003  ____LocalMatrix_9;
	// UnityEngine.Vector3 PowerUI.Transformation::_Scale
	Vector3_t2243707580  ____Scale_10;
	// PowerUI.Css.PositionType PowerUI.Transformation::_OriginPosition
	int32_t ____OriginPosition_11;
	// System.Boolean PowerUI.Transformation::_OriginOffsetPercX
	bool ____OriginOffsetPercX_12;
	// System.Boolean PowerUI.Transformation::_OriginOffsetPercY
	bool ____OriginOffsetPercY_13;

public:
	inline static int32_t get_offset_of_HasSkew_0() { return static_cast<int32_t>(offsetof(Transformation_t81853217, ___HasSkew_0)); }
	inline bool get_HasSkew_0() const { return ___HasSkew_0; }
	inline bool* get_address_of_HasSkew_0() { return &___HasSkew_0; }
	inline void set_HasSkew_0(bool value)
	{
		___HasSkew_0 = value;
	}

	inline static int32_t get_offset_of__Changed_1() { return static_cast<int32_t>(offsetof(Transformation_t81853217, ____Changed_1)); }
	inline bool get__Changed_1() const { return ____Changed_1; }
	inline bool* get_address_of__Changed_1() { return &____Changed_1; }
	inline void set__Changed_1(bool value)
	{
		____Changed_1 = value;
	}

	inline static int32_t get_offset_of__Skew_2() { return static_cast<int32_t>(offsetof(Transformation_t81853217, ____Skew_2)); }
	inline Matrix4x4_t2933234003  get__Skew_2() const { return ____Skew_2; }
	inline Matrix4x4_t2933234003 * get_address_of__Skew_2() { return &____Skew_2; }
	inline void set__Skew_2(Matrix4x4_t2933234003  value)
	{
		____Skew_2 = value;
	}

	inline static int32_t get_offset_of__Origin_3() { return static_cast<int32_t>(offsetof(Transformation_t81853217, ____Origin_3)); }
	inline Vector3_t2243707580  get__Origin_3() const { return ____Origin_3; }
	inline Vector3_t2243707580 * get_address_of__Origin_3() { return &____Origin_3; }
	inline void set__Origin_3(Vector3_t2243707580  value)
	{
		____Origin_3 = value;
	}

	inline static int32_t get_offset_of__Matrix_4() { return static_cast<int32_t>(offsetof(Transformation_t81853217, ____Matrix_4)); }
	inline Matrix4x4_t2933234003  get__Matrix_4() const { return ____Matrix_4; }
	inline Matrix4x4_t2933234003 * get_address_of__Matrix_4() { return &____Matrix_4; }
	inline void set__Matrix_4(Matrix4x4_t2933234003  value)
	{
		____Matrix_4 = value;
	}

	inline static int32_t get_offset_of__Translate_5() { return static_cast<int32_t>(offsetof(Transformation_t81853217, ____Translate_5)); }
	inline Vector3_t2243707580  get__Translate_5() const { return ____Translate_5; }
	inline Vector3_t2243707580 * get_address_of__Translate_5() { return &____Translate_5; }
	inline void set__Translate_5(Vector3_t2243707580  value)
	{
		____Translate_5 = value;
	}

	inline static int32_t get_offset_of__Rotation_6() { return static_cast<int32_t>(offsetof(Transformation_t81853217, ____Rotation_6)); }
	inline Quaternion_t4030073918  get__Rotation_6() const { return ____Rotation_6; }
	inline Quaternion_t4030073918 * get_address_of__Rotation_6() { return &____Rotation_6; }
	inline void set__Rotation_6(Quaternion_t4030073918  value)
	{
		____Rotation_6 = value;
	}

	inline static int32_t get_offset_of_Parent_7() { return static_cast<int32_t>(offsetof(Transformation_t81853217, ___Parent_7)); }
	inline Transformation_t81853217 * get_Parent_7() const { return ___Parent_7; }
	inline Transformation_t81853217 ** get_address_of_Parent_7() { return &___Parent_7; }
	inline void set_Parent_7(Transformation_t81853217 * value)
	{
		___Parent_7 = value;
		Il2CppCodeGenWriteBarrier(&___Parent_7, value);
	}

	inline static int32_t get_offset_of__OriginOffset_8() { return static_cast<int32_t>(offsetof(Transformation_t81853217, ____OriginOffset_8)); }
	inline Vector3_t2243707580  get__OriginOffset_8() const { return ____OriginOffset_8; }
	inline Vector3_t2243707580 * get_address_of__OriginOffset_8() { return &____OriginOffset_8; }
	inline void set__OriginOffset_8(Vector3_t2243707580  value)
	{
		____OriginOffset_8 = value;
	}

	inline static int32_t get_offset_of__LocalMatrix_9() { return static_cast<int32_t>(offsetof(Transformation_t81853217, ____LocalMatrix_9)); }
	inline Matrix4x4_t2933234003  get__LocalMatrix_9() const { return ____LocalMatrix_9; }
	inline Matrix4x4_t2933234003 * get_address_of__LocalMatrix_9() { return &____LocalMatrix_9; }
	inline void set__LocalMatrix_9(Matrix4x4_t2933234003  value)
	{
		____LocalMatrix_9 = value;
	}

	inline static int32_t get_offset_of__Scale_10() { return static_cast<int32_t>(offsetof(Transformation_t81853217, ____Scale_10)); }
	inline Vector3_t2243707580  get__Scale_10() const { return ____Scale_10; }
	inline Vector3_t2243707580 * get_address_of__Scale_10() { return &____Scale_10; }
	inline void set__Scale_10(Vector3_t2243707580  value)
	{
		____Scale_10 = value;
	}

	inline static int32_t get_offset_of__OriginPosition_11() { return static_cast<int32_t>(offsetof(Transformation_t81853217, ____OriginPosition_11)); }
	inline int32_t get__OriginPosition_11() const { return ____OriginPosition_11; }
	inline int32_t* get_address_of__OriginPosition_11() { return &____OriginPosition_11; }
	inline void set__OriginPosition_11(int32_t value)
	{
		____OriginPosition_11 = value;
	}

	inline static int32_t get_offset_of__OriginOffsetPercX_12() { return static_cast<int32_t>(offsetof(Transformation_t81853217, ____OriginOffsetPercX_12)); }
	inline bool get__OriginOffsetPercX_12() const { return ____OriginOffsetPercX_12; }
	inline bool* get_address_of__OriginOffsetPercX_12() { return &____OriginOffsetPercX_12; }
	inline void set__OriginOffsetPercX_12(bool value)
	{
		____OriginOffsetPercX_12 = value;
	}

	inline static int32_t get_offset_of__OriginOffsetPercY_13() { return static_cast<int32_t>(offsetof(Transformation_t81853217, ____OriginOffsetPercY_13)); }
	inline bool get__OriginOffsetPercY_13() const { return ____OriginOffsetPercY_13; }
	inline bool* get_address_of__OriginOffsetPercY_13() { return &____OriginOffsetPercY_13; }
	inline void set__OriginOffsetPercY_13(bool value)
	{
		____OriginOffsetPercY_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
