#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS281_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF3FFC0)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS281_0__HIDEWITHANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0xBF3FFD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass281_0_TypeDefinitionIndex = 37234;

	class UIBaseController___c__DisplayClass281_0 : public ::System::Object
	{
	public:
		::System::Action* callBack; // 0x10
		::MoleMole::UIBaseController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS281_0__CTOR_OFFSET))(this);
		}

		::System::Void _HideWithAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS281_0__HIDEWITHANIMATION_B__0_OFFSET))(this);
		}
	};
}
