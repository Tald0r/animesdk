#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"

#define CLASS_3_C287DAAD4C733A89__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC4CD0)

inline static constexpr unsigned int Class_3_C287DAAD4C733A89_TypeDefinitionIndex = 81349;

class Class_3_C287DAAD4C733A89 : public ::Class_2_A48F3719AA1CF200
{
public:
	::System::UInt32 Field_3_1; // 0x10
	::System::UInt32 Field_3_2; // 0x14
	::System::UInt32 Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C287DAAD4C733A89__CTOR_OFFSET))(this);
	}
};
