#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterAimAutoTargeting.h"
#include "unitysdk/MoleMole/Config/CharacterAimSlowdown.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CHARACTERASSISTAIMCONFIG_MOLEMOLE_CONFIG_ICHARACTERASSISTAIMCONFIG_GET_LABEL_OFFSET UNITYSDK_OFFSET(0xBAEC760)
#define MOLEMOLE_CONFIG_CHARACTERASSISTAIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBAEC7F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAssistAimConfig_TypeDefinitionIndex = 46010;

	class CharacterAssistAimConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::CharacterAimSlowdown aimSlowdown; // 0x10
		::System::String* aimAssistTargetKey; // 0x30
		::MoleMole::Config::CharacterAimAutoTargeting aimAutoTargeting; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERASSISTAIMCONFIG__CTOR_OFFSET))(this);
		}

		::System::String* MoleMole_Config_ICharacterAssistAimConfig_get_Label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERASSISTAIMCONFIG_MOLEMOLE_CONFIG_ICHARACTERASSISTAIMCONFIG_GET_LABEL_OFFSET))(this);
		}
	};
}
