#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotpotInGamePageController___c__DisplayClass97_0; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS97_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBFA9910)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS97_1__ONLEVELEND_B__1_OFFSET UNITYSDK_OFFSET(0xBFA9920)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass97_1_TypeDefinitionIndex = 79916;

	class UIActivityHotpotInGamePageController___c__DisplayClass97_1 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityHotpotInGamePageController___c__DisplayClass97_0* CS___8__locals1; // 0x10
		::System::Int32 curLevelID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS97_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnLevelEnd_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS97_1__ONLEVELEND_B__1_OFFSET))(this);
		}
	};
}
