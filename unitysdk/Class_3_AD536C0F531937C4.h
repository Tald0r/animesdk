#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"

#define CLASS_3_AD536C0F531937C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1BF090)

inline static constexpr unsigned int Class_3_AD536C0F531937C4_TypeDefinitionIndex = 25812;

class Class_3_AD536C0F531937C4 : public ::Class_2_A48F3719AA1CF200
{
public:
	::System::UInt32 Field_3_0; // 0x10
	::System::UInt64 Field_3_3; // 0x18
	::System::UInt32 Field_3_1; // 0x20
	::System::UInt32 Field_3_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD536C0F531937C4__CTOR_OFFSET))(this);
	}
};
