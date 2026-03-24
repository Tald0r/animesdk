#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_State_Enum_3_A84DEF6BF8C3DE72.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_148;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STATE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9D0F420)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D0F6B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_State_TypeDefinitionIndex = 44589;

	class ConfigSoundActionTriggerCondition_State : public ::System::Object
	{
	public:
		::System::String* stateGroup; // 0x10
		::System::String* stateValue; // 0x18
		::MoleMole::Config::ConfigSoundActionTriggerCondition_State_Enum_3_A84DEF6BF8C3DE72 matchMode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_148* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_STATE_EVALUATE_OFFSET))(this, a1);
		}
	};
}
