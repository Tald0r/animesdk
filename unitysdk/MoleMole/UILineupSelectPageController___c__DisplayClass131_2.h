#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UILineupSelectPageController___c__DisplayClass131_0; }

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS131_2__CTOR_OFFSET UNITYSDK_OFFSET(0xAF6D940)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS131_2__ONTOGGLEUPGRADEBTN_B__2_OFFSET UNITYSDK_OFFSET(0xAF6D950)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController___c__DisplayClass131_2_TypeDefinitionIndex = 78687;

	class UILineupSelectPageController___c__DisplayClass131_2 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectPageController___c__DisplayClass131_0* CS___8__locals2; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS131_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnToggleUpgradeBtn_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS131_2__ONTOGGLEUPGRADEBTN_B__2_OFFSET))(this);
		}
	};
}
