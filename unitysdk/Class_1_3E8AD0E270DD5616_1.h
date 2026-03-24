#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_016039B84BEA53F4.h"
#include "unitysdk/System/Object.h"

class Class_3_85654BFA8514445B;

#define CLASS_1_3E8AD0E270DD5616_1__CTOR_OFFSET UNITYSDK_OFFSET(0x67C8F70)

inline static constexpr unsigned int Class_1_3E8AD0E270DD5616_1_TypeDefinitionIndex = 74266;

class Class_1_3E8AD0E270DD5616_1 : public ::System::Object
{
public:
	::Class_3_85654BFA8514445B* Field_1_0; // 0x10
	::Enum_3_016039B84BEA53F4 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E8AD0E270DD5616_1__CTOR_OFFSET))(this);
	}
};
