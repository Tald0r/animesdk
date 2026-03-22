#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9432CE0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS64_0__ONRESETBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0x9432CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogPopWindowController___c__DisplayClass64_0_TypeDefinitionIndex = 41748;

	class UIInLevelPauseDialogPopWindowController___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::MoleMole::ESystemSettingType settingType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnResetBtnClicked_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS64_0__ONRESETBTNCLICKED_B__0_OFFSET))(this);
		}
	};
}
