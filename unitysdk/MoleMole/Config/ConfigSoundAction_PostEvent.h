#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x141918C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x141918B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_ISEVENTNAMEHAVESPACE_OFFSET UNITYSDK_OFFSET(0x14191820)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x141920E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x14192180)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x14192190)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_PostEvent_TypeDefinitionIndex = 45339;

	class ConfigSoundAction_PostEvent : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* eventName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsEventNameHaveSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_ISEVENTNAMEHAVESPACE_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
