#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Wrench_StringReader3948835246.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.CodeLexer
struct  CodeLexer_t802521045  : public StringReader_t3948835246
{
public:
	// System.Boolean Nitro.CodeLexer::Literal
	bool ___Literal_4;
	// System.Int32 Nitro.CodeLexer::LineNumber
	int32_t ___LineNumber_5;
	// System.Boolean Nitro.CodeLexer::DidReadJunk
	bool ___DidReadJunk_6;

public:
	inline static int32_t get_offset_of_Literal_4() { return static_cast<int32_t>(offsetof(CodeLexer_t802521045, ___Literal_4)); }
	inline bool get_Literal_4() const { return ___Literal_4; }
	inline bool* get_address_of_Literal_4() { return &___Literal_4; }
	inline void set_Literal_4(bool value)
	{
		___Literal_4 = value;
	}

	inline static int32_t get_offset_of_LineNumber_5() { return static_cast<int32_t>(offsetof(CodeLexer_t802521045, ___LineNumber_5)); }
	inline int32_t get_LineNumber_5() const { return ___LineNumber_5; }
	inline int32_t* get_address_of_LineNumber_5() { return &___LineNumber_5; }
	inline void set_LineNumber_5(int32_t value)
	{
		___LineNumber_5 = value;
	}

	inline static int32_t get_offset_of_DidReadJunk_6() { return static_cast<int32_t>(offsetof(CodeLexer_t802521045, ___DidReadJunk_6)); }
	inline bool get_DidReadJunk_6() const { return ___DidReadJunk_6; }
	inline bool* get_address_of_DidReadJunk_6() { return &___DidReadJunk_6; }
	inline void set_DidReadJunk_6(bool value)
	{
		___DidReadJunk_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
