#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT3010530044.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "AssemblyU2DCSharp_TagOption3821855803.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material
struct Material_t193706927;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WeTagHandler
struct  WeTagHandler_t1469443048  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject WeTagHandler::celebrityTag
	GameObject_t1756533147 * ___celebrityTag_2;
	// UnityEngine.Material WeTagHandler::lineMat
	Material_t193706927 * ___lineMat_3;
	// System.String WeTagHandler::cognitiveAPIAuth
	String_t* ___cognitiveAPIAuth_5;
	// System.String WeTagHandler::cognitiveURI
	String_t* ___cognitiveURI_6;
	// System.String WeTagHandler::mediaWikiURL
	String_t* ___mediaWikiURL_7;
	// UnityEngine.Texture2D WeTagHandler::captureImage
	Texture2D_t3542995729 * ___captureImage_8;
	// UnityEngine.Rect WeTagHandler::box
	Rect_t3681755626  ___box_9;
	// System.String WeTagHandler::boxText
	String_t* ___boxText_10;
	// System.Boolean WeTagHandler::_isDetailShown
	bool ____isDetailShown_11;
	// System.Single WeTagHandler::titlePosition
	float ___titlePosition_12;
	// TagOption WeTagHandler::_tagOption
	int32_t ____tagOption_13;
	// System.String WeTagHandler::currentDisplayWikiName
	String_t* ___currentDisplayWikiName_14;

