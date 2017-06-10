#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Reflection_Module4282841206.h"

// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t4254476946;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1646117627;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t4238041457;
// System.Reflection.Emit.MonoResource[]
struct MonoResourceU5BU5D_t3865978872;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3308873219;
// System.Type
struct Type_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t578872653;
// System.Diagnostics.SymbolStore.ISymbolWriter
struct ISymbolWriter_t920863394;
// System.Char[]
struct CharU5BU5D_t1328083999;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ModuleBuilder
struct  ModuleBuilder_t4156028127  : public Module_t4282841206
{
public:
	// System.Int32 System.Reflection.Emit.ModuleBuilder::num_types
	int32_t ___num_types_10;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.ModuleBuilder::types
	TypeBuilderU5BU5D_t4254476946* ___types_11;
	// System.Byte[] System.Reflection.Emit.ModuleBuilder::guid
	ByteU5BU5D_t3397334013* ___guid_12;
	// System.Int32 System.Reflection.Emit.ModuleBuilder::table_idx
	int32_t ___table_idx_13;
	// System.Reflection.Emit.AssemblyBuilder System.Reflection.Emit.ModuleBuilder::assemblyb
	AssemblyBuilder_t1646117627 * ___assemblyb_14;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.ModuleBuilder::global_methods
	MethodBuilderU5BU5D_t4238041457* ___global_methods_15;
	// System.Boolean System.Reflection.Emit.ModuleBuilder::is_main
	bool ___is_main_16;
	// System.Reflection.Emit.MonoResource[] System.Reflection.Emit.ModuleBuilder::resources
	MonoResourceU5BU5D_t3865978872* ___resources_17;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::global_type
	TypeBuilder_t3308873219 * ___global_type_18;
	// System.Type System.Reflection.Emit.ModuleBuilder::global_type_created
	Type_t * ___global_type_created_19;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::name_cache
	Hashtable_t909839986 * ___name_cache_20;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::us_string_cache
	Hashtable_t909839986 * ___us_string_cache_21;
	// System.Int32[] System.Reflection.Emit.ModuleBuilder::table_indexes
	Int32U5BU5D_t3030399641* ___table_indexes_22;
	// System.Boolean System.Reflection.Emit.ModuleBuilder::transient
	bool ___transient_23;
	// System.Reflection.Emit.ModuleBuilderTokenGenerator System.Reflection.Emit.ModuleBuilder::token_gen
	ModuleBuilderTokenGenerator_t578872653 * ___token_gen_24;
	// System.Collections.Hashtable System.Reflection.Emit.ModuleBuilder::resource_writers
	Hashtable_t909839986 * ___resource_writers_25;
	// System.Diagnostics.SymbolStore.ISymbolWriter System.Reflection.Emit.ModuleBuilder::symbolWriter
	Il2CppObject * ___symbolWriter_26;

public:
	inline static int32_t get_offset_of_num_types_10() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___num_types_10)); }
	inline int32_t get_num_types_10() const { return ___num_types_10; }
	inline int32_t* get_address_of_num_types_10() { return &___num_types_10; }
	inline void set_num_types_10(int32_t value)
	{
		___num_types_10 = value;
	}

	inline static int32_t get_offset_of_types_11() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___types_11)); }
	inline TypeBuilderU5BU5D_t4254476946* get_types_11() const { return ___types_11; }
	inline TypeBuilderU5BU5D_t4254476946** get_address_of_types_11() { return &___types_11; }
	inline void set_types_11(TypeBuilderU5BU5D_t4254476946* value)
	{
		___types_11 = value;
		Il2CppCodeGenWriteBarrier(&___types_11, value);
	}

	inline static int32_t get_offset_of_guid_12() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___guid_12)); }
	inline ByteU5BU5D_t3397334013* get_guid_12() const { return ___guid_12; }
	inline ByteU5BU5D_t3397334013** get_address_of_guid_12() { return &___guid_12; }
	inline void set_guid_12(ByteU5BU5D_t3397334013* value)
	{
		___guid_12 = value;
		Il2CppCodeGenWriteBarrier(&___guid_12, value);
	}

	inline static int32_t get_offset_of_table_idx_13() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___table_idx_13)); }
	inline int32_t get_table_idx_13() const { return ___table_idx_13; }
	inline int32_t* get_address_of_table_idx_13() { return &___table_idx_13; }
	inline void set_table_idx_13(int32_t value)
	{
		___table_idx_13 = value;
	}

	inline static int32_t get_offset_of_assemblyb_14() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___assemblyb_14)); }
	inline AssemblyBuilder_t1646117627 * get_assemblyb_14() const { return ___assemblyb_14; }
	inline AssemblyBuilder_t1646117627 ** get_address_of_assemblyb_14() { return &___assemblyb_14; }
	inline void set_assemblyb_14(AssemblyBuilder_t1646117627 * value)
	{
		___assemblyb_14 = value;
		Il2CppCodeGenWriteBarrier(&___assemblyb_14, value);
	}

	inline static int32_t get_offset_of_global_methods_15() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___global_methods_15)); }
	inline MethodBuilderU5BU5D_t4238041457* get_global_methods_15() const { return ___global_methods_15; }
	inline MethodBuilderU5BU5D_t4238041457** get_address_of_global_methods_15() { return &___global_methods_15; }
	inline void set_global_methods_15(MethodBuilderU5BU5D_t4238041457* value)
	{
		___global_methods_15 = value;
		Il2CppCodeGenWriteBarrier(&___global_methods_15, value);
	}

	inline static int32_t get_offset_of_is_main_16() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___is_main_16)); }
	inline bool get_is_main_16() const { return ___is_main_16; }
	inline bool* get_address_of_is_main_16() { return &___is_main_16; }
	inline void set_is_main_16(bool value)
	{
		___is_main_16 = value;
	}

	inline static int32_t get_offset_of_resources_17() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___resources_17)); }
	inline MonoResourceU5BU5D_t3865978872* get_resources_17() const { return ___resources_17; }
	inline MonoResourceU5BU5D_t3865978872** get_address_of_resources_17() { return &___resources_17; }
	inline void set_resources_17(MonoResourceU5BU5D_t3865978872* value)
	{
		___resources_17 = value;
		Il2CppCodeGenWriteBarrier(&___resources_17, value);
	}

	inline static int32_t get_offset_of_global_type_18() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___global_type_18)); }
	inline TypeBuilder_t3308873219 * get_global_type_18() const { return ___global_type_18; }
	inline TypeBuilder_t3308873219 ** get_address_of_global_type_18() { return &___global_type_18; }
	inline void set_global_type_18(TypeBuilder_t3308873219 * value)
	{
		___global_type_18 = value;
		Il2CppCodeGenWriteBarrier(&___global_type_18, value);
	}

	inline static int32_t get_offset_of_global_type_created_19() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___global_type_created_19)); }
	inline Type_t * get_global_type_created_19() const { return ___global_type_created_19; }
	inline Type_t ** get_address_of_global_type_created_19() { return &___global_type_created_19; }
	inline void set_global_type_created_19(Type_t * value)
	{
		___global_type_created_19 = value;
		Il2CppCodeGenWriteBarrier(&___global_type_created_19, value);
	}

	inline static int32_t get_offset_of_name_cache_20() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___name_cache_20)); }
	inline Hashtable_t909839986 * get_name_cache_20() const { return ___name_cache_20; }
	inline Hashtable_t909839986 ** get_address_of_name_cache_20() { return &___name_cache_20; }
	inline void set_name_cache_20(Hashtable_t909839986 * value)
	{
		___name_cache_20 = value;
		Il2CppCodeGenWriteBarrier(&___name_cache_20, value);
	}

	inline static int32_t get_offset_of_us_string_cache_21() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___us_string_cache_21)); }
	inline Hashtable_t909839986 * get_us_string_cache_21() const { return ___us_string_cache_21; }
	inline Hashtable_t909839986 ** get_address_of_us_string_cache_21() { return &___us_string_cache_21; }
	inline void set_us_string_cache_21(Hashtable_t909839986 * value)
	{
		___us_string_cache_21 = value;
		Il2CppCodeGenWriteBarrier(&___us_string_cache_21, value);
	}

	inline static int32_t get_offset_of_table_indexes_22() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___table_indexes_22)); }
	inline Int32U5BU5D_t3030399641* get_table_indexes_22() const { return ___table_indexes_22; }
	inline Int32U5BU5D_t3030399641** get_address_of_table_indexes_22() { return &___table_indexes_22; }
	inline void set_table_indexes_22(Int32U5BU5D_t3030399641* value)
	{
		___table_indexes_22 = value;
		Il2CppCodeGenWriteBarrier(&___table_indexes_22, value);
	}

	inline static int32_t get_offset_of_transient_23() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___transient_23)); }
	inline bool get_transient_23() const { return ___transient_23; }
	inline bool* get_address_of_transient_23() { return &___transient_23; }
	inline void set_transient_23(bool value)
	{
		___transient_23 = value;
	}

	inline static int32_t get_offset_of_token_gen_24() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___token_gen_24)); }
	inline ModuleBuilderTokenGenerator_t578872653 * get_token_gen_24() const { return ___token_gen_24; }
	inline ModuleBuilderTokenGenerator_t578872653 ** get_address_of_token_gen_24() { return &___token_gen_24; }
	inline void set_token_gen_24(ModuleBuilderTokenGenerator_t578872653 * value)
	{
		___token_gen_24 = value;
		Il2CppCodeGenWriteBarrier(&___token_gen_24, value);
	}

	inline static int32_t get_offset_of_resource_writers_25() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___resource_writers_25)); }
	inline Hashtable_t909839986 * get_resource_writers_25() const { return ___resource_writers_25; }
	inline Hashtable_t909839986 ** get_address_of_resource_writers_25() { return &___resource_writers_25; }
	inline void set_resource_writers_25(Hashtable_t909839986 * value)
	{
		___resource_writers_25 = value;
		Il2CppCodeGenWriteBarrier(&___resource_writers_25, value);
	}

	inline static int32_t get_offset_of_symbolWriter_26() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127, ___symbolWriter_26)); }
	inline Il2CppObject * get_symbolWriter_26() const { return ___symbolWriter_26; }
	inline Il2CppObject ** get_address_of_symbolWriter_26() { return &___symbolWriter_26; }
	inline void set_symbolWriter_26(Il2CppObject * value)
	{
		___symbolWriter_26 = value;
		Il2CppCodeGenWriteBarrier(&___symbolWriter_26, value);
	}
};

struct ModuleBuilder_t4156028127_StaticFields
{
public:
	// System.Char[] System.Reflection.Emit.ModuleBuilder::type_modifiers
	CharU5BU5D_t1328083999* ___type_modifiers_27;

public:
	inline static int32_t get_offset_of_type_modifiers_27() { return static_cast<int32_t>(offsetof(ModuleBuilder_t4156028127_StaticFields, ___type_modifiers_27)); }
	inline CharU5BU5D_t1328083999* get_type_modifiers_27() const { return ___type_modifiers_27; }
	inline CharU5BU5D_t1328083999** get_address_of_type_modifiers_27() { return &___type_modifiers_27; }
	inline void set_type_modifiers_27(CharU5BU5D_t1328083999* value)
	{
		___type_modifiers_27 = value;
		Il2CppCodeGenWriteBarrier(&___type_modifiers_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
