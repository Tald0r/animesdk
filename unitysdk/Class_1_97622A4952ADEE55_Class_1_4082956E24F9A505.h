#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFlowerShopActivityScriptableObject; }
namespace System { class Action; }

#define CLASS_1_97622A4952ADEE55_CLASS_1_4082956E24F9A505_METHOD_1_3DA8B006E56E635A_OFFSET UNITYSDK_OFFSET(0xC530D90)
#define CLASS_1_97622A4952ADEE55_CLASS_1_4082956E24F9A505__CTOR_OFFSET UNITYSDK_OFFSET(0xC530BB0)

inline static constexpr unsigned int Class_1_97622A4952ADEE55_Class_1_4082956E24F9A505_TypeDefinitionIndex = 63624;

class Class_1_97622A4952ADEE55_Class_1_4082956E24F9A505 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97622A4952ADEE55_CLASS_1_4082956E24F9A505__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3DA8B006E56E635A(::MoleMole::Config::ConfigFlowerShopActivityScriptableObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*))((::PBYTE)hIl2Cpp + CLASS_1_97622A4952ADEE55_CLASS_1_4082956E24F9A505_METHOD_1_3DA8B006E56E635A_OFFSET))(this, a1);
	}
};
