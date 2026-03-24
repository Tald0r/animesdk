#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_40E2A6A9F92834DE;
namespace System { class String; }

#define CLASS_1_139BD906D483CDF7__CTOR_OFFSET UNITYSDK_OFFSET(0xB39E990)

inline static constexpr unsigned int Class_1_139BD906D483CDF7_TypeDefinitionIndex = 45824;

class Class_1_139BD906D483CDF7 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_3_40E2A6A9F92834DE* Field_1_8; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::System::Boolean Field_1_7; // 0x21
	::System::Int32 Field_1_1; // 0x24
	::System::Single Field_1_2; // 0x28
	::System::Boolean Field_1_4; // 0x2C
	::System::Boolean Field_1_5; // 0x2D
	::System::Boolean Field_1_6; // 0x2E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_139BD906D483CDF7__CTOR_OFFSET))(this);
	}
};
