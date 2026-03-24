#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CDB6C405C8FD68_2.h"
#include "unitysdk/Struct_2_5C62813DFF896D4B_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_692EBA3BF9CC0F9E__CTOR_OFFSET UNITYSDK_OFFSET(0xAF54FE0)

inline static constexpr unsigned int Class_1_692EBA3BF9CC0F9E_TypeDefinitionIndex = 61858;

class Class_1_692EBA3BF9CC0F9E : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::Enum_3_63CDB6C405C8FD68_2 Field_1_0; // 0x1C
	::Struct_2_5C62813DFF896D4B_1 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_692EBA3BF9CC0F9E__CTOR_OFFSET))(this);
	}
};
