#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_18814BC9826CDED5_1_Enum_3_4FDDEF7485846811.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_18814BC9826CDED5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8A21150)

inline static constexpr unsigned int Class_1_18814BC9826CDED5_1_TypeDefinitionIndex = 65003;

class Class_1_18814BC9826CDED5_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_18814BC9826CDED5_1_Enum_3_4FDDEF7485846811 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18814BC9826CDED5_1__CTOR_OFFSET))(this);
	}
};
