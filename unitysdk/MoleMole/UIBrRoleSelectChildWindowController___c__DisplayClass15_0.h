#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBrRoleSelectChildWindowController; }
namespace System { class String; }

#define MOLEMOLE_UIBRROLESELECTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A8780)
#define MOLEMOLE_UIBRROLESELECTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS15_0__SWITCHINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1B4A8F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIBrRoleSelectChildWindowController___c__DisplayClass15_0_TypeDefinitionIndex = 82167;

	class UIBrRoleSelectChildWindowController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBrRoleSelectChildWindowController* __4__this; // 0x10
		::System::String* inAnim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRROLESELECTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRROLESELECTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS15_0__SWITCHINFO_B__0_OFFSET))(this);
		}
	};
}
