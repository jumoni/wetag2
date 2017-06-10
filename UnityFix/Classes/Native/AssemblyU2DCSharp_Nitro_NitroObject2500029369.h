#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,Nitro.NitroObject>
struct Dictionary_2_t119841335;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.NitroObject
struct  NitroObject_t2500029369  : public Il2CppObject
{
public:
	// System.Type Nitro.NitroObject::ObjectType
	Type_t * ___ObjectType_0;
	// System.Reflection.MemberInfo Nitro.NitroObject::Member
	MemberInfo_t * ___Member_1;
	// System.Object Nitro.NitroObject::UnderlayObject
	Il2CppObject * ___UnderlayObject_2;
	// System.Collections.Generic.Dictionary`2<System.String,Nitro.NitroObject> Nitro.NitroObject::PrototypeMap
	Dictionary_2_t119841335 * ___PrototypeMap_3;

public:
	inline static int32_t get_offset_of_ObjectType_0() { return static_cast<int32_t>(offsetof(NitroObject_t2500029369, ___ObjectType_0)); }
	inline Type_t * get_ObjectType_0() const { return ___ObjectType_0; }
	inline Type_t ** get_address_of_ObjectType_0() { return &___ObjectType_0; }
	inline void set_ObjectType_0(Type_t * value)
	{
		___ObjectType_0 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectType_0, value);
	}

	inline static int32_t get_offset_of_Member_1() { return static_cast<int32_t>(offsetof(NitroObject_t2500029369, ___Member_1)); }
	inline MemberInfo_t * get_Member_1() const { return ___Member_1; }
	inline MemberInfo_t ** get_address_of_Member_1() { return &___Member_1; }
	inline void set_Member_1(MemberInfo_t * value)
	{
		___Member_1 = value;
		Il2CppCodeGenWriteBarrier(&___Member_1, value);
	}

	inline static int32_t get_offset_of_UnderlayObject_2() { return static_cast<int32_t>(offsetof(NitroObject_t2500029369, ___UnderlayObject_2)); }
	inline Il2CppObject * get_UnderlayObject_2() const { return ___UnderlayObject_2; }
	inline Il2CppObject ** get_address_of_UnderlayObject_2() { return &___UnderlayObject_2; }
	inline void set_UnderlayObject_2(Il2CppObject * value)
	{
		___UnderlayObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___UnderlayObject_2, value);
	}

	inline static int32_t get_offset_of_PrototypeMap_3() { return static_cast<int32_t>(offsetof(NitroObject_t2500029369, ___PrototypeMap_3)); }
	inline Dictionary_2_t119841335 * get_PrototypeMap_3() const { return ___PrototypeMap_3; }
	inline Dictionary_2_t119841335 ** get_address_of_PrototypeMap_3() { return &___PrototypeMap_3; }
	inline void set_PrototypeMap_3(Dictionary_2_t119841335 * value)
	{
		___PrototypeMap_3 = value;
		Il2CppCodeGenWriteBarrier(&___PrototypeMap_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
