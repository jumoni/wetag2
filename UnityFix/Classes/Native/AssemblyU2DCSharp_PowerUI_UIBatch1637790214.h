#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.DynamicMesh
struct DynamicMesh_t330516240;
// PowerUI.Renderman
struct Renderman_t1984383802;
// PowerUI.UIBatch
struct UIBatch_t1637790214;
// Blaze.TextureAtlas
struct TextureAtlas_t1022099648;
// PowerUI.Css.DisplayableProperty
struct DisplayableProperty_t2567878243;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.UIBatch
struct  UIBatch_t1637790214  : public Il2CppObject
{
public:
	// System.Boolean PowerUI.UIBatch::Setup
	bool ___Setup_0;
	// System.Boolean PowerUI.UIBatch::PhysicsMode
	bool ___PhysicsMode_1;
	// System.Boolean PowerUI.UIBatch::Isolated
	bool ___Isolated_2;
	// PowerUI.DynamicMesh PowerUI.UIBatch::Mesh
	DynamicMesh_t330516240 * ___Mesh_3;
	// System.Boolean PowerUI.UIBatch::PrepareCalled
	bool ___PrepareCalled_4;
	// PowerUI.Renderman PowerUI.UIBatch::Renderer
	Renderman_t1984383802 * ___Renderer_5;
	// PowerUI.UIBatch PowerUI.UIBatch::BatchAfter
	UIBatch_t1637790214 * ___BatchAfter_6;
	// PowerUI.UIBatch PowerUI.UIBatch::BatchBefore
	UIBatch_t1637790214 * ___BatchBefore_7;
	// Blaze.TextureAtlas PowerUI.UIBatch::FontAtlas
	TextureAtlas_t1022099648 * ___FontAtlas_8;
	// Blaze.TextureAtlas PowerUI.UIBatch::GraphicsAtlas
	TextureAtlas_t1022099648 * ___GraphicsAtlas_9;
	// PowerUI.Css.DisplayableProperty PowerUI.UIBatch::IsolatedProperty
	DisplayableProperty_t2567878243 * ___IsolatedProperty_10;

public:
	inline static int32_t get_offset_of_Setup_0() { return static_cast<int32_t>(offsetof(UIBatch_t1637790214, ___Setup_0)); }
	inline bool get_Setup_0() const { return ___Setup_0; }
	inline bool* get_address_of_Setup_0() { return &___Setup_0; }
	inline void set_Setup_0(bool value)
	{
		___Setup_0 = value;
	}

	inline static int32_t get_offset_of_PhysicsMode_1() { return static_cast<int32_t>(offsetof(UIBatch_t1637790214, ___PhysicsMode_1)); }
	inline bool get_PhysicsMode_1() const { return ___PhysicsMode_1; }
	inline bool* get_address_of_PhysicsMode_1() { return &___PhysicsMode_1; }
	inline void set_PhysicsMode_1(bool value)
	{
		___PhysicsMode_1 = value;
	}

	inline static int32_t get_offset_of_Isolated_2() { return static_cast<int32_t>(offsetof(UIBatch_t1637790214, ___Isolated_2)); }
	inline bool get_Isolated_2() const { return ___Isolated_2; }
	inline bool* get_address_of_Isolated_2() { return &___Isolated_2; }
	inline void set_Isolated_2(bool value)
	{
		___Isolated_2 = value;
	}

