#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS89_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC87FF00)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS89_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xC87FF10)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController___c__DisplayClass89_0_TypeDefinitionIndex = 53177;

	class UIItemIconBtnWidgetController___c__DisplayClass89_0 : public ::System::Object
	{
	public:
		::MoleMole::UIItemIconBtnWidgetController* __4__this; // 0x10
		::System::Action* customTipHandle; // 0x18
		::System::Int32 itemID; // 0x20
		::System::Boolean disableJump; // 0x24
		::System::Boolean jumpControl; // 0x25
		::System::Boolean isShowTip; // 0x26

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS89_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS89_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
