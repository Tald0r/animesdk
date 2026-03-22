#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssS2EntrancePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB316FC0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS49_0__PLAYBMFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0xB316FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EntrancePageController___c__DisplayClass49_0_TypeDefinitionIndex = 69591;

	class UIAbyssS2EntrancePageController___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssS2EntrancePageController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayBmFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS49_0__PLAYBMFADEOUT_B__0_OFFSET))(this);
		}
	};
}
