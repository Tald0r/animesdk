#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_168;
namespace MoleMole::Config { class ConfigSoundAction_DelayAction; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE434670)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__DISPLAYCLASS4_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0xE434680)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_DelayAction___c__DisplayClass4_0_TypeDefinitionIndex = 58218;

	class ConfigSoundAction_DelayAction___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigSoundAction_DelayAction* __4__this; // 0x10
		::Class_0_16E4307DCC419505_168* context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__DISPLAYCLASS4_0__EXECUTE_B__0_OFFSET))(this);
		}
	};
}
