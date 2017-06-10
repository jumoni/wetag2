#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.SPA
struct SPA_t2053324408;
// System.String
struct String_t;
// PowerUI.FilePath
struct FilePath_t3025149829;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Object
struct Il2CppObject;
// PowerUI.SPAInstance
struct SPAInstance_t4182545695;
// UnityEngine.Material
struct Material_t193706927;
// PowerUI.DynamicTexture
struct DynamicTexture_t3994024308;
// PowerUI.OnImageReady
struct OnImageReady_t2310121429;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.ImagePackage
struct  ImagePackage_t3498155007  : public Il2CppObject
{
public:
	// PowerUI.SPA PowerUI.ImagePackage::SPAFile
	SPA_t2053324408 * ___SPAFile_0;
	// System.Boolean PowerUI.ImagePackage::IsVideo
	bool ___IsVideo_1;
	// System.String PowerUI.ImagePackage::Error
	String_t* ___Error_2;
	// PowerUI.FilePath PowerUI.ImagePackage::File
	FilePath_t3025149829 * ___File_3;
	// System.Boolean PowerUI.ImagePackage::Animated
	bool ___Animated_4;
	// System.Boolean PowerUI.ImagePackage::IsDynamic
	bool ___IsDynamic_5;
	// System.String PowerUI.ImagePackage::FileType
	String_t* ___FileType_6;
	// UnityEngine.Texture2D PowerUI.ImagePackage::Image
	Texture2D_t3542995729 * ___Image_7;
	// System.Object PowerUI.ImagePackage::ExtraData
	Il2CppObject * ___ExtraData_8;
	// PowerUI.SPAInstance PowerUI.ImagePackage::Animation
	SPAInstance_t4182545695 * ___Animation_9;
	// System.Boolean PowerUI.ImagePackage::PixelPerfect
	bool ___PixelPerfect_10;
	// UnityEngine.Material PowerUI.ImagePackage::_VideoMaterial
	Material_t193706927 * ____VideoMaterial_11;
	// PowerUI.DynamicTexture PowerUI.ImagePackage::DynamicImage
	DynamicTexture_t3994024308 * ___DynamicImage_12;
	// PowerUI.OnImageReady PowerUI.ImagePackage::ImageReady
	OnImageReady_t2310121429 * ___ImageReady_13;

public:
	inline static int32_t get_offset_of_SPAFile_0() { return static_cast<int32_t>(offsetof(ImagePackage_t3498155007, ___SPAFile_0)); }
	inline SPA_t2053324408 * get_SPAFile_0() const { return ___SPAFile_0; }
	inline SPA_t2053324408 ** get_address_of_SPAFile_0() { return &___SPAFile_0; }
	inline void set_SPAFile_0(SPA_t2053324408 * value)
	{
		___SPAFile_0 = value;
		Il2CppCodeGenWriteBarrier(&___SPAFile_0, value);
	}

	inline static int32_t get_offset_of_IsVideo_1() { return static_cast<int32_t>(offsetof(ImagePackage_t3498155007, ___IsVideo_1)); }
	inline bool get_IsVideo_1() const { return ___IsVideo_1; }
	inline bool* get_address_of_IsVideo_1() { return &___IsVideo_1; }
	inline void set_IsVideo_1(bool value)
	{
		___IsVideo_1 = value;
	}

	inline static int32_t get_offset_of_Error_2() { return static_cast<int32_t>(offsetof(ImagePackage_t3498155007, ___Error_2)); }
	inline String_t* get_Error_2() const { return ___Error_2; }
	inline String_t** get_address_of_Error_2() { return &___Error_2; }
	inline void set_Error_2(String_t* value)
	{
		___Error_2 = value;
		Il2CppCodeGenWriteBarrier(&___Error_2, value);
	}

	inline static int32_t get_offset_of_File_3() { return static_cast<int32_t>(offsetof(ImagePackage_t3498155007, ___File_3)); }
	inline FilePath_t3025149829 * get_File_3() const { return ___File_3; }
	inline FilePath_t3025149829 ** get_address_of_File_3() { return &___File_3; }
	inline void set_File_3(FilePath_t3025149829 * value)
	{
		___File_3 = value;
		Il2CppCodeGenWriteBarrier(&___File_3, value);
	}

	inline static int32_t get_offset_of_Animated_4() { return static_cast<int32_t>(offsetof(ImagePackage_t3498155007, ___Animated_4)); }
	inline bool get_Animated_4() const { return ___Animated_4; }
	inline bool* get_address_of_Animated_4() { return &___Animated_4; }
	inline void set_Animated_4(bool value)
	{
		___Animated_4 = value;
	}

