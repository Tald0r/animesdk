#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_168;
namespace MoleMole::Config { class ConfigSoundAction_Ongoing; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8A06820)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING___C__DISPLAYCLASS2_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x8A06830)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Ongoing___c__DisplayClass2_0_TypeDefinitionIndex = 78766;

	class ConfigSoundAction_Ongoing___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigSoundAction_Ongoing* __4__this; // 0x10
		::Class_0_16E4307DCC419505_168* context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING___C__DISPLAYCLASS2_0__EXECUTE_B__0_OFFSET))(this);
		}
	};
}
