#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS518_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD024450)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass518_0_TypeDefinitionIndex = 58441;

	class UIBaseController___c__DisplayClass518_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController* __4__this; // 0x10
		::System::Single speed; // 0x18
		::System::Boolean playToEnd; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS518_0__CTOR_OFFSET))(this);
		}
	};
}
