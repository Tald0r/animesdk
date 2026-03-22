#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_131;
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS130_1__CTOR_OFFSET UNITYSDK_OFFSET(0x73BA5F0)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS130_1__TRYSHOWPROFRESSIONLACKWEAPONTIP_G__SETGENERALCTRL_4_OFFSET UNITYSDK_OFFSET(0x73BA600)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass130_1_TypeDefinitionIndex = 70973;

	class UIRoleEquipReplaceWidgetController___c__DisplayClass130_1 : public ::System::Object
	{
	public:
		::System::Action* okBtnCb; // 0x10
		::Class_2_208CC9941471731A_131* generalTip; // 0x18
		::System::Action* closeCb; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS130_1__CTOR_OFFSET))(this);
		}

		::System::Void _TryShowProfressionLackWeaponTip_g__SetGeneralCtrl_4(::MoleMole::UIGeneralTipsPopWindowController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsPopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS130_1__TRYSHOWPROFRESSIONLACKWEAPONTIP_G__SETGENERALCTRL_4_OFFSET))(this, ctrl);
		}
	};
}
