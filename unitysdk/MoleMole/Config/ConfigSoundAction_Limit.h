#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_148;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB09D000)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xB09CEE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_ISMATCH_OFFSET UNITYSDK_OFFSET(0xB09D130)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_RESETLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0xB09CF90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_WALK_OFFSET UNITYSDK_OFFSET(0xB09D1D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT__CTOR_OFFSET UNITYSDK_OFFSET(0xB09D310)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xB09D320)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xB09D330)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT___BASE_WALK_OFFSET UNITYSDK_OFFSET(0xB09D340)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Limit_TypeDefinitionIndex = 53063;

	class ConfigSoundAction_Limit : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x20
		::System::Int32 executedCount; // 0x28
		::System::Int32 limitCount; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void ResetLimitCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_RESETLIMITCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_148* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT_WALK_OFFSET))(this, callback);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_LIMIT___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
