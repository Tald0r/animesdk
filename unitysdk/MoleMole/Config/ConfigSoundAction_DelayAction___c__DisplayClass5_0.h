#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_148;
namespace MoleMole::Config { class ConfigSoundAction_DelayAction; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x950BB20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__DISPLAYCLASS5_0__EXECUTEANDENDSCOPE_B__0_OFFSET UNITYSDK_OFFSET(0x950BB30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_DelayAction___c__DisplayClass5_0_TypeDefinitionIndex = 42947;

	class ConfigSoundAction_DelayAction___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_148* context; // 0x10
		::MoleMole::Config::ConfigSoundAction_DelayAction* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteAndEndScope_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__DISPLAYCLASS5_0__EXECUTEANDENDSCOPE_B__0_OFFSET))(this);
		}
	};
}
