#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFoodTruckPageController; }

#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDFA6100)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___C__DISPLAYCLASS11_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0xDFA6110)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodTruckPageController___c__DisplayClass11_0_TypeDefinitionIndex = 44281;

	class UIFoodTruckPageController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFoodTruckPageController* __4__this; // 0x10
		::System::Int32 currentIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___C__DISPLAYCLASS11_0__ONUIOPEN_B__0_OFFSET))(this);
		}
	};
}
