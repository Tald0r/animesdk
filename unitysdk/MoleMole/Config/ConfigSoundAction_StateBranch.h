#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEC39D40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xEC39D30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_ISMATCH_OFFSET UNITYSDK_OFFSET(0xEC3A090)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_WALK_OFFSET UNITYSDK_OFFSET(0xEC3A2D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0xEC3A540)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xEC3A550)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH___BASE_WALK_OFFSET UNITYSDK_OFFSET(0xEC3A560)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_StateBranch_TypeDefinitionIndex = 54748;

	class ConfigSoundAction_StateBranch : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* stateGroup; // 0x20
		::System::String* _curStateValue; // 0x28
		::MoleMole::Config::ConfigSoundActionGeneral* defaultAction; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>* branchActions; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
