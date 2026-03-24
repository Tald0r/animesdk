#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS122_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA445710)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS122_0__DOTRIGGEREQUIPREPLACE_B__0_OFFSET UNITYSDK_OFFSET(0xA445720)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass122_0_TypeDefinitionIndex = 57497;

	class UIRoleEquipReplaceWidgetController___c__DisplayClass122_0 : public ::System::Object
	{
	public:
		::System::Action* replaceAction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS122_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoTriggerEquipReplace_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS122_0__DOTRIGGEREQUIPREPLACE_B__0_OFFSET))(this);
		}
	};
}
