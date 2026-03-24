#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass98_0; }
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS98_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA41E420)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS98_1__PLAYCHALLENGETIP_B__2_OFFSET UNITYSDK_OFFSET(0xA41E430)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS98_1__PLAYCHALLENGETIP_B__3_OFFSET UNITYSDK_OFFSET(0xA41E4C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass98_1_TypeDefinitionIndex = 70942;

	class UIMissionTipsContainerWidgetController___c__DisplayClass98_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsRowWidgetController* oldTips; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass98_0* CS___8__locals1; // 0x18
		::System::Action* __9__3; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS98_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayChallengeTip_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS98_1__PLAYCHALLENGETIP_B__2_OFFSET))(this);
		}

		::System::Void _PlayChallengeTip_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS98_1__PLAYCHALLENGETIP_B__3_OFFSET))(this);
		}
	};
}
