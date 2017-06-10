#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Reflection_FieldInfo255040150.h"
#include "mscorlib_System_Reflection_FieldAttributes1122705193.h"

// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3308873219;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t4270021860;
// System.Type[]
struct TypeU5BU5D_t1664964607;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.FieldBuilder
struct  FieldBuilder_t2784804005  : public FieldInfo_t
{
public:
	// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::attrs
	int32_t ___attrs_0;
	// System.Type System.Reflection.Emit.FieldBuilder::type
	Type_t * ___type_1;
	// System.String System.Reflection.Emit.FieldBuilder::name
	String_t* ___name_2;
	// System.Int32 System.Reflection.Emit.FieldBuilder::offset
	int32_t ___offset_3;
	// System.Int32 System.Reflection.Emit.FieldBuilder::table_idx
	int32_t ___table_idx_4;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.FieldBuilder::typeb
	TypeBuilder_t3308873219 * ___typeb_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::marshal_info
	UnmanagedMarshal_t4270021860 * ___marshal_info_6;
	// System.Type[] System.Reflection.Emit.FieldBuilder::modReq
	TypeU5BU5D_t1664964607* ___modReq_7;
	// System.Type[] System.Reflection.Emit.FieldBuilder::modOpt
	TypeU5BU5D_t1664964607* ___modOpt_8;

public:
	inline static int32_t get_offset_of_attrs_0() { return static_cast<int32_t>(offsetof(FieldBuilder_t2784804005, ___attrs_0)); }
	inline int32_t get_attrs_0() const { return ___attrs_0; }
	inline int32_t* get_address_of_attrs_0() { return &___attrs_0; }
	inline void set_attrs_0(int32_t value)
	{
		___attrs_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(FieldBuilder_t2784804005, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(FieldBuilder_t2784804005, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(FieldBuilder_t2784804005, ___offset_3)); }
	inline int32_t get_offset_3() const { return ___offset_3; }
	inline int32_t* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(int32_t value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_table_idx_4() { return static_cast<int32_t>(offsetof(FieldBuilder_t2784804005, ___table_idx_4)); }
	inline int32_t get_table_idx_4() const { return ___table_idx_4; }
	inline int32_t* get_address_of_table_idx_4() { return &___table_idx_4; }
	inline void set_table_idx_4(int32_t value)
	{
		___table_idx_4 = value;
	}

	inline static int32_t get_offset_of_typeb_5() { return static_cast<int32_t>(offsetof(FieldBuilder_t2784804005, ___typeb_5)); }
	inline TypeBuilder_t3308873219 * get_typeb_5() const { return ___typeb_5; }
	inline TypeBuilder_t3308873219 ** get_address_of_typeb_5() { return &___typeb_5; }
	inline void set_typeb_5(TypeBuilder_t3308873219 * value)
	{
		___typeb_5 = value;
		Il2CppCodeGenWriteBarrier(&___typeb_5, value);
	}

	inline static int32_t get_offset_of_marshal_info_6() { return static_cast<int32_t>(offsetof(FieldBuilder_t2784804005, ___marshal_info_6)); }
	inline UnmanagedMarshal_t4270021860 * get_marshal_info_6() const { return ___marshal_info_6; }
	inline UnmanagedMarshal_t4270021860 ** get_address_of_marshal_info_6() { return &___marshal_info_6; }
	inline void set_marshal_info_6(UnmanagedMarshal_t4270021860 * value)
	{
		___marshal_info_6 = value;
		Il2CppCodeGenWriteBarrier(&___marshal_info_6, value);
	}

	inline static int32_t get_offset_of_modReq_7() { return static_cast<int32_t>(offsetof(FieldBuilder_t2784804005, ___modReq_7)); }
	inline TypeU5BU5D_t1664964607* get_modReq_7() const { return ___modReq_7; }
	inline TypeU5BU5D_t1664964607** get_address_of_modReq_7() { return &___modReq_7; }
	inline void set_modReq_7(TypeU5BU5D_t1664964607* value)
	{
		___modReq_7 = value;
		Il2CppCodeGenWriteBarrier(&___modReq_7, value);
	}

	inline static int32_t get_offset_of_modOpt_8() { return static_cast<int32_t>(offsetof(FieldBuilder_t2784804005, ___modOpt_8)); }
	inline TypeU5BU5D_t1664964607* get_modOpt_8() const { return ___modOpt_8; }
	inline TypeU5BU5D_t1664964607** get_address_of_modOpt_8() { return &___modOpt_8; }
	inline void set_modOpt_8(TypeU5BU5D_t1664964607* value)
	{
		___modOpt_8 = value;
		Il2CppCodeGenWriteBarrier(&___modOpt_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
