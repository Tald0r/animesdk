#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS91_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAF32010)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS91_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xAF32020)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS91_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0xAF321B0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS91_0__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0xAF321E0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS91_0__REFRESHVIEW_B__3_OFFSET UNITYSDK_OFFSET(0xAF32210)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS91_0__REFRESHVIEW_B__4_OFFSET UNITYSDK_OFFSET(0xAF323C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController___c__DisplayClass91_0_TypeDefinitionIndex = 53176;

	class UIItemIconBtnWidgetController___c__DisplayClass91_0 : public ::System::Object
	{
	public:
		::MoleMole::UIItemIconBtnWidgetController* __4__this; // 0x10
		::System::Action* customTipHandle; // 0x18
		::System::Boolean disableJump; // 0x20
		::System::Boolean jumpControl; // 0x21
		::System::Int32 curCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS91_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS91_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS91_0__REFRESHVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS91_0__REFRESHVIEW_B__2_OFFSET))(this);
		}

		::System::Void _RefreshView_b__3(::System::Single t1, ::System::Single t2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS91_0__REFRESHVIEW_B__3_OFFSET))(this, t1, t2);
		}

		::System::Void _RefreshView_b__4(::System::Single t1, ::System::Single t2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS91_0__REFRESHVIEW_B__4_OFFSET))(this, t1, t2);
		}
	};
}
