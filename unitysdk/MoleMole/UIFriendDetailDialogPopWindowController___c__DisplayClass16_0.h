#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFriendDetailDialogPopWindowController; }

#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D7FB60)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONCLICKFRIENDAGENT_B__0_OFFSET UNITYSDK_OFFSET(0x9D7FB70)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendDetailDialogPopWindowController___c__DisplayClass16_0_TypeDefinitionIndex = 37368;

	class UIFriendDetailDialogPopWindowController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFriendDetailDialogPopWindowController* __4__this; // 0x10
		::System::Boolean needStoreRenderLogic; // 0x18
		::System::Boolean originalRenderLoopLogic; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickFriendAgent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONCLICKFRIENDAGENT_B__0_OFFSET))(this);
		}
	};
}
