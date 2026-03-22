#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE434790)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xE434710)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT_ISMATCH_OFFSET UNITYSDK_OFFSET(0xE434A50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE434B70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xE434B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_PostCustomEvent_TypeDefinitionIndex = 51961;

	class ConfigSoundAction_PostCustomEvent : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Int32 customSoundID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTCUSTOMEVENT___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
