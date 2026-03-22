#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"

#define CLASS_3_AD536C0F531937C4_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5EC3D0)

inline static constexpr unsigned int Class_3_AD536C0F531937C4_3_TypeDefinitionIndex = 79346;

class Class_3_AD536C0F531937C4_3 : public ::Class_2_A48F3719AA1CF200
{
public:
	::System::UInt32 Field_3_5; // 0x10
	::System::UInt32 Field_3_4; // 0x14
	::System::UInt64 Field_3_1; // 0x18
	::System::UInt64 Field_3_3; // 0x20
	::System::UInt64 Field_3_2; // 0x28
	::System::UInt64 Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD536C0F531937C4_3__CTOR_OFFSET))(this);
	}
};
