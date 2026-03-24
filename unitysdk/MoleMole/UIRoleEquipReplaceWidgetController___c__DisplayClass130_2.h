#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UIRoleEquipReplaceWidgetController___c__DisplayClass130_1; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS130_2__CTOR_OFFSET UNITYSDK_OFFSET(0xAFAE160)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS130_2__TRYSHOWPROFRESSIONLACKWEAPONTIP_B__5_OFFSET UNITYSDK_OFFSET(0xAFAE170)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass130_2_TypeDefinitionIndex = 57488;

	class UIRoleEquipReplaceWidgetController___c__DisplayClass130_2 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x10
		::MoleMole::UIRoleEquipReplaceWidgetController___c__DisplayClass130_1* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS130_2__CTOR_OFFSET))(this);
		}

		::System::Void _TryShowProfressionLackWeaponTip_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS130_2__TRYSHOWPROFRESSIONLACKWEAPONTIP_B__5_OFFSET))(this);
		}
	};
}
