#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILineupSelectPageController; }
namespace MoleMole { class UIRoleSelectPageContext; }

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS83_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAF3B240)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS83_0__ONADDBUTTONCLICK_B__0_OFFSET UNITYSDK_OFFSET(0xAF3B250)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController___c__DisplayClass83_0_TypeDefinitionIndex = 57351;

	class UILineupSelectPageController___c__DisplayClass83_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageContext* roleInfoPageContext; // 0x10
		::MoleMole::UILineupSelectPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS83_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAddButtonClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS83_0__ONADDBUTTONCLICK_B__0_OFFSET))(this);
		}
	};
}
