#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGamepadTriggerEffect; }
namespace System { class Action; }

#define CLASS_1_49C2FFEFE9990617_CLASS_1_B3866A84C38CC98E_METHOD_1_377FB45F292CE7C4_OFFSET UNITYSDK_OFFSET(0x7AC12E0)
#define CLASS_1_49C2FFEFE9990617_CLASS_1_B3866A84C38CC98E__CTOR_OFFSET UNITYSDK_OFFSET(0x7AC12D0)

inline static constexpr unsigned int Class_1_49C2FFEFE9990617_Class_1_B3866A84C38CC98E_TypeDefinitionIndex = 49812;

class Class_1_49C2FFEFE9990617_Class_1_B3866A84C38CC98E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49C2FFEFE9990617_CLASS_1_B3866A84C38CC98E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_377FB45F292CE7C4(::MoleMole::Config::ConfigGamepadTriggerEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGamepadTriggerEffect*))((::PBYTE)hIl2Cpp + CLASS_1_49C2FFEFE9990617_CLASS_1_B3866A84C38CC98E_METHOD_1_377FB45F292CE7C4_OFFSET))(this, a1);
	}
};
