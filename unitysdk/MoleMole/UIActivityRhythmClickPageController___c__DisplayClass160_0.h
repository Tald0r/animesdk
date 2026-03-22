#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
namespace MoleMole { class UIActivityRhythmClickPageController; }

#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS160_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBADF840)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS160_0__DURATIONCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xBADF850)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmClickPageController___c__DisplayClass160_0_TypeDefinitionIndex = 41478;

	class UIActivityRhythmClickPageController___c__DisplayClass160_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityRhythmClickPageController* __4__this; // 0x10
		::AkCallbackInfo* info; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS160_0__CTOR_OFFSET))(this);
		}

		::System::Void _DurationCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS160_0__DURATIONCALLBACK_B__0_OFFSET))(this);
		}
	};
}
