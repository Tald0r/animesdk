#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGKEYBOARDBINDINGSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0xCD08090)
#define MOLEMOLE_CONFIG_CONFIGKEYBOARDBINDINGSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xCD080A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigKeyboardBindingSetting_TypeDefinitionIndex = 68943;

	class ConfigKeyboardBindingSetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGKEYBOARDBINDINGSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGKEYBOARDBINDINGSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
