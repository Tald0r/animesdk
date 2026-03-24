#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowResultInfoRowNewWidgetController; }

#define MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__DISPLAYCLASS106_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8EBFA50)
#define MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__DISPLAYCLASS106_0___REFRESHBATTLERANKING_MSG_B__0_OFFSET UNITYSDK_OFFSET(0x8EBFA60)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_PageController___c__DisplayClass106_0_TypeDefinitionIndex = 53545;

	class UILevelResultV2_PageController___c__DisplayClass106_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowResultInfoRowNewWidgetController* rankItem; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__DISPLAYCLASS106_0__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshBattleRanking_Msg_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_PAGECONTROLLER___C__DISPLAYCLASS106_0___REFRESHBATTLERANKING_MSG_B__0_OFFSET))(this);
		}
	};
}
