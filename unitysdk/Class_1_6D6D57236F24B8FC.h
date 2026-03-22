#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A850FEC42C5E8043.h"
#include "unitysdk/System/Object.h"

class Class_3_0D91E5D723663FA4;

#define CLASS_1_6D6D57236F24B8FC__CTOR_OFFSET UNITYSDK_OFFSET(0x699D9A0)

inline static constexpr unsigned int Class_1_6D6D57236F24B8FC_TypeDefinitionIndex = 74595;

class Class_1_6D6D57236F24B8FC : public ::System::Object
{
public:
	::Class_3_0D91E5D723663FA4* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::Enum_3_A850FEC42C5E8043 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D6D57236F24B8FC__CTOR_OFFSET))(this);
	}
};
