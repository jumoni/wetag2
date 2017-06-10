#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_Operation2694499211.h"

// Nitro.BracketFragment
struct BracketFragment_t1567982410;
// Nitro.CompiledFragment[]
struct CompiledFragmentU5BU5D_t634647486;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.IfOperation
struct  IfOperation_t3407909282  : public Operation_t2694499211
{
public:
	// System.Boolean Nitro.IfOperation::AllRoutesReturn
	bool ___AllRoutesReturn_11;
	// Nitro.BracketFragment Nitro.IfOperation::IfTrue
	BracketFragment_t1567982410 * ___IfTrue_12;
	// Nitro.BracketFragment Nitro.IfOperation::IfFalse
	BracketFragment_t1567982410 * ___IfFalse_13;
	// Nitro.CompiledFragment[] Nitro.IfOperation::Conditions
	CompiledFragmentU5BU5D_t634647486* ___Conditions_14;

public:
	inline static int32_t get_offset_of_AllRoutesReturn_11() { return static_cast<int32_t>(offsetof(IfOperation_t3407909282, ___AllRoutesReturn_11)); }
	inline bool get_AllRoutesReturn_11() const { return ___AllRoutesReturn_11; }
	inline bool* get_address_of_AllRoutesReturn_11() { return &___AllRoutesReturn_11; }
	inline void set_AllRoutesReturn_11(bool value)
	{
		___AllRoutesReturn_11 = value;
	}

	inline static int32_t get_offset_of_IfTrue_12() { return static_cast<int32_t>(offsetof(IfOperation_t3407909282, ___IfTrue_12)); }
	inline BracketFragment_t1567982410 * get_IfTrue_12() const { return ___IfTrue_12; }
	inline BracketFragment_t1567982410 ** get_address_of_IfTrue_12() { return &___IfTrue_12; }
	inline void set_IfTrue_12(BracketFragment_t1567982410 * value)
	{
		___IfTrue_12 = value;
		Il2CppCodeGenWriteBarrier(&___IfTrue_12, value);
	}

	inline static int32_t get_offset_of_IfFalse_13() { return static_cast<int32_t>(offsetof(IfOperation_t3407909282, ___IfFalse_13)); }
	inline BracketFragment_t1567982410 * get_IfFalse_13() const { return ___IfFalse_13; }
	inline BracketFragment_t1567982410 ** get_address_of_IfFalse_13() { return &___IfFalse_13; }
	inline void set_IfFalse_13(BracketFragment_t1567982410 * value)
	{
		___IfFalse_13 = value;
		Il2CppCodeGenWriteBarrier(&___IfFalse_13, value);
	}

	inline static int32_t get_offset_of_Conditions_14() { return static_cast<int32_t>(offsetof(IfOperation_t3407909282, ___Conditions_14)); }
	inline CompiledFragmentU5BU5D_t634647486* get_Conditions_14() const { return ___Conditions_14; }
	inline CompiledFragmentU5BU5D_t634647486** get_address_of_Conditions_14() { return &___Conditions_14; }
	inline void set_Conditions_14(CompiledFragmentU5BU5D_t634647486* value)
	{
		___Conditions_14 = value;
		Il2CppCodeGenWriteBarrier(&___Conditions_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