public:
	inline static int32_t get_offset_of_celebrityTag_2() { return static_cast<int32_t>(offsetof(WeTagHandler_t1469443048, ___celebrityTag_2)); }
	inline GameObject_t1756533147 * get_celebrityTag_2() const { return ___celebrityTag_2; }
	inline GameObject_t1756533147 ** get_address_of_celebrityTag_2() { return &___celebrityTag_2; }
	inline void set_celebrityTag_2(GameObject_t1756533147 * value)
	{
		___celebrityTag_2 = value;
		Il2CppCodeGenWriteBarrier(&___celebrityTag_2, value);
	}

	inline static int32_t get_offset_of_lineMat_3() { return static_cast<int32_t>(offsetof(WeTagHandler_t1469443048, ___lineMat_3)); }
	inline Material_t193706927 * get_lineMat_3() const { return ___lineMat_3; }
	inline Material_t193706927 ** get_address_of_lineMat_3() { return &___lineMat_3; }
	inline void set_lineMat_3(Material_t193706927 * value)
	{
		___lineMat_3 = value;
		Il2CppCodeGenWriteBarrier(&___lineMat_3, value);
	}

	inline static int32_t get_offset_of_cognitiveAPIAuth_5() { return static_cast<int32_t>(offsetof(WeTagHandler_t1469443048, ___cognitiveAPIAuth_5)); }
	inline String_t* get_cognitiveAPIAuth_5() const { return ___cognitiveAPIAuth_5; }
	inline String_t** get_address_of_cognitiveAPIAuth_5() { return &___cognitiveAPIAuth_5; }
	inline void set_cognitiveAPIAuth_5(String_t* value)
	{
		___cognitiveAPIAuth_5 = value;
		Il2CppCodeGenWriteBarrier(&___cognitiveAPIAuth_5, value);
	}

	inline static int32_t get_offset_of_cognitiveURI_6() { return static_cast<int32_t>(offsetof(WeTagHandler_t1469443048, ___cognitiveURI_6)); }
	inline String_t* get_cognitiveURI_6() const { return ___cognitiveURI_6; }
	inline String_t** get_address_of_cognitiveURI_6() { return &___cognitiveURI_6; }
	inline void set_cognitiveURI_6(String_t* value)
	{
		___cognitiveURI_6 = value;
		Il2CppCodeGenWriteBarrier(&___cognitiveURI_6, value);
	}

	inline static int32_t get_offset_of_mediaWikiURL_7() { return static_cast<int32_t>(offsetof(WeTagHandler_t1469443048, ___mediaWikiURL_7)); }
	inline String_t* get_mediaWikiURL_7() const { return ___mediaWikiURL_7; }
	inline String_t** get_address_of_mediaWikiURL_7() { return &___mediaWikiURL_7; }
	inline void set_mediaWikiURL_7(String_t* value)
	{
		___mediaWikiURL_7 = value;
		Il2CppCodeGenWriteBarrier(&___mediaWikiURL_7, value);
	}

	inline static int32_t get_offset_of_captureImage_8() { return static_cast<int32_t>(offsetof(WeTagHandler_t1469443048, ___captureImage_8)); }
	inline Texture2D_t3542995729 * get_captureImage_8() const { return ___captureImage_8; }
	inline Texture2D_t3542995729 ** get_address_of_captureImage_8() { return &___captureImage_8; }
	inline void set_captureImage_8(Texture2D_t3542995729 * value)
	{
		___captureImage_8 = value;
		Il2CppCodeGenWriteBarrier(&___captureImage_8, value);
	}

	inline static int32_t get_offset_of_box_9() { return static_cast<int32_t>(offsetof(WeTagHandler_t1469443048, ___box_9)); }
	inline Rect_t3681755626  get_box_9() const { return ___box_9; }
	inline Rect_t3681755626 * get_address_of_box_9() { return &___box_9; }
	inline void set_box_9(Rect_t3681755626  value)
	{
		___box_9 = value;
	}

	inline static int32_t get_offset_of_boxText_10() { return static_cast<int32_t>(offsetof(WeTagHandler_t1469443048, ___boxText_10)); }
	inline String_t* get_boxText_10() const { return ___boxText_10; }
	inline String_t** get_address_of_boxText_10() { return &___boxText_10; }
	inline void set_boxText_10(String_t* value)
	{
		___boxText_10 = value;
		Il2CppCodeGenWriteBarrier(&___boxText_10, value);
	}

	inline static int32_t get_offset_of__isDetailShown_11() { return static_cast<int32_t>(offsetof(WeTagHandler_t1469443048, ____isDetailShown_11)); }
	inline bool get__isDetailShown_11() const { return ____isDetailShown_11; }
	inline bool* get_address_of__isDetailShown_11() { return &____isDetailShown_11; }
	inline void set__isDetailShown_11(bool value)
	{
		____isDetailShown_11 = value;
	}

	inline static int32_t get_offset_of_titlePosition_12() { return static_cast<int32_t>(offsetof(WeTagHandler_t1469443048, ___titlePosition_12)); }
	inline float get_titlePosition_12() const { return ___titlePosition_12; }
	inline float* get_address_of_titlePosition_12() { return &___titlePosition_12; }
	inline void set_titlePosition_12(float value)
	{
		___titlePosition_12 = value;
	}

	inline static int32_t get_offset_of__tagOption_13() { return static_cast<int32_t>(offsetof(WeTagHandler_t1469443048, ____tagOption_13)); }
	inline int32_t get__tagOption_13() const { return ____tagOption_13; }
	inline int32_t* get_address_of__tagOption_13() { return &____tagOption_13; }
	inline void set__tagOption_13(int32_t value)
	{
		____tagOption_13 = value;
	}

	inline static int32_t get_offset_of_currentDisplayWikiName_14() { return static_cast<int32_t>(offsetof(WeTagHandler_t1469443048, ___currentDisplayWikiName_14)); }
	inline String_t* get_currentDisplayWikiName_14() const { return ___currentDisplayWikiName_14; }
	inline String_t** get_address_of_currentDisplayWikiName_14() { return &___currentDisplayWikiName_14; }
	inline void set_currentDisplayWikiName_14(String_t* value)
	{
		___currentDisplayWikiName_14 = value;
		Il2CppCodeGenWriteBarrier(&___currentDisplayWikiName_14, value);
	}
};

struct WeTagHandler_t1469443048_StaticFields
{
public:
	// Vuforia.Image/PIXEL_FORMAT WeTagHandler::mPixelFormat
	int32_t ___mPixelFormat_4;

public:
	inline static int32_t get_offset_of_mPixelFormat_4() { return static_cast<int32_t>(offsetof(WeTagHandler_t1469443048_StaticFields, ___mPixelFormat_4)); }
	inline int32_t get_mPixelFormat_4() const { return ___mPixelFormat_4; }
	inline int32_t* get_address_of_mPixelFormat_4() { return &___mPixelFormat_4; }
	inline void set_mPixelFormat_4(int32_t value)
	{
		___mPixelFormat_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
