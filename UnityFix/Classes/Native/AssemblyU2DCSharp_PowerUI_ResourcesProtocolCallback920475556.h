#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_Callback3120320591.h"

// PowerUI.FilePath
struct FilePath_t3025149829;
// PowerUI.TextPackage
struct TextPackage_t1046029955;
// PowerUI.DataPackage
struct DataPackage_t1540382132;
// PowerUI.ImagePackage
struct ImagePackage_t3498155007;
// PowerUI.FileProtocol
struct FileProtocol_t4042906266;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.ResourcesProtocolCallback
struct  ResourcesProtocolCallback_t920475556  : public Callback_t3120320591
{
public:
	// PowerUI.FilePath PowerUI.ResourcesProtocolCallback::Path
	FilePath_t3025149829 * ___Path_1;
	// PowerUI.TextPackage PowerUI.ResourcesProtocolCallback::Text
	TextPackage_t1046029955 * ___Text_2;
	// PowerUI.DataPackage PowerUI.ResourcesProtocolCallback::Data
	DataPackage_t1540382132 * ___Data_3;
	// PowerUI.ImagePackage PowerUI.ResourcesProtocolCallback::Images
	ImagePackage_t3498155007 * ___Images_4;
	// PowerUI.FileProtocol PowerUI.ResourcesProtocolCallback::Protocol
	FileProtocol_t4042906266 * ___Protocol_5;

public:
	inline static int32_t get_offset_of_Path_1() { return static_cast<int32_t>(offsetof(ResourcesProtocolCallback_t920475556, ___Path_1)); }
	inline FilePath_t3025149829 * get_Path_1() const { return ___Path_1; }
	inline FilePath_t3025149829 ** get_address_of_Path_1() { return &___Path_1; }
	inline void set_Path_1(FilePath_t3025149829 * value)
	{
		___Path_1 = value;
		Il2CppCodeGenWriteBarrier(&___Path_1, value);
	}

	inline static int32_t get_offset_of_Text_2() { return static_cast<int32_t>(offsetof(ResourcesProtocolCallback_t920475556, ___Text_2)); }
	inline TextPackage_t1046029955 * get_Text_2() const { return ___Text_2; }
	inline TextPackage_t1046029955 ** get_address_of_Text_2() { return &___Text_2; }
	inline void set_Text_2(TextPackage_t1046029955 * value)
	{
		___Text_2 = value;
		Il2CppCodeGenWriteBarrier(&___Text_2, value);
	}

	inline static int32_t get_offset_of_Data_3() { return static_cast<int32_t>(offsetof(ResourcesProtocolCallback_t920475556, ___Data_3)); }
	inline DataPackage_t1540382132 * get_Data_3() const { return ___Data_3; }
	inline DataPackage_t1540382132 ** get_address_of_Data_3() { return &___Data_3; }
	inline void set_Data_3(DataPackage_t1540382132 * value)
	{
		___Data_3 = value;
		Il2CppCodeGenWriteBarrier(&___Data_3, value);
	}

	inline static int32_t get_offset_of_Images_4() { return static_cast<int32_t>(offsetof(ResourcesProtocolCallback_t920475556, ___Images_4)); }
	inline ImagePackage_t3498155007 * get_Images_4() const { return ___Images_4; }
	inline ImagePackage_t3498155007 ** get_address_of_Images_4() { return &___Images_4; }
	inline void set_Images_4(ImagePackage_t3498155007 * value)
	{
		___Images_4 = value;
		Il2CppCodeGenWriteBarrier(&___Images_4, value);
	}

	inline static int32_t get_offset_of_Protocol_5() { return static_cast<int32_t>(offsetof(ResourcesProtocolCallback_t920475556, ___Protocol_5)); }
	inline FileProtocol_t4042906266 * get_Protocol_5() const { return ___Protocol_5; }
	inline FileProtocol_t4042906266 ** get_address_of_Protocol_5() { return &___Protocol_5; }
	inline void set_Protocol_5(FileProtocol_t4042906266 * value)
	{
		___Protocol_5 = value;
		Il2CppCodeGenWriteBarrier(&___Protocol_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
