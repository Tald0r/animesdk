#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionIntending.h"

class Class_0_16E4307DCC419505_168;
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SWITCHACTION_BEGINSCOPE_OFFSET UNITYSDK_OFFSET(0xCC9B230)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SWITCHACTION_ENDSCOPE_OFFSET UNITYSDK_OFFSET(0xCC9B520)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SWITCHACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCC9BAB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SWITCHACTION_ISMATCH_OFFSET UNITYSDK_OFFSET(0xCC9BF80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SWITCHACTION_SETSCOPEVALUE_OFFSET UNITYSDK_OFFSET(0xCC9B820)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SWITCHACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xCC9C1C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SWITCHACTION___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xCC9C1D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SwitchAction_TypeDefinitionIndex = 66165;

	class ConfigSoundAction_SwitchAction : public ::MoleMole::Config::ConfigSoundActionIntending
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* defaultAction; // 0x20
		::System::String* scopeName; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>* switchActions; // 0x30
		::System::Boolean useDefaultScope; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SWITCHACTION__CTOR_OFFSET))(this);
		}

		::System::UInt32 BeginScope()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SWITCHACTION_BEGINSCOPE_OFFSET))(this);
		}

		::System::Void EndScope()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SWITCHACTION_ENDSCOPE_OFFSET))(this);
		}

		::System::Void SetScopeValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SWITCHACTION_SETSCOPEVALUE_OFFSET))(this, value);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SWITCHACTION_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SWITCHACTION_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SWITCHACTION___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
