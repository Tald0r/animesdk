#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGRHYTHMACTIVITYSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x1399D940)
#define MOLEMOLE_CONFIG_CONFIGRHYTHMACTIVITYSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1399D950)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRhythmActivitySetting_TypeDefinitionIndex = 65833;

	class ConfigRhythmActivitySetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGRHYTHMACTIVITYSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGRHYTHMACTIVITYSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
