#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIActivityTeamTrialPageController_PageState.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD3CA000)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialPageController_Context_TypeDefinitionIndex = 63912;

	class UIActivityTeamTrialPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 questID; // 0x28
		::MoleMole::UIActivityTeamTrialPageController_PageState pageState; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
