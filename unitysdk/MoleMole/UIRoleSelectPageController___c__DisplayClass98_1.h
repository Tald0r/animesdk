#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UIRoleSelectPageController___c__DisplayClass98_0; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS98_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAE58370)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS98_1__ONFAVORITEBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0xAE58380)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass98_1_TypeDefinitionIndex = 51290;

	class UIRoleSelectPageController___c__DisplayClass98_1 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageController___c__DisplayClass98_0* CS___8__locals1; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS98_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnFavoriteBtnClicked_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS98_1__ONFAVORITEBTNCLICKED_B__0_OFFSET))(this);
		}
	};
}
