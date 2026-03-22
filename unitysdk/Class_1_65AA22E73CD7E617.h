#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/System/Object.h"

class Class_1_1EB8C469AAE7B7DE;
namespace MoleMole { class UIWidgetController; }
namespace System { class String; }

#define CLASS_1_65AA22E73CD7E617_METHOD_1_02258CDBA920609F_OFFSET UNITYSDK_OFFSET(0x738A7B0)
#define CLASS_1_65AA22E73CD7E617_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x738A740)
#define CLASS_1_65AA22E73CD7E617__CTOR_OFFSET UNITYSDK_OFFSET(0x738A730)

inline static constexpr unsigned int Class_1_65AA22E73CD7E617_TypeDefinitionIndex = 59736;

class Class_1_65AA22E73CD7E617 : public ::System::Object
{
public:
	::MoleMole::UIWidgetController* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18
	::Enum_3_B90C1A15EA6E3C2B Field_1_0; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_65AA22E73CD7E617__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_1EB8C469AAE7B7DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EB8C469AAE7B7DE*))((::PBYTE)hIl2Cpp + CLASS_1_65AA22E73CD7E617_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::MoleMole::UIWidgetController* Method_1_02258CDBA920609F()
	{
		return ((::MoleMole::UIWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65AA22E73CD7E617_METHOD_1_02258CDBA920609F_OFFSET))(this);
	}
};
