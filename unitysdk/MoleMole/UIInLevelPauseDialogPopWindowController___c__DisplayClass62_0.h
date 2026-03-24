#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3002D7CF5FEE9D3A;
class Class_3_DA02E6BABB5F027E;
namespace MoleMole { class UIInLevelPauseDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x99F64F0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__SHOWQUITBATTLEDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x99F6500)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogPopWindowController___c__DisplayClass62_0_TypeDefinitionIndex = 46997;

	class UIInLevelPauseDialogPopWindowController___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::Class_1_3002D7CF5FEE9D3A* rawContext; // 0x10
		::MoleMole::UIInLevelPauseDialogPopWindowController* __4__this; // 0x18
		::System::Action* onConfirm; // 0x20
		::Class_3_DA02E6BABB5F027E* context; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowQuitBattleDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__SHOWQUITBATTLEDIALOG_B__0_OFFSET))(this);
		}
	};
}
