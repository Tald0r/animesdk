#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_B3898DED935A17C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF8E400)

inline static constexpr unsigned int Class_2_B3898DED935A17C8_TypeDefinitionIndex = 9326;

class Class_2_B3898DED935A17C8 : public ::System::Exception
{
public:
	::System::String* Field_2_0; // 0x88
	::System::String* Field_2_1; // 0x90

	::System::Void _ctor(::Class_0_16E4307DCC419505_7* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B3898DED935A17C8__CTOR_OFFSET))(this, a1, a2);
	}
};
