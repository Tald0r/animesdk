#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEC37A70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xEC37A00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xEC37C80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0xEC37D20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xEC37D30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_ClearScope_TypeDefinitionIndex = 66736;

	class ConfigSoundAction_ClearScope : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* scopeName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
