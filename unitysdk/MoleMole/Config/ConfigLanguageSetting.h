#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGLANGUAGESETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x15EB4790)
#define MOLEMOLE_CONFIG_CONFIGLANGUAGESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB47A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLanguageSetting_TypeDefinitionIndex = 78960;

	class ConfigLanguageSetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLANGUAGESETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLANGUAGESETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
