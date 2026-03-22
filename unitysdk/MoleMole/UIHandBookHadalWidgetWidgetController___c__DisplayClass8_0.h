#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHandBookHadalWidgetWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC05F120)
#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSHOPBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0xC05F130)
#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSHOPBTNCLICK_B__1_OFFSET UNITYSDK_OFFSET(0xC05F410)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookHadalWidgetWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 71855;

	class UIHandBookHadalWidgetWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIHandBookHadalWidgetWidgetController* __4__this; // 0x18
		::System::Boolean showHintInHadalShopTab; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShopBtnClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSHOPBTNCLICK_B__0_OFFSET))(this);
		}

		::System::Void _OnShopBtnClick_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSHOPBTNCLICK_B__1_OFFSET))(this);
		}
	};
}
