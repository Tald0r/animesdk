#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC2899E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotChallengeRowPageController_Context_TypeDefinitionIndex = 66991;

	class UIActivityHotPotChallengeRowPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
