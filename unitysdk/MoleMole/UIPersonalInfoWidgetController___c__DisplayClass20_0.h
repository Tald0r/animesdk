#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPersonalInfoWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x68DE800)
#define MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER___C__DISPLAYCLASS20_0__ONCLICKEDITUSERNAME_B__2_OFFSET UNITYSDK_OFFSET(0x68DE810)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoWidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 39564;

	class UIPersonalInfoWidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPersonalInfoWidgetController* __4__this; // 0x10
		::System::String* name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickEditUsername_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER___C__DISPLAYCLASS20_0__ONCLICKEDITUSERNAME_B__2_OFFSET))(this);
		}
	};
}
