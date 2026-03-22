#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPersonalInfoEditPopWindowController; }
namespace System { class String; }

#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x94672B0)
#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__ONCLICKEDITUSERNAME_B__2_OFFSET UNITYSDK_OFFSET(0x94672C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoEditPopWindowController___c__DisplayClass12_0_TypeDefinitionIndex = 59014;

	class UIPersonalInfoEditPopWindowController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPersonalInfoEditPopWindowController* __4__this; // 0x10
		::System::String* name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickEditUsername_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__ONCLICKEDITUSERNAME_B__2_OFFSET))(this);
		}
	};
}
