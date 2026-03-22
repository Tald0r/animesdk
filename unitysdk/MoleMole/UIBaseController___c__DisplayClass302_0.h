#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS302_0__CLOSEWITHANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0xBEDAE40)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS302_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBEDAE30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass302_0_TypeDefinitionIndex = 37236;

	class UIBaseController___c__DisplayClass302_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Boolean closeAfter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS302_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseWithAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS302_0__CLOSEWITHANIMATION_B__0_OFFSET))(this);
		}
	};
}
