#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_64AF41BC9BBBF913.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C24B693A39FF0505__CTOR_OFFSET UNITYSDK_OFFSET(0x8345AD0)

inline static constexpr unsigned int Class_1_C24B693A39FF0505_TypeDefinitionIndex = 49622;

class Class_1_C24B693A39FF0505 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x14
	::Enum_3_64AF41BC9BBBF913 Field_1_3; // 0x15
	::System::Boolean Field_1_1; // 0x16
	::Enum_3_64AF41BC9BBBF913 Field_1_4; // 0x17

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C24B693A39FF0505__CTOR_OFFSET))(this);
	}
};