	inline static int32_t get_offset_of_IsDynamic_5() { return static_cast<int32_t>(offsetof(ImagePackage_t3498155007, ___IsDynamic_5)); }
	inline bool get_IsDynamic_5() const { return ___IsDynamic_5; }
	inline bool* get_address_of_IsDynamic_5() { return &___IsDynamic_5; }
	inline void set_IsDynamic_5(bool value)
	{
		___IsDynamic_5 = value;
	}

	inline static int32_t get_offset_of_FileType_6() { return static_cast<int32_t>(offsetof(ImagePackage_t3498155007, ___FileType_6)); }
	inline String_t* get_FileType_6() const { return ___FileType_6; }
	inline String_t** get_address_of_FileType_6() { return &___FileType_6; }
	inline void set_FileType_6(String_t* value)
	{
		___FileType_6 = value;
		Il2CppCodeGenWriteBarrier(&___FileType_6, value);
	}

	inline static int32_t get_offset_of_Image_7() { return static_cast<int32_t>(offsetof(ImagePackage_t3498155007, ___Image_7)); }
	inline Texture2D_t3542995729 * get_Image_7() const { return ___Image_7; }
	inline Texture2D_t3542995729 ** get_address_of_Image_7() { return &___Image_7; }
	inline void set_Image_7(Texture2D_t3542995729 * value)
	{
		___Image_7 = value;
		Il2CppCodeGenWriteBarrier(&___Image_7, value);
	}

	inline static int32_t get_offset_of_ExtraData_8() { return static_cast<int32_t>(offsetof(ImagePackage_t3498155007, ___ExtraData_8)); }
	inline Il2CppObject * get_ExtraData_8() const { return ___ExtraData_8; }
	inline Il2CppObject ** get_address_of_ExtraData_8() { return &___ExtraData_8; }
	inline void set_ExtraData_8(Il2CppObject * value)
	{
		___ExtraData_8 = value;
		Il2CppCodeGenWriteBarrier(&___ExtraData_8, value);
	}

	inline static int32_t get_offset_of_Animation_9() { return static_cast<int32_t>(offsetof(ImagePackage_t3498155007, ___Animation_9)); }
	inline SPAInstance_t4182545695 * get_Animation_9() const { return ___Animation_9; }
	inline SPAInstance_t4182545695 ** get_address_of_Animation_9() { return &___Animation_9; }
	inline void set_Animation_9(SPAInstance_t4182545695 * value)
	{
		___Animation_9 = value;
		Il2CppCodeGenWriteBarrier(&___Animation_9, value);
	}

	inline static int32_t get_offset_of_PixelPerfect_10() { return static_cast<int32_t>(offsetof(ImagePackage_t3498155007, ___PixelPerfect_10)); }
	inline bool get_PixelPerfect_10() const { return ___PixelPerfect_10; }
	inline bool* get_address_of_PixelPerfect_10() { return &___PixelPerfect_10; }
	inline void set_PixelPerfect_10(bool value)
	{
		___PixelPerfect_10 = value;
	}

	inline static int32_t get_offset_of__VideoMaterial_11() { return static_cast<int32_t>(offsetof(ImagePackage_t3498155007, ____VideoMaterial_11)); }
	inline Material_t193706927 * get__VideoMaterial_11() const { return ____VideoMaterial_11; }
	inline Material_t193706927 ** get_address_of__VideoMaterial_11() { return &____VideoMaterial_11; }
	inline void set__VideoMaterial_11(Material_t193706927 * value)
	{
		____VideoMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&____VideoMaterial_11, value);
	}

	inline static int32_t get_offset_of_DynamicImage_12() { return static_cast<int32_t>(offsetof(ImagePackage_t3498155007, ___DynamicImage_12)); }
	inline DynamicTexture_t3994024308 * get_DynamicImage_12() const { return ___DynamicImage_12; }
	inline DynamicTexture_t3994024308 ** get_address_of_DynamicImage_12() { return &___DynamicImage_12; }
	inline void set_DynamicImage_12(DynamicTexture_t3994024308 * value)
	{
		___DynamicImage_12 = value;
		Il2CppCodeGenWriteBarrier(&___DynamicImage_12, value);
	}

	inline static int32_t get_offset_of_ImageReady_13() { return static_cast<int32_t>(offsetof(ImagePackage_t3498155007, ___ImageReady_13)); }
	inline OnImageReady_t2310121429 * get_ImageReady_13() const { return ___ImageReady_13; }
	inline OnImageReady_t2310121429 ** get_address_of_ImageReady_13() { return &___ImageReady_13; }
	inline void set_ImageReady_13(OnImageReady_t2310121429 * value)
	{
		___ImageReady_13 = value;
		Il2CppCodeGenWriteBarrier(&___ImageReady_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
