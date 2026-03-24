#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5B461AA5B626CCC4.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_1.h"
#include "unitysdk/System/Object.h"

class Class_3_00D9F8D189C6D68A_2;

#define CLASS_1_6D6D57236F24B8FC__CTOR_OFFSET UNITYSDK_OFFSET(0xBD073B0)

inline static constexpr unsigned int Class_1_6D6D57236F24B8FC_TypeDefinitionIndex = 69136;

class Class_1_6D6D57236F24B8FC : public ::System::Object
{
public:
	::Class_3_00D9F8D189C6D68A_2* Field_1_2; // 0x10
	::Class_3_00D9F8D189C6D68A_2* Field_1_3; // 0x18
	::Enum_3_5B461AA5B626CCC4 Field_1_1; // 0x20
	::Enum_3_F80BFD5B986D5503_1 Field_1_0; // 0x24
	::System::Boolean Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D6D57236F24B8FC__CTOR_OFFSET))(this);
	}
};
