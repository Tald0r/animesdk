#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAutoBattleAccessoryEffect; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_A8D9A742F7AB118B_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0xBD9D140)
#define CLASS_1_A8D9A742F7AB118B_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0xBD9D030)
#define CLASS_1_A8D9A742F7AB118B_METHOD_1_A9BE66C3121D30F7_OFFSET UNITYSDK_OFFSET(0xBD9CFF0)
#define CLASS_1_A8D9A742F7AB118B__CTOR_OFFSET UNITYSDK_OFFSET(0xBD9CFE0)

inline static constexpr unsigned int Class_1_A8D9A742F7AB118B_TypeDefinitionIndex = 59092;

class Class_1_A8D9A742F7AB118B : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigAutoBattleAccessoryEffect** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigAutoBattleAccessoryEffect**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8D9A742F7AB118B_TypeDefinitionIndex)->GetStaticField(0x35BB0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8D9A742F7AB118B__CTOR_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigAutoBattleAccessoryEffect* Method_1_A9BE66C3121D30F7()
	{
		return ((::MoleMole::Config::ConfigAutoBattleAccessoryEffect*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8D9A742F7AB118B_METHOD_1_A9BE66C3121D30F7_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8D9A742F7AB118B_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A8D9A742F7AB118B_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};
