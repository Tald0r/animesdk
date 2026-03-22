#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3022E48190D43CB;
namespace MoleMole::Config { class ConfigSoundAction_Delay___c__DisplayClass4_0; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS4_2__CTOR_OFFSET UNITYSDK_OFFSET(0xCD12FA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS4_2__EXECUTE_B__1_OFFSET UNITYSDK_OFFSET(0xCD12FB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Delay___c__DisplayClass4_2_TypeDefinitionIndex = 65915;

	class ConfigSoundAction_Delay___c__DisplayClass4_2 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigSoundAction_Delay___c__DisplayClass4_0* CS___8__locals2; // 0x10
		::Class_1_F3022E48190D43CB* copyContext; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS4_2__CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS4_2__EXECUTE_B__1_OFFSET))(this);
		}
	};
}
