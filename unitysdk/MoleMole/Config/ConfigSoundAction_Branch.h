#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCDB8BF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xCDB8B30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_ISMATCH_OFFSET UNITYSDK_OFFSET(0xCDB9020)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_WALK_OFFSET UNITYSDK_OFFSET(0xCDB9230)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0xCDB94A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xCDB94B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xCDB94C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_WALK_OFFSET UNITYSDK_OFFSET(0xCDB94D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Branch_TypeDefinitionIndex = 52007;

	class ConfigSoundAction_Branch : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::String* _curScopeValue; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>* branchActions; // 0x28
		::System::String* scopeName; // 0x30
		::MoleMole::Config::ConfigSoundActionGeneral* defaultAction; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_WALK_OFFSET))(this, callback);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
