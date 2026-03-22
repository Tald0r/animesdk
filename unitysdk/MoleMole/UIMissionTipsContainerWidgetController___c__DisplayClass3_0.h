#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98CD700)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS3_0__REFRESHPARTNERDATEFREEMODETIP_B__0_OFFSET UNITYSDK_OFFSET(0x98CD710)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass3_0_TypeDefinitionIndex = 75700;

	class UIMissionTipsContainerWidgetController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* missionTipData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPartnerDateFreeModeTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS3_0__REFRESHPARTNERDATEFREEMODETIP_B__0_OFFSET))(this);
		}
	};
}
