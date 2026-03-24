#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_158;
namespace MoleMole { class UIMechBooPrepFreedomWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD77F490)
#define MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER___C__DISPLAYCLASS5_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xD77F4A0)
#define MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER___C__DISPLAYCLASS5_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0xD77F4D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepFreedomWidgetController___c__DisplayClass5_0_TypeDefinitionIndex = 80739;

	class UIMechBooPrepFreedomWidgetController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMechBooPrepFreedomWidgetController* __4__this; // 0x10
		::Class_0_16E4307DCC419505_158* levelInfo; // 0x18
		::System::Action_1<::Class_0_16E4307DCC419505_158*>* onClickScriptBtn; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0(::UnityEngine::UI::Extension::UITimeWidget* timeWidget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER___C__DISPLAYCLASS5_0__REFRESHVIEW_B__0_OFFSET))(this, timeWidget);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER___C__DISPLAYCLASS5_0__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}
