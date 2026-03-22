#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0FC69F51F876980B.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C24B693A39FF0505_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0xD72AC10)
#define CLASS_1_C24B693A39FF0505_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xD72AC70)
#define CLASS_1_C24B693A39FF0505__CTOR_OFFSET UNITYSDK_OFFSET(0xD72AD00)

inline static constexpr unsigned int Class_1_C24B693A39FF0505_TypeDefinitionIndex = 49914;

class Class_1_C24B693A39FF0505 : public ::System::Object
{
public:
	::System::Int32 Field_1_2; // 0x10
	::Enum_3_0FC69F51F876980B Field_1_0; // 0x14
	::System::Boolean Field_1_3; // 0x18
	::System::Boolean Field_1_1; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C24B693A39FF0505__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C24B693A39FF0505_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C24B693A39FF0505_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
