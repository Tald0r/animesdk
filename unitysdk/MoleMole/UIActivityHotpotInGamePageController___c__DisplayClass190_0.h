#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotpotInGamePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS190_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF14CA0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS190_0__PLAYCOUNTDOWNANIM_B__0_OFFSET UNITYSDK_OFFSET(0xBF14CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass190_0_TypeDefinitionIndex = 79922;

	class UIActivityHotpotInGamePageController___c__DisplayClass190_0 : public ::System::Object
	{
	public:
		::System::Action* finishCallBack; // 0x10
		::MoleMole::UIActivityHotpotInGamePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS190_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayCountDownAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS190_0__PLAYCOUNTDOWNANIM_B__0_OFFSET))(this);
		}
	};
}
