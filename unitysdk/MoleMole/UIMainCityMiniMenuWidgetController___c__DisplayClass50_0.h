#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityMiniMenuWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAB47410)
#define MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__DISPLAYCLASS50_0__SETFOLDERSTATE_B__0_OFFSET UNITYSDK_OFFSET(0xAB48D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMiniMenuWidgetController___c__DisplayClass50_0_TypeDefinitionIndex = 39607;

	class UIMainCityMiniMenuWidgetController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityMiniMenuWidgetController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetFolderState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIMENUWIDGETCONTROLLER___C__DISPLAYCLASS50_0__SETFOLDERSTATE_B__0_OFFSET))(this);
		}
	};
}
