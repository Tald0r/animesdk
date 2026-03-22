#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_1__CTOR_OFFSET UNITYSDK_OFFSET(0x68DE7D0)
#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_1__ONCLICKSWITCHBTNSTATE_B__1_OFFSET UNITYSDK_OFFSET(0x68DE7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoEditPopWindowController___c__DisplayClass21_1_TypeDefinitionIndex = 59013;

	class UIPersonalInfoEditPopWindowController___c__DisplayClass21_1 : public ::System::Object
	{
	public:
		::System::String* successMsg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSwitchBtnState_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_1__ONCLICKSWITCHBTNSTATE_B__1_OFFSET))(this);
		}
	};
}
