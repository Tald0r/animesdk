#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_ObjectSwitch_Enum_3_5C23B5DA91D5C032.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_148;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTSWITCH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9D0EFF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x9D0F410)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ObjectSwitch_TypeDefinitionIndex = 63380;

	class ConfigSoundActionTriggerCondition_ObjectSwitch : public ::System::Object
	{
	public:
		::System::String* switchGroup; // 0x10
		::System::String* switchValue; // 0x18
		::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectSwitch_Enum_3_5C23B5DA91D5C032 matchMode; // 0x20
		::System::Boolean requireObject; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTSWITCH__CTOR_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_148* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTSWITCH_EVALUATE_OFFSET))(this, a1);
		}
	};
}
