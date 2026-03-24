#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_148;

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RESETBGMCITYBGM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9194D40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RESETBGMCITYBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x9194F30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_ResetBGMCityBGM_TypeDefinitionIndex = 59890;

	class ConfigSoundAction_ResetBGMCityBGM : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RESETBGMCITYBGM__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_148* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RESETBGMCITYBGM_EXECUTE_OFFSET))(this, context);
		}
	};
}
