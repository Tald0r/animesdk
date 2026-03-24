#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class RoleTweakColorData; }
namespace MoleMole { class UIRoleInfoSkillChildWindowController; }

#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS100_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96F6990)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS100_0__ONUNLOCKTALENTANIMPLAY_B__0_OFFSET UNITYSDK_OFFSET(0x96F69A0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS100_0__ONUNLOCKTALENTANIMPLAY_B__1_OFFSET UNITYSDK_OFFSET(0x96F6BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoSkillChildWindowController___c__DisplayClass100_0_TypeDefinitionIndex = 48921;

	class UIRoleInfoSkillChildWindowController___c__DisplayClass100_0 : public ::System::Object
	{
	public:
		::MoleMole::RoleTweakColorData* tweakColorData; // 0x10
		::MoleMole::UIRoleInfoSkillChildWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS100_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUnlockTalentAnimPlay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS100_0__ONUNLOCKTALENTANIMPLAY_B__0_OFFSET))(this);
		}

		::System::Void _OnUnlockTalentAnimPlay_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS100_0__ONUNLOCKTALENTANIMPLAY_B__1_OFFSET))(this);
		}
	};
}
