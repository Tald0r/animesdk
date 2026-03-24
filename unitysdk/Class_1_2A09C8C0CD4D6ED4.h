#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CFB906B6E14BD020.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2A09C8C0CD4D6ED4__CTOR_OFFSET UNITYSDK_OFFSET(0xAEE7F80)

inline static constexpr unsigned int Class_1_2A09C8C0CD4D6ED4_TypeDefinitionIndex = 63198;

class Class_1_2A09C8C0CD4D6ED4 : public ::System::Object
{
public:
	::Enum_3_CFB906B6E14BD020 Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x14
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A09C8C0CD4D6ED4__CTOR_OFFSET))(this);
	}
};
