#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotpotInGamePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS169_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC815E70)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS169_0__ONINLEVELPAUSEEXIT_B__0_OFFSET UNITYSDK_OFFSET(0xC815E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass169_0_TypeDefinitionIndex = 79927;

	class UIActivityHotpotInGamePageController___c__DisplayClass169_0 : public ::System::Object
	{
	public:
		::System::Action* callBack; // 0x10
		::MoleMole::UIActivityHotpotInGamePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS169_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnInLevelPauseExit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS169_0__ONINLEVELPAUSEEXIT_B__0_OFFSET))(this);
		}
	};
}
