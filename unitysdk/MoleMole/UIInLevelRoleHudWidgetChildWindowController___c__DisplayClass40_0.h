#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelRoleHudWidgetChildWindowController; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8954C90)
#define MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS40_0__ONLOCALAVATARCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x8954CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelRoleHudWidgetChildWindowController___c__DisplayClass40_0_TypeDefinitionIndex = 39707;

	class UIInLevelRoleHudWidgetChildWindowController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelRoleHudWidgetChildWindowController* __4__this; // 0x10
		::MoleMole::Battle::Entity* toEntity; // 0x18
		::MoleMole::Battle::Entity* fromEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnLocalAvatarChanged_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS40_0__ONLOCALAVATARCHANGED_B__0_OFFSET))(this);
		}
	};
}
