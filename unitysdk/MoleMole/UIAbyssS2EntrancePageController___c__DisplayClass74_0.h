#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAbyssS2EntrancePageController_LevelTabStatus.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssS2EntrancePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD228390)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS74_0__REFRESHTABANIM_B__0_OFFSET UNITYSDK_OFFSET(0xD2283A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EntrancePageController___c__DisplayClass74_0_TypeDefinitionIndex = 80159;

	class UIAbyssS2EntrancePageController___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::System::Action* fadeOutCallBack; // 0x10
		::MoleMole::UIAbyssS2EntrancePageController* __4__this; // 0x18
		::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus newSubType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshTabAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS74_0__REFRESHTABANIM_B__0_OFFSET))(this);
		}
	};
}
