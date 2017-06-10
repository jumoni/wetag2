#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_Operation2694499211.h"

// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// Nitro.CompiledFragment[]
struct CompiledFragmentU5BU5D_t634647486;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.ConstructOperation
struct  ConstructOperation_t3459772872  : public Operation_t2694499211
{
public:
	// System.Type Nitro.ConstructOperation::ObjectType
	Type_t * ___ObjectType_11;
	// System.Reflection.ConstructorInfo Nitro.ConstructOperation::Constructor
	ConstructorInfo_t2851816542 * ___Constructor_12;
	// Nitro.CompiledFragment[] Nitro.ConstructOperation::Parameters
	CompiledFragmentU5BU5D_t634647486* ___Parameters_13;

public:
	inline static int32_t get_offset_of_ObjectType_11() { return static_cast<int32_t>(offsetof(ConstructOperation_t3459772872, ___ObjectType_11)); }
	inline Type_t * get_ObjectType_11() const { return ___ObjectType_11; }
	inline Type_t ** get_address_of_ObjectType_11() { return &___ObjectType_11; }
	inline void set_ObjectType_11(Type_t * value)
	{
		___ObjectType_11 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectType_11, value);
	}

	inline static int32_t get_offset_of_Constructor_12() { return static_cast<int32_t>(offsetof(ConstructOperation_t3459772872, ___Constructor_12)); }
	inline ConstructorInfo_t2851816542 * get_Constructor_12() const { return ___Constructor_12; }
	inline ConstructorInfo_t2851816542 ** get_address_of_Constructor_12() { return &___Constructor_12; }
	inline void set_Constructor_12(ConstructorInfo_t2851816542 * value)
	{
		___Constructor_12 = value;
		Il2CppCodeGenWriteBarrier(&___Constructor_12, value);
	}

	inline static int32_t get_offset_of_Parameters_13() { return static_cast<int32_t>(offsetof(ConstructOperation_t3459772872, ___Parameters_13)); }
	inline CompiledFragmentU5BU5D_t634647486* get_Parameters_13() const { return ___Parameters_13; }
	inline CompiledFragmentU5BU5D_t634647486** get_address_of_Parameters_13() { return &___Parameters_13; }
	inline void set_Parameters_13(CompiledFragmentU5BU5D_t634647486* value)
	{
		___Parameters_13 = value;
		Il2CppCodeGenWriteBarrier(&___Parameters_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
