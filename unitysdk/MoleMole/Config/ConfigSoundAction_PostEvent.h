#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_148;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBAFEFD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xBAFEFC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_ISEVENTNAMEHAVESPACE_OFFSET UNITYSDK_OFFSET(0xBAFEF30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_ISMATCH_OFFSET UNITYSDK_OFFSET(0xBAFF7E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBAFF880)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xBAFF890)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_PostEvent_TypeDefinitionIndex = 58240;

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

		::System::Void Execute(::Class_0_16E4307DCC419505_148* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_EXECUTE_OFFSET))(this, context);
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
