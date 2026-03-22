#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgameReviewRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA362A10)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__INITVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xA362A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameReviewRowWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 63948;

	class UIGalgameReviewRowWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgameReviewRowWidgetController* __4__this; // 0x10
		::System::Action* bindAction; // 0x18
		::System::Boolean isButtonInteractable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__INITVIEW_B__0_OFFSET))(this);
		}
	};
}
