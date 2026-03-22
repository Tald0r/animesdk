#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_373;
namespace System { class String; }

#define MOLEMOLE_UIINLEVELCOUNTDOWNUICHILDWINDOWCONTROLLER_UIINLEVELCOUNTDOWNUICONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x942D080)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelCountDownUIChildWindowController_UIInLevelCountDownUIContext_TypeDefinitionIndex = 70556;

	class UIInLevelCountDownUIChildWindowController_UIInLevelCountDownUIContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_373* newsBubbleSupport; // 0x28
		::System::String* FixedText; // 0x30
		::System::Single totalDuration; // 0x38
		::System::Boolean useStandalone; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCOUNTDOWNUICHILDWINDOWCONTROLLER_UIINLEVELCOUNTDOWNUICONTEXT__CTOR_OFFSET))(this);
		}
	};
}
