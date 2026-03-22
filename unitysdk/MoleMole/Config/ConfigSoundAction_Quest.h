#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8A06870)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_ISMATCH_OFFSET UNITYSDK_OFFSET(0x8A06AC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_WALK_OFFSET UNITYSDK_OFFSET(0x8A06C90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x8A06DD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x8A06DE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x8A06DF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Quest_TypeDefinitionIndex = 41096;

	class ConfigSoundAction_Quest : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* questIds; // 0x20
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
