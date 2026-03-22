#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCitySwitchRoleTimePanelWidgetController; }

#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x7D4E810)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS31_0__ONCLICKSENDTIME_B__0_OFFSET UNITYSDK_OFFSET(0x7D4E820)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS31_0__ONCLICKSENDTIME_G__ONMODTIMERSP_1_OFFSET UNITYSDK_OFFSET(0x7D4E960)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRoleTimePanelWidgetController___c__DisplayClass31_0_TypeDefinitionIndex = 70187;

	class UIMainCitySwitchRoleTimePanelWidgetController___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSendTime_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS31_0__ONCLICKSENDTIME_B__0_OFFSET))(this);
		}

		::System::Void _OnClickSendTime_g__OnModTimeRsp_1(::System::Boolean isSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS31_0__ONCLICKSENDTIME_G__ONMODTIMERSP_1_OFFSET))(this, isSuccess);
		}
	};
}
