#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_Scope_Enum_3_D94E26F8503C897B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_148;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC23D140)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0xC23D390)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_Scope_TypeDefinitionIndex = 68805;

	class ConfigSoundActionTriggerCondition_Scope : public ::System::Object
	{
	public:
		::System::String* scopeName; // 0x10
		::System::String* scopeValue; // 0x18
		::MoleMole::Config::ConfigSoundActionTriggerCondition_Scope_Enum_3_D94E26F8503C897B matchMode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPE__CTOR_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_148* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPE_EVALUATE_OFFSET))(this, a1);
		}
	};
}
