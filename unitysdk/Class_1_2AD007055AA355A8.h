#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_2AD007055AA355A8__CTOR_OFFSET UNITYSDK_OFFSET(0xDDE9D20)

inline static constexpr unsigned int Class_1_2AD007055AA355A8_TypeDefinitionIndex = 66512;

class Class_1_2AD007055AA355A8 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Single Field_1_4; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::System::Boolean Field_1_5; // 0x20
	::System::Boolean Field_1_6; // 0x21
	::System::Boolean Field_1_2; // 0x22
	::UnityEngine::Vector3 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AD007055AA355A8__CTOR_OFFSET))(this);
	}
};
