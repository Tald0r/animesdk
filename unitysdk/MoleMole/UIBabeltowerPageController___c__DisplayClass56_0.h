#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_ScrollToTargetContext.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerPageController; }

#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDC5B1D0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS56_0__SCROLLTOFLOOR_B__0_OFFSET UNITYSDK_OFFSET(0xDC5B1E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPageController___c__DisplayClass56_0_TypeDefinitionIndex = 37460;

	class UIBabeltowerPageController___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerPageController* __4__this; // 0x10
		::MonoUITableScrollV2_ScrollToTargetContext context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Void _ScrollToFloor_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS56_0__SCROLLTOFLOOR_B__0_OFFSET))(this);
		}
	};
}
