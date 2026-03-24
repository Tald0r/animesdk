#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMADDNITROACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEC4CFF0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMADDNITROACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xEC4D0F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemAddNitroAction_TypeDefinitionIndex = 65505;

	class ConfigSurfGameItemAddNitroAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::System::Single ModifyAmount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMADDNITROACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMADDNITROACTION_EXECUTE_OFFSET))(this);
		}
	};
}
