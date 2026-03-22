#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8714060)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_0__PLAYHDDHANGTIP_B__0_OFFSET UNITYSDK_OFFSET(0x8714070)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_0__PLAYHDDHANGTIP_B__1_OFFSET UNITYSDK_OFFSET(0x8714140)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass97_0_TypeDefinitionIndex = 75683;

	class UIMissionTipsContainerWidgetController___c__DisplayClass97_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* tipData; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayHDDHangTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_0__PLAYHDDHANGTIP_B__0_OFFSET))(this);
		}

		::System::Void _PlayHDDHangTip_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS97_0__PLAYHDDHANGTIP_B__1_OFFSET))(this);
		}
	};
}
