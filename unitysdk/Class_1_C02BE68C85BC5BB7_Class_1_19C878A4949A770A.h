#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_481365F4B6FDAB37.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_C02BE68C85BC5BB7_CLASS_1_19C878A4949A770A_METHOD_1_A7632F9B359ACB65_OFFSET UNITYSDK_OFFSET(0x7AE86C0)
#define CLASS_1_C02BE68C85BC5BB7_CLASS_1_19C878A4949A770A__CTOR_OFFSET UNITYSDK_OFFSET(0x7AE86B0)

inline static constexpr unsigned int Class_1_C02BE68C85BC5BB7_Class_1_19C878A4949A770A_TypeDefinitionIndex = 62659;

class Class_1_C02BE68C85BC5BB7_Class_1_19C878A4949A770A : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_4; // 0x10
	::System::Action* Field_1_3; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_1; // 0x24
	::System::Single Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C02BE68C85BC5BB7_CLASS_1_19C878A4949A770A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A7632F9B359ACB65(::Enum_3_481365F4B6FDAB37 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_481365F4B6FDAB37))((::PBYTE)hIl2Cpp + CLASS_1_C02BE68C85BC5BB7_CLASS_1_19C878A4949A770A_METHOD_1_A7632F9B359ACB65_OFFSET))(this, a1);
	}
};
