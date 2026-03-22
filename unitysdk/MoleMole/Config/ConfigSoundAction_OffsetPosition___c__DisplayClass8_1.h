#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSoundAction_OffsetPosition___c__DisplayClass8_0; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x624F9D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___C__DISPLAYCLASS8_1__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x624F9E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_OffsetPosition___c__DisplayClass8_1_TypeDefinitionIndex = 72540;

	class ConfigSoundAction_OffsetPosition___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* tempGo; // 0x10
		::MoleMole::Config::ConfigSoundAction_OffsetPosition___c__DisplayClass8_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___C__DISPLAYCLASS8_1__EXECUTE_B__0_OFFSET))(this);
		}
	};
}
