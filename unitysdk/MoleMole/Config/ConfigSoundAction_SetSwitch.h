#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_148;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE36D430)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_ISMATCH_OFFSET UNITYSDK_OFFSET(0xE36D6D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0xE36D800)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xE36D810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetSwitch_TypeDefinitionIndex = 52294;

	class ConfigSoundAction_SetSwitch : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* switchValue; // 0x20
		::System::String* switchGroup; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_148* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSWITCH_EXECUTE_OFFSET))(this, context);
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
