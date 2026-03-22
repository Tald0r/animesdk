#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_PREPPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBECC7C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePrepPageController_PrepPageContext_TypeDefinitionIndex = 62046;

	class UIAutoBattlePrepPageController_PrepPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnUIOpen; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_PREPPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
