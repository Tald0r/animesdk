#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

class Class_0_16E4307DCC419505_157;
namespace MoleMole::Config { class ConfigSurfGameItemPredicate; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x81F2640)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x81F2560)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_INTERNALEXECUTE_OFFSET UNITYSDK_OFFSET(0x81F26E0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x81F27B0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS___BASE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x81F27C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemSwitchActions_TypeDefinitionIndex = 71982;

	class ConfigSurfGameItemSwitchActions : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::MoleMole::Config::ConfigSurfGameItemPredicate* Predicate; // 0x10
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* FalseActions; // 0x18
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* TrueActions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_EXECUTE_OFFSET))(this);
		}

		::System::Void Execute_1(::Class_0_16E4307DCC419505_157* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_157*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_EXECUTE_1_OFFSET))(this, source);
		}

		::System::Void InternalExecute(::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* actions, ::Class_0_16E4307DCC419505_157* source)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>*, ::Class_0_16E4307DCC419505_157*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_INTERNALEXECUTE_OFFSET))(this, actions, source);
		}

		::System::Void __base_Execute(::Class_0_16E4307DCC419505_157* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_157*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS___BASE_EXECUTE_OFFSET))(this, P0);
		}
	};
}
