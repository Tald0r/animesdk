#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE436630)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_GETPLAYMIXDROPDOWN_OFFSET UNITYSDK_OFFSET(0xE436AB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xE436510)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_ISMATCH_OFFSET UNITYSDK_OFFSET(0xE436D00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX__CTOR_OFFSET UNITYSDK_OFFSET(0xE436E20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX__EXECUTEINTERNAL_OFFSET UNITYSDK_OFFSET(0xE436950)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xE436E30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xE436E40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_TogglePlayMix_TypeDefinitionIndex = 39833;

	class ConfigSoundAction_TogglePlayMix : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Single delayTime; // 0x20
		::System::Boolean isOn; // 0x24
		::System::Int32 playMix; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_EXECUTE_OFFSET))(this, context);
		}

		::System::Void _ExecuteInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX__EXECUTEINTERNAL_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* GetPlayMixDropDown()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_GETPLAYMIXDROPDOWN_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_ISMATCH_OFFSET))(this, pattern);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
