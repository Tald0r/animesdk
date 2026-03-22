#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;
namespace MoleMole::Config { class ConfigSoundAction_RtpcBranch_BranchOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEC39200)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_ISMATCH_OFFSET UNITYSDK_OFFSET(0xEC39860)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_WALK_OFFSET UNITYSDK_OFFSET(0xEC39A30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0xEC39C60)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xEC39C70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH___BASE_WALK_OFFSET UNITYSDK_OFFSET(0xEC39C80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RtpcBranch_TypeDefinitionIndex = 55962;

	class ConfigSoundAction_RtpcBranch : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundAction_RtpcBranch_BranchOperation*>* branchList; // 0x20
		::System::String* rtpcName; // 0x28
		::System::Boolean useGlobal; // 0x30
		::System::Single defaultValue; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RTPCBRANCH___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
