#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_168;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEC37DC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0xEC37D40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_ISMATCH_OFFSET UNITYSDK_OFFSET(0xEC388A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_WALK_OFFSET UNITYSDK_OFFSET(0xEC38960)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xEC38AB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xEC38AD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___BASE_WALK_OFFSET UNITYSDK_OFFSET(0xEC38AE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_OffsetPosition_TypeDefinitionIndex = 72539;

	class ConfigSoundAction_OffsetPosition : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x20
		::MoleMole::Config::ConfigSoundActionGeneral* actionOnComplete; // 0x28
		::DG::Tweening::Ease moveEase; // 0x30
		::System::Boolean createNewEmitter; // 0x34
		::System::Single moveDuration; // 0x38
		::UnityEngine::Vector3 offset; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_168* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_168*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
