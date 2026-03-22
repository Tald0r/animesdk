#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIABStandbyPhaseWidgetController; }

#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F547A0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___C__DISPLAYCLASS65_0__REFRESHRIGHTAREA_B__0_OFFSET UNITYSDK_OFFSET(0x8F547B0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___C__DISPLAYCLASS65_0__REFRESHRIGHTAREA_B__1_OFFSET UNITYSDK_OFFSET(0x8F54830)

namespace MoleMole
{
	inline static constexpr unsigned int UIABStandbyPhaseWidgetController___c__DisplayClass65_0_TypeDefinitionIndex = 39598;

	class UIABStandbyPhaseWidgetController___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::MoleMole::UIABStandbyPhaseWidgetController* __4__this; // 0x10
		::System::Boolean playerRootActive; // 0x18
		::System::Boolean statPanelActive; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRightArea_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___C__DISPLAYCLASS65_0__REFRESHRIGHTAREA_B__0_OFFSET))(this);
		}

		::System::Void _RefreshRightArea_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___C__DISPLAYCLASS65_0__REFRESHRIGHTAREA_B__1_OFFSET))(this);
		}
	};
}
