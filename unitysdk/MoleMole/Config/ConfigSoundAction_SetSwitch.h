#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCD14F10)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_ISMATCH_OFFSET UNITYSDK_OFFSET(0xCD151B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0xCD152E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xCD152F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetSwitch_TypeDefinitionIndex = 44467;

	class ConfigSoundAction_SetSwitch : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* switchGroup; // 0x20
		::System::String* switchValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
