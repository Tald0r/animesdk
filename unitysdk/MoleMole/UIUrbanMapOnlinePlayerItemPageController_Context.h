#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA767D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapOnlinePlayerItemPageController_Context_TypeDefinitionIndex = 69163;

	class UIUrbanMapOnlinePlayerItemPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
