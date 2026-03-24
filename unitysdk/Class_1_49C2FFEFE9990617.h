#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGamepadTriggerEffect; }
namespace MoleMole::Config { class GamepadTriggerEffectEntryBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_49C2FFEFE9990617_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x778B980)
#define CLASS_1_49C2FFEFE9990617_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x778B870)
#define CLASS_1_49C2FFEFE9990617_METHOD_1_BA6735C69AF07D02_OFFSET UNITYSDK_OFFSET(0x778B6A0)
#define CLASS_1_49C2FFEFE9990617_METHOD_1_D8026A9405D58FB4_OFFSET UNITYSDK_OFFSET(0x778BBC0)

inline static constexpr unsigned int Class_1_49C2FFEFE9990617_TypeDefinitionIndex = 49810;

class Class_1_49C2FFEFE9990617 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGamepadTriggerEffect** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigGamepadTriggerEffect**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49C2FFEFE9990617_TypeDefinitionIndex)->GetStaticField(0x3ABF0);
	}

	static ::MoleMole::Config::GamepadTriggerEffectEntryBase* Method_1_BA6735C69AF07D02(::System::String* a1)
	{
		return ((::MoleMole::Config::GamepadTriggerEffectEntryBase*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_49C2FFEFE9990617_METHOD_1_BA6735C69AF07D02_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_49C2FFEFE9990617_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_49C2FFEFE9990617_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigGamepadTriggerEffect* Method_1_D8026A9405D58FB4()
	{
		return ((::MoleMole::Config::ConfigGamepadTriggerEffect*(*)())((::PBYTE)hIl2Cpp + CLASS_1_49C2FFEFE9990617_METHOD_1_D8026A9405D58FB4_OFFSET))();
	}
};
