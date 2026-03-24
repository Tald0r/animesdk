#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_415;
namespace MoleMole { class UIActivityBattleYCLFightingWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA570C50)
#define MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS23_0__REFRESHBUFFS_B__0_OFFSET UNITYSDK_OFFSET(0xA5728D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLFightingWidgetController___c__DisplayClass23_0_TypeDefinitionIndex = 40447;

	class UIActivityBattleYCLFightingWidgetController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityBattleYCLFightingWidgetController* __4__this; // 0x10
		::Class_2_208CC9941471731A_415* activityBattleQuestCfg; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshBuffs_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLFIGHTINGWIDGETCONTROLLER___C__DISPLAYCLASS23_0__REFRESHBUFFS_B__0_OFFSET))(this);
		}
	};
}
