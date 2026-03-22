#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityRhythmClickPageController; }

#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBADF950)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS37_0__TRIGGERCLICKGUIDESTARTFADEINUIACTION_B__0_OFFSET UNITYSDK_OFFSET(0xBADF960)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS37_0__TRIGGERCLICKGUIDESTARTFADEINUIACTION_B__1_OFFSET UNITYSDK_OFFSET(0xBADF9B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmClickPageController___c__DisplayClass37_0_TypeDefinitionIndex = 41475;

	class UIActivityRhythmClickPageController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityRhythmClickPageController* __4__this; // 0x10
		::System::Single startTriggerBeatTime; // 0x18
		::System::Single endFadeOutTime; // 0x1C
		::System::Int32 realBeatIdx; // 0x20
		::System::Boolean isOddClickEvent; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerClickGuideStartFadeInUIAction_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS37_0__TRIGGERCLICKGUIDESTARTFADEINUIACTION_B__0_OFFSET))(this);
		}

		::System::Void _TriggerClickGuideStartFadeInUIAction_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS37_0__TRIGGERCLICKGUIDESTARTFADEINUIACTION_B__1_OFFSET))(this);
		}
	};
}
