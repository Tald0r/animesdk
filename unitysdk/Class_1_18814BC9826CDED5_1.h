#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9A3C6D4059C90B52_Class_2_D5806CE5D74DA368_Enum_3_4864555094AB37B4.h"
#include "unitysdk/Class_2_9A3C6D4059C90B52_Class_2_D5806CE5D74DA368_Struct_2_60DF5983B5B82E09.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_18814BC9826CDED5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x7107500)

inline static constexpr unsigned int Class_1_18814BC9826CDED5_1_TypeDefinitionIndex = 73280;

class Class_1_18814BC9826CDED5_1 : public ::System::Object
{
public:
	::Class_2_9A3C6D4059C90B52_Class_2_D5806CE5D74DA368_Struct_2_60DF5983B5B82E09 Field_1_3; // 0x10
	::System::String* Field_1_1; // 0x28
	::System::String* Field_1_0; // 0x30
	::System::Int32 Field_1_2; // 0x38
	::Class_2_9A3C6D4059C90B52_Class_2_D5806CE5D74DA368_Enum_3_4864555094AB37B4 Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18814BC9826CDED5_1__CTOR_OFFSET))(this);
	}
};
