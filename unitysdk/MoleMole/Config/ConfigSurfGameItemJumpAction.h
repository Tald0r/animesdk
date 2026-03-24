#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

class Class_0_16E4307DCC419505_157;

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0xACCB210)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xACCB1A0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xACCB620)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION___BASE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xACCB630)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemJumpAction_TypeDefinitionIndex = 56084;

	class ConfigSurfGameItemJumpAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::System::Single HorizontalSpeed; // 0x10
		::System::Boolean SyncHorizonRotation; // 0x14
		::System::Single VerticalSpeed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION_EXECUTE_OFFSET))(this);
		}

		::System::Void Execute_1(::Class_0_16E4307DCC419505_157* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_157*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION_EXECUTE_1_OFFSET))(this, source);
		}

		::System::Void __base_Execute(::Class_0_16E4307DCC419505_157* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_157*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMJUMPACTION___BASE_EXECUTE_OFFSET))(this, P0);
		}
	};
}
