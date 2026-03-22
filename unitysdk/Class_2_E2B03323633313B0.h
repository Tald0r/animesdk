#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDDDDB46A99CFF4C.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"

#define CLASS_2_E2B03323633313B0_METHOD_2_9D455FE4693966A8_1_OFFSET UNITYSDK_OFFSET(0x63C0D40)
#define CLASS_2_E2B03323633313B0_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x63C0C60)
#define CLASS_2_E2B03323633313B0__CTOR_OFFSET UNITYSDK_OFFSET(0x63C0D00)

inline static constexpr unsigned int Class_2_E2B03323633313B0_TypeDefinitionIndex = 56031;

class Class_2_E2B03323633313B0 : public ::Class_1_BDDDDB46A99CFF4C
{
public:
	::System::Boolean Field_2_2; // 0x80
	::System::Single Field_2_1; // 0x84
	::System::Int32 Field_2_3; // 0x88
	::MoleMole::Config::CameraDelayMoveMode Field_2_0; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2B03323633313B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2B03323633313B0_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2B03323633313B0_METHOD_2_9D455FE4693966A8_1_OFFSET))(this);
	}
};