	inline static int32_t get_offset_of_Mesh_3() { return static_cast<int32_t>(offsetof(UIBatch_t1637790214, ___Mesh_3)); }
	inline DynamicMesh_t330516240 * get_Mesh_3() const { return ___Mesh_3; }
	inline DynamicMesh_t330516240 ** get_address_of_Mesh_3() { return &___Mesh_3; }
	inline void set_Mesh_3(DynamicMesh_t330516240 * value)
	{
		___Mesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___Mesh_3, value);
	}

	inline static int32_t get_offset_of_PrepareCalled_4() { return static_cast<int32_t>(offsetof(UIBatch_t1637790214, ___PrepareCalled_4)); }
	inline bool get_PrepareCalled_4() const { return ___PrepareCalled_4; }
	inline bool* get_address_of_PrepareCalled_4() { return &___PrepareCalled_4; }
	inline void set_PrepareCalled_4(bool value)
	{
		___PrepareCalled_4 = value;
	}

	inline static int32_t get_offset_of_Renderer_5() { return static_cast<int32_t>(offsetof(UIBatch_t1637790214, ___Renderer_5)); }
	inline Renderman_t1984383802 * get_Renderer_5() const { return ___Renderer_5; }
	inline Renderman_t1984383802 ** get_address_of_Renderer_5() { return &___Renderer_5; }
	inline void set_Renderer_5(Renderman_t1984383802 * value)
	{
		___Renderer_5 = value;
		Il2CppCodeGenWriteBarrier(&___Renderer_5, value);
	}

	inline static int32_t get_offset_of_BatchAfter_6() { return static_cast<int32_t>(offsetof(UIBatch_t1637790214, ___BatchAfter_6)); }
	inline UIBatch_t1637790214 * get_BatchAfter_6() const { return ___BatchAfter_6; }
	inline UIBatch_t1637790214 ** get_address_of_BatchAfter_6() { return &___BatchAfter_6; }
	inline void set_BatchAfter_6(UIBatch_t1637790214 * value)
	{
		___BatchAfter_6 = value;
		Il2CppCodeGenWriteBarrier(&___BatchAfter_6, value);
	}

	inline static int32_t get_offset_of_BatchBefore_7() { return static_cast<int32_t>(offsetof(UIBatch_t1637790214, ___BatchBefore_7)); }
	inline UIBatch_t1637790214 * get_BatchBefore_7() const { return ___BatchBefore_7; }
	inline UIBatch_t1637790214 ** get_address_of_BatchBefore_7() { return &___BatchBefore_7; }
	inline void set_BatchBefore_7(UIBatch_t1637790214 * value)
	{
		___BatchBefore_7 = value;
		Il2CppCodeGenWriteBarrier(&___BatchBefore_7, value);
	}

	inline static int32_t get_offset_of_FontAtlas_8() { return static_cast<int32_t>(offsetof(UIBatch_t1637790214, ___FontAtlas_8)); }
	inline TextureAtlas_t1022099648 * get_FontAtlas_8() const { return ___FontAtlas_8; }
	inline TextureAtlas_t1022099648 ** get_address_of_FontAtlas_8() { return &___FontAtlas_8; }
	inline void set_FontAtlas_8(TextureAtlas_t1022099648 * value)
	{
		___FontAtlas_8 = value;
		Il2CppCodeGenWriteBarrier(&___FontAtlas_8, value);
	}

	inline static int32_t get_offset_of_GraphicsAtlas_9() { return static_cast<int32_t>(offsetof(UIBatch_t1637790214, ___GraphicsAtlas_9)); }
	inline TextureAtlas_t1022099648 * get_GraphicsAtlas_9() const { return ___GraphicsAtlas_9; }
	inline TextureAtlas_t1022099648 ** get_address_of_GraphicsAtlas_9() { return &___GraphicsAtlas_9; }
	inline void set_GraphicsAtlas_9(TextureAtlas_t1022099648 * value)
	{
		___GraphicsAtlas_9 = value;
		Il2CppCodeGenWriteBarrier(&___GraphicsAtlas_9, value);
	}

	inline static int32_t get_offset_of_IsolatedProperty_10() { return static_cast<int32_t>(offsetof(UIBatch_t1637790214, ___IsolatedProperty_10)); }
	inline DisplayableProperty_t2567878243 * get_IsolatedProperty_10() const { return ___IsolatedProperty_10; }
	inline DisplayableProperty_t2567878243 ** get_address_of_IsolatedProperty_10() { return &___IsolatedProperty_10; }
	inline void set_IsolatedProperty_10(DisplayableProperty_t2567878243 * value)
	{
		___IsolatedProperty_10 = value;
		Il2CppCodeGenWriteBarrier(&___IsolatedProperty_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
