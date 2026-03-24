#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_83C56BD9A06FA6EA.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_303;

#define CLASS_1_85D2C122520A4ADB_METHOD_1_2D360A000B94EAAE_OFFSET UNITYSDK_OFFSET(0x7684160)
#define CLASS_1_85D2C122520A4ADB_METHOD_1_72112191763F9A6A_1_OFFSET UNITYSDK_OFFSET(0x7684080)
#define CLASS_1_85D2C122520A4ADB_METHOD_1_72112191763F9A6A_2_OFFSET UNITYSDK_OFFSET(0x76840F0)
#define CLASS_1_85D2C122520A4ADB_METHOD_1_72112191763F9A6A_OFFSET UNITYSDK_OFFSET(0x7684010)
#define CLASS_1_85D2C122520A4ADB__CTOR_OFFSET UNITYSDK_OFFSET(0x7683FF0)

inline static constexpr unsigned int Class_1_85D2C122520A4ADB_TypeDefinitionIndex = 71044;

class Class_1_85D2C122520A4ADB : public ::System::Object
{
public:
	::Struct_2_83C56BD9A06FA6EA Field_1_0; // 0x10

	::System::Void _ctor(::Struct_2_83C56BD9A06FA6EA& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_83C56BD9A06FA6EA&))((::PBYTE)hIl2Cpp + CLASS_1_85D2C122520A4ADB__CTOR_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Single> Method_1_72112191763F9A6A()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85D2C122520A4ADB_METHOD_1_72112191763F9A6A_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> Method_1_72112191763F9A6A_1()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85D2C122520A4ADB_METHOD_1_72112191763F9A6A_1_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> Method_1_72112191763F9A6A_2()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85D2C122520A4ADB_METHOD_1_72112191763F9A6A_2_OFFSET))(this);
	}

	::System::Void Method_1_2D360A000B94EAAE(::Class_0_16E4307DCC419505_303* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_303*))((::PBYTE)hIl2Cpp + CLASS_1_85D2C122520A4ADB_METHOD_1_2D360A000B94EAAE_OFFSET))(this, a1);
	}
};
