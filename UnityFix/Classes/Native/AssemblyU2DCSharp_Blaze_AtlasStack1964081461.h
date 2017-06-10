#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Blaze_AtlasingMode2220172332.h"
#include "UnityEngine_UnityEngine_FilterMode10814199.h"
#include "UnityEngine_UnityEngine_TextureFormat1386130234.h"

// Blaze.TextureAtlas
struct TextureAtlas_t1022099648;
// System.Collections.Generic.Dictionary`2<System.Int32,Blaze.AtlasLocation>
struct Dictionary_2_t1357505209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blaze.AtlasStack
struct  AtlasStack_t1964081461  : public Il2CppObject
{
public:
	// System.Int32 Blaze.AtlasStack::Spacing
	int32_t ___Spacing_0;
	// Blaze.AtlasingMode Blaze.AtlasStack::Mode
	int32_t ___Mode_1;
	// System.Boolean Blaze.AtlasStack::FilterLocked
	bool ___FilterLocked_2;
	// System.Boolean Blaze.AtlasStack::PixelChange
	bool ___PixelChange_3;
	// Blaze.TextureAtlas Blaze.AtlasStack::Last
	TextureAtlas_t1022099648 * ___Last_4;
	// Blaze.TextureAtlas Blaze.AtlasStack::First
	TextureAtlas_t1022099648 * ___First_5;
	// System.Int32 Blaze.AtlasStack::InitialSize
	int32_t ___InitialSize_6;
	// System.Boolean Blaze.AtlasStack::OptimizeRequested
	bool ___OptimizeRequested_7;
	// UnityEngine.FilterMode Blaze.AtlasStack::FilteringMode
	int32_t ___FilteringMode_8;
	// UnityEngine.TextureFormat Blaze.AtlasStack::Format
	int32_t ___Format_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,Blaze.AtlasLocation> Blaze.AtlasStack::ActiveImages
	Dictionary_2_t1357505209 * ___ActiveImages_10;

public:
	inline static int32_t get_offset_of_Spacing_0() { return static_cast<int32_t>(offsetof(AtlasStack_t1964081461, ___Spacing_0)); }
	inline int32_t get_Spacing_0() const { return ___Spacing_0; }
	inline int32_t* get_address_of_Spacing_0() { return &___Spacing_0; }
	inline void set_Spacing_0(int32_t value)
	{
		___Spacing_0 = value;
	}

	inline static int32_t get_offset_of_Mode_1() { return static_cast<int32_t>(offsetof(AtlasStack_t1964081461, ___Mode_1)); }
	inline int32_t get_Mode_1() const { return ___Mode_1; }
	inline int32_t* get_address_of_Mode_1() { return &___Mode_1; }
	inline void set_Mode_1(int32_t value)
	{
		___Mode_1 = value;
	}

	inline static int32_t get_offset_of_FilterLocked_2() { return static_cast<int32_t>(offsetof(AtlasStack_t1964081461, ___FilterLocked_2)); }
	inline bool get_FilterLocked_2() const { return ___FilterLocked_2; }
	inline bool* get_address_of_FilterLocked_2() { return &___FilterLocked_2; }
	inline void set_FilterLocked_2(bool value)
	{
		___FilterLocked_2 = value;
	}

	inline static int32_t get_offset_of_PixelChange_3() { return static_cast<int32_t>(offsetof(AtlasStack_t1964081461, ___PixelChange_3)); }
	inline bool get_PixelChange_3() const { return ___PixelChange_3; }
	inline bool* get_address_of_PixelChange_3() { return &___PixelChange_3; }
	inline void set_PixelChange_3(bool value)
	{
		___PixelChange_3 = value;
	}

	inline static int32_t get_offset_of_Last_4() { return static_cast<int32_t>(offsetof(AtlasStack_t1964081461, ___Last_4)); }
	inline TextureAtlas_t1022099648 * get_Last_4() const { return ___Last_4; }
	inline TextureAtlas_t1022099648 ** get_address_of_Last_4() { return &___Last_4; }
	inline void set_Last_4(TextureAtlas_t1022099648 * value)
	{
		___Last_4 = value;
		Il2CppCodeGenWriteBarrier(&___Last_4, value);
	}

	inline static int32_t get_offset_of_First_5() { return static_cast<int32_t>(offsetof(AtlasStack_t1964081461, ___First_5)); }
	inline TextureAtlas_t1022099648 * get_First_5() const { return ___First_5; }
	inline TextureAtlas_t1022099648 ** get_address_of_First_5() { return &___First_5; }
	inline void set_First_5(TextureAtlas_t1022099648 * value)
	{
		___First_5 = value;
		Il2CppCodeGenWriteBarrier(&___First_5, value);
	}

	inline static int32_t get_offset_of_InitialSize_6() { return static_cast<int32_t>(offsetof(AtlasStack_t1964081461, ___InitialSize_6)); }
	inline int32_t get_InitialSize_6() const { return ___InitialSize_6; }
	inline int32_t* get_address_of_InitialSize_6() { return &___InitialSize_6; }
	inline void set_InitialSize_6(int32_t value)
	{
		___InitialSize_6 = value;
	}

	inline static int32_t get_offset_of_OptimizeRequested_7() { return static_cast<int32_t>(offsetof(AtlasStack_t1964081461, ___OptimizeRequested_7)); }
	inline bool get_OptimizeRequested_7() const { return ___OptimizeRequested_7; }
	inline bool* get_address_of_OptimizeRequested_7() { return &___OptimizeRequested_7; }
	inline void set_OptimizeRequested_7(bool value)
	{
		___OptimizeRequested_7 = value;
	}

	inline static int32_t get_offset_of_FilteringMode_8() { return static_cast<int32_t>(offsetof(AtlasStack_t1964081461, ___FilteringMode_8)); }
	inline int32_t get_FilteringMode_8() const { return ___FilteringMode_8; }
	inline int32_t* get_address_of_FilteringMode_8() { return &___FilteringMode_8; }
	inline void set_FilteringMode_8(int32_t value)
	{
		___FilteringMode_8 = value;
	}

	inline static int32_t get_offset_of_Format_9() { return static_cast<int32_t>(offsetof(AtlasStack_t1964081461, ___Format_9)); }
	inline int32_t get_Format_9() const { return ___Format_9; }
	inline int32_t* get_address_of_Format_9() { return &___Format_9; }
	inline void set_Format_9(int32_t value)
	{
		___Format_9 = value;
	}

	inline static int32_t get_offset_of_ActiveImages_10() { return static_cast<int32_t>(offsetof(AtlasStack_t1964081461, ___ActiveImages_10)); }
	inline Dictionary_2_t1357505209 * get_ActiveImages_10() const { return ___ActiveImages_10; }
	inline Dictionary_2_t1357505209 ** get_address_of_ActiveImages_10() { return &___ActiveImages_10; }
	inline void set_ActiveImages_10(Dictionary_2_t1357505209 * value)
	{
		___ActiveImages_10 = value;
		Il2CppCodeGenWriteBarrier(&___ActiveImages_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
