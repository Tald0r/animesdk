#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CDB6C405C8FD68_2.h"
#include "unitysdk/Struct_2_3969D2A8143AFE2A.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_692EBA3BF9CC0F9E__CTOR_OFFSET UNITYSDK_OFFSET(0x746E910)

inline static constexpr unsigned int Class_1_692EBA3BF9CC0F9E_TypeDefinitionIndex = 37492;

class Class_1_692EBA3BF9CC0F9E : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::Struct_2_3969D2A8143AFE2A Field_1_1; // 0x1C
	::Enum_3_63CDB6C405C8FD68_2 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_692EBA3BF9CC0F9E__CTOR_OFFSET))(this);
	}
};
