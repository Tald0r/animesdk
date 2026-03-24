#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6140430CE1FE631F.h"

class Class_0_16E4307DCC419505_197;

#define CLASS_3_45C27B68B1B4AA86_METHOD_3_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0xAE78040)
#define CLASS_3_45C27B68B1B4AA86_METHOD_3_EC5AF9232853FA6E_OFFSET UNITYSDK_OFFSET(0xAE78270)
#define CLASS_3_45C27B68B1B4AA86__CTOR_OFFSET UNITYSDK_OFFSET(0xAE784F0)

inline static constexpr unsigned int Class_3_45C27B68B1B4AA86_TypeDefinitionIndex = 48099;

class Class_3_45C27B68B1B4AA86 : public ::Class_2_6140430CE1FE631F
{
public:
	::System::Int32 Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_45C27B68B1B4AA86__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_45C27B68B1B4AA86_METHOD_3_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Void Method_3_EC5AF9232853FA6E(::Class_0_16E4307DCC419505_197* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + CLASS_3_45C27B68B1B4AA86_METHOD_3_EC5AF9232853FA6E_OFFSET))(this, a1);
	}
};
