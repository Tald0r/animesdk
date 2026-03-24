#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityRhythmClickPageController; }

#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBFAC550)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS39_0__TRIGGERLONGPRESSGUIDESTARTFADEINUIACTION_B__0_OFFSET UNITYSDK_OFFSET(0xBFAC560)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS39_0__TRIGGERLONGPRESSGUIDESTARTFADEINUIACTION_B__1_OFFSET UNITYSDK_OFFSET(0xBFAC5B0)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS39_0__TRIGGERLONGPRESSGUIDESTARTFADEINUIACTION_B__2_OFFSET UNITYSDK_OFFSET(0xBFAC600)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmClickPageController___c__DisplayClass39_0_TypeDefinitionIndex = 42760;

	class UIActivityRhythmClickPageController___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityRhythmClickPageController* __4__this; // 0x10
		::System::Single startTriggerFadeOutTime; // 0x18
		::System::Int32 realBeatIdx; // 0x1C
		::System::Single startTriggerBeatTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerLongPressGuideStartFadeInUIAction_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS39_0__TRIGGERLONGPRESSGUIDESTARTFADEINUIACTION_B__0_OFFSET))(this);
		}

		::System::Void _TriggerLongPressGuideStartFadeInUIAction_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS39_0__TRIGGERLONGPRESSGUIDESTARTFADEINUIACTION_B__1_OFFSET))(this);
		}

		::System::Void _TriggerLongPressGuideStartFadeInUIAction_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS39_0__TRIGGERLONGPRESSGUIDESTARTFADEINUIACTION_B__2_OFFSET))(this);
		}
	};
}
