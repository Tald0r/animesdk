#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_2_D20AEF51FFA59F87__CTOR_OFFSET UNITYSDK_OFFSET(0x9B6AE40)

inline static constexpr unsigned int Class_2_D20AEF51FFA59F87_TypeDefinitionIndex = 40725;

class Class_2_D20AEF51FFA59F87 : public ::Class_1_83665B095F1535B5_2
{
public:
	::System::Single Field_2_3; // 0x18
	::System::Single Field_2_2; // 0x1C
	::UnityEngine::Color Field_2_0; // 0x20
	::UnityEngine::Vector2 Field_2_1; // 0x30
	::System::Boolean Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D20AEF51FFA59F87__CTOR_OFFSET))(this);
	}
};
