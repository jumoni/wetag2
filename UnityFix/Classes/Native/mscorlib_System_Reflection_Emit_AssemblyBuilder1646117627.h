#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_Reflection_Emit_PEFileKinds4139237606.h"
#include "mscorlib_System_Reflection_PortableExecutableKinds3142660980.h"
#include "mscorlib_System_Reflection_ImageFileMachine128670190.h"
#include "mscorlib_System_Reflection_Emit_NativeResourceType548430477.h"

// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Emit.ModuleBuilder[]
struct ModuleBuilderU5BU5D_t3642333382;
// System.String
struct String_t;
// System.Reflection.Emit.CustomAttributeBuilder[]
struct CustomAttributeBuilderU5BU5D_t3203592177;
// System.Reflection.Emit.MonoResource[]
struct MonoResourceU5BU5D_t3865978872;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Reflection.Module[]
struct ModuleU5BU5D_t3593287923;
// System.Reflection.Emit.MonoWin32Resource[]
struct MonoWin32ResourceU5BU5D_t3763542575;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Resources.Win32VersionResource
struct Win32VersionResource_t548350325;
// Mono.Security.StrongName
struct StrongName_t117835354;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.AssemblyBuilder
struct  AssemblyBuilder_t1646117627  : public Assembly_t4268412390
{
public:
	// System.Reflection.MethodInfo System.Reflection.Emit.AssemblyBuilder::entry_point
	MethodInfo_t * ___entry_point_10;
	// System.Reflection.Emit.ModuleBuilder[] System.Reflection.Emit.AssemblyBuilder::modules
	ModuleBuilderU5BU5D_t3642333382* ___modules_11;
	// System.String System.Reflection.Emit.AssemblyBuilder::name
	String_t* ___name_12;
	// System.String System.Reflection.Emit.AssemblyBuilder::dir
	String_t* ___dir_13;
	// System.Reflection.Emit.CustomAttributeBuilder[] System.Reflection.Emit.AssemblyBuilder::cattrs
	CustomAttributeBuilderU5BU5D_t3203592177* ___cattrs_14;
	// System.Reflection.Emit.MonoResource[] System.Reflection.Emit.AssemblyBuilder::resources
	MonoResourceU5BU5D_t3865978872* ___resources_15;
	// System.Byte[] System.Reflection.Emit.AssemblyBuilder::public_key
	ByteU5BU5D_t3397334013* ___public_key_16;
	// System.String System.Reflection.Emit.AssemblyBuilder::version
	String_t* ___version_17;
	// System.String System.Reflection.Emit.AssemblyBuilder::culture
	String_t* ___culture_18;
	// System.UInt32 System.Reflection.Emit.AssemblyBuilder::flags
	uint32_t ___flags_19;
	// System.Reflection.Emit.PEFileKinds System.Reflection.Emit.AssemblyBuilder::pekind
	int32_t ___pekind_20;
	// System.UInt32 System.Reflection.Emit.AssemblyBuilder::access
	uint32_t ___access_21;
	// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::loaded_modules
	ModuleU5BU5D_t3593287923* ___loaded_modules_22;
	// System.Reflection.Emit.MonoWin32Resource[] System.Reflection.Emit.AssemblyBuilder::win32_resources
	MonoWin32ResourceU5BU5D_t3763542575* ___win32_resources_23;
	// System.Reflection.PortableExecutableKinds System.Reflection.Emit.AssemblyBuilder::peKind
	int32_t ___peKind_24;
	// System.Reflection.ImageFileMachine System.Reflection.Emit.AssemblyBuilder::machine
	int32_t ___machine_25;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::corlib_internal
	bool ___corlib_internal_26;
	// System.Byte[] System.Reflection.Emit.AssemblyBuilder::pktoken
	ByteU5BU5D_t3397334013* ___pktoken_27;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_object_type
	Type_t * ___corlib_object_type_28;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_value_type
	Type_t * ___corlib_value_type_29;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_enum_type
	Type_t * ___corlib_enum_type_30;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_void_type
	Type_t * ___corlib_void_type_31;
	// System.Collections.ArrayList System.Reflection.Emit.AssemblyBuilder::resource_writers
	ArrayList_t4252133567 * ___resource_writers_32;
	// System.Resources.Win32VersionResource System.Reflection.Emit.AssemblyBuilder::version_res
	Win32VersionResource_t548350325 * ___version_res_33;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::created
	bool ___created_34;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_module_only
	bool ___is_module_only_35;
	// Mono.Security.StrongName System.Reflection.Emit.AssemblyBuilder::sn
	StrongName_t117835354 * ___sn_36;
	// System.Reflection.Emit.NativeResourceType System.Reflection.Emit.AssemblyBuilder::native_resource
	int32_t ___native_resource_37;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_compiler_context
	bool ___is_compiler_context_38;
	// System.String System.Reflection.Emit.AssemblyBuilder::versioninfo_culture
	String_t* ___versioninfo_culture_39;

public:
	inline static int32_t get_offset_of_entry_point_10() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___entry_point_10)); }
	inline MethodInfo_t * get_entry_point_10() const { return ___entry_point_10; }
	inline MethodInfo_t ** get_address_of_entry_point_10() { return &___entry_point_10; }
	inline void set_entry_point_10(MethodInfo_t * value)
	{
		___entry_point_10 = value;
		Il2CppCodeGenWriteBarrier(&___entry_point_10, value);
	}

	inline static int32_t get_offset_of_modules_11() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___modules_11)); }
	inline ModuleBuilderU5BU5D_t3642333382* get_modules_11() const { return ___modules_11; }
	inline ModuleBuilderU5BU5D_t3642333382** get_address_of_modules_11() { return &___modules_11; }
	inline void set_modules_11(ModuleBuilderU5BU5D_t3642333382* value)
	{
		___modules_11 = value;
		Il2CppCodeGenWriteBarrier(&___modules_11, value);
	}

	inline static int32_t get_offset_of_name_12() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___name_12)); }
	inline String_t* get_name_12() const { return ___name_12; }
	inline String_t** get_address_of_name_12() { return &___name_12; }
	inline void set_name_12(String_t* value)
	{
		___name_12 = value;
		Il2CppCodeGenWriteBarrier(&___name_12, value);
	}

	inline static int32_t get_offset_of_dir_13() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___dir_13)); }
	inline String_t* get_dir_13() const { return ___dir_13; }
	inline String_t** get_address_of_dir_13() { return &___dir_13; }
	inline void set_dir_13(String_t* value)
	{
		___dir_13 = value;
		Il2CppCodeGenWriteBarrier(&___dir_13, value);
	}

	inline static int32_t get_offset_of_cattrs_14() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___cattrs_14)); }
	inline CustomAttributeBuilderU5BU5D_t3203592177* get_cattrs_14() const { return ___cattrs_14; }
	inline CustomAttributeBuilderU5BU5D_t3203592177** get_address_of_cattrs_14() { return &___cattrs_14; }
	inline void set_cattrs_14(CustomAttributeBuilderU5BU5D_t3203592177* value)
	{
		___cattrs_14 = value;
		Il2CppCodeGenWriteBarrier(&___cattrs_14, value);
	}

	inline static int32_t get_offset_of_resources_15() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___resources_15)); }
	inline MonoResourceU5BU5D_t3865978872* get_resources_15() const { return ___resources_15; }
	inline MonoResourceU5BU5D_t3865978872** get_address_of_resources_15() { return &___resources_15; }
	inline void set_resources_15(MonoResourceU5BU5D_t3865978872* value)
	{
		___resources_15 = value;
		Il2CppCodeGenWriteBarrier(&___resources_15, value);
	}

	inline static int32_t get_offset_of_public_key_16() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___public_key_16)); }
	inline ByteU5BU5D_t3397334013* get_public_key_16() const { return ___public_key_16; }
	inline ByteU5BU5D_t3397334013** get_address_of_public_key_16() { return &___public_key_16; }
	inline void set_public_key_16(ByteU5BU5D_t3397334013* value)
	{
		___public_key_16 = value;
		Il2CppCodeGenWriteBarrier(&___public_key_16, value);
	}

	inline static int32_t get_offset_of_version_17() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___version_17)); }
	inline String_t* get_version_17() const { return ___version_17; }
	inline String_t** get_address_of_version_17() { return &___version_17; }
	inline void set_version_17(String_t* value)
	{
		___version_17 = value;
		Il2CppCodeGenWriteBarrier(&___version_17, value);
	}

	inline static int32_t get_offset_of_culture_18() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___culture_18)); }
	inline String_t* get_culture_18() const { return ___culture_18; }
	inline String_t** get_address_of_culture_18() { return &___culture_18; }
	inline void set_culture_18(String_t* value)
	{
		___culture_18 = value;
		Il2CppCodeGenWriteBarrier(&___culture_18, value);
	}

	inline static int32_t get_offset_of_flags_19() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___flags_19)); }
	inline uint32_t get_flags_19() const { return ___flags_19; }
	inline uint32_t* get_address_of_flags_19() { return &___flags_19; }
	inline void set_flags_19(uint32_t value)
	{
		___flags_19 = value;
	}

	inline static int32_t get_offset_of_pekind_20() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___pekind_20)); }
	inline int32_t get_pekind_20() const { return ___pekind_20; }
	inline int32_t* get_address_of_pekind_20() { return &___pekind_20; }
	inline void set_pekind_20(int32_t value)
	{
		___pekind_20 = value;
	}

	inline static int32_t get_offset_of_access_21() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___access_21)); }
	inline uint32_t get_access_21() const { return ___access_21; }
	inline uint32_t* get_address_of_access_21() { return &___access_21; }
	inline void set_access_21(uint32_t value)
	{
		___access_21 = value;
	}

	inline static int32_t get_offset_of_loaded_modules_22() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___loaded_modules_22)); }
	inline ModuleU5BU5D_t3593287923* get_loaded_modules_22() const { return ___loaded_modules_22; }
	inline ModuleU5BU5D_t3593287923** get_address_of_loaded_modules_22() { return &___loaded_modules_22; }
	inline void set_loaded_modules_22(ModuleU5BU5D_t3593287923* value)
	{
		___loaded_modules_22 = value;
		Il2CppCodeGenWriteBarrier(&___loaded_modules_22, value);
	}

	inline static int32_t get_offset_of_win32_resources_23() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___win32_resources_23)); }
	inline MonoWin32ResourceU5BU5D_t3763542575* get_win32_resources_23() const { return ___win32_resources_23; }
	inline MonoWin32ResourceU5BU5D_t3763542575** get_address_of_win32_resources_23() { return &___win32_resources_23; }
	inline void set_win32_resources_23(MonoWin32ResourceU5BU5D_t3763542575* value)
	{
		___win32_resources_23 = value;
		Il2CppCodeGenWriteBarrier(&___win32_resources_23, value);
	}

	inline static int32_t get_offset_of_peKind_24() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___peKind_24)); }
	inline int32_t get_peKind_24() const { return ___peKind_24; }
	inline int32_t* get_address_of_peKind_24() { return &___peKind_24; }
	inline void set_peKind_24(int32_t value)
	{
		___peKind_24 = value;
	}

	inline static int32_t get_offset_of_machine_25() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___machine_25)); }
	inline int32_t get_machine_25() const { return ___machine_25; }
	inline int32_t* get_address_of_machine_25() { return &___machine_25; }
	inline void set_machine_25(int32_t value)
	{
		___machine_25 = value;
	}

	inline static int32_t get_offset_of_corlib_internal_26() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___corlib_internal_26)); }
	inline bool get_corlib_internal_26() const { return ___corlib_internal_26; }
	inline bool* get_address_of_corlib_internal_26() { return &___corlib_internal_26; }
	inline void set_corlib_internal_26(bool value)
	{
		___corlib_internal_26 = value;
	}

	inline static int32_t get_offset_of_pktoken_27() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___pktoken_27)); }
	inline ByteU5BU5D_t3397334013* get_pktoken_27() const { return ___pktoken_27; }
	inline ByteU5BU5D_t3397334013** get_address_of_pktoken_27() { return &___pktoken_27; }
	inline void set_pktoken_27(ByteU5BU5D_t3397334013* value)
	{
		___pktoken_27 = value;
		Il2CppCodeGenWriteBarrier(&___pktoken_27, value);
	}

	inline static int32_t get_offset_of_corlib_object_type_28() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___corlib_object_type_28)); }
	inline Type_t * get_corlib_object_type_28() const { return ___corlib_object_type_28; }
	inline Type_t ** get_address_of_corlib_object_type_28() { return &___corlib_object_type_28; }
	inline void set_corlib_object_type_28(Type_t * value)
	{
		___corlib_object_type_28 = value;
		Il2CppCodeGenWriteBarrier(&___corlib_object_type_28, value);
	}

	inline static int32_t get_offset_of_corlib_value_type_29() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___corlib_value_type_29)); }
	inline Type_t * get_corlib_value_type_29() const { return ___corlib_value_type_29; }
	inline Type_t ** get_address_of_corlib_value_type_29() { return &___corlib_value_type_29; }
	inline void set_corlib_value_type_29(Type_t * value)
	{
		___corlib_value_type_29 = value;
		Il2CppCodeGenWriteBarrier(&___corlib_value_type_29, value);
	}

	inline static int32_t get_offset_of_corlib_enum_type_30() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___corlib_enum_type_30)); }
	inline Type_t * get_corlib_enum_type_30() const { return ___corlib_enum_type_30; }
	inline Type_t ** get_address_of_corlib_enum_type_30() { return &___corlib_enum_type_30; }
	inline void set_corlib_enum_type_30(Type_t * value)
	{
		___corlib_enum_type_30 = value;
		Il2CppCodeGenWriteBarrier(&___corlib_enum_type_30, value);
	}

	inline static int32_t get_offset_of_corlib_void_type_31() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___corlib_void_type_31)); }
	inline Type_t * get_corlib_void_type_31() const { return ___corlib_void_type_31; }
	inline Type_t ** get_address_of_corlib_void_type_31() { return &___corlib_void_type_31; }
	inline void set_corlib_void_type_31(Type_t * value)
	{
		___corlib_void_type_31 = value;
		Il2CppCodeGenWriteBarrier(&___corlib_void_type_31, value);
	}

	inline static int32_t get_offset_of_resource_writers_32() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___resource_writers_32)); }
	inline ArrayList_t4252133567 * get_resource_writers_32() const { return ___resource_writers_32; }
	inline ArrayList_t4252133567 ** get_address_of_resource_writers_32() { return &___resource_writers_32; }
	inline void set_resource_writers_32(ArrayList_t4252133567 * value)
	{
		___resource_writers_32 = value;
		Il2CppCodeGenWriteBarrier(&___resource_writers_32, value);
	}

	inline static int32_t get_offset_of_version_res_33() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___version_res_33)); }
	inline Win32VersionResource_t548350325 * get_version_res_33() const { return ___version_res_33; }
	inline Win32VersionResource_t548350325 ** get_address_of_version_res_33() { return &___version_res_33; }
	inline void set_version_res_33(Win32VersionResource_t548350325 * value)
	{
		___version_res_33 = value;
		Il2CppCodeGenWriteBarrier(&___version_res_33, value);
	}

	inline static int32_t get_offset_of_created_34() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___created_34)); }
	inline bool get_created_34() const { return ___created_34; }
	inline bool* get_address_of_created_34() { return &___created_34; }
	inline void set_created_34(bool value)
	{
		___created_34 = value;
	}

	inline static int32_t get_offset_of_is_module_only_35() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___is_module_only_35)); }
	inline bool get_is_module_only_35() const { return ___is_module_only_35; }
	inline bool* get_address_of_is_module_only_35() { return &___is_module_only_35; }
	inline void set_is_module_only_35(bool value)
	{
		___is_module_only_35 = value;
	}

	inline static int32_t get_offset_of_sn_36() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___sn_36)); }
	inline StrongName_t117835354 * get_sn_36() const { return ___sn_36; }
	inline StrongName_t117835354 ** get_address_of_sn_36() { return &___sn_36; }
	inline void set_sn_36(StrongName_t117835354 * value)
	{
		___sn_36 = value;
		Il2CppCodeGenWriteBarrier(&___sn_36, value);
	}

	inline static int32_t get_offset_of_native_resource_37() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___native_resource_37)); }
	inline int32_t get_native_resource_37() const { return ___native_resource_37; }
	inline int32_t* get_address_of_native_resource_37() { return &___native_resource_37; }
	inline void set_native_resource_37(int32_t value)
	{
		___native_resource_37 = value;
	}

	inline static int32_t get_offset_of_is_compiler_context_38() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___is_compiler_context_38)); }
	inline bool get_is_compiler_context_38() const { return ___is_compiler_context_38; }
	inline bool* get_address_of_is_compiler_context_38() { return &___is_compiler_context_38; }
	inline void set_is_compiler_context_38(bool value)
	{
		___is_compiler_context_38 = value;
	}

	inline static int32_t get_offset_of_versioninfo_culture_39() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t1646117627, ___versioninfo_culture_39)); }
	inline String_t* get_versioninfo_culture_39() const { return ___versioninfo_culture_39; }
	inline String_t** get_address_of_versioninfo_culture_39() { return &___versioninfo_culture_39; }
	inline void set_versioninfo_culture_39(String_t* value)
	{
		___versioninfo_culture_39 = value;
		Il2CppCodeGenWriteBarrier(&___versioninfo_culture_39, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
