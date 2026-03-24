#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_148;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x94EDC90)
#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x94F72F0)
#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x94F7220)
#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x94F7230)
#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_SHOWLOG_OFFSET UNITYSDK_OFFSET(0x94F75A0)
#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_TESTSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x94F73B0)
#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x94F7640)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BaseConfigSoundAction_TypeDefinitionIndex = 39277;

	class BaseConfigSoundAction : public ::System::Object
	{
	public:
		::System::String* _ParamHint_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_EXECUTE_OFFSET))(this);
		}

		::System::Void TestSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_TESTSOUNDACTION_OFFSET))(this);
		}

		::System::Void Execute_1(::UnityEngine::GameObject* gameObject, ::System::String* sourceHint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_EXECUTE_1_OFFSET))(this, gameObject, sourceHint);
		}

		::System::Void ShowLog(::Class_0_16E4307DCC419505_148* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_148*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_SHOWLOG_OFFSET))(this, context);
		}
	};
}
