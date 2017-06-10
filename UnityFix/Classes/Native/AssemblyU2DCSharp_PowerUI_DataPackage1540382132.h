#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// PowerUI.FilePath
struct FilePath_t3025149829;
// System.Object
struct Il2CppObject;
// PowerUI.OnDataReady
struct OnDataReady_t2354628844;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.DataPackage
struct  DataPackage_t1540382132  : public Il2CppObject
{
public:
	// System.Byte[] PowerUI.DataPackage::Data
	ByteU5BU5D_t3397334013* ___Data_0;
	// System.String PowerUI.DataPackage::Error
	String_t* ___Error_1;
	// PowerUI.FilePath PowerUI.DataPackage::File
	FilePath_t3025149829 * ___File_2;
	// System.String PowerUI.DataPackage::FileType
	String_t* ___FileType_3;
	// System.Object PowerUI.DataPackage::ExtraData
	Il2CppObject * ___ExtraData_4;
	// PowerUI.OnDataReady PowerUI.DataPackage::Ready
	OnDataReady_t2354628844 * ___Ready_5;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(DataPackage_t1540382132, ___Data_0)); }
	inline ByteU5BU5D_t3397334013* get_Data_0() const { return ___Data_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(ByteU5BU5D_t3397334013* value)
	{
		___Data_0 = value;
		Il2CppCodeGenWriteBarrier(&___Data_0, value);
	}

	inline static int32_t get_offset_of_Error_1() { return static_cast<int32_t>(offsetof(DataPackage_t1540382132, ___Error_1)); }
	inline String_t* get_Error_1() const { return ___Error_1; }
	inline String_t** get_address_of_Error_1() { return &___Error_1; }
	inline void set_Error_1(String_t* value)
	{
		___Error_1 = value;
		Il2CppCodeGenWriteBarrier(&___Error_1, value);
	}

	inline static int32_t get_offset_of_File_2() { return static_cast<int32_t>(offsetof(DataPackage_t1540382132, ___File_2)); }
	inline FilePath_t3025149829 * get_File_2() const { return ___File_2; }
	inline FilePath_t3025149829 ** get_address_of_File_2() { return &___File_2; }
	inline void set_File_2(FilePath_t3025149829 * value)
	{
		___File_2 = value;
		Il2CppCodeGenWriteBarrier(&___File_2, value);
	}

	inline static int32_t get_offset_of_FileType_3() { return static_cast<int32_t>(offsetof(DataPackage_t1540382132, ___FileType_3)); }
	inline String_t* get_FileType_3() const { return ___FileType_3; }
	inline String_t** get_address_of_FileType_3() { return &___FileType_3; }
	inline void set_FileType_3(String_t* value)
	{
		___FileType_3 = value;
		Il2CppCodeGenWriteBarrier(&___FileType_3, value);
	}

	inline static int32_t get_offset_of_ExtraData_4() { return static_cast<int32_t>(offsetof(DataPackage_t1540382132, ___ExtraData_4)); }
	inline Il2CppObject * get_ExtraData_4() const { return ___ExtraData_4; }
	inline Il2CppObject ** get_address_of_ExtraData_4() { return &___ExtraData_4; }
	inline void set_ExtraData_4(Il2CppObject * value)
	{
		___ExtraData_4 = value;
		Il2CppCodeGenWriteBarrier(&___ExtraData_4, value);
	}

	inline static int32_t get_offset_of_Ready_5() { return static_cast<int32_t>(offsetof(DataPackage_t1540382132, ___Ready_5)); }
	inline OnDataReady_t2354628844 * get_Ready_5() const { return ___Ready_5; }
	inline OnDataReady_t2354628844 ** get_address_of_Ready_5() { return &___Ready_5; }
	inline void set_Ready_5(OnDataReady_t2354628844 * value)
	{
		___Ready_5 = value;
		Il2CppCodeGenWriteBarrier(&___Ready_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
