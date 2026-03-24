#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS90_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E5240)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS90_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xB3E5250)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController___c__DisplayClass90_0_TypeDefinitionIndex = 72505;

	class UIItemIconBtnWidgetController___c__DisplayClass90_0 : public ::System::Object
	{
	public:
		::System::Action* customTipHandle; // 0x10
		::MoleMole::UIItemIconBtnWidgetController* __4__this; // 0x18
		::System::Int32 itemID; // 0x20
		::System::Boolean disableJump; // 0x24
		::System::Boolean isShowTip; // 0x25
		::System::Boolean jumpControl; // 0x26

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS90_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS90_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
