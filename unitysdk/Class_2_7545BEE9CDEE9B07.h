#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3C9F4C483434A11E.h"
#include "unitysdk/Enum_3_666E754D53594667.h"
#include "unitysdk/Enum_3_8C789BDFE3338D17.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_7545BEE9CDEE9B07__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0A25D0)

inline static constexpr unsigned int Class_2_7545BEE9CDEE9B07_TypeDefinitionIndex = 25779;

class Class_2_7545BEE9CDEE9B07 : public ::System::Attribute
{
public:
	::System::String* Field_2_2; // 0x10
	::Enum_3_8C789BDFE3338D17 Field_2_5; // 0x18
	::Enum_3_8C789BDFE3338D17 Field_2_4; // 0x1C
	::Enum_3_8C789BDFE3338D17 Field_2_3; // 0x20
	::Enum_3_666E754D53594667 Field_2_0; // 0x24
	::Enum_3_3C9F4C483434A11E Field_2_1; // 0x26

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7545BEE9CDEE9B07__CTOR_OFFSET))(this);
	}
};
