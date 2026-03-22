#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadeTeamChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCC27030)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS49_0__ONBATTLEREADY_B__1_OFFSET UNITYSDK_OFFSET(0xCC27040)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS49_0__ONBATTLEREADY_B__2_OFFSET UNITYSDK_OFFSET(0xCC27280)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeTeamChildWindowController___c__DisplayClass49_0_TypeDefinitionIndex = 50931;

	class UIArcadeTeamChildWindowController___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Action* callback; // 0x20
		::MoleMole::UIArcadeTeamChildWindowController* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnBattleReady_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS49_0__ONBATTLEREADY_B__1_OFFSET))(this);
		}

		::System::Void _OnBattleReady_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__DISPLAYCLASS49_0__ONBATTLEREADY_B__2_OFFSET))(this);
		}
	};
}
