#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityRhythmClickPageController; }

#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBFAC490)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS38_0__TRIGGERCLICKGUIDESTARTFADEINUIACTIONWHENAUDIOVIDEOMODIFY_B__0_OFFSET UNITYSDK_OFFSET(0xBFAC4A0)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS38_0__TRIGGERCLICKGUIDESTARTFADEINUIACTIONWHENAUDIOVIDEOMODIFY_B__1_OFFSET UNITYSDK_OFFSET(0xBFAC4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmClickPageController___c__DisplayClass38_0_TypeDefinitionIndex = 42751;

	class UIActivityRhythmClickPageController___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityRhythmClickPageController* __4__this; // 0x10
		::System::Int32 realBeatIdx; // 0x18
		::System::Single endFadeOutTime; // 0x1C
		::System::Boolean isOddClickEvent; // 0x20
		::System::Single startTriggerBeatTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerClickGuideStartFadeInUIActionWhenAudioVideoModify_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS38_0__TRIGGERCLICKGUIDESTARTFADEINUIACTIONWHENAUDIOVIDEOMODIFY_B__0_OFFSET))(this);
		}

		::System::Void _TriggerClickGuideStartFadeInUIActionWhenAudioVideoModify_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS38_0__TRIGGERCLICKGUIDESTARTFADEINUIACTIONWHENAUDIOVIDEOMODIFY_B__1_OFFSET))(this);
		}
	};
}
