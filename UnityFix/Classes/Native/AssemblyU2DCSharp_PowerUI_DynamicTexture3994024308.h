#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,PowerUI.DynamicTexture>
struct Dictionary_2_t1613836274;
// System.String
struct String_t;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.DynamicTexture
struct  DynamicTexture_t3994024308  : public Il2CppObject
{
public:
	// System.Int32 PowerUI.DynamicTexture::Width
	int32_t ___Width_2;
	// System.Int32 PowerUI.DynamicTexture::Height
	int32_t ___Height_3;
	// System.String PowerUI.DynamicTexture::Name
	String_t* ___Name_4;
	// System.Boolean PowerUI.DynamicTexture::Refreshing
	bool ___Refreshing_5;
	// UnityEngine.Color32[] PowerUI.DynamicTexture::Pixels
	Color32U5BU5D_t30278651* ___Pixels_6;
	// System.Int32 PowerUI.DynamicTexture::ResizedWidth
	int32_t ___ResizedWidth_7;
	// System.Int32 PowerUI.DynamicTexture::ResizedHeight
	int32_t ___ResizedHeight_8;
	// UnityEngine.Texture2D PowerUI.DynamicTexture::Texture
	Texture2D_t3542995729 * ___Texture_9;

public:
	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(DynamicTexture_t3994024308, ___Width_2)); }
	inline int32_t get_Width_2() const { return ___Width_2; }
	inline int32_t* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(int32_t value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(DynamicTexture_t3994024308, ___Height_3)); }
	inline int32_t get_Height_3() const { return ___Height_3; }
	inline int32_t* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(int32_t value)
	{
		___Height_3 = value;
	}

	inline static int32_t get_offset_of_Name_4() { return static_cast<int32_t>(offsetof(DynamicTexture_t3994024308, ___Name_4)); }
	inline String_t* get_Name_4() const { return ___Name_4; }
	inline String_t** get_address_of_Name_4() { return &___Name_4; }
	inline void set_Name_4(String_t* value)
	{
		___Name_4 = value;
		Il2CppCodeGenWriteBarrier(&___Name_4, value);
	}

	inline static int32_t get_offset_of_Refreshing_5() { return static_cast<int32_t>(offsetof(DynamicTexture_t3994024308, ___Refreshing_5)); }
	inline bool get_Refreshing_5() const { return ___Refreshing_5; }
	inline bool* get_address_of_Refreshing_5() { return &___Refreshing_5; }
	inline void set_Refreshing_5(bool value)
	{
		___Refreshing_5 = value;
	}

	inline static int32_t get_offset_of_Pixels_6() { return static_cast<int32_t>(offsetof(DynamicTexture_t3994024308, ___Pixels_6)); }
	inline Color32U5BU5D_t30278651* get_Pixels_6() const { return ___Pixels_6; }
	inline Color32U5BU5D_t30278651** get_address_of_Pixels_6() { return &___Pixels_6; }
	inline void set_Pixels_6(Color32U5BU5D_t30278651* value)
	{
		___Pixels_6 = value;
		Il2CppCodeGenWriteBarrier(&___Pixels_6, value);
	}

	inline static int32_t get_offset_of_ResizedWidth_7() { return static_cast<int32_t>(offsetof(DynamicTexture_t3994024308, ___ResizedWidth_7)); }
	inline int32_t get_ResizedWidth_7() const { return ___ResizedWidth_7; }
	inline int32_t* get_address_of_ResizedWidth_7() { return &___ResizedWidth_7; }
	inline void set_ResizedWidth_7(int32_t value)
	{
		___ResizedWidth_7 = value;
	}

	inline static int32_t get_offset_of_ResizedHeight_8() { return static_cast<int32_t>(offsetof(DynamicTexture_t3994024308, ___ResizedHeight_8)); }
	inline int32_t get_ResizedHeight_8() const { return ___ResizedHeight_8; }
	inline int32_t* get_address_of_ResizedHeight_8() { return &___ResizedHeight_8; }
	inline void set_ResizedHeight_8(int32_t value)
	{
		___ResizedHeight_8 = value;
	}

	inline static int32_t get_offset_of_Texture_9() { return static_cast<int32_t>(offsetof(DynamicTexture_t3994024308, ___Texture_9)); }
	inline Texture2D_t3542995729 * get_Texture_9() const { return ___Texture_9; }
	inline Texture2D_t3542995729 ** get_address_of_Texture_9() { return &___Texture_9; }
	inline void set_Texture_9(Texture2D_t3542995729 * value)
	{
		___Texture_9 = value;
		Il2CppCodeGenWriteBarrier(&___Texture_9, value);
	}
};

struct DynamicTexture_t3994024308_StaticFields
{
public:
	// System.Boolean PowerUI.DynamicTexture::SomethingToUpdate
	bool ___SomethingToUpdate_0;
	// System.Collections.Generic.Dictionary`2<System.String,PowerUI.DynamicTexture> PowerUI.DynamicTexture::Instances
	Dictionary_2_t1613836274 * ___Instances_1;

public:
	inline static int32_t get_offset_of_SomethingToUpdate_0() { return static_cast<int32_t>(offsetof(DynamicTexture_t3994024308_StaticFields, ___SomethingToUpdate_0)); }
	inline bool get_SomethingToUpdate_0() const { return ___SomethingToUpdate_0; }
	inline bool* get_address_of_SomethingToUpdate_0() { return &___SomethingToUpdate_0; }
	inline void set_SomethingToUpdate_0(bool value)
	{
		___SomethingToUpdate_0 = value;
	}

	inline static int32_t get_offset_of_Instances_1() { return static_cast<int32_t>(offsetof(DynamicTexture_t3994024308_StaticFields, ___Instances_1)); }
	inline Dictionary_2_t1613836274 * get_Instances_1() const { return ___Instances_1; }
	inline Dictionary_2_t1613836274 ** get_address_of_Instances_1() { return &___Instances_1; }
	inline void set_Instances_1(Dictionary_2_t1613836274 * value)
	{
		___Instances_1 = value;
		Il2CppCodeGenWriteBarrier(&___Instances_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
