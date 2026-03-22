#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class Class_0_16E4307DCC419505_168;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE435CD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xE435B60)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xE436090)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_WALK_OFFSET UNITYSDK_OFFSET(0xE436210)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xE436430)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE___BASE_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xE436440)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xE436450)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE___BASE_WALK_OFFSET UNITYSDK_OFFSET(0xE436460)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Sequence_TypeDefinitionIndex = 47191;

	class ConfigSoundAction_Sequence : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSoundActionGeneral*>* actions; // 0x20
		::System::Int32 _currentActionIndex; // 0x28
		::System::Boolean notParallel; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_WALK_OFFSET))(this, callback);
		}

		::System::String* __base_get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE___BASE_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
