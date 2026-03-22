#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPersonalInfoEditPopWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x68DE6E0)
#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSWITCHBTNSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x68DE6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoEditPopWindowController___c__DisplayClass21_0_TypeDefinitionIndex = 59015;

	class UIPersonalInfoEditPopWindowController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPersonalInfoEditPopWindowController* __4__this; // 0x10
		::System::String* successTextWhenStateSwitchToOff; // 0x18
		::System::Action_2<::System::Boolean, ::System::Action*>* requestAction; // 0x20
		::System::String* successTextWhenStateSwitchToOn; // 0x28
		::System::Boolean stateFlag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSwitchBtnState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSWITCHBTNSTATE_B__0_OFFSET))(this);
		}
	};
}
