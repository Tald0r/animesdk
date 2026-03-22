#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_019870FE224FBE5A;
class Class_3_DA02E6BABB5F027E;
namespace MoleMole { class UIInLevelPauseDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x6CA35A0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_0__SHOWQUITBATTLEDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x6CA35B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogPopWindowController___c__DisplayClass59_0_TypeDefinitionIndex = 41744;

	class UIInLevelPauseDialogPopWindowController___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelPauseDialogPopWindowController* __4__this; // 0x10
		::System::Action* onConfirm; // 0x18
		::Class_1_019870FE224FBE5A* rawContext; // 0x20
		::Class_3_DA02E6BABB5F027E* context; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowQuitBattleDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_0__SHOWQUITBATTLEDIALOG_B__0_OFFSET))(this);
		}
	};
}
