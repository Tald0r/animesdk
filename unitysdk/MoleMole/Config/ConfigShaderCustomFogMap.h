#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigShaderCustomBaseMap_1.h"

namespace MoleMole::Config { class ConfigShaderCustomFogItem; }

#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x950B960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShaderCustomFogMap_TypeDefinitionIndex = 77776;

	class ConfigShaderCustomFogMap : public ::MoleMole::Config::ConfigShaderCustomBaseMap_1<::MoleMole::Config::ConfigShaderCustomFogItem*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGMAP__CTOR_OFFSET))(this);
		}
	};
}
