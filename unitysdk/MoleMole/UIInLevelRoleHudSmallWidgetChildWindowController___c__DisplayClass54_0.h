#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelRoleHudSmallWidgetChildWindowController; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_UIINLEVELROLEHUDSMALLWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98232F0)
#define MOLEMOLE_UIINLEVELROLEHUDSMALLWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS54_0__ONLOCALAVATARCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x9823300)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelRoleHudSmallWidgetChildWindowController___c__DisplayClass54_0_TypeDefinitionIndex = 58510;

	class UIInLevelRoleHudSmallWidgetChildWindowController___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController* __4__this; // 0x10
		::MoleMole::Battle::Entity* toEntity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROLEHUDSMALLWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnLocalAvatarChanged_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROLEHUDSMALLWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS54_0__ONLOCALAVATARCHANGED_B__0_OFFSET))(this);
		}
	};
}
