#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_5.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_2_E66E0476299305E7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x75FFC50)

inline static constexpr unsigned int Class_2_E66E0476299305E7_1_TypeDefinitionIndex = 77110;

class Class_2_E66E0476299305E7_1 : public ::Class_1_83665B095F1535B5_5
{
public:
	::UnityEngine::Vector2 Field_2_3; // 0x18
	::System::Single Field_2_2; // 0x20
	::System::Single Field_2_4; // 0x24
	::System::Single Field_2_1; // 0x28
	::System::Single Field_2_0; // 0x2C
	::System::Single Field_2_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E66E0476299305E7_1__CTOR_OFFSET))(this);
	}
};
