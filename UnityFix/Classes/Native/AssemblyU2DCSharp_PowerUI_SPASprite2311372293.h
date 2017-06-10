#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// PowerUI.SPA
struct SPA_t2053324408;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.SPASprite
struct  SPASprite_t2311372293  : public Il2CppObject
{
public:
	// System.Int32 PowerUI.SPASprite::ID
	int32_t ___ID_0;
	// System.Int32 PowerUI.SPASprite::Width
	int32_t ___Width_1;
	// System.Int32 PowerUI.SPASprite::Height
	int32_t ___Height_2;
	// PowerUI.SPA PowerUI.SPASprite::Animation
	SPA_t2053324408 * ___Animation_3;
	// System.Int32 PowerUI.SPASprite::FrameCount
	int32_t ___FrameCount_4;
	// UnityEngine.Texture2D PowerUI.SPASprite::Sprite
	Texture2D_t3542995729 * ___Sprite_5;
	// UnityEngine.Vector2 PowerUI.SPASprite::TextureScale
	Vector2_t2243707579  ___TextureScale_6;
	// System.Int32 PowerUI.SPASprite::VerticalFrameCount
	int32_t ___VerticalFrameCount_7;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(SPASprite_t2311372293, ___ID_0)); }
	inline int32_t get_ID_0() const { return ___ID_0; }
	inline int32_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(int32_t value)
	{
		___ID_0 = value;
	}

	inline static int32_t get_offset_of_Width_1() { return static_cast<int32_t>(offsetof(SPASprite_t2311372293, ___Width_1)); }
	inline int32_t get_Width_1() const { return ___Width_1; }
	inline int32_t* get_address_of_Width_1() { return &___Width_1; }
	inline void set_Width_1(int32_t value)
	{
		___Width_1 = value;
	}

	inline static int32_t get_offset_of_Height_2() { return static_cast<int32_t>(offsetof(SPASprite_t2311372293, ___Height_2)); }
	inline int32_t get_Height_2() const { return ___Height_2; }
	inline int32_t* get_address_of_Height_2() { return &___Height_2; }
	inline void set_Height_2(int32_t value)
	{
		___Height_2 = value;
	}

	inline static int32_t get_offset_of_Animation_3() { return static_cast<int32_t>(offsetof(SPASprite_t2311372293, ___Animation_3)); }
	inline SPA_t2053324408 * get_Animation_3() const { return ___Animation_3; }
	inline SPA_t2053324408 ** get_address_of_Animation_3() { return &___Animation_3; }
	inline void set_Animation_3(SPA_t2053324408 * value)
	{
		___Animation_3 = value;
		Il2CppCodeGenWriteBarrier(&___Animation_3, value);
	}

	inline static int32_t get_offset_of_FrameCount_4() { return static_cast<int32_t>(offsetof(SPASprite_t2311372293, ___FrameCount_4)); }
	inline int32_t get_FrameCount_4() const { return ___FrameCount_4; }
	inline int32_t* get_address_of_FrameCount_4() { return &___FrameCount_4; }
	inline void set_FrameCount_4(int32_t value)
	{
		___FrameCount_4 = value;
	}

	inline static int32_t get_offset_of_Sprite_5() { return static_cast<int32_t>(offsetof(SPASprite_t2311372293, ___Sprite_5)); }
	inline Texture2D_t3542995729 * get_Sprite_5() const { return ___Sprite_5; }
	inline Texture2D_t3542995729 ** get_address_of_Sprite_5() { return &___Sprite_5; }
	inline void set_Sprite_5(Texture2D_t3542995729 * value)
	{
		___Sprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___Sprite_5, value);
	}

	inline static int32_t get_offset_of_TextureScale_6() { return static_cast<int32_t>(offsetof(SPASprite_t2311372293, ___TextureScale_6)); }
	inline Vector2_t2243707579  get_TextureScale_6() const { return ___TextureScale_6; }
	inline Vector2_t2243707579 * get_address_of_TextureScale_6() { return &___TextureScale_6; }
	inline void set_TextureScale_6(Vector2_t2243707579  value)
	{
		___TextureScale_6 = value;
	}

	inline static int32_t get_offset_of_VerticalFrameCount_7() { return static_cast<int32_t>(offsetof(SPASprite_t2311372293, ___VerticalFrameCount_7)); }
	inline int32_t get_VerticalFrameCount_7() const { return ___VerticalFrameCount_7; }
	inline int32_t* get_address_of_VerticalFrameCount_7() { return &___VerticalFrameCount_7; }
	inline void set_VerticalFrameCount_7(int32_t value)
	{
		___VerticalFrameCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
