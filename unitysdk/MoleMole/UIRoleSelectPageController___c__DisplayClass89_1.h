#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UIRoleSelectPageController___c__DisplayClass89_0; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS89_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA245430)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS89_1__ONTOGGLEUPGRADEBTN_B__1_OFFSET UNITYSDK_OFFSET(0xA245440)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass89_1_TypeDefinitionIndex = 79380;

	class UIRoleSelectPageController___c__DisplayClass89_1 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageController___c__DisplayClass89_0* CS___8__locals1; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS89_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnToggleUpgradeBtn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS89_1__ONTOGGLEUPGRADEBTN_B__1_OFFSET))(this);
		}
	};
}
