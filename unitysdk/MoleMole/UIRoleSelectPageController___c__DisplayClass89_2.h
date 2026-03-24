#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UIRoleSelectPageController___c__DisplayClass89_0; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS89_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA69CDD0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS89_2__ONTOGGLEUPGRADEBTN_B__2_OFFSET UNITYSDK_OFFSET(0xA69CDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass89_2_TypeDefinitionIndex = 79386;

	class UIRoleSelectPageController___c__DisplayClass89_2 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageController___c__DisplayClass89_0* CS___8__locals2; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS89_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnToggleUpgradeBtn_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS89_2__ONTOGGLEUPGRADEBTN_B__2_OFFSET))(this);
		}
	};
}
