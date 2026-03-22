#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_14A686300340FFB9_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x78328A0)
#define CLASS_1_14A686300340FFB9_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x7832AA0)
#define CLASS_1_14A686300340FFB9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x78327C0)
#define CLASS_1_14A686300340FFB9__CTOR_OFFSET UNITYSDK_OFFSET(0x78327D0)

inline static constexpr unsigned int Class_1_14A686300340FFB9_TypeDefinitionIndex = 70629;

class Class_1_14A686300340FFB9 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x14
	::System::Boolean Field_1_1; // 0x15
	::System::Boolean Field_1_3; // 0x16

	::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14A686300340FFB9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14A686300340FFB9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14A686300340FFB9_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14A686300340FFB9_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
