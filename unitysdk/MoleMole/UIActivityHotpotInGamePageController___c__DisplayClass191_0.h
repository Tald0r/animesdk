#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS191_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF14D00)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS191_0__PLAYENDANIM_B__0_OFFSET UNITYSDK_OFFSET(0xBF14D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass191_0_TypeDefinitionIndex = 79923;

	class UIActivityHotpotInGamePageController___c__DisplayClass191_0 : public ::System::Object
	{
	public:
		::System::Action* finishCallBack; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS191_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayEndAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS191_0__PLAYENDANIM_B__0_OFFSET))(this);
		}
	};
}
