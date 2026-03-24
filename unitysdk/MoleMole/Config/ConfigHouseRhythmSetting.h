#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGHOUSERHYTHMSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0xCAE7280)
#define MOLEMOLE_CONFIG_CONFIGHOUSERHYTHMSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xCAE7290)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHouseRhythmSetting_TypeDefinitionIndex = 61558;

	class ConfigHouseRhythmSetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOUSERHYTHMSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOUSERHYTHMSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
