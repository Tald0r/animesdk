#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RESETBGMCITYBGM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x139A29C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RESETBGMCITYBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x139A2BB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_ResetBGMCityBGM_TypeDefinitionIndex = 37447;

	class ConfigSoundAction_ResetBGMCityBGM : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RESETBGMCITYBGM__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RESETBGMCITYBGM_EXECUTE_OFFSET))(this, context);
		}
	};
}
