#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0FC69F51F876980B_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C24B693A39FF0505_1_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0xF456B80)
#define CLASS_1_C24B693A39FF0505_1_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xF456BE0)
#define CLASS_1_C24B693A39FF0505_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF456C70)

inline static constexpr unsigned int Class_1_C24B693A39FF0505_1_TypeDefinitionIndex = 78280;

class Class_1_C24B693A39FF0505_1 : public ::System::Object
{
public:
	::Enum_3_0FC69F51F876980B_1 Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x14
	::System::Boolean Field_1_3; // 0x15
	::System::Int32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C24B693A39FF0505_1__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C24B693A39FF0505_1_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C24B693A39FF0505_1_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
