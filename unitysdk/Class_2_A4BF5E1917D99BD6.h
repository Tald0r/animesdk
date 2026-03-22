#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"
#include "unitysdk/Enum_3_8BCADA94C62B0AD5.h"

#define CLASS_2_A4BF5E1917D99BD6__CTOR_OFFSET UNITYSDK_OFFSET(0x192220C0)

inline static constexpr unsigned int Class_2_A4BF5E1917D99BD6_TypeDefinitionIndex = 80084;

class Class_2_A4BF5E1917D99BD6 : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::Int32 Field_2_3; // 0x20
	::System::Int32 Field_2_1; // 0x24
	::System::UInt32 Field_2_0; // 0x28
	::Enum_3_8BCADA94C62B0AD5 Field_2_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4BF5E1917D99BD6__CTOR_OFFSET))(this);
	}
};
