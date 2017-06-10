#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_Emit_SignatureHelper_Si3787824872.h"
#include "mscorlib_System_Reflection_CallingConventions1097349142.h"
#include "mscorlib_System_Runtime_InteropServices_CallingCon3354538265.h"

// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t4156028127;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Type
struct Type_t;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t2318378278;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.SignatureHelper
struct  SignatureHelper_t864686624  : public Il2CppObject
{
public:
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.SignatureHelper::module
	ModuleBuilder_t4156028127 * ___module_0;
	// System.Type[] System.Reflection.Emit.SignatureHelper::arguments
	TypeU5BU5D_t1664964607* ___arguments_1;
	// System.Reflection.Emit.SignatureHelper/SignatureHelperType System.Reflection.Emit.SignatureHelper::type
	int32_t ___type_2;
	// System.Type System.Reflection.Emit.SignatureHelper::returnType
	Type_t * ___returnType_3;
	// System.Reflection.CallingConventions System.Reflection.Emit.SignatureHelper::callConv
	int32_t ___callConv_4;
	// System.Runtime.InteropServices.CallingConvention System.Reflection.Emit.SignatureHelper::unmanagedCallConv
	int32_t ___unmanagedCallConv_5;
	// System.Type[][] System.Reflection.Emit.SignatureHelper::modreqs
	TypeU5BU5DU5BU5D_t2318378278* ___modreqs_6;
	// System.Type[][] System.Reflection.Emit.SignatureHelper::modopts
	TypeU5BU5DU5BU5D_t2318378278* ___modopts_7;

public:
	inline static int32_t get_offset_of_module_0() { return static_cast<int32_t>(offsetof(SignatureHelper_t864686624, ___module_0)); }
	inline ModuleBuilder_t4156028127 * get_module_0() const { return ___module_0; }
	inline ModuleBuilder_t4156028127 ** get_address_of_module_0() { return &___module_0; }
	inline void set_module_0(ModuleBuilder_t4156028127 * value)
	{
		___module_0 = value;
		Il2CppCodeGenWriteBarrier(&___module_0, value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(SignatureHelper_t864686624, ___arguments_1)); }
	inline TypeU5BU5D_t1664964607* get_arguments_1() const { return ___arguments_1; }
	inline TypeU5BU5D_t1664964607** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(TypeU5BU5D_t1664964607* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier(&___arguments_1, value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(SignatureHelper_t864686624, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_returnType_3() { return static_cast<int32_t>(offsetof(SignatureHelper_t864686624, ___returnType_3)); }
	inline Type_t * get_returnType_3() const { return ___returnType_3; }
	inline Type_t ** get_address_of_returnType_3() { return &___returnType_3; }
	inline void set_returnType_3(Type_t * value)
	{
		___returnType_3 = value;
		Il2CppCodeGenWriteBarrier(&___returnType_3, value);
	}

	inline static int32_t get_offset_of_callConv_4() { return static_cast<int32_t>(offsetof(SignatureHelper_t864686624, ___callConv_4)); }
	inline int32_t get_callConv_4() const { return ___callConv_4; }
	inline int32_t* get_address_of_callConv_4() { return &___callConv_4; }
	inline void set_callConv_4(int32_t value)
	{
		___callConv_4 = value;
	}

	inline static int32_t get_offset_of_unmanagedCallConv_5() { return static_cast<int32_t>(offsetof(SignatureHelper_t864686624, ___unmanagedCallConv_5)); }
	inline int32_t get_unmanagedCallConv_5() const { return ___unmanagedCallConv_5; }
	inline int32_t* get_address_of_unmanagedCallConv_5() { return &___unmanagedCallConv_5; }
	inline void set_unmanagedCallConv_5(int32_t value)
	{
		___unmanagedCallConv_5 = value;
	}

	inline static int32_t get_offset_of_modreqs_6() { return static_cast<int32_t>(offsetof(SignatureHelper_t864686624, ___modreqs_6)); }
	inline TypeU5BU5DU5BU5D_t2318378278* get_modreqs_6() const { return ___modreqs_6; }
	inline TypeU5BU5DU5BU5D_t2318378278** get_address_of_modreqs_6() { return &___modreqs_6; }
	inline void set_modreqs_6(TypeU5BU5DU5BU5D_t2318378278* value)
	{
		___modreqs_6 = value;
		Il2CppCodeGenWriteBarrier(&___modreqs_6, value);
	}

	inline static int32_t get_offset_of_modopts_7() { return static_cast<int32_t>(offsetof(SignatureHelper_t864686624, ___modopts_7)); }
	inline TypeU5BU5DU5BU5D_t2318378278* get_modopts_7() const { return ___modopts_7; }
	inline TypeU5BU5DU5BU5D_t2318378278** get_address_of_modopts_7() { return &___modopts_7; }
	inline void set_modopts_7(TypeU5BU5DU5BU5D_t2318378278* value)
	{
		___modopts_7 = value;
		Il2CppCodeGenWriteBarrier(&___modopts_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
