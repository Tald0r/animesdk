#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIABInLevelItemInfoWidgetController; }

#define MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS98_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB9108D0)
#define MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS98_0__OPENITEMINFOFAKE_B__0_OFFSET UNITYSDK_OFFSET(0xB9108E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooAutoBattleInLevelPageController___c__DisplayClass98_0_TypeDefinitionIndex = 36711;

	class UIBangBooAutoBattleInLevelPageController___c__DisplayClass98_0 : public ::System::Object
	{
	public:
		::System::Int32 itemId; // 0x10
		::System::Boolean isAvatar; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS98_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenItemInfoFake_b__0(::MoleMole::UIABInLevelItemInfoWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIABInLevelItemInfoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS98_0__OPENITEMINFOFAKE_B__0_OFFSET))(this, controller);
		}
	};
}
