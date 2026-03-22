#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9432DC0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS68_0__ONSHOWTRAININGFORBIDDEN_B__0_OFFSET UNITYSDK_OFFSET(0x9432DD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogPopWindowController___c__DisplayClass68_0_TypeDefinitionIndex = 41753;

	class UIInLevelPauseDialogPopWindowController___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShowTrainingForbidden_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS68_0__ONSHOWTRAININGFORBIDDEN_B__0_OFFSET))(this);
		}
	};
}
