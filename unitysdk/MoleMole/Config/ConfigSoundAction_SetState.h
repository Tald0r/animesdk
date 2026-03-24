#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_148;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10A9FC90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x10A9FB50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x10A9FEA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_ISNOTGAMEPLAYMIX_OFFSET UNITYSDK_OFFSET(0x10A9FBF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x10A9FFD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x10A9FFF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x10AA0000)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetState_TypeDefinitionIndex = 58538;

	class ConfigSoundAction_SetState : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* stateGroup; // 0x20
		::System::String* stateValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean IsNotGameplayMix(::System::String* stateGroup)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_ISNOTGAMEPLAYMIX_OFFSET))(this, stateGroup);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_148* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
