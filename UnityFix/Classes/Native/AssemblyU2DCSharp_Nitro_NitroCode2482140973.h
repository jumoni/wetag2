#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Nitro.AotFileEvent
struct AotFileEvent_t2146669432;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t4156028127;
// Nitro.CompiledClass
struct CompiledClass_t2566710525;
// System.Collections.Generic.List`1<Nitro.CodeReference>
struct List_1_t2631869556;
// Nitro.NitroDomainManager
struct NitroDomainManager_t1456940179;
// System.Collections.Generic.Dictionary`2<System.String,Nitro.CompiledClass>
struct Dictionary_2_t186522491;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.NitroCode
struct  NitroCode_t2482140973  : public Il2CppObject
{
public:
	// System.String Nitro.NitroCode::Code
	String_t* ___Code_3;
	// System.Type Nitro.NitroCode::CompiledType
	Type_t * ___CompiledType_4;
	// System.Reflection.Emit.ModuleBuilder Nitro.NitroCode::Builder
	ModuleBuilder_t4156028127 * ___Builder_5;
	// Nitro.CompiledClass Nitro.NitroCode::BaseClass
	CompiledClass_t2566710525 * ___BaseClass_6;
	// System.Collections.Generic.List`1<Nitro.CodeReference> Nitro.NitroCode::References
	List_1_t2631869556 * ___References_7;
	// Nitro.NitroDomainManager Nitro.NitroCode::ScriptDomainManager
	NitroDomainManager_t1456940179 * ___ScriptDomainManager_8;
	// System.Collections.Generic.Dictionary`2<System.String,Nitro.CompiledClass> Nitro.NitroCode::Types
	Dictionary_2_t186522491 * ___Types_9;

public:
	inline static int32_t get_offset_of_Code_3() { return static_cast<int32_t>(offsetof(NitroCode_t2482140973, ___Code_3)); }
	inline String_t* get_Code_3() const { return ___Code_3; }
	inline String_t** get_address_of_Code_3() { return &___Code_3; }
	inline void set_Code_3(String_t* value)
	{
		___Code_3 = value;
		Il2CppCodeGenWriteBarrier(&___Code_3, value);
	}

	inline static int32_t get_offset_of_CompiledType_4() { return static_cast<int32_t>(offsetof(NitroCode_t2482140973, ___CompiledType_4)); }
	inline Type_t * get_CompiledType_4() const { return ___CompiledType_4; }
	inline Type_t ** get_address_of_CompiledType_4() { return &___CompiledType_4; }
	inline void set_CompiledType_4(Type_t * value)
	{
		___CompiledType_4 = value;
		Il2CppCodeGenWriteBarrier(&___CompiledType_4, value);
	}

	inline static int32_t get_offset_of_Builder_5() { return static_cast<int32_t>(offsetof(NitroCode_t2482140973, ___Builder_5)); }
	inline ModuleBuilder_t4156028127 * get_Builder_5() const { return ___Builder_5; }
	inline ModuleBuilder_t4156028127 ** get_address_of_Builder_5() { return &___Builder_5; }
	inline void set_Builder_5(ModuleBuilder_t4156028127 * value)
	{
		___Builder_5 = value;
		Il2CppCodeGenWriteBarrier(&___Builder_5, value);
	}

	inline static int32_t get_offset_of_BaseClass_6() { return static_cast<int32_t>(offsetof(NitroCode_t2482140973, ___BaseClass_6)); }
	inline CompiledClass_t2566710525 * get_BaseClass_6() const { return ___BaseClass_6; }
	inline CompiledClass_t2566710525 ** get_address_of_BaseClass_6() { return &___BaseClass_6; }
	inline void set_BaseClass_6(CompiledClass_t2566710525 * value)
	{
		___BaseClass_6 = value;
		Il2CppCodeGenWriteBarrier(&___BaseClass_6, value);
	}

	inline static int32_t get_offset_of_References_7() { return static_cast<int32_t>(offsetof(NitroCode_t2482140973, ___References_7)); }
	inline List_1_t2631869556 * get_References_7() const { return ___References_7; }
	inline List_1_t2631869556 ** get_address_of_References_7() { return &___References_7; }
	inline void set_References_7(List_1_t2631869556 * value)
	{
		___References_7 = value;
		Il2CppCodeGenWriteBarrier(&___References_7, value);
	}

	inline static int32_t get_offset_of_ScriptDomainManager_8() { return static_cast<int32_t>(offsetof(NitroCode_t2482140973, ___ScriptDomainManager_8)); }
	inline NitroDomainManager_t1456940179 * get_ScriptDomainManager_8() const { return ___ScriptDomainManager_8; }
	inline NitroDomainManager_t1456940179 ** get_address_of_ScriptDomainManager_8() { return &___ScriptDomainManager_8; }
	inline void set_ScriptDomainManager_8(NitroDomainManager_t1456940179 * value)
	{
		___ScriptDomainManager_8 = value;
		Il2CppCodeGenWriteBarrier(&___ScriptDomainManager_8, value);
	}

	inline static int32_t get_offset_of_Types_9() { return static_cast<int32_t>(offsetof(NitroCode_t2482140973, ___Types_9)); }
	inline Dictionary_2_t186522491 * get_Types_9() const { return ___Types_9; }
	inline Dictionary_2_t186522491 ** get_address_of_Types_9() { return &___Types_9; }
	inline void set_Types_9(Dictionary_2_t186522491 * value)
	{
		___Types_9 = value;
		Il2CppCodeGenWriteBarrier(&___Types_9, value);
	}
};

struct NitroCode_t2482140973_StaticFields
{
public:
	// System.Boolean Nitro.NitroCode::Started
	bool ___Started_0;
	// System.Int32 Nitro.NitroCode::ModuleCounter
	int32_t ___ModuleCounter_1;
	// Nitro.AotFileEvent Nitro.NitroCode::OnAotFileExists
	AotFileEvent_t2146669432 * ___OnAotFileExists_2;

public:
	inline static int32_t get_offset_of_Started_0() { return static_cast<int32_t>(offsetof(NitroCode_t2482140973_StaticFields, ___Started_0)); }
	inline bool get_Started_0() const { return ___Started_0; }
	inline bool* get_address_of_Started_0() { return &___Started_0; }
	inline void set_Started_0(bool value)
	{
		___Started_0 = value;
	}

	inline static int32_t get_offset_of_ModuleCounter_1() { return static_cast<int32_t>(offsetof(NitroCode_t2482140973_StaticFields, ___ModuleCounter_1)); }
	inline int32_t get_ModuleCounter_1() const { return ___ModuleCounter_1; }
	inline int32_t* get_address_of_ModuleCounter_1() { return &___ModuleCounter_1; }
	inline void set_ModuleCounter_1(int32_t value)
	{
		___ModuleCounter_1 = value;
	}

	inline static int32_t get_offset_of_OnAotFileExists_2() { return static_cast<int32_t>(offsetof(NitroCode_t2482140973_StaticFields, ___OnAotFileExists_2)); }
	inline AotFileEvent_t2146669432 * get_OnAotFileExists_2() const { return ___OnAotFileExists_2; }
	inline AotFileEvent_t2146669432 ** get_address_of_OnAotFileExists_2() { return &___OnAotFileExists_2; }
	inline void set_OnAotFileExists_2(AotFileEvent_t2146669432 * value)
	{
		___OnAotFileExists_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnAotFileExists_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
