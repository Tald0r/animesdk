#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x970EAD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x970EA00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x970ED20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x970EDD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x970EDE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x970EDF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Post2DEvent_TypeDefinitionIndex = 72176;

	class ConfigSoundAction_Post2DEvent : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Int32 defaultSoundID; // 0x20
		::System::Int32 customSoundID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
