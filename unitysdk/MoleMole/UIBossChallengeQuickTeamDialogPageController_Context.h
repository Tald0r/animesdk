#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBOSSCHALLENGEQUICKTEAMDIALOGPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD2370)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeQuickTeamDialogPageController_Context_TypeDefinitionIndex = 54425;

	class UIBossChallengeQuickTeamDialogPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEQUICKTEAMDIALOGPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
